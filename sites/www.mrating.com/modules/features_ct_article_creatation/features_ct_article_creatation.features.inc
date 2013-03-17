<?php
/**
 * @file
 * features_ct_article_creatation.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function features_ct_article_creatation_ctools_plugin_api() {
  list($module, $api) = func_get_args();
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function features_ct_article_creatation_node_info() {
  $items = array(
    'article' => array(
      'name' => t('文章'),
      'base' => 'node_content',
      'description' => t('使用<em>文章</em>发布有关时间的内容，如消息，新闻或日志。'),
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}
