<?php
/**
 * @file
 * features_taxonomy_menu_configuration.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_taxonomy_menu_configuration_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
