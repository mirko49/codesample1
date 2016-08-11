<?php

/**
 * @file
 * Plugin to provide medstat topics context.
 */

$plugin = array(
  'title' => t("Topics"),
  'keyword' => 'topics',
  'description' => t('MDedge topics term objects.'),
  'context' => 'medstat_context_ctools_context_create_topics_context',
  'convert list' => 'medstat_context_topics_convert_list',
  'convert' => 'medstat_context_topics_convert',
);

/**
 * Creates the publication context.
 */
function medstat_context_ctools_context_create_topics_context($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('topics');
  $context->plugin = 'topics';

  if (!$empty) {
    $context->data = medstat_context_context()->getProperty('topics');
  }

  return $context;
}

/**
 * Converts an integer into a topic at the given index.
 */
function medstat_context_topics_convert($context, $target, $options = array()) {
  list($index, $type) = explode(':', $target);
  if (isset($context->data[$index])) {
    $tokens = token_info();
    $values = token_generate('term', array($type => $type), array('term' => $context->data[$index]), $options);
    if (isset($values[$type])) {
      return $values[$type];
    }
  }
}

/**
 * Provide a list of ways that this context can be converted to a string.
 */
function medstat_context_topics_convert_list($plugin) {
  $term_list = ctools_context_entity_convert_list(array('context name' => 'taxonomy_term'));

  foreach ($term_list as $name => $description) {
    $list['index:' . $name] = $description;
  }

  return $list;
}
