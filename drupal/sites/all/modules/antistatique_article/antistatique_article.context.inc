<?php
/**
 * @file
 * antistatique_article.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function antistatique_article_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_all';
  $context->description = '';
  $context->tag = 'sections';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        'nous/bloggons' => 'nous/bloggons',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-news-block_single' => array(
          'module' => 'views',
          'delta' => 'news-block_single',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
        'views-news-block_all' => array(
          'module' => 'views',
          'delta' => 'news-block_all',
          'region' => 'above_footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('sections');
  $export['blog_all'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'blog_article';
  $context->description = 'The article page, displaying a single article.';
  $context->tag = 'specific';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'article' => 'article',
      ),
      'options' => array(
        'node_form' => '0',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-breadcrumb-block_2' => array(
          'module' => 'views',
          'delta' => 'breadcrumb-block_2',
          'region' => 'header',
          'weight' => '-10',
        ),
        'disqus-disqus_comments' => array(
          'module' => 'disqus',
          'delta' => 'disqus_comments',
          'region' => 'content_below',
          'weight' => '-10',
        ),
        'views-news-block_foggy_other' => array(
          'module' => 'views',
          'delta' => 'news-block_foggy_other',
          'region' => 'above_footer',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('The article page, displaying a single article.');
  t('specific');
  $export['blog_article'] = $context;

  return $export;
}
