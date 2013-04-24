<?php
/**
 * @file
 * features_node_brand_exportation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_node_brand_exportation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}
