<?php
/**
 * @file
 * medstat_quizz.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function medstat_quizz_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_article_categorization|quiz_entity|md_iq|form';
  $field_group->group_name = 'group_article_categorization';
  $field_group->entity_type = 'quiz_entity';
  $field_group->bundle = 'md_iq';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Categorization',
    'weight' => '5',
    'children' => array(
      0 => 'field_article_publications',
      1 => 'field_article_topics',
      2 => 'field_negative_keywords',
      3 => 'field_md_iq_series',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-article-categorization field-group-fieldset',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_article_categorization|quiz_entity|md_iq|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference|quiz_question_entity|default_multichoice|form';
  $field_group->group_name = 'group_reference';
  $field_group->entity_type = 'quiz_question_entity';
  $field_group->bundle = 'default_multichoice';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference',
    'weight' => '6',
    'children' => array(
      0 => 'field_question_ref_text',
      1 => 'field_question_ref_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
        'id' => '',
      ),
    ),
  );
  $field_groups['group_reference|quiz_question_entity|default_multichoice|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_reference|quiz_question_entity|default_truefalse|form';
  $field_group->group_name = 'group_reference';
  $field_group->entity_type = 'quiz_question_entity';
  $field_group->bundle = 'default_truefalse';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Reference',
    'weight' => '6',
    'children' => array(
      0 => 'field_question_ref_text',
      1 => 'field_question_ref_link',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'label' => 'Reference',
      'instance_settings' => array(
        'required_fields' => 1,
        'id' => '',
        'classes' => '',
        'description' => '',
      ),
      'formatter' => 'collapsible',
    ),
  );
  $field_groups['group_reference|quiz_question_entity|default_truefalse|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Categorization');
  t('Reference');

  return $field_groups;
}
