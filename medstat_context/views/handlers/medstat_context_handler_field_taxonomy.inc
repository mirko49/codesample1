<?php

/**
 * @file
 * Definition of medstat_context_handler_field_taxonomy.
 */

/**
 * Field handler to allow linking to a taxonomy term with publication context.
 *
 * @ingroup views_field_handlers
 */
class medstat_context_handler_field_taxonomy extends views_handler_field_taxonomy {

  private static $publication_arguments = array('tid');

  /**
   * {@inheritdoc}
   */
  public function option_definition() {
    $options = parent::option_definition();
    $options['link_with_context'] = array('default' => TRUE, 'bool' => TRUE);
    $options['link_context_from_arg'] = array('default' => isset($this->definition['link_context_from_arg default']) ? $this->definition['link_context_from_arg default'] : FALSE, 'bool' => TRUE);
    return $options;
  }

  /**
   * {@inheritdoc}
   */
  public function options_form(&$form, &$form_state) {
    $form['link_with_context'] = array(
      '#title' => t('Use the current publication context'),
      '#description' => t("Enable to use the current publication context when linking to the taxonomy term page."),
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
  public function render_link($data, $values) {
    parent::render_link($data, $values);
    $tid = $this->get_value($values, 'tid');

    // Overwrite the path with the publication context path.
    if (!empty($this->options['link_with_context']) && !empty($this->options['link_to_taxonomy']) && !empty($tid) && $data !== NULL && $data !== '') {
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
      $this->options['alter']['path'] = medstat_context_get_publication_path('taxonomy_term', $tid, $publication);
    }
    return $data;
  }
}
