<?php
/**
 * @file
 * features_b_m_configuration.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function features_b_m_configuration_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_profile_id';
  $strongarm->value = 'mrating_default';
  $export['backup_migrate_profile_id'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_schedule_last_run_399b546689d498a630eb55efe84f2cda';
  $strongarm->value = 1363700499;
  $export['backup_migrate_schedule_last_run_399b546689d498a630eb55efe84f2cda'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_schedule_last_run_6abc58273e9aee47b82e439d23c79558';
  $strongarm->value = 1363761776;
  $export['backup_migrate_schedule_last_run_6abc58273e9aee47b82e439d23c79558'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'backup_migrate_schedule_last_run_a66214f97e8cf231dd3f4d7cdd557038';
  $strongarm->value = 1363761776;
  $export['backup_migrate_schedule_last_run_a66214f97e8cf231dd3f4d7cdd557038'] = $strongarm;

  return $export;
}
