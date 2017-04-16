<?php
/**
 * @file
 * bsc_install.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function bsc_install_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'all_pages';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '*' => '*',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'boxes-site_logo' => array(
          'module' => 'boxes',
          'delta' => 'site_logo',
          'region' => 'branding_left',
          'weight' => '-10',
        ),
        'panels_mini-footer' => array(
          'module' => 'panels_mini',
          'delta' => 'footer',
          'region' => 'footer',
          'weight' => '-10',
        ),
        'system-powered-by' => array(
          'module' => 'system',
          'delta' => 'powered-by',
          'region' => 'footer',
          'weight' => '-9',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['all_pages'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'front_page';
  $context->description = '';
  $context->tag = '';
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
        'views-front_page_slideshow-block' => array(
          'module' => 'views',
          'delta' => 'front_page_slideshow-block',
          'region' => 'header',
          'weight' => '-17',
        ),
        'views-front_page_links-block' => array(
          'module' => 'views',
          'delta' => 'front_page_links-block',
          'region' => 'header',
          'weight' => '-16',
        ),
        'views-recent_news-block' => array(
          'module' => 'views',
          'delta' => 'recent_news-block',
          'region' => 'content',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['front_page'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'news_or_blog';
  $context->description = '';
  $context->tag = '';
  $context->conditions = array(
    'views' => array(
      'values' => array(
        'recent_news' => 'recent_news',
        'recent_news:page_1' => 'recent_news:page_1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-archive-block' => array(
          'module' => 'views',
          'delta' => 'archive-block',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['news_or_blog'] = $context;

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'landing_pages';
  $context->description = '';
  $context->tag = 'Landing Page';
  $context->conditions = array(
    'node' => array(
      'values' => array(
        'landing_page' => 'landing_page',
      ),
      'options' => array(
        'node_form' => '1',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'webform-client-block-7' => array(
          'module' => 'webform',
          'delta' => 'client-block-7',
          'region' => 'sidebar_second',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;
  $export['landing_pages'] = $context;

  return $export;
}
