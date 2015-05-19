<?php
/**
 * @file
 * antistatique_site.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function antistatique_site_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'adminimal_admin_menu_toolbar-disabled';
  $strongarm->value = TRUE;
  $export['adminimal_admin_menu_toolbar-disabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'admin_theme';
  $strongarm->value = 'adminimal';
  $export['admin_theme'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'breakpoints_multipliers';
  $strongarm->value = array(
    '1x' => '1x',
    '2x' => '2x',
    '1.5x' => '1.5x',
  );
  $export['breakpoints_multipliers'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clean_url';
  $strongarm->value = '1';
  $export['clean_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entityreference:base-tables';
  $strongarm->value = array(
    'node' => array(
      0 => 'node',
      1 => 'nid',
    ),
    'taxonomy_term' => array(
      0 => 'taxonomy_term_data',
      1 => 'tid',
    ),
    'i18n_translation' => array(
      0 => 'i18n_translation_set',
      1 => 'tsid',
    ),
    'paragraphs_item' => array(
      0 => 'paragraphs_item',
      1 => 'item_id',
    ),
    'file' => array(
      0 => 'file_managed',
      1 => 'fid',
    ),
    'taxonomy_vocabulary' => array(
      0 => 'taxonomy_vocabulary',
      1 => 'vid',
    ),
    'user' => array(
      0 => 'users',
      1 => 'uid',
    ),
    'wysiwyg_profile' => array(
      0 => 'wysiwyg',
      1 => 'format',
    ),
  );
  $export['entityreference:base-tables'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_entity_types';
  $strongarm->value = array(
    'node' => 'node',
    'taxonomy_term' => 'taxonomy_term',
    'user' => 'user',
    'file' => 0,
  );
  $export['entity_translation_entity_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_article';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_blog';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_hide_translation_links_project';
  $strongarm->value = 0;
  $export['entity_translation_hide_translation_links_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_article';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_blog';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_blog'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_node_metadata_project';
  $strongarm->value = '0';
  $export['entity_translation_node_metadata_project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_revision_enabled';
  $strongarm->value = TRUE;
  $export['entity_translation_revision_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__article';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__article'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__banner';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 0,
  );
  $export['entity_translation_settings_node__banner'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__page';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__page'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_node__project';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 1,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_node__project'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__category';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__category'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__section';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_taxonomy_term__skills';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_taxonomy_term__skills'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_settings_user__user';
  $strongarm->value = array(
    'default_language' => 'xx-et-default',
    'hide_language_selector' => 0,
    'exclude_language_none' => 0,
    'lock_language' => 0,
    'shared_fields_original_only' => 1,
  );
  $export['entity_translation_settings_user__user'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_shared_labels';
  $strongarm->value = 1;
  $export['entity_translation_shared_labels'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_translation_workflow_enabled';
  $strongarm->value = 0;
  $export['entity_translation_workflow_enabled'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'entity_view_modes';
  $strongarm->value = array(
    'node' => array(
      'small_teaser' => array(
        'label' => 'Small Teaser',
        'custom settings' => 1,
      ),
      'featured' => array(
        'label' => 'Featured',
        'custom settings' => 1,
      ),
    ),
    'user' => array(
      'teaser' => array(
        'label' => 'Teaser',
        'custom settings' => 1,
      ),
      'big_teaser' => array(
        'label' => 'Big Teaser',
        'custom settings' => 1,
      ),
    ),
  );
  $export['entity_view_modes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_classes';
  $strongarm->value = 1;
  $export['fences_default_classes'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'fences_default_markup';
  $strongarm->value = 1;
  $export['fences_default_markup'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__audio';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__audio'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__default';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__image';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__image'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_file__video';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(
        'file' => array(
          'media_small' => array(
            'weight' => 0,
            'visible' => FALSE,
          ),
        ),
      ),
    ),
  );
  $export['field_bundle_settings_file__video'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__body';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__body'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__image_aside';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__image_aside'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__image_foggy';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__image_foggy'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__image_text';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__image_text'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__image_wide';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__image_wide'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_paragraphs_item__quote';
  $strongarm->value = array(
    'view_modes' => array(
      'paragraphs_editor_preview' => array(
        'custom_settings' => TRUE,
      ),
      'full' => array(
        'custom_settings' => FALSE,
      ),
      'diff_standard' => array(
        'custom_settings' => FALSE,
      ),
      'token' => array(
        'custom_settings' => FALSE,
      ),
    ),
    'extra_fields' => array(
      'form' => array(),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_paragraphs_item__quote'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'field_bundle_settings_taxonomy_term__section';
  $strongarm->value = array(
    'view_modes' => array(),
    'extra_fields' => array(
      'form' => array(
        'metatags' => array(
          'weight' => '40',
        ),
        'path' => array(
          'weight' => '30',
        ),
        'description' => array(
          'weight' => '0',
        ),
        'language' => array(
          'weight' => '0',
        ),
      ),
      'display' => array(),
    ),
  );
  $export['field_bundle_settings_taxonomy_term__section'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_compression_type';
  $strongarm->value = 'min';
  $export['jquery_update_compression_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_admin_version';
  $strongarm->value = '1.5';
  $export['jquery_update_jquery_admin_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_cdn';
  $strongarm->value = 'none';
  $export['jquery_update_jquery_cdn'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'jquery_update_jquery_version';
  $strongarm->value = '1.10';
  $export['jquery_update_jquery_version'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_count';
  $strongarm->value = 2;
  $export['language_count'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_default';
  $strongarm->value = (object) array(
    'language' => 'fr',
    'name' => 'French',
    'native' => 'Français',
    'direction' => 0,
    'enabled' => 1,
    'plurals' => 0,
    'formula' => '',
    'domain' => '',
    'prefix' => 'fr',
    'weight' => -10,
    'javascript' => '',
  );
  $export['language_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_content';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-session' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_session',
        'switcher' => 'locale_language_switcher_session',
        'url_rewrite' => 'locale_language_url_rewrite_session',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-user' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_user',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-browser' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_browser',
      ),
      'file' => 'includes/locale.inc',
      'cache' => 0,
    ),
    'locale-interface' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_interface',
      ),
      'file' => 'includes/locale.inc',
    ),
    'language-default' => array(
      'callbacks' => array(
        'language' => 'language_from_default',
      ),
    ),
  );
  $export['language_negotiation_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_negotiation_language_url';
  $strongarm->value = array(
    'locale-url' => array(
      'callbacks' => array(
        'language' => 'locale_language_from_url',
        'switcher' => 'locale_language_switcher_url',
        'url_rewrite' => 'locale_language_url_rewrite_url',
      ),
      'file' => 'includes/locale.inc',
    ),
    'locale-url-fallback' => array(
      'callbacks' => array(
        'language' => 'locale_language_url_fallback',
      ),
      'file' => 'includes/locale.inc',
    ),
  );
  $export['language_negotiation_language_url'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'language_types';
  $strongarm->value = array(
    'language' => TRUE,
    'language_content' => TRUE,
    'language_url' => FALSE,
  );
  $export['language_types'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_field_language_fallback';
  $strongarm->value = 1;
  $export['locale_field_language_fallback'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_negotiation_url_part';
  $strongarm->value = '0';
  $export['locale_language_negotiation_url_part'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'locale_language_providers_weight_language_content';
  $strongarm->value = array(
    'locale-url' => '-8',
    'locale-session' => '-6',
    'locale-user' => '-4',
    'locale-browser' => '-2',
    'locale-interface' => '8',
    'language-default' => '10',
  );
  $export['locale_language_providers_weight_language_content'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_buttons';
  $strongarm->value = array(
    0 => '61',
    1 => '62',
    2 => '63',
    3 => '64',
    4 => '65',
    5 => '66',
    6 => '67',
    7 => '68',
    8 => '69',
    9 => '70',
    10 => '71',
    11 => '72',
    12 => '73',
    13 => '74',
    14 => '75',
    15 => '76',
    16 => '77',
    17 => '78',
    18 => '79',
  );
  $export['markdowneditor_buttons'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_content_fprint';
  $strongarm->value = 'e53cfe099a18a6050279877b7507f6fd';
  $export['markdowneditor_content_fprint'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'markdowneditor_eid';
  $strongarm->value = '5';
  $export['markdowneditor_eid'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'media__file_extensions';
  $strongarm->value = 'jpg jpeg gif png txt doc docx xls xlsx pdf ppt pptx pps ppsx odt ods odp mp3 mov m4v mp4 mpeg avi ogg oga ogv wmv ico';
  $export['media__file_extensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_en_pattern';
  $strongarm->value = 'we/blog/[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title]';
  $export['pathauto_node_article_en_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_fr_pattern';
  $strongarm->value = 'nous/bloggons/[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title]';
  $export['pathauto_node_article_fr_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_pattern';
  $strongarm->value = '';
  $export['pathauto_node_article_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_article_und_pattern';
  $strongarm->value = 'nous/bloggons/[node:created:custom:Y]/[node:created:custom:m]/[node:created:custom:d]/[node:title]';
  $export['pathauto_node_article_und_pattern'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_transliterate';
  $strongarm->value = 1;
  $export['pathauto_transliterate'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'theme_default';
  $strongarm->value = 'antistatique';
  $export['theme_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'translation_language_type';
  $strongarm->value = 'language_content';
  $export['translation_language_type'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_pictures';
  $strongarm->value = 1;
  $export['user_pictures'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_default';
  $strongarm->value = '';
  $export['user_picture_default'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_dimensions';
  $strongarm->value = '512x512';
  $export['user_picture_dimensions'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_file_size';
  $strongarm->value = '800';
  $export['user_picture_file_size'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_guidelines';
  $strongarm->value = '';
  $export['user_picture_guidelines'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_path';
  $strongarm->value = 'pictures';
  $export['user_picture_path'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_picture_style';
  $strongarm->value = 'square_thumbnail';
  $export['user_picture_style'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_register';
  $strongarm->value = '1';
  $export['user_register'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'user_signatures';
  $strongarm->value = 0;
  $export['user_signatures'] = $strongarm;

  return $export;
}
