<?php
/**
 * @file
 * antistatique_site.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function antistatique_site_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'breadcrumb';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Breadcrumb';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['css_class'] = 'btn-group';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['style_plugin'] = 'list';
  $handler->display->display_options['style_options']['default_row_class'] = FALSE;
  $handler->display->display_options['style_options']['row_class_special'] = FALSE;
  $handler->display->display_options['style_options']['class'] = 'dropdown-menu';
  $handler->display->display_options['style_options']['wrapper_class'] = '';
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  /* Header: Global: Text area */
  $handler->display->display_options['header']['area']['id'] = 'area';
  $handler->display->display_options['header']['area']['table'] = 'views';
  $handler->display->display_options['header']['area']['field'] = 'area';
  $handler->display->display_options['header']['area']['content'] = '<a href="#" class="text-strong dropdown-toggle" data-toggle="dropdown">[field_breadcrumb_tagline_1] <span class="caret"></span></a>';
  $handler->display->display_options['header']['area']['format'] = 'full_html';
  $handler->display->display_options['header']['area']['tokenize'] = TRUE;
  /* Field: Content: Breadcrumb Tagline */
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['id'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['table'] = 'field_data_field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['field'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['empty'] = '[node:url]';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Breadcrumb Tagline */
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['id'] = 'field_breadcrumb_tagline_1';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['table'] = 'field_data_field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['field'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['label'] = '';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['field_api_classes'] = TRUE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['tid']['reduce_duplicates'] = TRUE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );

  /* Display: Dropdown */
  $handler = $view->new_display('block', 'Dropdown', 'block');
  $handler->display->display_options['block_description'] = 'Dropdown';

  /* Display: Jump Menu Pages */
  $handler = $view->new_display('block', 'Jump Menu Pages', 'block_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = '';
  $handler->display->display_options['style_options']['choose'] = '';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Breadcrumb Tagline */
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['id'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['table'] = 'field_data_field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['field'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['label'] = '';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['empty'] = 'No tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['type'] = 'title_linked';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['settings'] = array(
    'title_style' => '_none',
    'title_link' => 'content',
    'title_class' => '',
  );
  /* Field: Content: Breadcrumb Tagline */
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['id'] = 'field_breadcrumb_tagline_1';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['table'] = 'field_data_field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['field'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['label'] = '';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_label_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['type'] = 'text_plain';
  $handler->display->display_options['fields']['field_breadcrumb_tagline_1']['field_api_classes'] = TRUE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['limit'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['tid']['specify_validation'] = TRUE;
  $handler->display->display_options['arguments']['tid']['validate']['type'] = 'taxonomy_term';
  $handler->display->display_options['arguments']['tid']['validate_options']['vocabularies'] = array(
    'section' => 'section',
  );
  $handler->display->display_options['arguments']['tid']['require_value'] = TRUE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'page' => 'page',
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['operator'] = '!=';
  $handler->display->display_options['filters']['nid']['value']['value'] = '12';
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['filters']['nid_1']['table'] = 'node';
  $handler->display->display_options['filters']['nid_1']['field'] = 'nid';
  $handler->display->display_options['filters']['nid_1']['operator'] = '!=';
  $handler->display->display_options['filters']['nid_1']['value']['value'] = '25';
  $handler->display->display_options['block_description'] = 'Jump Menu Pages';

  /* Display: Jump Menu Blog */
  $handler = $view->new_display('block', 'Jump Menu Blog', 'block_2');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = '';
  $handler->display->display_options['style_options']['choose'] = '';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Content: Taxonomy terms on node */
  $handler->display->display_options['relationships']['term_node_tid']['id'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['table'] = 'node';
  $handler->display->display_options['relationships']['term_node_tid']['field'] = 'term_node_tid';
  $handler->display->display_options['relationships']['term_node_tid']['label'] = 'Category';
  $handler->display->display_options['relationships']['term_node_tid']['vocabularies'] = array(
    'category' => 'category',
    'section' => 0,
    'skills' => 0,
  );
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Taxonomy term: Name */
  $handler->display->display_options['fields']['name']['id'] = 'name';
  $handler->display->display_options['fields']['name']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['name']['field'] = 'name';
  $handler->display->display_options['fields']['name']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['name']['label'] = '';
  $handler->display->display_options['fields']['name']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['name']['link_to_taxonomy'] = TRUE;
  /* Field: Taxonomy term: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['relationship'] = 'term_node_tid';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Taxonomy term: Vocabulary */
  $handler->display->display_options['filters']['vid']['id'] = 'vid';
  $handler->display->display_options['filters']['vid']['table'] = 'taxonomy_term_data';
  $handler->display->display_options['filters']['vid']['field'] = 'vid';
  $handler->display->display_options['filters']['vid']['relationship'] = 'term_node_tid';
  $handler->display->display_options['filters']['vid']['value'] = array(
    1 => '1',
  );
  $handler->display->display_options['block_description'] = 'Jump Menu Blog';

  /* Display: Jump Menu Projects */
  $handler = $view->new_display('block', 'Jump Menu Projects', 'block_4');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'jump_menu';
  $handler->display->display_options['style_options']['hide'] = TRUE;
  $handler->display->display_options['style_options']['path'] = 'path';
  $handler->display->display_options['style_options']['text'] = '';
  $handler->display->display_options['style_options']['choose'] = '';
  $handler->display->display_options['style_options']['default_value'] = TRUE;
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'fields';
  $handler->display->display_options['row_options']['default_field_elements'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Path */
  $handler->display->display_options['fields']['path']['id'] = 'path';
  $handler->display->display_options['fields']['path']['table'] = 'node';
  $handler->display->display_options['fields']['path']['field'] = 'path';
  $handler->display->display_options['fields']['path']['label'] = '';
  $handler->display->display_options['fields']['path']['exclude'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['path']['alter']['text'] = '[path]';
  $handler->display->display_options['fields']['path']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['path']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['path']['absolute'] = TRUE;
  /* Field: Content: Client */
  $handler->display->display_options['fields']['field_client']['id'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['table'] = 'field_data_field_client';
  $handler->display->display_options['fields']['field_client']['field'] = 'field_client';
  $handler->display->display_options['fields']['field_client']['label'] = '';
  $handler->display->display_options['fields']['field_client']['element_type'] = '0';
  $handler->display->display_options['fields']['field_client']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['field_client']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_client']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_client']['empty'] = '-client name missing-';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'project' => 'project',
  );
  $handler->display->display_options['block_description'] = 'Jump Menu Projects';
  $translatables['breadcrumb'] = array(
    t('Master'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('<a href="#" class="text-strong dropdown-toggle" data-toggle="dropdown">[field_breadcrumb_tagline_1] <span class="caret"></span></a>'),
    t('[node:url]'),
    t('All'),
    t('Dropdown'),
    t('Jump Menu Pages'),
    t('No tagline'),
    t('[path]'),
    t('Jump Menu Blog'),
    t('Category'),
    t('Jump Menu Projects'),
    t('-client name missing-'),
  );
  $export['breadcrumb'] = $view;

  return $export;
}
