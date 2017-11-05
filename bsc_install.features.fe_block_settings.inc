<?php
/**
 * @file
 * bsc_install.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function bsc_install_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['boxes-branding_cart'] = array(
    'cache' => -2,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'branding_cart',
    'module' => 'boxes',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap_subtheme' => array(
        'region' => 'branding_right',
        'status' => 1,
        'theme' => 'bootstrap_subtheme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '',
    'visibility' => 0,
  );

  $export['commerce_cart-cart'] = array(
    'cache' => -1,
    'css_class' => '',
    'custom' => 0,
    'delta' => 'cart',
    'module' => 'commerce_cart',
    'node_types' => array(),
    'pages' => 'checkout*',
    'roles' => array(),
    'themes' => array(
      'bartik' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'bartik',
        'weight' => 0,
      ),
      'bootstrap_subtheme' => array(
        'region' => 'branding_right',
        'status' => 1,
        'theme' => 'bootstrap_subtheme',
        'weight' => 0,
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => 0,
      ),
    ),
    'title' => '<none>',
    'visibility' => 0,
  );

  return $export;
}
