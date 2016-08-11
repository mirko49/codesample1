<?php

/**
 * @file
 * Plugin to provide medstat topics context.
 */

$plugin = array(
  'title' => t("Quiz Series"),
  'keyword' => 'quiz_series',
  'description' => t('MDedge Quiz Series term objects.'),
  'context' => 'medstat_context_ctools_context_create_quiz_series_context',
  'convert list' => 'medstat_context_quiz_series_convert_list',
  'convert' => 'medstat_context_quiz_series_convert',
);

/**
 * Creates the publication context.
 */
function medstat_context_ctools_context_create_quiz_series_context($empty, $data = NULL, $conf = FALSE) {
  $context = new ctools_context('quiz_series');
  $context->plugin = 'quiz_series';

  if (!$empty) {
    $context->data = medstat_context_context()->getProperty('quiz_series');
  }

  return $context;
}

/**
 * Converts an integer into a topic at the given index.
 */
function medstat_context_quiz_series_convert($context, $target, $options = array()) {
  list($index, $type) = explode(':', $target);
  if ($index = 'all') {
    $result = array();
    $tokens = token_info();
    foreach ($context->data as $index => $data) {
      $values = token_generate('term', array($type => $type), array('term' => $data), $options);
      if (isset($values[$type])) {
        $result[] = $values[$type];
      }
    }
    return implode(',', $result);
  }
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
function medstat_context_quiz_series_convert_list($plugin) {
  $term_list = ctools_context_entity_convert_list(array('context name' => 'taxonomy_term'));
  $list = array();
  foreach ($term_list as $name => $description) {
    $list['index:' . $name] = $description;
  }
  return $list;
}
