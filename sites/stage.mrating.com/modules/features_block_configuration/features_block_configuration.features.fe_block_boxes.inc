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
  $fe_block_boxes->body = '<!-- 广告位：Secondary -->
<script type="text/javascript" >BAIDU_CLB_SLOT_ID = "626679";</script>
<script type="text/javascript" src="http://cbjs.baidu.com/js/o.js"></script>';

  $export['secondary_ad'] = $fe_block_boxes;

  return $export;
}
