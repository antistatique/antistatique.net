<?php
/**
 * @file
 * antistatique_article.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function antistatique_article_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'create article content'.
  $permissions['create article content'] = array(
    'name' => 'create article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collaborator' => 'collaborator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any article content'.
  $permissions['delete any article content'] = array(
    'name' => 'delete any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collaborator' => 'collaborator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own article content'.
  $permissions['delete own article content'] = array(
    'name' => 'delete own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collaborator' => 'collaborator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any article content'.
  $permissions['edit any article content'] = array(
    'name' => 'edit any article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collaborator' => 'collaborator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own article content'.
  $permissions['edit own article content'] = array(
    'name' => 'edit own article content',
    'roles' => array(
      'administrator' => 'administrator',
      'collaborator' => 'collaborator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'enter article revision log entry'.
  $permissions['enter article revision log entry'] = array(
    'name' => 'enter article revision log entry',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored by option'.
  $permissions['override article authored by option'] = array(
    'name' => 'override article authored by option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article authored on option'.
  $permissions['override article authored on option'] = array(
    'name' => 'override article authored on option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article promote to front page option'.
  $permissions['override article promote to front page option'] = array(
    'name' => 'override article promote to front page option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article published option'.
  $permissions['override article published option'] = array(
    'name' => 'override article published option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article revision option'.
  $permissions['override article revision option'] = array(
    'name' => 'override article revision option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  // Exported permission: 'override article sticky option'.
  $permissions['override article sticky option'] = array(
    'name' => 'override article sticky option',
    'roles' => array(),
    'module' => 'override_node_options',
  );

  return $permissions;
}
