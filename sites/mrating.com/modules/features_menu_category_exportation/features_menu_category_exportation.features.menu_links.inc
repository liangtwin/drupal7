<?php
/**
 * @file
 * features_menu_category_exportation.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function features_menu_category_exportation_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: menu-category:taxonomy/term/1
  $menu_links['menu-category:taxonomy/term/1'] = array(
    'menu_name' => 'menu-category',
    'link_path' => 'taxonomy/term/1',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '食品饮料',
    'options' => array(
      'attributes' => array(
        'title' => '食品饮料',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '2',
  );
  // Exported menu link: menu-category:taxonomy/term/2
  $menu_links['menu-category:taxonomy/term/2'] = array(
    'menu_name' => 'menu-category',
    'link_path' => 'taxonomy/term/2',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '牛奶乳品',
    'options' => array(
      'attributes' => array(
        'title' => '牛奶乳品',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '1',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/1',
  );
  // Exported menu link: menu-category:taxonomy/term/3
  $menu_links['menu-category:taxonomy/term/3'] = array(
    'menu_name' => 'menu-category',
    'link_path' => 'taxonomy/term/3',
    'router_path' => 'taxonomy/term/%',
    'link_title' => '牛奶',
    'options' => array(
      'attributes' => array(
        'title' => '牛奶',
      ),
    ),
    'module' => 'taxonomy_menu',
    'hidden' => '0',
    'external' => '0',
    'has_children' => '0',
    'expanded' => '1',
    'weight' => '0',
    'parent_path' => 'taxonomy/term/2',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('牛奶');
  t('牛奶乳品');
  t('食品饮料');


  return $menu_links;
}
