<?php

/**
 * @file
 * Medstat Context helpers.
 */

/**
 * Finds the related publication for a term.
 *
 * @param Object $entity
 *   The term entity.
 *
 * @return Object
 *   The related publication Object.
 */
function medstat_context_term_related_publication($entity) {
  $wrapper_entity = entity_metadata_wrapper('taxonomy_term', $entity);
  if (isset($wrapper_entity->field_related_publication_col) &&
    !empty($collections = $wrapper_entity->field_related_publication_col)) {
    $context = medstat_context_context()->getProperty('publication');
    foreach ($collections as $collection) {
      if (!isset($collection->field_context_publication->tid) ||
        !isset($collection->field_related_publication->tid) ||
        empty($field_context = $collection->field_context_publication->tid->value())) {
        continue;
      }
      if ($field_context == $context->tid &&
        isset($collection->field_related_publication)) {
        return $collection->field_related_publication->value();
      }
    }
  }
  return NULL;
}
