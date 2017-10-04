<?php
/**
 * @file
 * antistatique_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antistatique_project_field_group_info() {
  $field_groups = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_testimonial|node|project|form';
  $field_group->group_name = 'group_testimonial';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Testimonial',
    'weight' => '5',
    'children' => array(
      0 => 'field_testimonial_avatar',
      1 => 'field_testimonial_name',
      2 => 'field_testimonial_quote',
      3 => 'field_testimonial_position',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-testimonial field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $field_groups[''] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Testimonial');

  return $field_groups;
}
