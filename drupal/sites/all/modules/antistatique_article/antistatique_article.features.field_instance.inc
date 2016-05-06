<?php
/**
 * @file
 * antistatique_article.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function antistatique_article_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'.
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
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
      'featured' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'trim',
          'trim_length' => 300,
          'trim_link' => 0,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 0,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'smart_trim',
        'settings' => array(
          'more_link' => 1,
          'more_text' => 'Read more',
          'summary_handler' => 'full',
          'trim_length' => 140,
          'trim_link' => FALSE,
          'trim_options' => array(
            'text' => 'text',
          ),
          'trim_preserve_tags' => '',
          'trim_suffix' => '...',
          'trim_type' => 'chars',
        ),
        'type' => 'smart_trim_format',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'entity_translation_sync' => FALSE,
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
      'weight' => -3,
    ),
  );

  // Exported field_instance: 'node-article-field_category'.
  $field_instances['node-article-field_category'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'span',
    'field_name' => 'field_category',
    'label' => 'Category',
    'required' => 1,
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
      'weight' => 3,
    ),
  );

  // Exported field_instance: 'node-article-field_co_author'.
  $field_instances['node-article-field_co_author'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'links' => 1,
          'view_mode' => 'teaser',
        ),
        'type' => 'entityreference_entity_view',
        'weight' => 3,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => FALSE,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'entityreference',
        'settings' => array(
          'link' => 1,
        ),
        'type' => 'entityreference_label',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_co_author',
    'label' => 'Displayed Author(s)',
    'required' => 1,
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
      'weight' => 5,
    ),
  );

  // Exported field_instance: 'node-article-field_hero_image_is_dark'.
  $field_instances['node-article-field_hero_image_is_dark'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'Tick if your hero image is dark (we\'ll set white text for the header)',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'list',
        'settings' => array(),
        'type' => 'list_key',
        'weight' => 4,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 4,
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

  // Exported field_instance: 'node-article-field_images'.
  $field_instances['node-article-field_images'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Image should be at least <b>650px</b> wide.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 8,
      ),
      'featured' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_images',
    'label' => 'Images',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'large-article',
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
        'insert' => 1,
        'insert_absolute' => 0,
        'insert_class' => '',
        'insert_default' => 'image_large',
        'insert_styles' => array(
          'auto' => 0,
          'icon_link' => 0,
          'image' => 'image',
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

  // Exported field_instance: 'node-article-field_needs_translation'.
  $field_instances['node-article-field_needs_translation'] = array(
    'bundle' => 'article',
    'default_value' => array(
      0 => array(
        'value' => 0,
      ),
    ),
    'deleted' => 0,
    'description' => 'This option indicates that this content is ready to be translated by the translator.',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
    'field_name' => 'field_needs_translation',
    'label' => 'Ready for translation',
    'required' => 0,
    'settings' => array(
      'entity_translation_sync' => FALSE,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'options',
      'settings' => array(
        'display_label' => 1,
      ),
      'type' => 'options_onoff',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-article-field_skills'.
  $field_instances['node-article-field_skills'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => 'Used to reference article in skills pages',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'i18n_taxonomy',
        'settings' => array(),
        'type' => 'i18n_taxonomy_term_reference_link',
        'weight' => 10,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'weight' => 4,
    ),
  );

  // Exported field_instance: 'node-article-field_svg_title'.
  $field_instances['node-article-field_svg_title'] = array(
    'bundle' => 'article',
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
        'weight' => 5,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
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
      'description_field' => 1,
      'entity_translation_sync' => 0,
      'file_directory' => 'article-svg',
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
      'weight' => -2,
    ),
  );

  // Exported field_instance: 'node-article-field_teammate_hero_image'.
  $field_instances['node-article-field_teammate_hero_image'] = array(
    'bundle' => 'article',
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
          'lazyload' => '',
          'lazyload_aspect_ratio' => '',
          'picture_mapping' => 'hero',
        ),
        'type' => 'picture',
        'weight' => 1,
      ),
      'featured' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'wide_thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
      'small_teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'wide_thumbnail',
        ),
        'type' => 'image',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'wide_thumbnail',
        ),
        'type' => 'image',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'fences_wrapper' => 'div',
    'field_name' => 'field_teammate_hero_image',
    'label' => 'Hero-image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'entity_translation_sync' => FALSE,
      'file_directory' => 'hero-article',
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

  // Exported field_instance: 'node-article-title_field'.
  $field_instances['node-article-title_field'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 9,
      ),
      'featured' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'small_teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 7,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 6,
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

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Category');
  t('Displayed Author(s)');
  t('Hero image is dark');
  t('Hero-image');
  t('Image should be at least <b>650px</b> wide.');
  t('Images');
  t('L\'image sera redimensionnée à <b>2600 x 1643 px</b>. Essayez d\'uploader directement une image de cette taille si possible.');
  t('Ready for translation');
  t('SVG Title');
  t('Skills');
  t('This option indicates that this content is ready to be translated by the translator.');
  t('Tick if your hero image is dark (we\'ll set white text for the header)');
  t('Title');
  t('Used to reference article in skills pages');

  return $field_instances;
}
