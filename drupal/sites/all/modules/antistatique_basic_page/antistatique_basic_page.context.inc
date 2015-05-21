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
  $context->name = 'page';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'page' => 'page',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
    'path' => array(
      'values' => array(
        '~<front>' => '~<front>',
        '~node/1' => '~node/1',
        '~node/3' => '~node/3',
        '~node/4' => '~node/4',
        '~404' => '~404',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-breadcrumb-block_1' => array(
          'module' => 'views',
          'delta' => 'breadcrumb-block_1',
          'region' => 'header',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('sections');
  $export['page'] = $context;

  return $export;
}
