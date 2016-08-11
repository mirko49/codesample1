<?php
/**
 * @file
 * Plugin to provide a Patched Quiz Take Pane for MD-IQ content.
 */

use Drupal\quizz\Entity\Result\Render;

/**
 * Plugin declaration.
 */
$plugin = array(
  'title' => t('MD-IQ results pane'),
  'description' => t('Quiz results summary.'),
  'single' => TRUE,
  'render callback' => 'medstat_quizz_md_iq_results_content_type_render',
  'category' => array(t('Quiz'), -4),
  'required context' => new ctools_context_required(t('Quiz Entity'), 'quiz_entity'),
);


/**
 * Render the the quiz results summary.
 */
function medstat_quizz_md_iq_results_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  if (!empty($context) && empty($context->data)) {
    return NULL;
  }

  $quiz = isset($context->data) ? clone($context->data) : NULL;
  $block = new stdClass();

  if (empty($quiz)) {
    $block->delta   = 'placeholder';
    $block->title = t('Placeholder title.');
    $block->content = t('Placeholder content goes here.');
    return $block;
  }

  if (!quizz_take_access($quiz)) {
    return NULL;
  }

  $block->module = 'node';
  $block->delta = $quiz->qid;

  if (isset($_SESSION['quiz']['temp']['result_id'])) {
    if (!empty($session_rid = intval($_SESSION['quiz']['temp']['result_id']))) {
      $result_id = $session_rid;
    }
  }

  if (!isset($result_id)) {
    $block->content = theme('quizz_no_feedback');
  }
  else {
    $result = quizz_result_load($result_id);
    $score = quizz_result_controller()->getScoreIO()->calculate($result);

    $quiz_render = new Render($quiz, $quiz, $result);

    $data = array(
      'quiz' => $quiz,
      'score' => $score,
      'summary' => $quiz_render->getSummaryText(),
      'rid' => $result_id,
    );

    // Get the themed summary page.
    $block->content = theme('md_iq_result_summary', $data);
  }
  return $block;
}
