<?php
/**
 * @file
 * antistatique_teammate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antistatique_teammate_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_account|user|user|form';
  $field_group->group_name = 'group_account';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Account',
    'weight' => '3',
    'children' => array(
      0 => 'account',
      1 => 'timezone',
      2 => 'locale',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-account field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_account|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_basic_info|user|user|form';
  $field_group->group_name = 'group_basic_info';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Basic infos',
    'weight' => '1',
    'children' => array(
      0 => 'field_email',
      1 => 'field_firstname',
      2 => 'field_lastname',
      3 => 'field_teammate_body',
      4 => 'field_teammate_currently_working',
      5 => 'field_teammate_job_title',
      6 => 'field_teammate_links',
      7 => 'field_pingpong_ranking',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-basic-info field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_basic_info|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_image|user|user|form';
  $field_group->group_name = 'group_image';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Images',
    'weight' => '2',
    'children' => array(
      0 => 'field_teammate_hero_image',
      1 => 'picture',
      2 => 'field_hero_image_is_dark',
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
  $export['group_image|user|user|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_project|user|user|form';
  $field_group->group_name = 'group_project';
  $field_group->entity_type = 'user';
  $field_group->bundle = 'user';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Project',
    'weight' => '4',
    'children' => array(
      0 => 'field_related_project',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'formatter' => 'closed',
      'instance_settings' => array(
        'description' => '',
        'classes' => 'group-project field-group-tab',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_project|user|user|form'] = $field_group;

  return $export;
}
