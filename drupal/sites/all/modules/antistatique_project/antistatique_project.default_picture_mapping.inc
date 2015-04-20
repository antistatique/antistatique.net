<?php
/**
 * @file
 * antistatique_project.default_picture_mapping.inc
 */

/**
 * Implements hook_default_picture_mapping().
 */
function antistatique_project_default_picture_mapping() {
  $export = array();

  $picture_mapping = new PictureMapping();
  $picture_mapping->disabled = FALSE; /* Edit this to true to make a default picture_mapping disabled initially */
  $picture_mapping->api_version = 2;
  $picture_mapping->label = 'Project Thumbnail';
  $picture_mapping->machine_name = 'project_thumbnail';
  $picture_mapping->breakpoint_group = 'bootstrap';
  $picture_mapping->mapping = array(
    'breakpoints.theme.bootstrap.screen-xs-max' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_bootstrap_screen-xs-max_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_bootstrap_screen-xs-max_2x',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-sm-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-sm-max' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_bootstrap_screen-sm-max_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-md-min' => array(
      '1x' => array(
        'mapping_type' => '_none',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-md-max' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_bootstrap_screen-md-max_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
    'breakpoints.theme.bootstrap.screen-lg-min' => array(
      '1x' => array(
        'mapping_type' => 'image_style',
        'image_style' => 'project_breakpoints_theme_bootstrap_screen-lg-min_1x',
      ),
      '1.5x' => array(
        'mapping_type' => '_none',
      ),
      '2x' => array(
        'mapping_type' => '_none',
      ),
    ),
  );
  $export['project_thumbnail'] = $picture_mapping;

  return $export;
}
