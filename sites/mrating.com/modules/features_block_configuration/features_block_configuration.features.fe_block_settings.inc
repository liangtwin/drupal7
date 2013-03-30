<?php
/**
 * @file
 * features_block_configuration.features.fe_block_settings.inc
 */

/**
 * Implements hook_default_fe_block_settings().
 */
function features_block_configuration_default_fe_block_settings() {
  $export = array();

  $export['version'] = '2.0';

  $export['block-secondary_ad'] = array(
    'cache' => -1,
    'custom' => '0',
    'machine_name' => 'secondary_ad',
    'module' => 'block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'secondary_content',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['comment-recent'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'recent',
    'module' => 'comment',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['copyright_block-copyright_block'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'copyright_block',
    'module' => 'copyright_block',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'footer',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '-17',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '<none>',
    'visibility' => '0',
  );

  $export['devel-execute_php'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'execute_php',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['devel-switch_user'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'switch_user',
    'module' => 'devel',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['disqus-disqus_combination_widget'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'disqus_combination_widget',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['disqus-disqus_comments'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'disqus_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['disqus-disqus_popular_threads'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'disqus_popular_threads',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['disqus-disqus_recent_comments'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'disqus_recent_comments',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['disqus-disqus_top_commenters'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'disqus_top_commenters',
    'module' => 'disqus',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['locale-language'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'language',
    'module' => 'locale',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['masquerade-masquerade'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'masquerade',
    'module' => 'masquerade',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-devel'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'devel',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['menu-menu-category'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'menu-category',
    'module' => 'menu',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['node-recent'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'recent',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_main',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['node-syndicate'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'syndicate',
    'module' => 'node',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['print-print-links'] = array(
    'cache' => 4,
    'custom' => '0',
    'delta' => 'print-links',
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['print-print-top'] = array(
    'cache' => 8,
    'custom' => '0',
    'delta' => 'print-top',
    'module' => 'print',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['search-form'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'form',
    'module' => 'search',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '-1',
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '-10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['sharethis-sharethis_block'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'sharethis_block',
    'module' => 'sharethis',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['shortcut-shortcuts'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'shortcuts',
    'module' => 'shortcut',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['superfish-1'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '1',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['superfish-2'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '2',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['superfish-3'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '3',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['superfish-4'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => '4',
    'module' => 'superfish',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-help'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'help',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'help',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-main'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-main-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'main-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'menu_bar',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-management'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'management',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-navigation'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'navigation',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-powered-by'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'powered-by',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '-18',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['system-user-menu'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'user-menu',
    'module' => 'system',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['user-login'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'login',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'content',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '10',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['user-new'] = array(
    'cache' => '1',
    'custom' => '0',
    'delta' => 'new',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_sidebar',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['user-online'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'online',
    'module' => 'user',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => 'dashboard_inactive',
        'status' => '1',
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  $export['views-top_100-block'] = array(
    'cache' => -1,
    'custom' => '0',
    'delta' => 'top_100-block',
    'module' => 'views',
    'node_types' => array(),
    'pages' => '',
    'roles' => array(),
    'themes' => array(
      'pixture_reloaded' => array(
        'region' => 'sidebar_first',
        'status' => '1',
        'theme' => 'pixture_reloaded',
        'weight' => '0',
      ),
      'seven' => array(
        'region' => '',
        'status' => 0,
        'theme' => 'seven',
        'weight' => '0',
      ),
    ),
    'title' => '',
    'visibility' => '0',
  );

  return $export;
}
