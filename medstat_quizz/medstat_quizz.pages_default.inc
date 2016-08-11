<?php
/**
 * @file
 * medstat_quizz.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function medstat_quizz_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view__article-questionnaire';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Article Questionnaire',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'article-questionnaire',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Publication',
        'keyword' => 'publication',
        'name' => 'publication',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Topcis',
        'keyword' => 'topics',
        'name' => 'topics',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Featured Quiz',
        'keyword' => 'featured_quiz',
        'name' => 'featured_quiz',
        'id' => 1,
      ),
    ),
    'relationships' => array(
      0 => array(
        'identifier' => 'Questionnaire from Node',
        'keyword' => 'quiz_entity',
        'name' => 'entity_from_field:field_article_questionnaire-node-quiz_entity',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'name' => 'article-questionnaire',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
        3 => array(
          'name' => 'entity_field_value:node:article:field_article_questionnaire_body',
          'settings' => array(
            'field_article_questionnaire_body' => array(
              'und' => array(),
            ),
            'field_article_questionnaire_body_value' => array(),
            'field_article_questionnaire_body_format' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'medstat_one_column_sidebar';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
          1 => 1,
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => '75.05305822841368',
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
      ),
      1 => array(
        'type' => 'column',
        'width' => '24.94694177158633',
        'width_type' => '%',
        'parent' => 'canvas',
        'children' => array(
          0 => 2,
        ),
        'class' => 'sidebar',
        'hide_empty' => 0,
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'sidebar',
        ),
        'parent' => '1',
        'class' => '',
        'hide_empty' => 0,
      ),
      'sidebar' => array(
        'type' => 'region',
        'title' => 'Sidebar',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
        'hide_empty' => 0,
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'sidebar' => NULL,
      'main' => NULL,
      'top_region' => NULL,
      'bottom_region' => NULL,
      'offset_region' => NULL,
      'main_top' => array(
        'content' => array(
          'element' => 'div',
          'attributes' => array(
            'id' => '',
            'class' => 'article-header',
          ),
        ),
        'theme' => 0,
      ),
      'read_more' => NULL,
      'bottom_region_2' => NULL,
      'bottom_region_3' => NULL,
      'bottom_region_4' => NULL,
      'bottom_region_5' => NULL,
    ),
    'main_top' => array(
      'style' => 'wrapper_element',
    ),
  );
  $display->cache = array(
    'method' => 'simple',
    'settings' => array(
      'lifetime' => '900',
      'granularity' => 'args',
    ),
  );
  $display->title = '<none>';
  $display->uuid = 'f24d3ba0-09ce-4d9a-95fd-96c4668686f1';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-7b1233d0-8943-4af2-a236-3dbb519a18a4';
    $pane->panel = 'bottom_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_ptmg-medstat_ptmg_rss';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7b1233d0-8943-4af2-a236-3dbb519a18a4';
    $display->content['new-7b1233d0-8943-4af2-a236-3dbb519a18a4'] = $pane;
    $display->panels['bottom_region'][0] = 'new-7b1233d0-8943-4af2-a236-3dbb519a18a4';
    $pane = new stdClass();
    $pane->pid = 'new-9571100c-6967-4dd1-9b40-ff4fcd5c7743';
    $pane->panel = 'bottom_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9571100c-6967-4dd1-9b40-ff4fcd5c7743';
    $display->content['new-9571100c-6967-4dd1-9b40-ff4fcd5c7743'] = $pane;
    $display->panels['bottom_region'][1] = 'new-9571100c-6967-4dd1-9b40-ff4fcd5c7743';
    $pane = new stdClass();
    $pane->pid = 'new-28dcb7b3-db79-48a9-9c73-ca47d48e9c9d';
    $pane->panel = 'bottom_region';
    $pane->type = 'md_iq_featured_quiz';
    $pane->subtype = 'md_iq_featured_quiz';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => 'Latest Quiz',
      'publication_tid' => '%publication:tid',
      'override_title_heading' => 'h2',
      'display_style' => NULL,
      'context' => 'context_featured_quiz_1',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => array(
        'taxonomy_title' => 'none',
        'block_style' => 'mdiq',
        'columns' => '2',
      ),
      'style' => 'content_block',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '28dcb7b3-db79-48a9-9c73-ca47d48e9c9d';
    $display->content['new-28dcb7b3-db79-48a9-9c73-ca47d48e9c9d'] = $pane;
    $display->panels['bottom_region'][2] = 'new-28dcb7b3-db79-48a9-9c73-ca47d48e9c9d';
    $pane = new stdClass();
    $pane->pid = 'new-42dcf326-9575-464b-9781-d9afc092e0e0';
    $pane->panel = 'bottom_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '42dcf326-9575-464b-9781-d9afc092e0e0';
    $display->content['new-42dcf326-9575-464b-9781-d9afc092e0e0'] = $pane;
    $display->panels['bottom_region'][3] = 'new-42dcf326-9575-464b-9781-d9afc092e0e0';
    $pane = new stdClass();
    $pane->pid = 'new-c70bd6fd-4e89-4359-ba38-27898cee9492';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_questionnaire_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c70bd6fd-4e89-4359-ba38-27898cee9492';
    $display->content['new-c70bd6fd-4e89-4359-ba38-27898cee9492'] = $pane;
    $display->panels['main'][0] = 'new-c70bd6fd-4e89-4359-ba38-27898cee9492';
    $pane = new stdClass();
    $pane->pid = 'new-9a7b4c54-760b-4e5d-b14b-108ca48301b5';
    $pane->panel = 'main';
    $pane->type = 'questionnaire_take';
    $pane->subtype = 'questionnaire_take';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'context' => 'relationship_entity_from_field:field_article_questionnaire-node-quiz_entity_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9a7b4c54-760b-4e5d-b14b-108ca48301b5';
    $display->content['new-9a7b4c54-760b-4e5d-b14b-108ca48301b5'] = $pane;
    $display->panels['main'][1] = 'new-9a7b4c54-760b-4e5d-b14b-108ca48301b5';
    $pane = new stdClass();
    $pane->pid = 'new-132317c5-d8be-44d2-9dce-299f57544017';
    $pane->panel = 'main';
    $pane->type = 'md_paged_body';
    $pane->subtype = 'md_paged_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '132317c5-d8be-44d2-9dce-299f57544017';
    $display->content['new-132317c5-d8be-44d2-9dce-299f57544017'] = $pane;
    $display->panels['main'][2] = 'new-132317c5-d8be-44d2-9dce-299f57544017';
    $pane = new stdClass();
    $pane->pid = 'new-e4ee5b10-a0a9-414e-8909-c68700e1a2a8';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:smart_paging';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'e4ee5b10-a0a9-414e-8909-c68700e1a2a8';
    $display->content['new-e4ee5b10-a0a9-414e-8909-c68700e1a2a8'] = $pane;
    $display->panels['main'][3] = 'new-e4ee5b10-a0a9-414e-8909-c68700e1a2a8';
    $pane = new stdClass();
    $pane->pid = 'new-a3f3c277-3ca1-4578-9c12-091c106a7205';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tags';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'tag',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'a3f3c277-3ca1-4578-9c12-091c106a7205';
    $display->content['new-a3f3c277-3ca1-4578-9c12-091c106a7205'] = $pane;
    $display->panels['main'][4] = 'new-a3f3c277-3ca1-4578-9c12-091c106a7205';
    $pane = new stdClass();
    $pane->pid = 'new-e000b091-93f1-4305-b5bc-7ec01ac901af';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_related';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'You may also like',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = 'e000b091-93f1-4305-b5bc-7ec01ac901af';
    $display->content['new-e000b091-93f1-4305-b5bc-7ec01ac901af'] = $pane;
    $display->panels['main'][5] = 'new-e000b091-93f1-4305-b5bc-7ec01ac901af';
    $pane = new stdClass();
    $pane->pid = 'new-d1f64a39-e3c7-4a2b-b30e-4caf6b47f96f';
    $pane->panel = 'main';
    $pane->type = 'entity_field_extra';
    $pane->subtype = 'node:citation';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'view_mode' => 'full',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = 'd1f64a39-e3c7-4a2b-b30e-4caf6b47f96f';
    $display->content['new-d1f64a39-e3c7-4a2b-b30e-4caf6b47f96f'] = $pane;
    $display->panels['main'][6] = 'new-d1f64a39-e3c7-4a2b-b30e-4caf6b47f96f';
    $pane = new stdClass();
    $pane->pid = 'new-f4414d05-fe00-4a1c-9555-7ef0190cb6de';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_pdf';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'medstat_pdf_link',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'f4414d05-fe00-4a1c-9555-7ef0190cb6de';
    $display->content['new-f4414d05-fe00-4a1c-9555-7ef0190cb6de'] = $pane;
    $display->panels['main'][7] = 'new-f4414d05-fe00-4a1c-9555-7ef0190cb6de';
    $pane = new stdClass();
    $pane->pid = 'new-8b1182a9-17e5-4791-9f43-06e5594a4680';
    $pane->panel = 'main';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_references';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '8b1182a9-17e5-4791-9f43-06e5594a4680';
    $display->content['new-8b1182a9-17e5-4791-9f43-06e5594a4680'] = $pane;
    $display->panels['main'][8] = 'new-8b1182a9-17e5-4791-9f43-06e5594a4680';
    $pane = new stdClass();
    $pane->pid = 'new-8851a7bd-d4ae-4672-893e-80fd92c040a7';
    $pane->panel = 'main';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = '8851a7bd-d4ae-4672-893e-80fd92c040a7';
    $display->content['new-8851a7bd-d4ae-4672-893e-80fd92c040a7'] = $pane;
    $display->panels['main'][9] = 'new-8851a7bd-d4ae-4672-893e-80fd92c040a7';
    $pane = new stdClass();
    $pane->pid = 'new-7acf58b4-5ee4-41fb-a86f-9850f3b706c3';
    $pane->panel = 'main_top';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_sections',
          'settings' => array(
            'field_article_sections' => array(
              'und' => array(),
            ),
            'field_article_sections_tid' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => TRUE,
        ),
      ),
    );
    $pane->configuration = array(
      'admin_title' => 'Section',
      'title' => '',
      'body' => '%node:field-article-sections:0',
      'format' => 'simple_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'article-section',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7acf58b4-5ee4-41fb-a86f-9850f3b706c3';
    $display->content['new-7acf58b4-5ee4-41fb-a86f-9850f3b706c3'] = $pane;
    $display->panels['main_top'][0] = 'new-7acf58b4-5ee4-41fb-a86f-9850f3b706c3';
    $pane = new stdClass();
    $pane->pid = 'new-a67242a6-ec25-4559-b9db-049e7f91f367';
    $pane->panel = 'main_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_type';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_sections',
          'settings' => array(
            'field_article_sections' => array(
              'und' => array(),
            ),
            'field_article_sections_tid' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'taxonomy_term_reference_plain',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'article-section',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a67242a6-ec25-4559-b9db-049e7f91f367';
    $display->content['new-a67242a6-ec25-4559-b9db-049e7f91f367'] = $pane;
    $display->panels['main_top'][1] = 'new-a67242a6-ec25-4559-b9db-049e7f91f367';
    $pane = new stdClass();
    $pane->pid = 'new-796e5216-3e1e-4d31-8276-e2d1ce5618ff';
    $pane->panel = 'main_top';
    $pane->type = 'node_title';
    $pane->subtype = 'node_title';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(
        0 => array(
          'name' => 'entity_field_value:node:article:field_article_display_head',
          'settings' => array(
            'field_article_display_head' => array(
              'und' => array(),
            ),
            'field_article_display_head_value' => array(),
            'field_article_display_head_format' => array(),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
    );
    $pane->configuration = array(
      'link' => 0,
      'markup' => 'h1',
      'id' => 'page-title',
      'class' => 'page-title',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => '<none>',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '796e5216-3e1e-4d31-8276-e2d1ce5618ff';
    $display->content['new-796e5216-3e1e-4d31-8276-e2d1ce5618ff'] = $pane;
    $display->panels['main_top'][2] = 'new-796e5216-3e1e-4d31-8276-e2d1ce5618ff';
    $pane = new stdClass();
    $pane->pid = 'new-f7840bcd-65e3-4235-92c5-ae636c5b2a54';
    $pane->panel = 'main_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_display_head';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'f7840bcd-65e3-4235-92c5-ae636c5b2a54';
    $display->content['new-f7840bcd-65e3-4235-92c5-ae636c5b2a54'] = $pane;
    $display->panels['main_top'][3] = 'new-f7840bcd-65e3-4235-92c5-ae636c5b2a54';
    $pane = new stdClass();
    $pane->pid = 'new-37c46759-f1ee-4cf9-a4c3-f15e5f8cb86b';
    $pane->panel = 'main_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_subhead';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => '',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = '37c46759-f1ee-4cf9-a4c3-f15e5f8cb86b';
    $display->content['new-37c46759-f1ee-4cf9-a4c3-f15e5f8cb86b'] = $pane;
    $display->panels['main_top'][4] = 'new-37c46759-f1ee-4cf9-a4c3-f15e5f8cb86b';
    $pane = new stdClass();
    $pane->pid = 'new-39e9ca26-a3bc-4a86-b533-0b279157786c';
    $pane->panel = 'main_top';
    $pane->type = 'node_created';
    $pane->subtype = 'node_created';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'format' => 'medstat_format',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 1,
      'override_title_text' => 'Publish date: ',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'byline',
    );
    $pane->extras = array();
    $pane->position = 5;
    $pane->locks = array();
    $pane->uuid = '39e9ca26-a3bc-4a86-b533-0b279157786c';
    $display->content['new-39e9ca26-a3bc-4a86-b533-0b279157786c'] = $pane;
    $display->panels['main_top'][5] = 'new-39e9ca26-a3bc-4a86-b533-0b279157786c';
    $pane = new stdClass();
    $pane->pid = 'new-9da490b3-d538-4110-b557-24044d7d2174';
    $pane->panel = 'main_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_authors';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'taxonomy_term_reference_link',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '<none>',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'byline',
    );
    $pane->extras = array();
    $pane->position = 6;
    $pane->locks = array();
    $pane->uuid = '9da490b3-d538-4110-b557-24044d7d2174';
    $display->content['new-9da490b3-d538-4110-b557-24044d7d2174'] = $pane;
    $display->panels['main_top'][6] = 'new-9da490b3-d538-4110-b557-24044d7d2174';
    $pane = new stdClass();
    $pane->pid = 'new-df46558d-cd01-46ba-95b6-fae12f13be31';
    $pane->panel = 'main_top';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-ad_top_medium_rectangle_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'when-article-is-expanded--hide page-title-ad',
    );
    $pane->extras = array();
    $pane->position = 7;
    $pane->locks = array();
    $pane->uuid = 'df46558d-cd01-46ba-95b6-fae12f13be31';
    $display->content['new-df46558d-cd01-46ba-95b6-fae12f13be31'] = $pane;
    $display->panels['main_top'][7] = 'new-df46558d-cd01-46ba-95b6-fae12f13be31';
    $pane = new stdClass();
    $pane->pid = 'new-921b0757-782a-446f-bc1b-d520e4a39217';
    $pane->panel = 'main_top';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_article_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 8;
    $pane->locks = array();
    $pane->uuid = '921b0757-782a-446f-bc1b-d520e4a39217';
    $display->content['new-921b0757-782a-446f-bc1b-d520e4a39217'] = $pane;
    $display->panels['main_top'][8] = 'new-921b0757-782a-446f-bc1b-d520e4a39217';
    $pane = new stdClass();
    $pane->pid = 'new-fcbfdab8-cab9-4972-9f9b-a2093f41e270';
    $pane->panel = 'main_top';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr4_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 9;
    $pane->locks = array();
    $pane->uuid = 'fcbfdab8-cab9-4972-9f9b-a2093f41e270';
    $display->content['new-fcbfdab8-cab9-4972-9f9b-a2093f41e270'] = $pane;
    $display->panels['main_top'][9] = 'new-fcbfdab8-cab9-4972-9f9b-a2093f41e270';
    $pane = new stdClass();
    $pane->pid = 'new-33d0ddf0-d351-45eb-a0c9-3f844c15e449';
    $pane->panel = 'offset_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Offset Content MD-IQ',
      'title' => '',
      'body' => '<img src="http://fpoimg.com/334x115?text=MD-IQ Tease" />',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '33d0ddf0-d351-45eb-a0c9-3f844c15e449';
    $display->content['new-33d0ddf0-d351-45eb-a0c9-3f844c15e449'] = $pane;
    $display->panels['offset_region'][0] = 'new-33d0ddf0-d351-45eb-a0c9-3f844c15e449';
    $pane = new stdClass();
    $pane->pid = 'new-34ee14a7-7fac-424d-b266-15d89f0f12d2';
    $pane->panel = 'offset_region';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Offset Region Drug Info Teaser',
      'title' => '',
      'body' => '<img src="http://fpoimg.com/334x115?text=Drug Info Tease" />',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '34ee14a7-7fac-424d-b266-15d89f0f12d2';
    $display->content['new-34ee14a7-7fac-424d-b266-15d89f0f12d2'] = $pane;
    $display->panels['offset_region'][1] = 'new-34ee14a7-7fac-424d-b266-15d89f0f12d2';
    $pane = new stdClass();
    $pane->pid = 'new-4e072cd4-ecf0-438a-a266-6f02890507a9';
    $pane->panel = 'offset_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-ad_native_offset';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '4e072cd4-ecf0-438a-a266-6f02890507a9';
    $display->content['new-4e072cd4-ecf0-438a-a266-6f02890507a9'] = $pane;
    $display->panels['offset_region'][2] = 'new-4e072cd4-ecf0-438a-a266-6f02890507a9';
    $pane = new stdClass();
    $pane->pid = 'new-b4c3ae4e-ef90-4b5b-a5f3-ff582d9899e3';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b4c3ae4e-ef90-4b5b-a5f3-ff582d9899e3';
    $display->content['new-b4c3ae4e-ef90-4b5b-a5f3-ff582d9899e3'] = $pane;
    $display->panels['sidebar'][0] = 'new-b4c3ae4e-ef90-4b5b-a5f3-ff582d9899e3';
    $pane = new stdClass();
    $pane->pid = 'new-16e15e81-af62-452d-9cf3-365de5d3b612';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '16e15e81-af62-452d-9cf3-365de5d3b612';
    $display->content['new-16e15e81-af62-452d-9cf3-365de5d3b612'] = $pane;
    $display->panels['sidebar'][1] = 'new-16e15e81-af62-452d-9cf3-365de5d3b612';
    $pane = new stdClass();
    $pane->pid = 'new-478e2ce2-3897-4cca-8a70-4b17728a8e79';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '478e2ce2-3897-4cca-8a70-4b17728a8e79';
    $display->content['new-478e2ce2-3897-4cca-8a70-4b17728a8e79'] = $pane;
    $display->panels['sidebar'][2] = 'new-478e2ce2-3897-4cca-8a70-4b17728a8e79';
    $pane = new stdClass();
    $pane->pid = 'new-785e4c99-4249-4405-a23a-6966c523c694';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_leaderboard_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '785e4c99-4249-4405-a23a-6966c523c694';
    $display->content['new-785e4c99-4249-4405-a23a-6966c523c694'] = $pane;
    $display->panels['top_region'][0] = 'new-785e4c99-4249-4405-a23a-6966c523c694';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view__article-questionnaire'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function medstat_quizz_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'md_iq_pub_homepage';
  $page->task = 'page';
  $page->admin_title = 'MD-IQ Pub Homepage';
  $page->admin_description = 'The MD-IQ homepage for a given publication.';
  $page->path = 'taxonomy/term/%taxonomy_term/md-iq';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'taxonomy_term' => array(
      'id' => 1,
      'identifier' => 'Taxonomy term: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          6 => '6',
          4 => 0,
          2 => 0,
          11 => 0,
          10 => 0,
          3 => 0,
          9 => 0,
          8 => 0,
          1 => 0,
          7 => 0,
        ),
        'breadcrumb' => 1,
        'transform' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_md_iq_pub_homepage__panel';
  $handler->task = 'page';
  $handler->subtask = 'md_iq_pub_homepage';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Publication',
        'keyword' => 'publication',
        'name' => 'publication',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Featured Quiz',
        'keyword' => 'featured_quiz',
        'name' => 'featured_quiz',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'logic' => 'and',
      'plugins' => array(
        0 => array(
          'name' => 'entity_bundle:taxonomy_term',
          'settings' => array(
            'type' => array(
              'publications' => 'publications',
            ),
          ),
          'context' => 'argument_term_1',
          'not' => FALSE,
        ),
      ),
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => 'MD-IQ | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'medstat_quiz';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'content_top' => NULL,
      'question_header' => NULL,
      'question_content' => NULL,
      'content_bottom' => NULL,
      'bottom_region' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'd0e86cf9-a8a8-4a96-9fb3-1414e9cf544d';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-69b490bc-aca1-44f8-ac67-bd8b0417f948';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '69b490bc-aca1-44f8-ac67-bd8b0417f948';
    $display->content['new-69b490bc-aca1-44f8-ac67-bd8b0417f948'] = $pane;
    $display->panels['content_bottom'][0] = 'new-69b490bc-aca1-44f8-ac67-bd8b0417f948';
    $pane = new stdClass();
    $pane->pid = 'new-c63422ef-6ceb-4906-bfe2-1937ce6b7fbb';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'medstat_quiz_listing_panes-medstat_md_iq_by_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'arguments' => array(
        'field_article_publications_tid' => '%publication:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'c63422ef-6ceb-4906-bfe2-1937ce6b7fbb';
    $display->content['new-c63422ef-6ceb-4906-bfe2-1937ce6b7fbb'] = $pane;
    $display->panels['content_bottom'][1] = 'new-c63422ef-6ceb-4906-bfe2-1937ce6b7fbb';
    $pane = new stdClass();
    $pane->pid = 'new-b97111b2-59d3-4619-9bd3-f4628f763f1e';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b97111b2-59d3-4619-9bd3-f4628f763f1e';
    $display->content['new-b97111b2-59d3-4619-9bd3-f4628f763f1e'] = $pane;
    $display->panels['content_bottom'][2] = 'new-b97111b2-59d3-4619-9bd3-f4628f763f1e';
    $pane = new stdClass();
    $pane->pid = 'new-4bb0b675-cdf4-41df-b0d4-b5c6fbc9e95a';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '4bb0b675-cdf4-41df-b0d4-b5c6fbc9e95a';
    $display->content['new-4bb0b675-cdf4-41df-b0d4-b5c6fbc9e95a'] = $pane;
    $display->panels['content_bottom'][3] = 'new-4bb0b675-cdf4-41df-b0d4-b5c6fbc9e95a';
    $pane = new stdClass();
    $pane->pid = 'new-b1b33627-2b74-429c-9139-c129e47d43c8';
    $pane->panel = 'content_top';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr4_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b1b33627-2b74-429c-9139-c129e47d43c8';
    $display->content['new-b1b33627-2b74-429c-9139-c129e47d43c8'] = $pane;
    $display->panels['content_top'][0] = 'new-b1b33627-2b74-429c-9139-c129e47d43c8';
    $pane = new stdClass();
    $pane->pid = 'new-a9e055e4-346c-4552-84b7-acecfd17f684';
    $pane->panel = 'question_content';
    $pane->type = 'md_iq_featured_quiz';
    $pane->subtype = 'md_iq_featured_quiz';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 1,
      'override_title_text' => '',
      'display_style' => 'take',
      'context' => 'context_featured_quiz_1',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a9e055e4-346c-4552-84b7-acecfd17f684';
    $display->content['new-a9e055e4-346c-4552-84b7-acecfd17f684'] = $pane;
    $display->panels['question_content'][0] = 'new-a9e055e4-346c-4552-84b7-acecfd17f684';
    $pane = new stdClass();
    $pane->pid = 'new-e0ea1769-a0bf-4e34-b14b-6da4020cf909';
    $pane->panel = 'question_header';
    $pane->type = 'md_iq_header';
    $pane->subtype = 'md_iq_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Medical Intelligence Quiz',
      'content' => array(
        'value' => '<p>Challenge Yourself, Build Your Knowledge</p>',
        'format' => 'filtered_html',
      ),
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'default',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e0ea1769-a0bf-4e34-b14b-6da4020cf909';
    $display->content['new-e0ea1769-a0bf-4e34-b14b-6da4020cf909'] = $pane;
    $display->panels['question_header'][0] = 'new-e0ea1769-a0bf-4e34-b14b-6da4020cf909';
    $pane = new stdClass();
    $pane->pid = 'new-9b37df22-359e-473c-9c4d-ed93122d9959';
    $pane->panel = 'question_header';
    $pane->type = 'custom';
    $pane->subtype = 'custom';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'admin_title' => 'Featured Header',
      'title' => '',
      'body' => '<h3 class="mdiq-featured-quiz-header">Featured</h3>',
      'format' => 'full_html',
      'substitute' => 1,
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '9b37df22-359e-473c-9c4d-ed93122d9959';
    $display->content['new-9b37df22-359e-473c-9c4d-ed93122d9959'] = $pane;
    $display->panels['question_header'][1] = 'new-9b37df22-359e-473c-9c4d-ed93122d9959';
    $pane = new stdClass();
    $pane->pid = 'new-479eb771-94a6-42b5-960b-f4436a033a25';
    $pane->panel = 'question_header';
    $pane->type = 'token';
    $pane->subtype = 'quiz_entity:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'context_featured_quiz_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'style' => 'default',
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'pane-title',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '479eb771-94a6-42b5-960b-f4436a033a25';
    $display->content['new-479eb771-94a6-42b5-960b-f4436a033a25'] = $pane;
    $display->panels['question_header'][2] = 'new-479eb771-94a6-42b5-960b-f4436a033a25';
    $pane = new stdClass();
    $pane->pid = 'new-d435b26e-9644-4fd7-ad7d-7413329e7a29';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd435b26e-9644-4fd7-ad7d-7413329e7a29';
    $display->content['new-d435b26e-9644-4fd7-ad7d-7413329e7a29'] = $pane;
    $display->panels['sidebar'][0] = 'new-d435b26e-9644-4fd7-ad7d-7413329e7a29';
    $pane = new stdClass();
    $pane->pid = 'new-d6fe03a9-9fd7-4e15-a845-49063616ede0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'd6fe03a9-9fd7-4e15-a845-49063616ede0';
    $display->content['new-d6fe03a9-9fd7-4e15-a845-49063616ede0'] = $pane;
    $display->panels['sidebar'][1] = 'new-d6fe03a9-9fd7-4e15-a845-49063616ede0';
    $pane = new stdClass();
    $pane->pid = 'new-bed52b14-0492-4571-9884-91ce90cb1edd';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'bed52b14-0492-4571-9884-91ce90cb1edd';
    $display->content['new-bed52b14-0492-4571-9884-91ce90cb1edd'] = $pane;
    $display->panels['sidebar'][2] = 'new-bed52b14-0492-4571-9884-91ce90cb1edd';
    $pane = new stdClass();
    $pane->pid = 'new-14affc81-ffc1-40b2-b26d-287bac760ae5';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_leaderboard_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
      'style' => 'naked',
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '14affc81-ffc1-40b2-b26d-287bac760ae5';
    $display->content['new-14affc81-ffc1-40b2-b26d-287bac760ae5'] = $pane;
    $display->panels['top_region'][0] = 'new-14affc81-ffc1-40b2-b26d-287bac760ae5';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['md_iq_pub_homepage'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'medstat_quiz_page';
  $page->task = 'page';
  $page->admin_title = 'Quiz Page';
  $page->admin_description = '';
  $page->path = 'quiz/%quizz/path_term/%publication/!subpage';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
  );
  $page->menu = array();
  $page->arguments = array(
    'quizz' => array(
      'id' => 1,
      'identifier' => 'Quiz: ID',
      'name' => 'entity_id:quiz_entity',
      'settings' => array(),
    ),
    'publication' => array(
      'id' => 1,
      'identifier' => 'Publication: ID',
      'name' => 'term',
      'settings' => array(
        'input_form' => 'tid',
        'vids' => array(
          6 => '6',
          4 => 0,
          2 => 0,
          10 => 0,
          3 => 0,
          9 => 0,
          8 => 0,
          1 => 0,
          7 => 0,
        ),
        'breadcrumb' => 0,
        'transform' => 0,
      ),
    ),
    'subpage' => array(
      'id' => 1,
      'identifier' => 'Subpage String',
      'name' => 'string',
      'settings' => array(
        'use_tail' => 0,
      ),
    ),
  );
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_medstat_quiz_page__panel';
  $handler->task = 'page';
  $handler->subtask = 'medstat_quiz_page';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Quiz Entity',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'md-iq-content',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Quiz Series',
        'keyword' => 'quiz_series',
        'name' => 'quiz_series',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Publication',
        'keyword' => 'publication',
        'name' => 'publication',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'panel',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_length',
          'settings' => array(
            'operator' => '=',
            'length' => '0',
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
    'metatag_panels' => array(
      'enabled' => 1,
      'metatags' => array(
        'title' => array(
          'value' => '%quizz:title | [site:name]',
        ),
      ),
    ),
  );
  $display = new panels_display();
  $display->layout = 'medstat_quiz';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'content_top' => NULL,
      'question_header' => NULL,
      'question_content' => NULL,
      'content_bottom' => NULL,
      'bottom_region' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ff7ab02f-7bc7-4ea4-9c01-6a901ecf9145';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-177ec796-f74c-4462-9d89-2bf2be3767be';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '177ec796-f74c-4462-9d89-2bf2be3767be';
    $display->content['new-177ec796-f74c-4462-9d89-2bf2be3767be'] = $pane;
    $display->panels['content_bottom'][0] = 'new-177ec796-f74c-4462-9d89-2bf2be3767be';
    $pane = new stdClass();
    $pane->pid = 'new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'medstat_quiz_listing_panes-medstat_md_iq_by_topic';
    $pane->shown = TRUE;
    $pane->access = array(
      'plugins' => array(),
    );
    $pane->configuration = array(
      'arguments' => array(
        'field_article_publications_tid' => '%publication:tid',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $display->content['new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d'] = $pane;
    $display->panels['content_bottom'][1] = 'new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $pane = new stdClass();
    $pane->pid = 'new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $display->content['new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0'] = $pane;
    $display->panels['content_bottom'][2] = 'new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $pane = new stdClass();
    $pane->pid = 'new-6ec33df1-9256-48f8-930f-80aeb20aa138';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6ec33df1-9256-48f8-930f-80aeb20aa138';
    $display->content['new-6ec33df1-9256-48f8-930f-80aeb20aa138'] = $pane;
    $display->panels['content_bottom'][3] = 'new-6ec33df1-9256-48f8-930f-80aeb20aa138';
    $pane = new stdClass();
    $pane->pid = 'new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $pane->panel = 'content_top';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr4_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $display->content['new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0'] = $pane;
    $display->panels['content_top'][0] = 'new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $pane = new stdClass();
    $pane->pid = 'new-60364099-6891-4c07-a7d0-6319db78db4e';
    $pane->panel = 'question_content';
    $pane->type = 'entity_field';
    $pane->subtype = 'quiz_entity:quiz_body';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'hidden',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'argument_entity_id:quiz_entity_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '60364099-6891-4c07-a7d0-6319db78db4e';
    $display->content['new-60364099-6891-4c07-a7d0-6319db78db4e'] = $pane;
    $display->panels['question_content'][0] = 'new-60364099-6891-4c07-a7d0-6319db78db4e';
    $pane = new stdClass();
    $pane->pid = 'new-f39c4a84-fb2d-436a-bc8f-39695fe64490';
    $pane->panel = 'question_content';
    $pane->type = 'md_iq_take';
    $pane->subtype = 'md_iq_take';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'f39c4a84-fb2d-436a-bc8f-39695fe64490';
    $display->content['new-f39c4a84-fb2d-436a-bc8f-39695fe64490'] = $pane;
    $display->panels['question_content'][1] = 'new-f39c4a84-fb2d-436a-bc8f-39695fe64490';
    $pane = new stdClass();
    $pane->pid = 'new-ce414331-285a-4420-8992-01e0d6e43c10';
    $pane->panel = 'question_header';
    $pane->type = 'md_iq_header';
    $pane->subtype = 'md_iq_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Medical Intelligence Quiz',
      'content' => array(
        'value' => '<p>Challenge Yourself, Build Your Knowledge</p>',
        'format' => 'filtered_html',
      ),
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce414331-285a-4420-8992-01e0d6e43c10';
    $display->content['new-ce414331-285a-4420-8992-01e0d6e43c10'] = $pane;
    $display->panels['question_header'][0] = 'new-ce414331-285a-4420-8992-01e0d6e43c10';
    $pane = new stdClass();
    $pane->pid = 'new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $pane->panel = 'question_header';
    $pane->type = 'token';
    $pane->subtype = 'quiz_entity:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:quiz_entity_1',
      'override_title' => 1,
      'override_title_text' => '',
      'override_title_heading' => 'span',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $display->content['new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb'] = $pane;
    $display->panels['question_header'][1] = 'new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $pane = new stdClass();
    $pane->pid = 'new-9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $display->content['new-9bdff4ac-f405-4845-86c0-cdac65d54b1b'] = $pane;
    $display->panels['sidebar'][0] = 'new-9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $pane = new stdClass();
    $pane->pid = 'new-5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $display->content['new-5281d87a-4cbb-45f1-940d-634c1d035c6e'] = $pane;
    $display->panels['sidebar'][1] = 'new-5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $pane = new stdClass();
    $pane->pid = 'new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $display->content['new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0'] = $pane;
    $display->panels['sidebar'][2] = 'new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $pane = new stdClass();
    $pane->pid = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_leaderboard_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbc28470-5ccf-41fc-ac21-752444b972af';
    $display->content['new-cbc28470-5ccf-41fc-ac21-752444b972af'] = $pane;
    $display->panels['top_region'][0] = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
  $display->hide_title = PANELS_TITLE_NONE;
  $display->title_pane = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_medstat_quiz_page__quiz-results';
  $handler->task = 'page';
  $handler->subtask = 'medstat_quiz_page';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Quiz Results',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => 'md-iq-content',
    'css_id' => '',
    'css' => '',
    'contexts' => array(
      0 => array(
        'identifier' => 'Quiz Series',
        'keyword' => 'quiz_series',
        'name' => 'quiz_series',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Publication',
        'keyword' => 'publication',
        'name' => 'publication',
        'id' => 1,
      ),
    ),
    'relationships' => array(),
    'name' => 'quiz-results',
    'pathalias' => '%publication:url:path/quiz/%quizz:qid/%quizz:title/results',
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'string_equal',
          'settings' => array(
            'operator' => '=',
            'value' => 'results',
            'case' => 0,
          ),
          'context' => 'argument_string_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'medstat_quiz';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'top_region' => NULL,
      'content_top' => NULL,
      'question_header' => NULL,
      'question_content' => NULL,
      'content_bottom' => NULL,
      'bottom_region' => NULL,
      'sidebar' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '%quizz:title';
  $display->uuid = 'ff7ab02f-7bc7-4ea4-9c01-6a901ecf9145';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-177ec796-f74c-4462-9d89-2bf2be3767be';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '177ec796-f74c-4462-9d89-2bf2be3767be';
    $display->content['new-177ec796-f74c-4462-9d89-2bf2be3767be'] = $pane;
    $display->panels['content_bottom'][0] = 'new-177ec796-f74c-4462-9d89-2bf2be3767be';
    $pane = new stdClass();
    $pane->pid = 'new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $pane->panel = 'content_bottom';
    $pane->type = 'views_panes';
    $pane->subtype = 'medstat_quiz_listing_panes-medstat_md_iq_by_topic';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $display->content['new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d'] = $pane;
    $display->panels['content_bottom'][1] = 'new-a2188a64-4cce-4b36-a32c-2a6c5412bc6d';
    $pane = new stdClass();
    $pane->pid = 'new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $display->content['new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0'] = $pane;
    $display->panels['content_bottom'][2] = 'new-dca40808-0468-47e7-ba2b-6ca53b2fd9f0';
    $pane = new stdClass();
    $pane->pid = 'new-6ec33df1-9256-48f8-930f-80aeb20aa138';
    $pane->panel = 'content_bottom';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '6ec33df1-9256-48f8-930f-80aeb20aa138';
    $display->content['new-6ec33df1-9256-48f8-930f-80aeb20aa138'] = $pane;
    $display->panels['content_bottom'][3] = 'new-6ec33df1-9256-48f8-930f-80aeb20aa138';
    $pane = new stdClass();
    $pane->pid = 'new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $pane->panel = 'content_top';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr4_m';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $display->content['new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0'] = $pane;
    $display->panels['content_top'][0] = 'new-a10c7b24-d5c2-413d-b358-e2d8ed8e92e0';
    $pane = new stdClass();
    $pane->pid = 'new-3428c5c2-0764-4c0d-8892-a31e0251309b';
    $pane->panel = 'question_content';
    $pane->type = 'md_iq_take_summary';
    $pane->subtype = 'md_iq_take_summary';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3428c5c2-0764-4c0d-8892-a31e0251309b';
    $display->content['new-3428c5c2-0764-4c0d-8892-a31e0251309b'] = $pane;
    $display->panels['question_content'][0] = 'new-3428c5c2-0764-4c0d-8892-a31e0251309b';
    $pane = new stdClass();
    $pane->pid = 'new-ce414331-285a-4420-8992-01e0d6e43c10';
    $pane->panel = 'question_header';
    $pane->type = 'md_iq_header';
    $pane->subtype = 'md_iq_header';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => 'Medical Intelligence Quiz',
      'content' => array(
        'value' => '<p>Challenge Yourself, Build Your Knowledge</p>',
        'format' => 'filtered_html',
      ),
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ce414331-285a-4420-8992-01e0d6e43c10';
    $display->content['new-ce414331-285a-4420-8992-01e0d6e43c10'] = $pane;
    $display->panels['question_header'][0] = 'new-ce414331-285a-4420-8992-01e0d6e43c10';
    $pane = new stdClass();
    $pane->pid = 'new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $pane->panel = 'question_header';
    $pane->type = 'token';
    $pane->subtype = 'quiz_entity:title';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'sanitize' => 1,
      'context' => 'argument_entity_id:quiz_entity_1',
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $display->content['new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb'] = $pane;
    $display->panels['question_header'][1] = 'new-bfc0d2d9-e533-45da-a6ce-efc7048c4fbb';
    $pane = new stdClass();
    $pane->pid = 'new-9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr1_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $display->content['new-9bdff4ac-f405-4845-86c0-cdac65d54b1b'] = $pane;
    $display->panels['sidebar'][0] = 'new-9bdff4ac-f405-4845-86c0-cdac65d54b1b';
    $pane = new stdClass();
    $pane->pid = 'new-5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr2_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $display->content['new-5281d87a-4cbb-45f1-940d-634c1d035c6e'] = $pane;
    $display->panels['sidebar'][1] = 'new-5281d87a-4cbb-45f1-940d-634c1d035c6e';
    $pane = new stdClass();
    $pane->pid = 'new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $pane->panel = 'sidebar';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_mr3_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $display->content['new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0'] = $pane;
    $display->panels['sidebar'][2] = 'new-2c0689bb-c8d4-45f8-8e16-932a5e5397f0';
    $pane = new stdClass();
    $pane->pid = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
    $pane->panel = 'top_region';
    $pane->type = 'block';
    $pane->subtype = 'medstat_dfp-medstat_dfp_leaderboard_d';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
      'override_title_heading' => 'h2',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'cbc28470-5ccf-41fc-ac21-752444b972af';
    $display->content['new-cbc28470-5ccf-41fc-ac21-752444b972af'] = $pane;
    $display->panels['top_region'][0] = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-cbc28470-5ccf-41fc-ac21-752444b972af';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['medstat_quiz_page'] = $page;

  return $pages;

}
