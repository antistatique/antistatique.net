<?php
/**
 * @file
 * antistatique_site.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function antistatique_site_user_default_roles() {
  $roles = array();

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 2,
  );

  // Exported role: collaborator.
  $roles['collaborator'] = array(
    'name' => 'collaborator',
    'weight' => 3,
  );

  // Exported role: translator.
  $roles['translator'] = array(
    'name' => 'translator',
    'weight' => 4,
  );

  return $roles;
}
