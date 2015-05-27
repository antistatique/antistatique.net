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
  $context->name = 'darkheader';
  $context->description = 'Is it a dark header ? Then add a class';
  $context->tag = 'header';
  $context->conditions = array(
    'field_bool' => array(
      'values' => array(
        'field_hero_image_is_dark' => 'field_hero_image_is_dark',
      ),
      'options' => array(
        'bool_field_value' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'dark-hero',
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Is it a dark header ? Then add a class');
  t('header');
  $export['darkheader'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage';
  $context->description = '';
  $context->tag = 'specific';
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
        'views-projects-block_variant' => array(
          'module' => 'views',
          'delta' => 'projects-block_variant',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'views-news-block_10cols' => array(
          'module' => 'views',
          'delta' => 'news-block_10cols',
          'region' => 'above_footer',
          'weight' => '-6',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('specific');
  $export['homepage'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_en';
  $context->description = 'Inject the Newsletter English block';
  $context->tag = 'specific';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'en' => 'en',
      ),
    ),
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
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'block-8' => array(
          'module' => 'block',
          'delta' => '8',
          'region' => 'above_footer',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inject the Newsletter English block');
  t('specific');
  $export['homepage_en'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'homepage_fr';
  $context->description = 'Inject the Newsletter French block';
  $context->tag = 'specific';
  $context->conditions = array(
    'language' => array(
      'values' => array(
        'fr' => 'fr',
      ),
    ),
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'block-5' => array(
          'module' => 'block',
          'delta' => '5',
          'region' => 'content_above',
          'weight' => '-10',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'block-9' => array(
          'module' => 'block',
          'delta' => '9',
          'region' => 'above_footer',
          'weight' => '-5',
        ),
      ),
    ),
  );
  $context->condition_mode = 1;

  // Translatables
  // Included for use with string extractors like potx.
  t('Inject the Newsletter French block');
  t('specific');
  $export['homepage_fr'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'nohero';
  $context->description = 'Add pattern';
  $context->tag = 'header';
  $context->conditions = array(
    'entity_field' => array(
      'values' => array(
        'entity_type' => 'a:8:{s:4:"node";s:4:"node";s:13:"taxonomy_term";i:0;s:16:"i18n_translation";i:0;s:15:"paragraphs_item";i:0;s:4:"file";i:0;s:19:"taxonomy_vocabulary";i:0;s:4:"user";i:0;s:15:"wysiwyg_profile";i:0;}',
        'field_name' => 'field_teammate_hero_image',
        'field_value' => '1',
        'field_empty' => 1,
      ),
    ),
    'taxonomy_term' => array(
      'values' => array(
        'category' => 'category',
        'section' => 'section',
        'skills' => 'skills',
      ),
      'options' => array(
        'term_form' => '0',
      ),
    ),
    'views' => array(
      'values' => array(
        'news:page' => 'news:page',
      ),
    ),
  );
  $context->reactions = array(
    'theme_html' => array(
      'class' => 'pattern-hero dark-hero',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Add pattern');
  t('header');
  $export['nohero'] = $context;

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
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'locale-language_content' => array(
          'module' => 'locale',
          'delta' => 'language_content',
          'region' => 'navigation',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('general');
  $export['sitewide'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'taxonomy';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'taxonomy_term' => array(
      'values' => array(
        'category' => 'category',
      ),
      'options' => array(
        'term_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-categories-block_1' => array(
          'module' => 'views',
          'delta' => 'categories-block_1',
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
  $export['taxonomy'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'we_page';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'we' => 'we',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-users-block_all' => array(
          'module' => 'views',
          'delta' => 'users-block_all',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'block-10' => array(
          'module' => 'block',
          'delta' => '10',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'block-3' => array(
          'module' => 'block',
          'delta' => '3',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'views-news-block_10cols' => array(
          'module' => 'views',
          'delta' => 'news-block_10cols',
          'region' => 'above_footer',
          'weight' => '-6',
        ),
        'block-6' => array(
          'module' => 'block',
          'delta' => '6',
          'region' => 'above_footer',
          'weight' => '-5',
        ),
        'views-projects-block_normal' => array(
          'module' => 'views',
          'delta' => 'projects-block_normal',
          'region' => 'above_footer',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['we_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'we_page_fr';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous' => 'nous',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-users-block_all' => array(
          'module' => 'views',
          'delta' => 'users-block_all',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'block-11' => array(
          'module' => 'block',
          'delta' => '11',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
        'block-4' => array(
          'module' => 'block',
          'delta' => '4',
          'region' => 'above_footer',
          'weight' => '-8',
        ),
        'views-news-block_10cols' => array(
          'module' => 'views',
          'delta' => 'news-block_10cols',
          'region' => 'above_footer',
          'weight' => '-7',
        ),
        'block-7' => array(
          'module' => 'block',
          'delta' => '7',
          'region' => 'above_footer',
          'weight' => '-5',
        ),
        'views-projects-block_normal' => array(
          'module' => 'views',
          'delta' => 'projects-block_normal',
          'region' => 'above_footer',
          'weight' => '-4',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['we_page_fr'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'with_you_page';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'we/work/with/you' => 'we/work/with/you',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-236' => array(
          'module' => 'webform',
          'delta' => 'client-block-236',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'block-16' => array(
          'module' => 'block',
          'delta' => '16',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'article-foggy',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['with_you_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'with_you_page_fr';
  $context->description = '';
  $context->tag = 'Three Pages';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous/travaillons/avec/vous' => 'nous/travaillons/avec/vous',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-236' => array(
          'module' => 'webform',
          'delta' => 'client-block-236',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'block-17' => array(
          'module' => 'block',
          'delta' => '17',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
      ),
    ),
    'theme_html' => array(
      'class' => 'article-foggy',
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('Three Pages');
  $export['with_you_page_fr'] = $context;

  return $export;
}
