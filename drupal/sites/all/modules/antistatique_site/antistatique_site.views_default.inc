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
  $handler->display->display_options['access']['perm'] = 'create page content';
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
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'breadcrumb:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_arguments'] = 'none';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_section_tid']['value'] = array(
    18 => '18',
    19 => '19',
    20 => '20',
  );
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';
  $handler->display->display_options['block_description'] = 'Jump Menu Pages';

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
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Content: Year (field_year) */
  $handler->display->display_options['sorts']['field_year_value']['id'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['table'] = 'field_data_field_year';
  $handler->display->display_options['sorts']['field_year_value']['field'] = 'field_year_value';
  $handler->display->display_options['sorts']['field_year_value']['order'] = 'DESC';
  /* Sort criterion: Content: Client (field_client) */
  $handler->display->display_options['sorts']['field_client_value']['id'] = 'field_client_value';
  $handler->display->display_options['sorts']['field_client_value']['table'] = 'field_data_field_client';
  $handler->display->display_options['sorts']['field_client_value']['field'] = 'field_client_value';
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

  /* Display: Order pages in breadcrumb */
  $handler = $view->new_display('page', 'Order pages in breadcrumb', 'page_1');
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_breadcrumb_tagline' => 'field_breadcrumb_tagline',
    'field_breadcrumb_tagline_1' => 'field_breadcrumb_tagline_1',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_breadcrumb_tagline' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_breadcrumb_tagline_1' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Draggableviews: Content */
  $handler->display->display_options['fields']['draggableviews']['id'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['table'] = 'node';
  $handler->display->display_options['fields']['draggableviews']['field'] = 'draggableviews';
  $handler->display->display_options['fields']['draggableviews']['label'] = '';
  $handler->display->display_options['fields']['draggableviews']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['hide_alter_empty'] = FALSE;
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['hierarchy_handler'] = 'draggableviews_hierarchy_handler_native';
  $handler->display->display_options['fields']['draggableviews']['draggableviews']['ajax'] = 0;
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  /* Field: Content: Section */
  $handler->display->display_options['fields']['field_section']['id'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['table'] = 'field_data_field_section';
  $handler->display->display_options['fields']['field_section']['field'] = 'field_section';
  $handler->display->display_options['fields']['field_section']['element_type'] = '0';
  $handler->display->display_options['fields']['field_section']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_section']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_section']['field_api_classes'] = TRUE;
  /* Field: Content: Breadcrumb Tagline */
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['id'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['table'] = 'field_data_field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['field'] = 'field_breadcrumb_tagline';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['label'] = 'Breadcrumb';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_wrapper_type'] = '0';
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['element_default_classes'] = FALSE;
  $handler->display->display_options['fields']['field_breadcrumb_tagline']['field_api_classes'] = TRUE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Actions';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  $handler->display->display_options['defaults']['sorts'] = FALSE;
  /* Sort criterion: Draggableviews: Weight */
  $handler->display->display_options['sorts']['weight']['id'] = 'weight';
  $handler->display->display_options['sorts']['weight']['table'] = 'draggableviews_structure';
  $handler->display->display_options['sorts']['weight']['field'] = 'weight';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_view'] = 'breadcrumb:page_1';
  $handler->display->display_options['sorts']['weight']['draggableviews_setting_new_items_bottom_list'] = 1;
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
    'page' => 'page',
  );
  /* Filter criterion: Content: Section (field_section) */
  $handler->display->display_options['filters']['field_section_tid']['id'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['table'] = 'field_data_field_section';
  $handler->display->display_options['filters']['field_section_tid']['field'] = 'field_section_tid';
  $handler->display->display_options['filters']['field_section_tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['field_section_tid']['type'] = 'select';
  $handler->display->display_options['filters']['field_section_tid']['vocabulary'] = 'section';
  $handler->display->display_options['path'] = 'admin/order-breadcrumb';
  $handler->display->display_options['menu']['type'] = 'normal';
  $handler->display->display_options['menu']['title'] = 'Order pages in breadcrumb';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'management';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
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
    t('Content'),
    t('All'),
    t('Dropdown'),
    t('Jump Menu Pages'),
    t('No tagline'),
    t('[path]'),
    t('Jump Menu Projects'),
    t('-client name missing-'),
    t('Order pages in breadcrumb'),
    t('Title'),
    t('Section'),
    t('Breadcrumb'),
    t('Actions'),
  );
  $export['breadcrumb'] = $view;

  $view = new view();
  $view->name = 'translations';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Translations';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Content needing translation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['access']['perm'] = 'translate content';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['tags']['first'] = '« première page';
  $handler->display->display_options['pager']['options']['tags']['previous'] = '‹ précédent';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
    'nid' => 'nid',
    'edit_node' => 'nid',
  );
  $handler->display->display_options['style_options']['default'] = 'title';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 1,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'nid' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => ' ',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* No results behavior: Global: Text area */
  $handler->display->display_options['empty']['area']['id'] = 'area';
  $handler->display->display_options['empty']['area']['table'] = 'views';
  $handler->display->display_options['empty']['area']['field'] = 'area';
  $handler->display->display_options['empty']['area']['empty'] = TRUE;
  $handler->display->display_options['empty']['area']['content'] = '**No content is needing translation right now!**';
  $handler->display->display_options['empty']['area']['format'] = 'markdown';
  /* Relationship: Broken/missing handler */
  $handler->display->display_options['relationships']['flag_content_rel']['id'] = 'flag_content_rel';
  $handler->display->display_options['relationships']['flag_content_rel']['table'] = 'node';
  $handler->display->display_options['relationships']['flag_content_rel']['field'] = 'flag_content_rel';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['element_label_colon'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Operations';
  $handler->display->display_options['fields']['nid']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['text'] = 'translate';
  $handler->display->display_options['fields']['nid']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nid']['alter']['path'] = 'node/[nid]/translate';
  $handler->display->display_options['fields']['nid']['element_label_colon'] = FALSE;
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = '';
  $handler->display->display_options['fields']['edit_node']['alter']['alter_text'] = TRUE;
  $handler->display->display_options['fields']['edit_node']['alter']['text'] = ' edit';
  $handler->display->display_options['fields']['edit_node']['element_label_colon'] = FALSE;
  /* Field: Content: Updated date */
  $handler->display->display_options['fields']['changed']['id'] = 'changed';
  $handler->display->display_options['fields']['changed']['table'] = 'node';
  $handler->display->display_options['fields']['changed']['field'] = 'changed';
  $handler->display->display_options['fields']['changed']['label'] = 'Last updated';
  $handler->display->display_options['fields']['changed']['date_format'] = 'short';
  $handler->display->display_options['fields']['changed']['second_date_format'] = 'long';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Ready for translation (field_needs_translation) */
  $handler->display->display_options['filters']['field_needs_translation_value']['id'] = 'field_needs_translation_value';
  $handler->display->display_options['filters']['field_needs_translation_value']['table'] = 'field_data_field_needs_translation';
  $handler->display->display_options['filters']['field_needs_translation_value']['field'] = 'field_needs_translation_value';
  $handler->display->display_options['filters']['field_needs_translation_value']['value'] = array(
    1 => '1',
  );

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block_1');
  $handler->display->display_options['block_description'] = 'Needs translation';
  $translatables['translations'] = array(
    t('Master'),
    t('Content needing translation'),
    t('more'),
    t('Apply'),
    t('Reset'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('Items per page'),
    t('- All -'),
    t('Offset'),
    t('« première page'),
    t('‹ précédent'),
    t('next ›'),
    t('last »'),
    t('**No content is needing translation right now!**'),
    t('flag_content_rel'),
    t('Title'),
    t('Operations'),
    t('translate'),
    t(' edit'),
    t('Last updated'),
    t('Block'),
    t('Needs translation'),
  );
  $export['translations'] = $view;

  return $export;
}
