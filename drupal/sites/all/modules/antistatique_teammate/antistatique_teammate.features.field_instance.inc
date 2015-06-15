<?php
/**
 * @file
 * antistatique_teammate.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function antistatique_teammate_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'user-user-field_email'
  $field_instances['user-user-field_email'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Has to be @antistatique.net',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'email',
        'settings' => array(),
        'type' => 'email_plain',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_email',
    'label' => 'Displayed Email',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'email',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'email_textfield',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_firstname'
  $field_instances['user-user-field_firstname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'span',
    'field_name' => 'field_firstname',
    'label' => 'Firstname',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'user-user-field_four_images'
  $field_instances['user-user-field_four_images'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'The first image should be <b>640x960</b>.<br>
The second and third images should be <b>320x320</b>.<br>
The fourth image should be <b>640x640</b>.',
    'display' => array(
      'big_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => 12,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_four_images',
    'label' => 'Four Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'user-four-images',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '640x640',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 'private',
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_hero-image' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_large' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_medium' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_project_thumbnail' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'image_wide_image' => 0,
          'image_wide_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_hero_image_is_dark'
  $field_instances['user-user-field_hero_image_is_dark'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 13,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_hero_image_is_dark',
    'label' => 'Hero image is dark',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_lastname'
  $field_instances['user-user-field_lastname'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'span',
    'field_name' => 'field_lastname',
    'label' => 'Lastname',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'user-user-field_pingpong_points'
  $field_instances['user-user-field_pingpong_points'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(),
        'type' => 'number_unformatted',
        'weight' => 11,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_pingpong_points',
    'label' => 'Pingpong Points',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_pingpong_ranking'
  $field_instances['user-user-field_pingpong_ranking'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'number',
        'settings' => array(),
        'type' => 'number_unformatted',
        'weight' => 10,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_pingpong_ranking',
    'label' => 'Pingpong Ranking',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'max' => '',
      'min' => '',
      'prefix' => '',
      'suffix' => '',
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'number',
      'settings' => array(),
      'type' => 'number',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_related_project'
  $field_instances['user-user-field_related_project'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Your prefered project you worked on',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 9,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_related_project',
    'label' => 'Related project',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'user-user-field_teammate_body'
  $field_instances['user-user-field_teammate_body'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_teammate_body',
    'label' => 'body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'user-user-field_teammate_currently_working'
  $field_instances['user-user-field_teammate_currently_working'] = array(
    'bundle' => 'user',
    'default_value' => array(
      0 => array(
        'value' => 1,
      ),
    ),
    'deleted' => 0,
    'description' => 'To know if you\'re part of the team',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 0,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_teammate_currently_working',
    'label' => 'Currently working',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'user-user-field_teammate_hero_image'
  $field_instances['user-user-field_teammate_hero_image'] = array(
    'bundle' => 'user',
    'deleted' => 0,
    'description' => 'L\'image sera redimensionnée à <b>2600 x 1643 px</b>. Essayez d\'uploader directement une image de cette taille si possible.',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'picture',
        'settings' => array(
          'colorbox_settings' => array(
            'colorbox_caption' => 'auto',
            'colorbox_caption_custom' => '',
            'colorbox_gallery' => 'post',
            'colorbox_gallery_custom' => '',
            'colorbox_group' => '',
            'colorbox_multivalue_index' => NULL,
          ),
          'fallback_image_style' => 'hero-image',
          'image_link' => '',
          'picture_mapping' => 'hero',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_teammate_hero_image',
    'label' => 'hero-image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => '',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1500x600',
      'title_field' => 0,
      'user_register_form' => 0,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'allowed_schemes' => array(
          0 => 'public',
          1 => 'private',
        ),
        'allowed_types' => array(
          0 => 'image',
        ),
        'insert' => 0,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'auto',
        'insert_styles' => array(
          'auto' => 'auto',
          'icon_link' => 0,
          'image' => 0,
          'image_hero-image' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_large' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_medium' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_project_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_project_thumbnail' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'image_wide_image' => 0,
          'image_wide_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'user-user-field_teammate_job_title'
  $field_instances['user-user-field_teammate_job_title'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'What\'s on your business card ?',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 1,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'user',
    'field_name' => 'field_teammate_job_title',
    'label' => 'Job title',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => 1,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 8,
    ),
  );

  // Exported field_instance: 'user-user-field_teammate_links'
  $field_instances['user-user-field_teammate_links'] = array(
    'bundle' => 'user',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Use font awesome syntax for classes (http://fortawesome.github.io/Font-Awesome/icons/) "fa fa-twitter" for twitter.',
    'display' => array(
      'big_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'user',
    'fences_wrapper' => 'div',
    'field_name' => 'field_teammate_links',
    'label' => 'links',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 1,
        'configurable_title' => 0,
        'rel' => '',
        'target' => 'default',
        'title' => '',
      ),
      'display' => array(
        'url_cutoff' => 80,
      ),
      'enable_tokens' => 1,
      'entity_translation_sync' => FALSE,
      'rel_remove' => 'default',
      'title' => 'optional',
      'title_label_use_field_label' => 0,
      'title_maxlength' => 128,
      'title_value' => '',
      'url' => 0,
      'user_register_form' => 0,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => 8,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Currently working');
  t('Displayed Email');
  t('Firstname');
  t('Four Images');
  t('Has to be @antistatique.net');
  t('Hero image is dark');
  t('Job title');
  t('L\'image sera redimensionnée à <b>2600 x 1643 px</b>. Essayez d\'uploader directement une image de cette taille si possible.');
  t('Lastname');
  t('Pingpong Points');
  t('Pingpong Ranking');
  t('Related project');
  t('The first image should be <b>640x960</b>.<br>
The second and third images should be <b>320x320</b>.<br>
The fourth image should be <b>640x640</b>.');
  t('To know if you\'re part of the team');
  t('Use font awesome syntax for classes (http://fortawesome.github.io/Font-Awesome/icons/) "fa fa-twitter" for twitter.');
  t('What\'s on your business card ?');
  t('Your prefered project you worked on');
  t('body');
  t('hero-image');
  t('links');

  return $field_instances;
}
