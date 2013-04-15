<?php
/**
 * @file
 * features_ct_brand_creatation.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function features_ct_brand_creatation_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-brand-body'
  $field_instances['node-brand-body'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 100,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 2,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => 31,
    ),
  );

  // Exported field_instance: 'node-brand-field_category'
  $field_instances['node-brand-field_category'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 3,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_category',
    'label' => '品牌分类',
    'required' => 1,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'options',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'options_select',
      'weight' => 43,
    ),
  );

  // Exported field_instance: 'node-brand-field_guoj'
  $field_instances['node-brand-field_guoj'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'countries',
        'settings' => array(),
        'type' => 'country_default',
        'weight' => 1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_guoj',
    'label' => '原产国',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'countries',
      'settings' => array(),
      'type' => 'countries_continent',
      'weight' => 42,
    ),
  );

  // Exported field_instance: 'node-brand-field_pingfen'
  $field_instances['node-brand-field_pingfen'] = array(
    'bundle' => 'brand',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'inline',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 1,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'inline',
        'module' => 'fivestar',
        'settings' => array(
          'expose' => 0,
          'style' => 'average',
          'text' => 'average',
          'widget' => array(
            'fivestar_widget' => 'sites/all/modules/fivestar/widgets/oxygen/oxygen.css',
          ),
        ),
        'type' => 'fivestar_formatter_default',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_pingfen',
    'label' => '评分',
    'required' => 0,
    'settings' => array(
      'allow_clear' => 1,
      'stars' => 10,
      'target' => 'none',
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'fivestar',
      'settings' => array(),
      'type' => 'exposed',
      'weight' => 41,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('原产国');
  t('品牌分类');
  t('评分');

  return $field_instances;
}
