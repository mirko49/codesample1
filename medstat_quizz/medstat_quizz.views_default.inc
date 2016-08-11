<?php
/**
 * @file
 * medstat_quizz.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function medstat_quizz_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'medstat_quiz_listing_panes';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'quiz_entity';
  $view->human_name = 'Quiz listing panes';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['group_by'] = TRUE;
  $handler->display->display_options['access']['type'] = 'none';
  $handler->display->display_options['cache']['type'] = 'time';
  $handler->display->display_options['cache']['results_lifespan'] = '3600';
  $handler->display->display_options['cache']['results_lifespan_custom'] = '0';
  $handler->display->display_options['cache']['output_lifespan'] = '3600';
  $handler->display->display_options['cache']['output_lifespan_custom'] = '0';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['grouping'] = array(
    0 => array(
      'field' => 'field_article_topics',
      'rendered' => 1,
      'rendered_strip' => 0,
    ),
  );
  $handler->display->display_options['style_options']['row_class'] = 'clickable-row';
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'field_article_topics' => 'field_article_topics',
    'auto_update_max_score' => 'auto_update_max_score',
    'score' => 'score',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_article_topics' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'auto_update_max_score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'score' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<h2 class="mdiq-section-header" id="mdiq-by-topic">Topics</h2>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  /* Relationship: Quiz result: Uid */
  $handler->display->display_options['relationships']['uid']['id'] = 'uid';
  $handler->display->display_options['relationships']['uid']['table'] = 'quiz_results';
  $handler->display->display_options['relationships']['uid']['field'] = 'uid';
  /* Relationship: User: Quiz result */
  $handler->display->display_options['relationships']['quiz_results_1']['id'] = 'quiz_results_1';
  $handler->display->display_options['relationships']['quiz_results_1']['table'] = 'users';
  $handler->display->display_options['relationships']['quiz_results_1']['field'] = 'quiz_results';
  $handler->display->display_options['relationships']['quiz_results_1']['relationship'] = 'uid';
  $handler->display->display_options['relationships']['quiz_results_1']['bundle_types'] = array(
    'md_iq' => 'md_iq',
  );
  /* Field: Quiz: Label */
  $handler->display->display_options['fields']['title_1']['id'] = 'title_1';
  $handler->display->display_options['fields']['title_1']['table'] = 'quiz_entity';
  $handler->display->display_options['fields']['title_1']['field'] = 'title';
  $handler->display->display_options['fields']['title_1']['label'] = 'Quiz';
  /* Field: Field: Topics */
  $handler->display->display_options['fields']['field_article_topics']['id'] = 'field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['table'] = 'field_data_field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['field'] = 'field_article_topics';
  $handler->display->display_options['fields']['field_article_topics']['label'] = '';
  $handler->display->display_options['fields']['field_article_topics']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_article_topics']['element_type'] = '0';
  $handler->display->display_options['fields']['field_article_topics']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_article_topics']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_article_topics']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_article_topics']['type'] = 'taxonomy_term_reference_plain';
  $handler->display->display_options['fields']['field_article_topics']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_article_topics']['field_api_classes'] = TRUE;
  /* Field: MAX(Quiz result: Score) */
  $handler->display->display_options['fields']['score']['id'] = 'score';
  $handler->display->display_options['fields']['score']['table'] = 'quiz_results';
  $handler->display->display_options['fields']['score']['field'] = 'score';
  $handler->display->display_options['fields']['score']['relationship'] = 'quiz_results';
  $handler->display->display_options['fields']['score']['group_type'] = 'max';
  $handler->display->display_options['fields']['score']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['score']['alter']['text'] = '[score]%';
  $handler->display->display_options['fields']['score']['empty'] = '—';
  $handler->display->display_options['fields']['score']['empty_zero'] = TRUE;
  /* Field: Quiz: URL */
  $handler->display->display_options['fields']['url']['id'] = 'url';
  $handler->display->display_options['fields']['url']['table'] = 'views_entity_quiz_entity';
  $handler->display->display_options['fields']['url']['field'] = 'url';
  $handler->display->display_options['fields']['url']['label'] = '';
  $handler->display->display_options['fields']['url']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['text'] = 'Take Quiz';
  $handler->display->display_options['fields']['url']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['url']['alter']['path'] = '[url]';
  $handler->display->display_options['fields']['url']['alter']['link_class'] = 'call-to-action';
  $handler->display->display_options['fields']['url']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['url']['link_to_entity'] = 1;
  /* Sort criterion: Quiz: Created */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'quiz_entity';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Field: Publications (field_article_publications) */
  $handler->display->display_options['arguments']['field_article_publications_tid']['id'] = 'field_article_publications_tid';
  $handler->display->display_options['arguments']['field_article_publications_tid']['table'] = 'field_data_field_article_publications';
  $handler->display->display_options['arguments']['field_article_publications_tid']['field'] = 'field_article_publications_tid';
  $handler->display->display_options['arguments']['field_article_publications_tid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['field_article_publications_tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_article_publications_tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_article_publications_tid']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: User: Uid */
  $handler->display->display_options['arguments']['uid']['id'] = 'uid';
  $handler->display->display_options['arguments']['uid']['table'] = 'users';
  $handler->display->display_options['arguments']['uid']['field'] = 'uid';
  $handler->display->display_options['arguments']['uid']['relationship'] = 'uid';
  $handler->display->display_options['arguments']['uid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['uid']['default_argument_type'] = 'current_user';
  $handler->display->display_options['arguments']['uid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['uid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['uid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Quiz: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'quiz_entity';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'md_iq' => 'md_iq',
  );
  /* Filter criterion: Quiz: Status */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'quiz_entity';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value']['value'] = '1';

  /* Display: Quizzes by Topic Pane */
  $handler = $view->new_display('panel_pane', 'Quizzes by Topic Pane', 'medstat_md_iq_by_topic');
  $handler->display->display_options['argument_input'] = array(
    'field_article_publications_tid' => array(
      'type' => 'user',
      'context' => 'entity:quiz_answer_type.data',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Publication',
    ),
    'uid' => array(
      'type' => 'user',
      'context' => 'entity:user.uid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'User: Uid',
    ),
  );
  $export['medstat_quiz_listing_panes'] = $view;

  return $export;
}
