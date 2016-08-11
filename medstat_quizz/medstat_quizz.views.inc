<?php

/**
 * @file
 * Integrate medstat_quizz with the views module.
 */

/**
 * Implements hook_views_handlers().
 */
function medstat_quizz_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'medstat_quizz') . '/views/handlers',
    ),
    'handlers' => array(
      'medstat_quizz_handler_field_uri' => array(
        'parent' => 'entity_views_handler_field_uri',
      ),
    ),
  );
}
