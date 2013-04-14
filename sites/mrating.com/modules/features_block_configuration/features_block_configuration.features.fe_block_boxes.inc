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
  $fe_block_boxes->info = 'Leftside AD';
  $fe_block_boxes->format = 'full_html';
  $fe_block_boxes->machine_name = 'leftside_ad';
  $fe_block_boxes->body = '<p><iframe allowtransparency="yes" border="0" frameborder="no" height="302px" id="f" marginheight="0" marginwidth="0" scrolling="NO" src="http://union.yihaodian.com/resourceCenter/getUserCookies.do?shoppingWindowVo.trackerU=101136194&amp;shoppingWindowVo.type=3&amp;shoppingWindowVo.width=195&amp;shoppingWindowVo.height=300" width="197px"></iframe></p>
';

  $export['leftside_ad'] = $fe_block_boxes;

  return $export;
}
