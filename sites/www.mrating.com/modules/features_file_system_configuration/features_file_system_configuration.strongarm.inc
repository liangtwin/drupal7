<?php
/**
 * @file
 * features_file_system_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_file_system_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'file_private_path';
  $strongarm->value = 'sites/www.mrating.com/backup';
  $export['file_private_path'] = $strongarm;

  return $export;
}
