<?php
/**
 * @file
 * antistatique_articles.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antistatique_articles_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|node|blog|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'blog';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '7',
    'children' => array(
      0 => 'field_hero_image',
      1 => 'field_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-image field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_image|node|blog|form'] = $field_group;

  return $export;
}
