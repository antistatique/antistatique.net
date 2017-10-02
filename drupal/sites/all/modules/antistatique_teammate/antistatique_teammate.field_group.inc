<?php
/**
 * @file
 * antistatique_teammate.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function antistatique_teammate_field_group_info() {
  $field_groups = array();

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
    'label' => 'Work',
    'weight' => '2',
    'children' => array(
      0 => 'field_teammate_currently_working',
      1 => 'field_teammate_job_title',
      2 => 'field_related_project',
      3 => 'field_skills',
      4 => 'googleanalytics',
    ),
    'format_type' => 'tab',
    'format_settings' => array(
      'label' => 'Work',
      'instance_settings' => array(
        'required_fields' => 1,
        'classes' => 'group-project field-group-tab',
        'description' => '',
      ),
      'formatter' => 'closed',
    ),
  );
  $field_groups['group_project|user|user|form'] = $field_group;

  // Translatables
  // Included for use with string extractors like potx.
  t('Work');

  return $field_groups;
}
