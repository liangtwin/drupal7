<?php
/**
 * @file
 * features_views_related_brand_exportation.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function features_views_related_brand_exportation_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'related_brand';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = '相关品牌';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = '相关品牌';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button_label'] = '重置';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '5';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* 字段: 内容: 标题 */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* 字段: 内容: 评分 */
  $handler->display->display_options['fields']['field_pingfen']['id'] = 'field_pingfen';
  $handler->display->display_options['fields']['field_pingfen']['table'] = 'field_data_field_pingfen';
  $handler->display->display_options['fields']['field_pingfen']['field'] = 'field_pingfen';
  $handler->display->display_options['fields']['field_pingfen']['click_sort_column'] = 'rating';
  $handler->display->display_options['fields']['field_pingfen']['settings'] = array(
    'widget' => array(
      'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
    ),
    'expose' => 1,
    'style' => 'average',
    'text' => 'average',
  );
  /* Sort criterion: 内容: 评分 (field_pingfen:rating) */
  $handler->display->display_options['sorts']['field_pingfen_rating']['id'] = 'field_pingfen_rating';
  $handler->display->display_options['sorts']['field_pingfen_rating']['table'] = 'field_data_field_pingfen';
  $handler->display->display_options['sorts']['field_pingfen_rating']['field'] = 'field_pingfen_rating';
  $handler->display->display_options['sorts']['field_pingfen_rating']['order'] = 'DESC';
  /* Contextual filter: 内容: Has taxonomy term ID */
  $handler->display->display_options['arguments']['tid']['id'] = 'tid';
  $handler->display->display_options['arguments']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['arguments']['tid']['field'] = 'tid';
  $handler->display->display_options['arguments']['tid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['tid']['exception']['title'] = '全部';
  $handler->display->display_options['arguments']['tid']['default_argument_type'] = 'taxonomy_tid';
  $handler->display->display_options['arguments']['tid']['default_argument_options']['term_page'] = FALSE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['node'] = TRUE;
  $handler->display->display_options['arguments']['tid']['default_argument_options']['vocabularies'] = array(
    'category' => 'category',
  );
  $handler->display->display_options['arguments']['tid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['tid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['tid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: 内容: 已发表 */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: 内容: 类型 */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'brand' => 'brand',
  );
  /* Filter criterion: 内容: Has taxonomy term */
  $handler->display->display_options['filters']['tid']['id'] = 'tid';
  $handler->display->display_options['filters']['tid']['table'] = 'taxonomy_index';
  $handler->display->display_options['filters']['tid']['field'] = 'tid';
  $handler->display->display_options['filters']['tid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['tid']['type'] = 'select';
  $handler->display->display_options['filters']['tid']['vocabulary'] = 'category';
  $handler->display->display_options['filters']['tid']['hierarchy'] = 1;

  /* Display: Block */
  $handler = $view->new_display('block', 'Block', 'block');
  $translatables['related_brand'] = array(
    t('Master'),
    t('相关品牌'),
    t('more'),
    t('Apply'),
    t('重置'),
    t('Sort by'),
    t('Asc'),
    t('Desc'),
    t('评分'),
    t('全部'),
    t('Block'),
  );
  $export['related_brand'] = $view;

  return $export;
}
