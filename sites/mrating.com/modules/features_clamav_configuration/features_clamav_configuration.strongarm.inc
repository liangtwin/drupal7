<?php
/**
 * @file
 * features_clamav_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_clamav_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'clamav_mode';
  $strongarm->value = '1';
  $export['clamav_mode'] = $strongarm;

  return $export;
}
