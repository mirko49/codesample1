<?php
/**
 * @file
 * Plugin to provide a featured block for MD-IQ content.
 */

/**
 * Plugin declaration.
 */
$plugin = array(
  'title' => t('MD-IQ Feature Quiz'),
  'description' => t('Feature the given quiz on non-quiz pages.'),
  'single' => TRUE,
  'render callback' => 'medstat_quizz_md_iq_featured_quiz_content_type_render',
  'category' => array(t('Quiz'), 0),
  'defaults' => array(
    'override_title' => FALSE,
    'override_title_text' => 'Featured',
    'display_style' => 'block',
  ),
  'required context' => new ctools_context_required(QUIZZ_NAME, 'quiz_entity'),
);

require_once drupal_get_path('module', 'quizz') . '/includes/quizz.pages.inc';

/**
 * Returns an edit form for the featured quiz settings.
 */
function medstat_quizz_md_iq_featured_quiz_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['display_style'] = array(
    '#title' => t('Quiz display style'),
    '#type' => 'radios',
    '#description' => t('Choose which way you would like to display the featured quiz.'),
    '#default_value' => $conf['display_style'],
    '#options' => array(
      'block' => t('Block'),
      'take' => t('Take pane'),
    ),
  );

  return $form;
}

/**
 * Set defaults on form submit.
 */
function medstat_quizz_md_iq_featured_quiz_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}

/**
 * Render the custom content type.
 */
function medstat_quizz_md_iq_featured_quiz_content_type_render($subtype, $conf, $panel_args, $context = NULL) {
  if (!empty($context) && empty($context->data)) {
    return NULL;
  }

  $block = new stdClass();
  $block->content = array();

  $quiz = isset($context->data) ? clone($context->data) : NULL;
  $block->title = $quiz->title;

  // Get MD-IQ image.
  $module_path = drupal_get_path('module', 'medstat_quizz');
  $image = theme('image', array(
    'path' => $module_path . '/images/md-iq.jpg',
    'attributes' => array(
      'class' => array(
        'pull-right',
      ),
    ),
  ));

  // Populate block content.
  if ((isset($_SESSION['quiz'][$quiz->qid]['current']) && $_SESSION['quiz'][$quiz->qid]['current'] !== 1) || isset($_SESSION['quiz']['feedback'][$quiz->qid]) || isset($_SESSION['quiz']['finished'][$quiz->qid])) {
    // We have a quiz where the user has progressed beyond the first question.
    $text = '<p class="resume-message">You have already started this quiz.</p>';
    $text .= l(
      t('Resume progress'),
      medstat_context_get_publication_path('quiz_entity', $quiz),
      array('attributes' => array('class' => array('call-to-action')))
    );
    $content = array('#markup' => $text);
  }
  else {
    // We are displaying the take pane for the first question.
    module_load_include('inc', 'medstat_quizz', '/plugins/content_types/md_iq_take');
    $context = new stdClass();
    $context->data = $quiz;
    $take_pane = medstat_quizz_md_iq_take_content_type_render('', $conf, '', $context);
    $content = $take_pane->content;
  }

  if (!isset($conf['display_style']) || $conf['display_style'] === 'block') {
    $block->content['#theme'] = 'md_iq_quiz_block';
    $block->content['#image'] = $image;
    $block->content['#content'] = $content;
  }
  else {
    $block->content = $content;
  }

  return $block;
}
