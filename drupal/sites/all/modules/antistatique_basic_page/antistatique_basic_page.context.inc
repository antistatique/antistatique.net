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

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'work_page';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'we/work' => 'we/work',
        'we/work/technology-development' => 'we/work/technology-development',
        'we/work/digital-strategy' => 'we/work/digital-strategy',
        'we/work/ux-ui-branding-design' => 'we/work/ux-ui-branding-design',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-21' => array(
          'module' => 'block',
          'delta' => '21',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'views-projects-block_variant' => array(
          'module' => 'views',
          'delta' => 'projects-block_variant',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'block-13' => array(
          'module' => 'block',
          'delta' => '13',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'block-15' => array(
          'module' => 'block',
          'delta' => '15',
          'region' => 'above_footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['work_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'work_page_fr';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous/travaillons' => 'nous/travaillons',
        'nous/travaillons/les-technologies' => 'nous/travaillons/les-technologies',
        'nous/faisons/de-la-strategie-digitale' => 'nous/faisons/de-la-strategie-digitale',
        'nous/faisons/du-design' => 'nous/faisons/du-design',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-20' => array(
          'module' => 'block',
          'delta' => '20',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'views-projects-block_variant' => array(
          'module' => 'views',
          'delta' => 'projects-block_variant',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'block-12' => array(
          'module' => 'block',
          'delta' => '12',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'block-14' => array(
          'module' => 'block',
          'delta' => '14',
          'region' => 'above_footer',
          'weight' => '-7',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['work_page_fr'] = $context;

  return $export;
}
