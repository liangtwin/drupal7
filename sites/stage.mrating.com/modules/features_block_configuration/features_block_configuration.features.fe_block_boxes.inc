<?php
/**
 * @file
 * features_block_configuration.features.fe_block_boxes.inc
 */

/**
 * Implements hook_default_fe_block_boxes().
 */
function features_block_configuration_default_fe_block_boxes() {
  $export = array();

  $fe_block_boxes = new stdClass();
  $fe_block_boxes->info = 'Secondary AD';
  $fe_block_boxes->format = 'filtered_html';
  $fe_block_boxes->machine_name = 'secondary_ad';
  $fe_block_boxes->body = '<p><iframe allowtransparency="yes" border="0" frameborder="no" height="167px" id="f" marginheight="0" marginwidth="0" scrolling="NO" src="http://union.yihaodian.com/resourceCenter/viewRanking.do?rankingVo.trackerU=101136194&amp;rankingVo.category.categoryId=5009&amp;rankingVo.category.categoryName=%25E7%25BE%258E%25E5%25AE%25B9%25E5%258C%2596%25E5%25A6%2586%25E3%2580%2581%25E4%25B8%25AA%25E4%25BA%25BA%25E6%258A%25A4%25E7%2590%2586&amp;rankingVo.width=900&amp;rankingVo.height=165&amp;rankingVo.isShowPic=1" width="902px"></iframe></p>
';

  $export['secondary_ad'] = $fe_block_boxes;

  return $export;
}
