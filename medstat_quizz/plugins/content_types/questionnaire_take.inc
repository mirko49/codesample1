<?php
/**
 * @file
 * Plugin to provide a Patched Quiz Take Pane for Questionnaire content.
 */

 use Drupal\quizz\Controller\QuizTakeController;

/**
 * Plugin declaration.
 */
$plugin = array(
  'title' => t('Questionnaire Quizz take pane'),
  'description' => t('Questionnaire Quizz take pane.'),
  'single' => TRUE,
  'render callback' => 'medstat_quizz_questionnaire_take_content_type_render',
  'category' => array(t('Quiz'), -4),
  'required context' => new ctools_context_required(QUIZZ_NAME, 'quiz_entity'),
);

require_once drupal_get_path('module', 'quizz') . '/includes/quizz.pages.inc';

/**
 * Returns an edit form for the featured quiz settings.
 */
function medstat_quizz_questionnaire_take_content_type_edit_form($form, &$form_state) {
  return $form;
}

/**
 * Render the custom content type.
 */
function medstat_quizz_questionnaire_take_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  if (!empty($context) && empty($context->data)) {
    return NULL;
  }

  $quiz = isset($context->data) ? clone($context->data) : NULL;

  // Check if direct take has been set.
  if ($quiz && !empty($_SESSION['quiz_direct_take_' . $quiz->qid])) {
    // Set post variables so quiz module can handle the answer.
    $_POST['op'] = t('Next');
    $_POST['question_nid'] = $_SESSION['quiz_direct_take_' . $quiz->qid]['question_qid'];
    $_POST['tries'] = $_SESSION['quiz_direct_take_' . $quiz->qid]['tries'];
    unset($_SESSION['quiz_direct_take_' . $quiz->qid]);
  }

  $block = new stdClass();

  if (empty($quiz)) {
    // Output the associated JS anyways, for "answer reveal".
    drupal_add_js(drupal_get_path('module', 'medstat_quizz') . '/medstat_quizz.js');

    $block->delta   = 'questionnaire-empty';
    $block->title = '';
    $block->content = '<br><div class="question-wrapper questionnaire-empty">&nbsp;</div><br>';
    return $block;
  }

  if (!quizz_take_access($quiz)) {
    return NULL;
  }

  $block->module = 'node';
  $block->delta = $quiz->qid;

  // Fake path, so the quiz module can render properly.
  medstat_quizz_patch_path('quiz/' . $quiz->qid . '/take/*');
  $current = isset($_SESSION['quiz'][$quiz->qid]) ? $_SESSION['quiz'][$quiz->qid]['current'] : 1;

  // If we don't have a running session on this quiz, initialize it.
  if (!isset($_SESSION['quiz'][$quiz->qid])) {
    global $user;
    $obj = new QuizTakeController($quiz, $user);
    try {
      $obj->initQuizResult();
    }
    catch (\RuntimeException $e) {
      return array(
        'body' => array(
          '#prefix' => '<div class="messages error">',
          '#suffix' => '</div>',
          '#markup' => $e->getMessage(),
        ),
      );
    }
  }

  if (isset($quiz->rendered_content)) {
    $block->content = $quiz->rendered_content;
  }
  else {
    $block->content = quizz_take_question_page($quiz, $current);
  }
  // Restore path.
  medstat_quizz_patch_path();

  return $block;
}
