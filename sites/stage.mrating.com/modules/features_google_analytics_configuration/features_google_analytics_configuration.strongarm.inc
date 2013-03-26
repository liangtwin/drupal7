<?php
/**
 * @file
 * features_google_analytics_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_google_analytics_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'googleanalytics_account';
  $strongarm->value = 'UA-4789083-2';
  $export['googleanalytics_account'] = $strongarm;

  return $export;
}
