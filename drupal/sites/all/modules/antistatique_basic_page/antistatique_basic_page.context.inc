<?php
/**
 * @file
 * antistatique_basic_page.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function antistatique_basic_page_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'we';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'node_taxonomy' => array(
      'values' => array(
        18 => 18,
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-breadcrumb-block' => array(
          'module' => 'views',
          'delta' => 'breadcrumb-block',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sections');
  $export['we'] = $context;

  return $export;
}
