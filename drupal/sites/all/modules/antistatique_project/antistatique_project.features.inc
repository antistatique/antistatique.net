<?php
/**
 * @file
 * antistatique_project.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_project_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
  }
  if ($module == "picture" && $api == "default_picture_mapping") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function antistatique_project_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_image_default_styles().
 */
function antistatique_project_image_default_styles() {
  $styles = array();

  // Exported image style: project_breakpoints_theme_bootstrap_screen-lg-min_1x.
  $styles['project_breakpoints_theme_bootstrap_screen-lg-min_1x'] = array(
    'label' => 'project_breakpoints_theme_bootstrap_screen-lg-min_1x',
    'effects' => array(
      38 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 312,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_bootstrap_screen-md-max_1x.
  $styles['project_breakpoints_theme_bootstrap_screen-md-max_1x'] = array(
    'label' => 'project_breakpoints_theme_bootstrap_screen-md-max_1x',
    'effects' => array(
      37 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 455,
          'height' => 255,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_bootstrap_screen-sm-max_1x.
  $styles['project_breakpoints_theme_bootstrap_screen-sm-max_1x'] = array(
    'label' => 'project_breakpoints_theme_bootstrap_screen-sm-max_1x',
    'effects' => array(
      36 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 345,
          'height' => 193,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_bootstrap_screen-xs-max_1x.
  $styles['project_breakpoints_theme_bootstrap_screen-xs-max_1x'] = array(
    'label' => 'project_breakpoints_theme_bootstrap_screen-xs-max_1x',
    'effects' => array(
      35 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1534,
          'height' => 862,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_breakpoints_theme_bootstrap_screen-xs-max_2x.
  $styles['project_breakpoints_theme_bootstrap_screen-xs-max_2x'] = array(
    'label' => 'project_breakpoints_theme_bootstrap_screen-xs-max_2x',
    'effects' => array(
      34 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 312,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: project_thumbnail.
  $styles['project_thumbnail'] = array(
    'label' => 'Project Thumbnail (555x312)',
    'effects' => array(
      33 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 555,
          'height' => 312,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_node_info().
 */
function antistatique_project_node_info() {
  $items = array(
    'project' => array(
      'name' => t('Project'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
