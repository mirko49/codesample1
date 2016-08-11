<?php

/**
 * @file
 * Plugin to provide featured quiz context.
 */

$plugin = array(
  'title' => t("Featured Quiz"),
  'keyword' => 'featured_quiz',
  'description' => t('The latest quiz for the current publication/topic context.'),
  'context' => 'medstat_quizz_ctools_context_create_featured_quiz_context',
);

/**
 * Creates the publication context.
 */
function medstat_quizz_ctools_context_create_featured_quiz_context($empty, $data = NULL, $conf = FALSE) {
  $medstat_context = medstat_context_context();
  $publication = $medstat_context->getProperty('publication');
  $topics = $medstat_context->getProperty('topics');
  $topic_tids = array();
  if (!empty($topics)) {
    foreach ($topics as $topic) {
      $topic_tids[] = $topic->tid;
    }
  }

  $query = new EntityFieldQuery();
  $query->entityCondition('entity_type', 'quiz_entity')
    ->entityCondition('bundle', 'md_iq');
  if ($publication) {
    $query->fieldCondition('field_article_publications', 'tid', $publication->tid);
  }
  if (!empty($topic_tids)) {
    $query->fieldCondition('field_article_topics', 'tid', $topic_tids);
  }
  $query->propertyOrderBy('created', 'DESC')
    ->propertyCondition('status', 1)
    ->range(0, 1);
  $result = $query->execute();

  if (empty($result['quiz_entity']) && !empty($topic_tids)) {
    // Try querying without topics.
    $query = new EntityFieldQuery();
    $query->entityCondition('entity_type', 'quiz_entity')
      ->entityCondition('bundle', 'md_iq');
    if ($publication) {
      $query->fieldCondition('field_article_publications', 'tid', $publication->tid);
    }
    $query->propertyOrderBy('created', 'DESC')
      ->propertyCondition('status', 1)
      ->range(0, 1);
    $result = $query->execute();
  }

  if (empty($result['quiz_entity'])) {
    return ctools_context_create_empty('entity:quiz_entity');
  }

  // Load featured quiz.
  $qid = reset($result['quiz_entity'])->qid;
  $quiz = quizz_load($qid);

  return ctools_context_create('entity:quiz_entity', $quiz);
}
