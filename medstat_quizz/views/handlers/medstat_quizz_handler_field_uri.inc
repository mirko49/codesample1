<?php

/**
 * @file
 * Contains the 'URL' field handler extended to support publication context.
 */

/**
 * Field handler to allow linking to a quiz with publication context.
 *
 * @ingroup views_field_handlers
 */
class medstat_quizz_handler_field_uri extends entity_views_handler_field_uri {

  private static $publication_arguments = array('field_article_publications_tid');

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['link_with_context'] = array('default' => isset($this->definition['link_with_context default']) ? $this->definition['link_with_context default'] : TRUE, 'bool' => TRUE);
    $options['link_context_from_arg'] = array('default' => isset($this->definition['link_context_from_arg default']) ? $this->definition['link_context_from_arg default'] : FALSE, 'bool' => TRUE);
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    $form['link_with_context'] = array(
      '#title' => t('Use publication context'),
      '#description' => t("Enable to use publication context when linking to the original entity."),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_with_context']),
      '#weight' => 1,
    );
    $form['link_context_from_arg'] = array(
      '#title' => t('Use the publication argument as context'),
      '#description' => t('Sets the publication contextual filter as the context for the link. If unchecked, the current publication context will be used.'),
      '#type' => 'checkbox',
      '#default_value' => !empty($this->options['link_context_from_arg']),
      '#weight' => 2,
      '#states' => array(
        'visible' => array(
          ':input[name="options[link_with_context]"]' => array('checked' => TRUE),
        ),
      ),
    );
    parent::options_form($form, $form_state);
  }

  /**
   * {@inheritdoc}
   */
  public function render($values) {
    // Overwrite the path with the publication context path.
    if (!empty($this->options['link_with_context'])) {
      $publication = NULL;
      if (!empty($this->options['link_context_from_arg'])) {

        foreach ($this->view->argument as $name => $argument) {
          if (in_array($name, self::$publication_arguments)) {
            if (($term = taxonomy_term_load($argument->argument)) && $term->vocabulary_machine_name == 'publications') {
              $publication = $term;
              break;
            }
          }
        }
      }
      $publication_context_path = medstat_context_get_publication_path('quiz_entity', $this->get_value($values, 'qid'), $publication);

      return $publication_context_path;
    }
    return EntityFieldHandlerHelper::render($this, $values);
  }
}
