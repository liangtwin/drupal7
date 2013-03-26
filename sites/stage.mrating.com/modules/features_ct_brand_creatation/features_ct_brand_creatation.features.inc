<?php
/**
 * @file
 * features_ct_brand_creatation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ct_brand_creatation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_ct_brand_creatation_node_info() {
  $items = array(
    'brand' => array(
      'name' => t('品牌'),
      'base' => 'node_content',
      'description' => t('全球品牌库'),
      'has_title' => '1',
      'title_label' => t('标题'),
      'help' => '',
    ),
  );
  return $items;
}
