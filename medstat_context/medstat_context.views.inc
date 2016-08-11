<?php

/**
 * @file
 * Integrate medstat_context with the views module.
 */

/**
 * Implements hook_views_handlers().
 */
function medstat_context_views_handlers() {
  return array(
    'info' => array(
      'path' => drupal_get_path('module', 'medstat_context') . '/views/handlers',
    ),
    'handlers' => array(
      'medstat_context_handler_field_node' => array(
        'parent' => 'views_handler_field_node',
      ),
    ),
  );
}
