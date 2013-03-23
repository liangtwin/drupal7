<?php
/**
 * @file
 * features_block_superfish_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_block_superfish_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
      'skeletontheme' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'skeletontheme',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
