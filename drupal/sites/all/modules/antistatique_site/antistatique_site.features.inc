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
  if ($module == "context" && $api == "context") {
    return array("version" => "3");
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
  if ($module == "taxonomy_display" && $api == "taxonomy_display") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function antistatique_site_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
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

  // Exported image style: large_breakpoints_theme_bootstrap_screen-lg-min_1x.
  $styles['large_breakpoints_theme_bootstrap_screen-lg-min_1x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-lg-min_1x',
    'effects' => array(
      28 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 555,
          'height' => 555,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-lg-min_2x.
  $styles['large_breakpoints_theme_bootstrap_screen-lg-min_2x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-lg-min_2x',
    'effects' => array(
      31 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1110,
          'height' => 1110,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-md-max_1x.
  $styles['large_breakpoints_theme_bootstrap_screen-md-max_1x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-md-max_1x',
    'effects' => array(
      27 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 620,
          'height' => 620,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-md-max_2x.
  $styles['large_breakpoints_theme_bootstrap_screen-md-max_2x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-md-max_2x',
    'effects' => array(
      30 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1240,
          'height' => 1240,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-sm-max_1x.
  $styles['large_breakpoints_theme_bootstrap_screen-sm-max_1x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-sm-max_1x',
    'effects' => array(
      26 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 600,
          'height' => 600,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-sm-max_2x.
  $styles['large_breakpoints_theme_bootstrap_screen-sm-max_2x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-sm-max_2x',
    'effects' => array(
      29 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1200,
          'height' => 1200,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-xs-max_1x.
  $styles['large_breakpoints_theme_bootstrap_screen-xs-max_1x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-xs-max_1x',
    'effects' => array(
      25 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 768,
          'height' => 768,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: large_breakpoints_theme_bootstrap_screen-xs-max_2x.
  $styles['large_breakpoints_theme_bootstrap_screen-xs-max_2x'] = array(
    'label' => 'large_breakpoints_theme_bootstrap_screen-xs-max_2x',
    'effects' => array(
      24 => array(
        'name' => 'image_scale',
        'data' => array(
          'width' => 1536,
          'height' => 1536,
          'upscale' => 0,
        ),
        'weight' => 0,
      ),
    ),
  );

  // Exported image style: wide_image.
  $styles['wide_image'] = array(
    'label' => 'Wide Image (1300x820)',
    'effects' => array(
      39 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 1300,
          'height' => 820,
        ),
        'weight' => 1,
      ),
    ),
  );

  // Exported image style: wide_thumbnail.
  $styles['wide_thumbnail'] = array(
    'label' => 'Wide Thumbnail (750x300)',
    'effects' => array(
      3 => array(
        'name' => 'image_scale_and_crop',
        'data' => array(
          'width' => 750,
          'height' => 300,
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
function antistatique_site_node_info() {
  $items = array(
    'webform' => array(
      'name' => t('Webform'),
      'base' => 'node_content',
      'description' => t('Create a new form or questionnaire accessible to users. Submission results and statistics are recorded and accessible to privileged users.'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
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
      'name' => 'Image & Aside (optional device)',
      'bundle' => 'image_aside',
      'locked' => '1',
    ),
    'image_foggy' => array(
      'name' => 'Centered image on grey background (optional device)',
      'bundle' => 'image_foggy',
      'locked' => '1',
    ),
    'image_text' => array(
      'name' => 'Image with text (optional device)',
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
