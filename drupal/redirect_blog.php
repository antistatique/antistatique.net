<?php
/**
 * PHP Script to map old WordPress URL to new Drupal blog.
 *
 * This script require the following table

     CREATE TABLE `migrate_blog_url` (
      `source_uri` varchar(255) NOT NULL DEFAULT '',
      `destination_uri` varchar(255) DEFAULT NULL,
      PRIMARY KEY (`source_uri`)
    ) ENGINE=InnoDB DEFAULT CHARSET=utf8;

 *
 * Source des données: https://docs.google.com/spreadsheets/d/1T-9o0L6Z8ev9H1UEvXr3fiz97NADuYQ-a3xoJCJ0W6A/edit#gid=176584362
 *
 * And a Apache Rewrite rule, like:

      RewriteRule ^blog/(.+) /redirect_blog.php [L]

 */
$source_uri = $_SERVER['REDIRECT_URL'];

define('DRUPAL_ROOT', getcwd());
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';

// Only bootstrap to DB so we are as fast as possible. Much of the Drupal API
// is not available to us.
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

if (!$source_uri) {
    die('Source URI not found. <a href="http://antistatique.net">Go to homepage</a>');
}

if ($uri_map = db_query("SELECT destination_uri FROM migrate_blog_url WHERE source_uri = :source_uri", array(':source_uri' => $source_uri))->fetchObject()) {

    $destination_uri = $uri_map->destination_uri;

    header('Location: ' . $destination_uri, TRUE, 301);
} else {
  // Can't find the source URI. TODO: Make nice 404 page.
  header('Status=Not Found', TRUE, 404);
  print "Erreur 404. <a href='http://antistatique.net'>Retour a la page d'accueil</a>";
}
