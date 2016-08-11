<?php
/**
 * @file
 * Plugin to provide a Patched Quiz Take Pane for MD-IQ content.
 */


 use Drupal\quizz\Controller\QuizTakeController;

/**
 * Plugin declaration.
 */
$plugin = array(
  'title' => t('MD-IQ Quizz take pane'),
  'description' => t('Quizz take pane.'),
  'single' => TRUE,
  'render callback' => 'medstat_quizz_md_iq_take_content_type_render',
  'category' => array(t('Quiz'), -4),
  'required context' => new ctools_context_required(QUIZZ_NAME, 'quiz_entity'),
);

require_once drupal_get_path('module', 'quizz') . '/includes/quizz.pages.inc';

/**
 * Render the custom content type.
 */
function medstat_quizz_md_iq_take_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
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

  // Get current question number.
  $current = isset($_SESSION['quiz'][$quiz->qid]['current']) ? $_SESSION['quiz'][$quiz->qid]['current'] : 1;

  // Load the contents of the result page if the quiz is finished.
  if (!empty($_SESSION['quiz']['finished'][$quiz->qid])) {
    $result = quizz_result_load($_SESSION['quiz']['temp']['result_id']);
    $block->content = quizz_result_page($result);
  }
  // Load the contents of the feedback page if we have feedback for the previous
  // question.
  elseif (!empty($_SESSION['quiz']['feedback'][$quiz->qid])) {
    // If we're on the last question we lose the quiz session array.
    if (empty($_SESSION['quiz'][$quiz->qid])) {
      $result = quizz_result_load($_SESSION['quiz']['temp']['result_id']);
      $current = count($result->layout) + 1;
    }
    $block->content = quizz_question_feedback_page($quiz, $current - 1);
  }
  // If we don't have any session data for this quiz, show the initial take
  // page content.
  elseif (!isset($_SESSION['quiz'][$quiz->qid]['current'])) {
    $block->content = quizz_take_page($quiz);
  }
  // Defalt to showing the page content for the current question number.
  else {
    $block->content = quizz_take_question_page($quiz, $current);
  }

  return $block;
}
