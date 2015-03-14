<?php
/**
 * @file
 * antistatique_site.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function antistatique_site_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "environment_indicator" && $api == "default_environment_indicator_environments") {
    return array("version" => "1");
  }
  if ($module == "field_group" && $api == "field_group") {
    return array("version" => "1");
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
    'label' => 'hero-image 1600x900',
    'effects' => array(
      1 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1600,
          'height' => 900,
        ),
        'weight' => 1,
      ),
    ),
  );

  return $styles;
}
