<?php
/**
 * @file
 * antistatique_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "breakpoints" && $api == "default_breakpoint_group") {
    return array("version" => "1");
  }
  if ($module == "breakpoints" && $api == "default_breakpoints") {
    return array("version" => "1");
  }
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
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
 * Implements hook_image_default_styles().
 */
function antistatique_site_image_default_styles() {
  $styles = array();

  // Exported image style: hero-image.
  $styles['hero-image'] = array(
    'label' => 'Hero (2600x1643)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1643,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_breakpoints_theme_bootstrap_screen-lg-min_1x.
  $styles['hero_breakpoints_theme_bootstrap_screen-lg-min_1x'] = array(
    'label' => 'hero_breakpoints_theme_bootstrap_screen-lg-min_1x',
    'effects' => array(
      23 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1643,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_breakpoints_theme_bootstrap_screen-md-max_1x.
  $styles['hero_breakpoints_theme_bootstrap_screen-md-max_1x'] = array(
    'label' => 'hero_breakpoints_theme_bootstrap_screen-md-max_1x',
    'effects' => array(
      20 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1643,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_breakpoints_theme_bootstrap_screen-sm-max_1x.
  $styles['hero_breakpoints_theme_bootstrap_screen-sm-max_1x'] = array(
    'label' => 'hero_breakpoints_theme_bootstrap_screen-sm-max_1x',
    'effects' => array(
      14 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 2600,
          'height' => 1643,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_breakpoints_theme_bootstrap_screen-xs-max_1x.
  $styles['hero_breakpoints_theme_bootstrap_screen-xs-max_1x'] = array(
    'label' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_1x',
    'effects' => array(
      8 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 768,
          'height' => 432,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: hero_breakpoints_theme_bootstrap_screen-xs-max_2x.
  $styles['hero_breakpoints_theme_bootstrap_screen-xs-max_2x'] = array(
    'label' => 'hero_breakpoints_theme_bootstrap_screen-xs-max_2x',
    'effects' => array(
      7 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1536,
          'height' => 864,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}

/**
 * Implements hook_paragraphs_info().
 */
function antistatique_site_paragraphs_info() {
  $items = array(
    'body' => array(
      'name' => 'Simple Body',
      'bundle' => 'body',
      'locked' => '1',
    ),
    'image_aside' => array(
      'name' => 'Image & Aside',
      'bundle' => 'image_aside',
      'locked' => '1',
    ),
    'image_foggy' => array(
      'name' => 'Centered image on grey background',
      'bundle' => 'image_foggy',
      'locked' => '1',
    ),
    'image_text' => array(
      'name' => 'Image with text',
      'bundle' => 'image_text',
      'locked' => '1',
    ),
    'image_wide' => array(
      'name' => 'Image Wide',
      'bundle' => 'image_wide',
      'locked' => '1',
    ),
    'quote' => array(
      'name' => 'Quote',
      'bundle' => 'quote',
      'locked' => '1',
    ),
  );
  return $items;
}
