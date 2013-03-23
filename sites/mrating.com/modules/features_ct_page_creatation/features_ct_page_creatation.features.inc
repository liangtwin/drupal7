<?php
/**
 * @file
 * features_ct_page_creatation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ct_page_creatation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_ct_page_creatation_node_info() {
  $items = array(
    'page' => array(
      'name' => t('基本页面'),
      'base' => 'node_content',
      'description' => t('对您的静态内容使用<em>基本页面</em>，比如"关于我们"页面。'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
