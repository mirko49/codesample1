<?php

/**
 * @file
 * Plugin to provide medstat publication context.
 */

$plugin = array(
  'title' => t("Publication"),
  'keyword' => 'publication',
  'description' => t('MDedge publication term object.'),
  'context' => 'medstat_context_ctools_context_create_publication_context',
);

/**
 * Creates the publication context.
 */
function medstat_context_ctools_context_create_publication_context($empty, $data = NULL, $conf = FALSE) {
  $publication = medstat_context_context()->getProperty('publication');

  if ($publication) {
    return ctools_context_create('entity:taxonomy_term', $publication);
  }

  return ctools_context_create_empty('entity:taxonomy_term');
}
