<?php
/**
 * @file
 * antistatique_site.features.wysiwyg.inc
 */

/**
 * Implements hook_wysiwyg_default_profiles().
 */
function antistatique_site_wysiwyg_default_profiles() {
  $profiles = array();

  // Exported profile: filtered_html
  $profiles['filtered_html'] = array(
    'format' => 'filtered_html',
    'editor' => 'ckeditor',
    'settings' => array(
      'default' => 1,
      'user_choose' => 0,
      'show_toggle' => 1,
      'add_to_summaries' => 1,
      'theme' => '',
      'language' => 'fr',
      'buttons' => array(
        'default' => array(
          'Bold' => 1,
          'Italic' => 1,
          'BulletedList' => 1,
          'NumberedList' => 1,
          'Link' => 1,
          'Unlink' => 1,
          'Image' => 1,
          'Blockquote' => 1,
          'HorizontalRule' => 1,
          'Format' => 1,
          'Styles' => 1,
          'Scayt' => 1,
        ),
        'picture_ckeditor' => array(
          'picture_ckeditor' => 1,
        ),
      ),
      'toolbarLocation' => 'top',
      'resize_enabled' => 1,
      'default_toolbar_grouping' => 0,
      'simple_source_formatting' => 0,
      'acf_mode' => 1,
      'acf_allowed_content' => '',
      'css_setting' => 'self',
      'css_path' => '/sites/all/themes/antistatique/build/css/main.css',
      'stylesSet' => 'Lead=p.lead',
      'block_formats' => 'p,code,pre,h2,h3,h4,h5,h6,dt,dd,aside',
      'advanced__active_tab' => 'edit-css',
      'forcePasteAsPlainText' => 0,
    ),
    'rdf_mapping' => array(),
  );

  return $profiles;
}
