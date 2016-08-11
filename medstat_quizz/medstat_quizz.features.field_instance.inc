<?php
/**
 * @file
 * medstat_quizz.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function medstat_quizz_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'quiz_entity-md_iq-field_article_publications'.
  $field_instances['quiz_entity-md_iq-field_article_publications'] = array(
    'bundle' => 'md_iq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select all publications associated with this quiz.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_publications',
    'label' => 'Publications',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'multiple_selects',
      'settings' => array(),
      'type' => 'multiple_selects',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'quiz_entity-md_iq-field_article_topics'.
  $field_instances['quiz_entity-md_iq-field_article_topics'] = array(
    'bundle' => 'md_iq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the conditions / specialties / topics associated with the publication(s).',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_article_topics',
    'label' => 'Topics',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'quiz_entity-md_iq-field_md_iq_series'.
  $field_instances['quiz_entity-md_iq-field_md_iq_series'] = array(
    'bundle' => 'md_iq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Select the series associated with this quiz.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_md_iq_series',
    'label' => 'Series',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => '',
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'quiz_entity-md_iq-field_negative_keywords'.
  $field_instances['quiz_entity-md_iq-field_negative_keywords'] = array(
    'bundle' => 'md_iq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the keywords used to avoid displaying ads that could conflict with the content.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'field_negative_keywords',
    'label' => 'Negative Keywords',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'quiz_entity-md_iq-quiz_body'.
  $field_instances['quiz_entity-md_iq-quiz_body'] = array(
    'bundle' => 'md_iq',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 255,
        ),
        'type' => 'text_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'quiz_body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'paste_only_remove_br_tags' => 0,
          'plain_text' => 0,
          'restricted_html' => 0,
          'simple_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'paste_only_remove_br_tags' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'restricted_html' => array(
              'weight' => 0,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 1,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'show_token_tree' => 0,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'quiz_entity-questionnaire-quiz_body'.
  $field_instances['quiz_entity-questionnaire-quiz_body'] = array(
    'bundle' => 'questionnaire',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'field_name' => 'quiz_body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => FALSE,
        'summary_rows' => 3,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'quiz_entity-quiz-quiz_body'.
  $field_instances['quiz_entity-quiz-quiz_body'] = array(
    'bundle' => 'quiz',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'newsletter' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_entity',
    'field_name' => 'quiz_body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => FALSE,
        'summary_rows' => 3,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_multichoice-field_question_ref_link'.
  $field_instances['quiz_question_entity-default_multichoice-field_question_ref_link'] = array(
    'bundle' => 'default_multichoice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the reference text link, if any',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_question_ref_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'urlwidget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_multichoice-field_question_ref_text'.
  $field_instances['quiz_question_entity-default_multichoice-field_question_ref_text'] = array(
    'bundle' => 'default_multichoice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the reference text for this question.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'summary',
    'field_name' => 'field_question_ref_text',
    'label' => 'For complete information, see',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'paste_only_remove_br_tags' => 0,
          'plain_text' => 0,
          'raw_html' => 0,
          'restricted_html' => 0,
          'simple_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -5,
            ),
            'paste_only_remove_br_tags' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -4,
            ),
            'raw_html' => array(
              'weight' => -9,
            ),
            'restricted_html' => array(
              'weight' => -7,
            ),
            'simple_html' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'show_token_tree' => 0,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_multichoice-quiz_question_body'.
  $field_instances['quiz_question_entity-default_multichoice-quiz_question_body'] = array(
    'bundle' => 'default_multichoice',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'quiz_question_body',
    'label' => 'Question',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'paste_only_remove_br_tags' => 0,
          'plain_text' => 0,
          'restricted_html' => 'restricted_html',
          'simple_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'paste_only_remove_br_tags' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'restricted_html' => array(
              'weight' => 0,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => 0,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_quiz_directions-quiz_question_body'.
  $field_instances['quiz_question_entity-default_quiz_directions-quiz_question_body'] = array(
    'bundle' => 'default_quiz_directions',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'field_name' => 'quiz_question_body',
    'label' => 'Question',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => FALSE,
        'summary_rows' => 3,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -20,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_quiz_page-quiz_question_body'.
  $field_instances['quiz_question_entity-default_quiz_page-quiz_question_body'] = array(
    'bundle' => 'default_quiz_page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'field_name' => 'quiz_question_body',
    'label' => 'Question',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => FALSE,
        'summary_rows' => 3,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -20,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_truefalse-field_question_ref_link'.
  $field_instances['quiz_question_entity-default_truefalse-field_question_ref_link'] = array(
    'bundle' => 'default_truefalse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Enter the reference text link, if any.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'no_wrapper',
    'field_name' => 'field_question_ref_link',
    'label' => 'Link',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
        'configurable_title' => 0,
        'rel' => '',
        'target' => '_blank',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'rel_remove' => 'default',
      'title' => 'none',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'html5_tools',
      'settings' => array(),
      'type' => 'urlwidget',
      'weight' => 8,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_truefalse-field_question_ref_text'.
  $field_instances['quiz_question_entity-default_truefalse-field_question_ref_text'] = array(
    'bundle' => 'default_truefalse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Add the reference text for this question.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'summary',
    'field_name' => 'field_question_ref_text',
    'label' => 'For complete information, see',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 'filtered_html',
          'full_html' => 0,
          'paste_only_remove_br_tags' => 0,
          'plain_text' => 0,
          'raw_html' => 0,
          'restricted_html' => 0,
          'simple_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => -10,
            ),
            'full_html' => array(
              'weight' => -5,
            ),
            'paste_only_remove_br_tags' => array(
              'weight' => -6,
            ),
            'plain_text' => array(
              'weight' => -4,
            ),
            'raw_html' => array(
              'weight' => -9,
            ),
            'restricted_html' => array(
              'weight' => -7,
            ),
            'simple_html' => array(
              'weight' => -8,
            ),
          ),
        ),
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 3,
        'show_token_tree' => 0,
      ),
      'type' => 'text_textarea',
      'weight' => 7,
    ),
  );

  // Exported field_instance:
  // 'quiz_question_entity-default_truefalse-quiz_question_body'.
  $field_instances['quiz_question_entity-default_truefalse-quiz_question_body'] = array(
    'bundle' => 'default_truefalse',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'quiz_question_entity',
    'fences_wrapper' => 'div_div_div',
    'field_name' => 'quiz_question_body',
    'label' => 'Question',
    'required' => 0,
    'settings' => array(
      'better_formats' => array(
        'allowed_formats' => array(
          'filtered_html' => 0,
          'full_html' => 0,
          'paste_only_remove_br_tags' => 0,
          'plain_text' => 0,
          'restricted_html' => 'restricted_html',
          'simple_html' => 0,
        ),
        'allowed_formats_toggle' => 1,
        'default_order_toggle' => 0,
        'default_order_wrapper' => array(
          'formats' => array(
            'filtered_html' => array(
              'weight' => 0,
            ),
            'full_html' => array(
              'weight' => 1,
            ),
            'paste_only_remove_br_tags' => array(
              'weight' => 0,
            ),
            'plain_text' => array(
              'weight' => 10,
            ),
            'restricted_html' => array(
              'weight' => 0,
            ),
            'simple_html' => array(
              'weight' => 0,
            ),
          ),
        ),
      ),
      'display_summary' => 0,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
        'show_token_tree' => 0,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 0,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Add the reference text for this question.');
  t('Body');
  t('Enter the keywords used to avoid displaying ads that could conflict with the content.');
  t('Enter the reference text link, if any');
  t('Enter the reference text link, if any.');
  t('For complete information, see');
  t('Link');
  t('Negative Keywords');
  t('Publications');
  t('Question');
  t('Select all publications associated with this quiz.');
  t('Select the conditions / specialties / topics associated with the publication(s).');
  t('Select the series associated with this quiz.');
  t('Series');
  t('Topics');

  return $field_instances;
}
