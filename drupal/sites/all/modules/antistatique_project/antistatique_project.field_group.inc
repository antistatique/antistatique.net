<?php
/**
 * @file
 * antistatique_project.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antistatique_project_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_client|node|project|form';
  $field_group->group_name = 'group_client';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Client',
    'weight' => '2',
    'children' => array(
      0 => 'field_company_name',
      1 => 'field_company_logo',
      2 => 'field_year',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-client field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_client|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_content|node|project|form';
  $field_group->group_name = 'group_content';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Content',
    'weight' => '1',
    'children' => array(
      0 => 'body',
      1 => 'title_field',
      2 => 'field_teammate_hero_image',
      3 => 'field_links',
      4 => 'field_images',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-content field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_content|node|project|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_others|node|project|form';
  $field_group->group_name = 'group_others';
  $field_group->entity_type = 'node';
  $field_group->bundle = 'project';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Others',
    'weight' => '10',
    'children' => array(
      0 => 'field_credits',
      1 => 'field_skills',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-others field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_others|node|project|form'] = $field_group;

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
    'weight' => '8',
    'children' => array(
      0 => 'field_testimonial_name',
      1 => 'field_testimonial_quote',
      2 => 'field_testimonial_avatar',
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
  $export['group_testimonial|node|project|form'] = $field_group;

  return $export;
}
