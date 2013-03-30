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
    'name' => '美容化妆',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '03a29e1e-6962-4eea-9ab5-f702f7563776',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '奶粉',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '0d43173f-8a4e-44e4-95bf-41bb33c6aeaf',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'cc4a4d01-f2fe-498b-bb5a-b3ac33f45d3c',
    ),
  );
  $terms[] = array(
    'name' => '家居建材',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '0e7e7f22-560e-4634-93c2-5d99e2ef8631',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
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
    'name' => '生活电器',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '2fa0595c-8a93-4464-8909-ef83c5e7c1a1',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '汽车保养',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '3441f80c-198d-4355-981d-8d19067da876',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '83492486-830e-4373-aea9-3980e2911af2',
    ),
  );
  $terms[] = array(
    'name' => '平板电视',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '400132e7-9602-462e-8516-b361c48bbba3',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'f4415198-7ee5-4105-8944-329a1a000524',
    ),
  );
  $terms[] = array(
    'name' => '运动户外',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '4fcbbd54-bda7-4129-a744-1ad1c2fbcb88',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '汽车电子',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '5c12fa15-c1b1-4456-89d5-a1723249e88c',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '83492486-830e-4373-aea9-3980e2911af2',
    ),
  );
  $terms[] = array(
    'name' => '1段奶粉',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '64593455-c46c-4955-82c3-9f007df56cf0',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '0d43173f-8a4e-44e4-95bf-41bb33c6aeaf',
    ),
  );
  $terms[] = array(
    'name' => '酒店住宿',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '681e4b39-515c-486a-b5b0-d8b68f77c08b',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '服装配饰',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '6dfabacf-6448-4b38-9320-b1043536aefc',
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
    'name' => '数码电器',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7def0fd5-8b70-4a19-9c16-f2fb5891d855',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '旅游度假',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '7ee5ae51-26ac-4c62-af63-fccee2304c91',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '汽车用品',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '83492486-830e-4373-aea9-3980e2911af2',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '面部护肤',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '843f8b5a-8e1a-4c12-92ae-bf9a9f5dfea4',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '03a29e1e-6962-4eea-9ab5-f702f7563776',
    ),
  );
  $terms[] = array(
    'name' => '人参',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '881c8b49-d580-4d19-8bfb-2fed7238e042',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'a388b9eb-c81d-4639-848d-5b16d4aa253e',
    ),
  );
  $terms[] = array(
    'name' => '手表眼镜',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '88492dac-975b-44e2-9485-015fff1bb3ee',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
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
  $terms[] = array(
    'name' => '钻石珠宝',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9cee631c-ce42-47b2-b989-edca0304a3c2',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'abd880c4-4e16-4d0d-ae67-94b7a36c60c2',
    ),
  );
  $terms[] = array(
    'name' => '钻石',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => '9e04079e-a984-42c5-a807-55ebfa16fed7',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '9cee631c-ce42-47b2-b989-edca0304a3c2',
    ),
  );
  $terms[] = array(
    'name' => '传统滋补',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'a388b9eb-c81d-4639-848d-5b16d4aa253e',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'fcc2a1a3-6a2e-4f02-9b35-6c0c6a43752a',
    ),
  );
  $terms[] = array(
    'name' => '手机通讯',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'a907efac-d882-40a3-92e6-64ef0f452404',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'f3b8a2c5-ab85-4047-b601-1ab3539f172a',
    ),
  );
  $terms[] = array(
    'name' => '珠宝饰品',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'abd880c4-4e16-4d0d-ae67-94b7a36c60c2',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '机油润滑油',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'b14dc607-b196-4ae1-97b0-dbec257c3783',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '3441f80c-198d-4355-981d-8d19067da876',
    ),
  );
  $terms[] = array(
    'name' => '母婴用品',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'cc4a4d01-f2fe-498b-bb5a-b3ac33f45d3c',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '冬虫夏草',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'cc7c0cae-8431-4fd6-a40f-7ee8da5ad095',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => 'a388b9eb-c81d-4639-848d-5b16d4aa253e',
    ),
  );
  $terms[] = array(
    'name' => '洁面',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'dfe0f34d-b5d1-4482-a7ac-5e9b2457d375',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '843f8b5a-8e1a-4c12-92ae-bf9a9f5dfea4',
    ),
  );
  $terms[] = array(
    'name' => '鞋帽箱包',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'e1d26445-928e-4871-b3d3-171364af9582',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '手机数码',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f3b8a2c5-ab85-4047-b601-1ab3539f172a',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  $terms[] = array(
    'name' => '大家电',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'f4415198-7ee5-4105-8944-329a1a000524',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
    'parent' => array(
      0 => '2fa0595c-8a93-4464-8909-ef83c5e7c1a1',
    ),
  );
  $terms[] = array(
    'name' => '医药保健',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => '0',
    'uuid' => 'fcc2a1a3-6a2e-4f02-9b35-6c0c6a43752a',
    'vocabulary_machine_name' => 'category',
    'metatags' => array(),
  );
  return $terms;
}
