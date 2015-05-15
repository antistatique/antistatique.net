<?php

/**
 * Implements hook_migrate_api().
 */
function antistatique_migrate_migrate_api() {
  $api = array(
    'api' => 2,
    'groups' => array(
      'drupal8' => array(
        'title' => t('D8 Articles Migrations'),
      ),
    ),
    'migrations' => array(
      'ArticleNodeMigration' => array(
        'class_name' => 'ArticleNodeMigration',
        'group_name' => 'drupal8',
      ),
    ),
  );

  return $api;
}