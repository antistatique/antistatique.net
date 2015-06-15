<?php
/**
 * @file
 * antistatique_project.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function antistatique_project_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-project-body'
  $field_instances['node-project-body'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => 0,
    'settings' => array(
      'display_summary' => 1,
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-project-field_client'
  $field_instances['node-project-field_client'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 10,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_client',
    'label' => 'Client',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-project-field_credits'
  $field_instances['node-project-field_credits'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 14,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_credits',
    'label' => 'Credits',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 10,
    ),
  );

  // Exported field_instance: 'node-project-field_hero_image_is_dark'
  $field_instances['node-project-field_hero_image_is_dark'] = array(
    'bundle' => 'project',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 13,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_hero_image_is_dark',
    'label' => 'Hero image is dark',
    'required' => 1,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(),
      'type' => 'options_buttons',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-project-field_images'
  $field_instances['node-project-field_images'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
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
          'fallback_image_style' => 'large',
          'image_link' => '',
          'picture_mapping' => 'large',
        ),
        'type' => 'picture',
        'weight' => 5,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 11,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'large-project',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '650x650',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
          'public' => 'public',
        ),
        'allowed_types' => array(
          0 => 0,
          'audio' => 0,
          'default' => 0,
          'image' => 'image',
          'video' => 0,
        ),
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_large',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 0,
          'image_hero-image' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_hero_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_large' => 'image_large',
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-lg-min_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-md-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-sm-max_2x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_1x' => 0,
          'image_large_breakpoints_theme_bootstrap_screen-xs-max_2x' => 0,
          'image_medium' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-project-field_links'
  $field_instances['node-project-field_links'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Link(s) where this project can be viewed.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'link',
        'settings' => array(),
        'type' => 'link_default',
        'weight' => 2,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 10,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_links',
    'label' => 'Link(s)',
    'required' => 0,
    'settings' => array(
      'absolute_url' => 1,
      'attributes' => array(
        'class' => '',
        'configurable_class' => 0,
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
      'user_register_form' => FALSE,
      'validate_url' => 1,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'link',
      'settings' => array(),
      'type' => 'link_field',
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-project-field_paragraphs'
  $field_instances['node-project-field_paragraphs'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'paragraphs',
        'settings' => array(
          'view_mode' => 'full',
        ),
        'type' => 'paragraphs_view',
        'weight' => 11,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 5,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_paragraphs',
    'label' => 'Paragraphs',
    'required' => 0,
    'settings' => array(
      'add_mode' => 'select',
      'allowed_bundles' => array(),
      'bundle_weights' => array(),
      'default_edit_mode' => 'open',
      'entity_translation_sync' => FALSE,
      'title' => 'Paragraph',
      'title_multiple' => 'Paragraphs',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'paragraphs',
      'settings' => array(),
      'type' => 'paragraphs_embed',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-project-field_skills'
  $field_instances['node-project-field_skills'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 4,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_plain',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_skills',
    'label' => 'Skills',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'apply_chosen' => 1,
      ),
      'type' => 'options_select',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-project-field_svg_title'
  $field_instances['node-project-field_svg_title'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'file_entity',
        'settings' => array(
          'file_view_mode' => 'default',
        ),
        'type' => 'file_rendered',
        'weight' => 17,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_svg_title',
    'label' => 'SVG Title',
    'required' => 0,
    'settings' => array(
      'description_field' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'project-svg',
      'file_extensions' => 'svg',
      'max_filesize' => '2 MB',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'file',
      'settings' => array(
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
          'image_square_thumbnail__max_100x100_' => 0,
          'image_thumbnail' => 0,
          'image_wide_image' => 0,
          'image_wide_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'file_generic',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-project-field_teammate_hero_image'
  $field_instances['node-project-field_teammate_hero_image'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => 'L\'image sera redimensionnée à <b>2600 x 1643 px</b>. Essayez d\'uploader directement une image de cette taille si possible.',
    'display' => array(
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
        'weight' => 1,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
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
          'fallback_image_style' => 'project_thumbnail',
          'image_link' => '',
          'picture_mapping' => 'project_thumbnail',
        ),
        'type' => 'picture',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_teammate_hero_image',
    'label' => 'Hero Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 176,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'hero-project',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '1600x900',
      'title_field' => 0,
      'user_register_form' => FALSE,
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
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-project-field_testimonial_avatar'
  $field_instances['node-project-field_testimonial_avatar'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => 'thumbnail',
        ),
        'type' => 'image',
        'weight' => 9,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 12,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_testimonial_avatar',
    'label' => 'Testimonial Avatar',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'project-testimonial-avatar',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'allowed_schemes' => array(
          'private' => 0,
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
          'image_large' => 0,
          'image_medium' => 0,
          'image_square_thumbnail' => 0,
          'image_thumbnail' => 0,
          'link' => 0,
        ),
        'insert_width' => '',
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => 9,
    ),
  );

  // Exported field_instance: 'node-project-field_testimonial_name'
  $field_instances['node-project-field_testimonial_name'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 6,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 14,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_testimonial_name',
    'label' => 'Testimonial Author',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 7,
    ),
  );

  // Exported field_instance: 'node-project-field_testimonial_position'
  $field_instances['node-project-field_testimonial_position'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'CEO, Founder, Best client ever, a fan',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 7,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_testimonial_position',
    'label' => 'Testimonial position',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
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

  // Exported field_instance: 'node-project-field_testimonial_quote'
  $field_instances['node-project-field_testimonial_quote'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 8,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 13,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'p',
    'field_name' => 'field_testimonial_quote',
    'label' => 'Testimonial Quote',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'text',
      'settings' => array(
        'rows' => 5,
      ),
      'type' => 'text_textarea',
      'weight' => 6,
    ),
  );

  // Exported field_instance: 'node-project-field_tile_image'
  $field_instances['node-project-field_tile_image'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => 'This image gets displayed in the project teaser view. Will display hero image if not set.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 16,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_tile_image',
    'label' => 'Tile image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 0,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'project-tile',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '800x600',
      'title_field' => 0,
      'user_register_form' => FALSE,
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
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-project-field_year'
  $field_instances['node-project-field_year'] = array(
    'bundle' => 'project',
    'deleted' => 0,
    'description' => 'The year this project was delivered to the client.',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'date',
        'settings' => array(
          'format_type' => 'long',
          'fromto' => 'both',
          'multiple_from' => '',
          'multiple_number' => '',
          'multiple_to' => '',
        ),
        'type' => 'date_default',
        'weight' => 3,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_year',
    'label' => 'Year',
    'required' => 1,
    'settings' => array(
      'default_value' => 'now',
      'default_value2' => 'same',
      'default_value_code' => '',
      'default_value_code2' => '',
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'date',
      'settings' => array(
        'increment' => 15,
        'input_format' => 'm/d/Y - H:i:s',
        'input_format_custom' => '',
        'label_position' => 'above',
        'text_parts' => array(),
        'year_range' => '-3:+3',
      ),
      'type' => 'date_select',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-project-title_field'
  $field_instances['node-project-title_field'] = array(
    'bundle' => 'project',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 15,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'title_field',
    'label' => 'Title',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => -5,
    ),
  );

  // Exported field_instance: 'taxonomy_term-skills-description_field'
  $field_instances['taxonomy_term-skills-description_field'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'description_field',
    'label' => 'Description',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => 0,
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'taxonomy_term-skills-name_field'
  $field_instances['taxonomy_term-skills-name_field'] = array(
    'bundle' => 'skills',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
      'full' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'taxonomy_term',
    'field_name' => 'name_field',
    'label' => 'Name',
    'required' => TRUE,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'hide_label' => array(
        'entity' => FALSE,
        'page' => FALSE,
      ),
      'text_processing' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'size' => 60,
      ),
      'type' => 'text_textfield',
      'weight' => 1,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('CEO, Founder, Best client ever, a fan');
  t('Client');
  t('Credits');
  t('Description');
  t('Hero Image');
  t('Hero image is dark');
  t('Images');
  t('L\'image sera redimensionnée à <b>2600 x 1643 px</b>. Essayez d\'uploader directement une image de cette taille si possible.');
  t('Link(s)');
  t('Link(s) where this project can be viewed.');
  t('Name');
  t('Paragraphs');
  t('SVG Title');
  t('Skills');
  t('Testimonial Author');
  t('Testimonial Avatar');
  t('Testimonial Quote');
  t('Testimonial position');
  t('The year this project was delivered to the client.');
  t('This image gets displayed in the project teaser view. Will display hero image if not set.');
  t('Tile image');
  t('Title');
  t('Year');

  return $field_instances;
}
