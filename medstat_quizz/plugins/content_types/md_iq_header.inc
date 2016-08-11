<?php
/**
 * @file
 * Plugin to provide a customizable header for MD-IQ content.
 */

/**
 * Plugin declaration.
 */
$plugin = array(
  'title' => t('MD-IQ Quizz Header'),
  'description' => t('Provides a customizable header for MD-IQ Content.'),
  'single' => TRUE,
  'category' => array(t('Quiz'),-2),
  'defaults' => array(
    'override_title' => FALSE,
    'override_title_text' => 'Medical Intelligence Quiz',
    'content' => array(
      'format' => 'filtered_html',
      'value' => '<p>Challenge Yourself, Build Your Knowledge</p>',
    ),
  ),
);


/**
 * Render the custom content type.
 */
function medstat_quizz_md_iq_header_content_type_render($subtype, $conf, $panel_args, $context) {
  $block = new stdClass();
  $module_path = drupal_get_path('module', 'medstat_quizz');

  if (!empty($conf['content']) && !empty($conf['content']['value'])) {
    $content = $conf['content']['value'];
  }

  $image = theme('image', array('path' => $module_path . '/images/md-iq.jpg'));

  $block->content = theme('md_iq_header', array(
    'title'   => check_plain($conf['override_title_text']),
    'content' => !empty($content) ? check_markup($content, 'filtered_html') : NULL,
    'image'   => $image,
  ));

  return $block;
}

/**
 * Returns an edit form for custom type settings.
 */
function medstat_quizz_md_iq_header_content_type_edit_form($form, &$form_state) {
  $conf = $form_state['conf'];

  $form['content'] = array(
    '#title' => t('Content'),
    '#type' => 'text_format',
    '#format' => 'filtered_html',
    '#description' => t('Text content to show.'),
    '#default_value' => $conf['content']['value'],
  );

  return $form;
}

/**
 * Set defaults on form submit.
 */
function medstat_quizz_md_iq_header_content_type_edit_form_submit($form, &$form_state) {
  foreach (array_keys($form_state['plugin']['defaults']) as $key) {
    $form_state['conf'][$key] = $form_state['values'][$key];
  }
}
