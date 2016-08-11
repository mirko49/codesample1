<?php

/**
 * @file
 * Provides the MedstatContext class.
 */

class MedstatContext {

  /**
   * @var EntityMetadataWrapper|NULL $entity_wrapper
   *   The entity metadata wrapper for the current entity if that entity is a
   *   node or taxonomy term.
   */
  private $entity_wrapper;

  /**
   * @var object|NULL $publication
   *   The taxonomy term object for the current publication.
   */
  private $publication;

  /**
   * @var array|NULL $topics
   *   An array of taxonomy term objects of topics
   *   related to the current entity.
   */
  private $topics;

  /**
   * @var array|NULL $sections
   *   An array of taxonomy term objects of sections
   *   related to the current entity.
   */
  private $sections;

  /**
   * @var array|NULL $meetings
   *   An array of taxonomy term objects of meetings
   *   related to the current entity.
   */
  private $meetings;

  /**
   * @var array|NULL $quiz_series
   *   An array of taxonomy term objects of quiz series
   *   related to the current entity.
   */
  private $quiz_series;

  /**
   * @var EntityMetadataWrapper|NULL $ce_stack
   *   The entity metadata wrapper object for a Clinical Edge stack entity. This
   *   context is used on Clinical Edge nodes to power the table of contents and
   *   prev/next navigation.
   */
  private $ce_stack;

  /**
   * Construct a medstat context.
   *
   * @param array $properties
   *   An array of property values keyed by property name to set on the context
   *   object.
   */
  public function __construct($properties) {
    foreach ($properties as $prop => $value) {
      // Only set the property if it exists and is not default.
      if (property_exists($this, $prop) && $this->{$prop} !== $value) {
        $this->setProperty($prop, $value);
      }
    }
  }

  /**
   * Set a context property.
   *
   * @param string $prop
   *   The property name to set.
   * @param mixed $value
   *   The property value to set.
   */
  protected function setProperty($prop, $value) {
    $validator = 'validateProperty' . ucfirst($prop);
    $setter = 'setProperty' . ucfirst($prop);
    if (method_exists($this, $validator)) {
      try {
        $this->{$validator}($value);
      }
      catch (Exception $e) {
        // Log the validation exception.
        watchdog_exception('medstat_context', $e);

        // Return without setting the property.
        return;
      }
    }

    if (method_exists($this, $setter)) {
      $this->{$setter}($value);
    }
    else {
      $this->{$prop} = $value;
    }
  }

  /**
   * Get a context property.
   *
   * @param string $prop
   *   The property name to get.
   */
  public function getProperty($prop) {
    $getter = 'getProperty' . ucfirst($prop);
    if (property_exists($this, $prop)) {
      if (method_exists($this, $getter)) {
        return $this->{$getter}();
      }
      return $this->{$prop};
    }
  }

  /**
   * Validate the $publication property.
   *
   * @param mixed $value
   *   A supposed taxonomy term object in the publications vocabulary.
   *
   * @throw Exception
   *   When $value is not a taxonomy term object in the publications vocabulary.
   */
  protected function validatePropertyPublication($value) {
    if (!$this->isValidTerm($value) || $value->vocabulary_machine_name !== 'publications') {
      throw new Exception('The publication context property must be a valid taxonomy_term object in the publications vocabulary.');
    }
  }

  /**
   * Validate the $topics property.
   *
   * @param array $value
   *   An array of supposed taxonomy term objects in the topics vocabulary.
   *
   * @throw Exception
   *   When $value is not an array of taxonomy term objects in the topics
   *   vocabulary.
   */
  protected function validatePropertyTopics(array $value) {
    foreach ($value as $term) {
      if (!$this->isValidTerm($term) || $term->vocabulary_machine_name !== 'topics') {
        throw new Exception('The topics context property must be an array of valid taxonomy_term objects in the topics vocabulary.');
      }
    }
  }

  /**
   * Helper to determine if a value is a taxonomy term object.
   *
   * @param mixed $term
   *   A supposed taxonomy term object.
   *
   * @return bool
   *   TRUE if $value is a taxonomy term object. Otherwise, FALSE.
   */
  public function isValidTerm($term) {
    return is_object($term) && isset($term->tid);
  }

  /**
   * Expose context properties.
   *
   * @return array
   *   An associative array of context properties with initial default values.
   */
  public static function contextProperties() {
    return get_class_vars(__CLASS__);
  }
}
