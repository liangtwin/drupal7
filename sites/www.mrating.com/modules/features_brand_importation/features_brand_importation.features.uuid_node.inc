<?php
/**
 * @file
 * features_brand_importation.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function features_brand_importation_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => '1',
  'title' => '欧德宝',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '94460b34-6bb4-4553-9e24-f4416c013522',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => '1363317329',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'b80f4bcd-ae81-48d5-b153-08271e523f5a',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nordmilch诺德集团是德国乳业巨头，在今年兼并了竞争对手Humana后跃居为德国产量及销量第一的乳品生产商，其产品包括各类型奶粉、鲜奶、奶油、乳酪等远销世界。这款欧德堡超高温处理部分脱脂牛奶，采用天然奶源经UltraHighTemperature超高温杀菌处理，具有保存期长的特点。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Nordmilch诺德集团是德国乳业巨头，在今年兼并了竞争对手Humana后跃居为德国产量及销量第一的乳品生产商，其产品包括各类型奶粉、鲜奶、奶油、乳酪等远销世界。这款欧德堡超高温处理部分脱脂牛奶，采用天然奶源经UltraHighTemperature超高温杀菌处理，具有保存期长的特点。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => '3',
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'DE',
      ),
    ),
  ),
  'field_pingfen' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://www.mrating.com/content/%E6%AC%A7%E5%BE%B7%E5%AE%9D',
    'title' => '欧德宝',
    'identifier' => 'node/19',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2013-03-15 11:15:29 +0800',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => '德运',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '3800c953-bfca-45b2-976f-7e6cb7a52402',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => '1363317528',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'bdcacad4-2315-45c2-acbb-dabdc3416121',
  'revision_uid' => '1',
  'body' => array(),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => '3',
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'AU',
      ),
    ),
  ),
  'field_pingfen' => array(),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://www.mrating.com/content/%E5%BE%B7%E8%BF%90',
    'title' => '德运',
    'identifier' => 'node/20',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2013-03-15 11:18:48 +0800',
);
  $nodes[] = array(
  'uid' => '1',
  'title' => '兰特',
  'log' => '',
  'status' => '1',
  'comment' => '1',
  'promote' => '1',
  'sticky' => '0',
  'vuuid' => '4a0aca98-3018-43e8-b58f-95870dc65c15',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => '1363317667',
  'tnid' => '0',
  'translate' => '0',
  'uuid' => 'c7dfbede-b78a-4c7a-b306-b40ff992f68e',
  'revision_uid' => '1',
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>公司于1933年由Andre Besnier创立，在1999年更名为Lactalis。现在则是欧洲最大的乳制品公司之一以及法国最大乳制品出口商之一。Lactalis拥有包括总统(President)在内的众多品牌，其产品在全球120多个国家都有销售网络。<br />
总统(President)，作为法国最大的大奶酪品牌之一，是法国最具有代表性的奶制品品牌之一。它有着悠久的奶酪制作及加工历史，拥有400余种不同类型的奶酪，他们的产品销往全世界140多个国家。总统让美食爱好者们无论在全国的哪个地方，都可以享受到专业的高品质的奶制品。总统通过研发新产品及其包装，扩大销售渠道，以及其背后强大的广告宣传和促销活动，使得自己在市场中的地位不断增长。总统品牌的宗旨为高品质，坚信念，求创新，全世界。<br />
总统(President)拥有Lactalis的所有产品类别：总统 (President) 的产品可以分为6类：奶酪、牛奶、黄油、奶油、加工奶酪、即食食品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>公司于1933年由Andre Besnier创立，在1999年更名为Lactalis。现在则是欧洲最大的乳制品公司之一以及法国最大乳制品出口商之一。Lactalis拥有包括总统(President)在内的众多品牌，其产品在全球120多个国家都有销售网络。<br />
总统(President)，作为法国最大的大奶酪品牌之一，是法国最具有代表性的奶制品品牌之一。它有着悠久的奶酪制作及加工历史，拥有400余种不同类型的奶酪，他们的产品销往全世界140多个国家。总统让美食爱好者们无论在全国的哪个地方，都可以享受到专业的高品质的奶制品。总统通过研发新产品及其包装，扩大销售渠道，以及其背后强大的广告宣传和促销活动，使得自己在市场中的地位不断增长。总统品牌的宗旨为高品质，坚信念，求创新，全世界。<br />
总统(President)拥有Lactalis的所有产品类别：总统 (President) 的产品可以分为6类：奶酪、牛奶、黄油、奶油、加工奶酪、即食食品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => '3',
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'FR',
      ),
    ),
  ),
  'field_pingfen' => array(
    'und' => array(
      0 => array(
        'rating' => '10',
        'target' => NULL,
      ),
    ),
  ),
  'metatags' => array(),
  'rdf_mapping' => array(
    'rdftype' => array(
      0 => 'sioc:Item',
      1 => 'foaf:Document',
    ),
    'title' => array(
      'predicates' => array(
        0 => 'dc:title',
      ),
    ),
    'created' => array(
      'predicates' => array(
        0 => 'dc:date',
        1 => 'dc:created',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'changed' => array(
      'predicates' => array(
        0 => 'dc:modified',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
    'body' => array(
      'predicates' => array(
        0 => 'content:encoded',
      ),
    ),
    'uid' => array(
      'predicates' => array(
        0 => 'sioc:has_creator',
      ),
      'type' => 'rel',
    ),
    'name' => array(
      'predicates' => array(
        0 => 'foaf:name',
      ),
    ),
    'comment_count' => array(
      'predicates' => array(
        0 => 'sioc:num_replies',
      ),
      'datatype' => 'xsd:integer',
    ),
    'last_activity' => array(
      'predicates' => array(
        0 => 'sioc:last_activity_date',
      ),
      'datatype' => 'xsd:dateTime',
      'callback' => 'date_iso8601',
    ),
  ),
  'cid' => '0',
  'last_comment_name' => NULL,
  'last_comment_uid' => '1',
  'comment_count' => '0',
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://www.mrating.com/content/%E5%85%B0%E7%89%B9',
    'title' => '兰特',
    'identifier' => 'node/21',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => '0',
  'data' => 'b:0;',
  'date' => '2013-03-15 11:21:07 +0800',
);
  return $nodes;
}
