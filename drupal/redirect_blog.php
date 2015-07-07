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
$source_uri = $_SERVER['REQUEST_URI'];

if (!$source_uri) {
    header($_SERVER["SERVER_PROTOCOL"]." 404 Not Found");
    die('Source URI not found. <a href="http://antistatique.net">Go to homepage</a>');
}

define('DRUPAL_ROOT', getcwd());
require_once DRUPAL_ROOT . '/includes/bootstrap.inc';

// Only bootstrap to DB so we are as fast as possible. Much of the Drupal API
// is not available to us.
drupal_bootstrap(DRUPAL_BOOTSTRAP_DATABASE);

$host = 'http://' . $_SERVER['HTTP_HOST'];

$source_uri = rtrim($source_uri, '/') . '/';

if ($uri_map = db_query("SELECT destination_uri FROM migrate_blog_url WHERE source_uri = :source_uri", array(':source_uri' => $source_uri))->fetchObject()) {

    $destination_uri = $host . $uri_map->destination_uri;

    header('Location: ' . $destination_uri, TRUE, 301);
} else {
  // Can't find the source URI. Let's guess we are lucky
  $slug = substr($source_uri, 5); // remove '/blog' prefix
  $destination_url = $host . '/fr/nous/bloggons' . $slug;
  header('Location: ' . $destination_url, TRUE, 301);
}
