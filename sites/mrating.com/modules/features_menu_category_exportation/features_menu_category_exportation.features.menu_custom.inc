<?php
/**
 * @file
 * features_menu_category_exportation.features.menu_custom.inc
 */

/**
 * Implements hook_menu_default_menu_custom().
 */
function features_menu_category_exportation_menu_default_menu_custom() {
  $menus = array();

  // Exported menu: menu-category.
  $menus['menu-category'] = array(
    'menu_name' => 'menu-category',
    'title' => '品牌分类',
    'description' => '',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('品牌分类');


  return $menus;
}
