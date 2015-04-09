<?php
/**
 * @file
 * antistatique_site.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function antistatique_site_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'general';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-2' => array(
          'module' => 'block',
          'delta' => '2',
          'region' => 'content_above',
          'weight' => '-10',
        ),
        'views-projects-block_variant' => array(
          'module' => 'views',
          'delta' => 'projects-block_variant',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'views-news-block_foggy_other' => array(
          'module' => 'views',
          'delta' => 'news-block_foggy_other',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'sitewide';
  $context->description = '';
  $context->tag = 'general';
  $context->conditions = array(
    'sitewide' => array(
      'values' => array(
        1 => 1,
      ),
    ),
  );
  $context->reactions = array();
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');
  $export['sitewide'] = $context;

  return $export;
}
