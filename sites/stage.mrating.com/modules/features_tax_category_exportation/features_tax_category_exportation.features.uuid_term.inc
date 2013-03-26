<?php
/**
 * @file
 * features_tax_category_exportation.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function features_tax_category_exportation_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => '食品饮料',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '2',
    'uuid' => '204c8e13-6643-4f27-946d-8214fd2a40f6',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '牛奶乳品',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7b1a1263-9bc3-45b0-b332-e15228cf7a61',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '204c8e13-6643-4f27-946d-8214fd2a40f6',
    ),
  );
  $terms[] = array(
    'name' => '牛奶',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '8e212dcf-ee47-4b01-8151-0a8f736e724b',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '7b1a1263-9bc3-45b0-b332-e15228cf7a61',
    ),
  );
  return $terms;
}
