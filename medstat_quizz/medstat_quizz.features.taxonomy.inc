<?php
/**
 * @file
 * medstat_quizz.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function medstat_quizz_taxonomy_default_vocabularies() {
  return array(
    'quiz_series' => array(
      'name' => 'MD-IQ Series',
      'machine_name' => 'quiz_series',
      'description' => 'Series for MD-IQ Quizzes',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
      'rdf_mapping' => array(
        'rdftype' => array(
          0 => 'skos:ConceptScheme',
        ),
        'name' => array(
          'predicates' => array(
            0 => 'dc:title',
          ),
        ),
        'description' => array(
          'predicates' => array(
            0 => 'rdfs:comment',
          ),
        ),
      ),
    ),
  );
}
