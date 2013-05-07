<?php
/**
 * @file
 * features_node_brand_exportation.features.uuid_node.inc
 */

/**
 * Implements hook_uuid_features_default_content().
 */
function features_node_brand_exportation_uuid_features_default_content() {
  $nodes = array();

  $nodes[] = array(
  'uid' => 1,
  'title' => '健安喜',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd13a8c52-2efe-4aea-b60a-c5a5f1f0941b',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '00714467-f6f5-4bce-84e0-96a93ee5d37d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1935 年， David Shakarian 在匹兹堡成立了一家专门贩售食品的小店，称之为 Lackzoom。akarian\'s 于 418 Wood Street BS。美国GNC健安喜为全球闻名之优良营养食品公司，在全球拥有5000多家连锁店；500多万个金卡会员；在亚洲地区包括新加坡、台湾、菲律宾、马来西亚、印尼、香港等地，均有连锁店的成立。 美国GNC健安喜的全名是General Nutrition Center（通用营养中心），在美国是专门销售以营养（Nutrition）观念为出发点，对人体有益、维持基本生理功能的商品，全美各地，像美国GNC健安喜这样的健康商店相当普遍。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1935 年， David Shakarian 在匹兹堡成立了一家专门贩售食品的小店，称之为 Lackzoom。akarian\'s 于 418 Wood Street BS。美国GNC健安喜为全球闻名之优良营养食品公司，在全球拥有5000多家连锁店；500多万个金卡会员；在亚洲地区包括新加坡、台湾、菲律宾、马来西亚、印尼、香港等地，均有连锁店的成立。 美国GNC健安喜的全名是General Nutrition Center（通用营养中心），在美国是专门销售以营养（Nutrition）观念为出发点，对人体有益、维持基本生理功能的商品，全美各地，像美国GNC健安喜这样的健康商店相当普遍。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
      2 => array(
        'tid' => 288,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%81%A5%E5%AE%89%E5%96%9C',
    'title' => '健安喜',
    'identifier' => 'node/7',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '新生命',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'aec41de3-d868-4296-a5b8-e489aa67b991',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0303b5f6-687f-4ad5-b72a-ca4fc8a10543',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>新生命，是保健品行业著名保健品之一，是美国天然健康资源有限公司 （Healthy Nature Resource USA Inc.）上海彩辉商贸有限公司代理的保健品，也是国内外各大保健品食用者的主要保健品提供商。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>新生命，是保健品行业著名保健品之一，是美国天然健康资源有限公司 （Healthy Nature Resource USA Inc.）上海彩辉商贸有限公司代理的保健品，也是国内外各大保健品食用者的主要保健品提供商。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 312,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%96%B0%E7%94%9F%E5%91%BD',
    'title' => '新生命',
    'identifier' => 'node/1',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '马爹利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6ac1a6a9-1b5b-4bd0-a599-b4d751215461',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366797082,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '065a5aa0-cd40-40de-b242-82f27756dbd9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>马爹利由一位来自(Island of Jersey)的年青人“Jean Martell”于1715年创立，现在已经经历八代相传。今天，“马爹利”已经成为名贵好酒，驰名全世界了。但由于出产地不过是座小岛，产量很小，供不应求，价钱自然就抬高了。在马爹利的全球市场中，中国区的销量位居第三位，英国、美国分居第一和第二，而在这当中，中国的潜力是最大的。<br />
马爹利是历史最悠久的大型干邑酿造厂。让˙马爹利（JeanMartell）在1715年离开了他的故居海峡泽西岛（Jersey），来到干邑定居。马爹利出生于1694年，在8个孩子中排行第二，他的父亲是个航海家和商人。马爹利给邻岛根西岛（Guernsey）的商人工作了7年时间之后，便决心自己到干邑来闯天下，因为他晓得干邑有发展的潜力。<br />
马爹利（Martell）是法国著名的白兰地品牌，始创于1715年，通过几个世纪的不断钻研与探索，马爹利形成了其独一无二的酿酒专长，它对酿酒艺术的不懈追求，造就了其芳香飘逸、回味深远的卓越口味。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>马爹利由一位来自(Island of Jersey)的年青人“Jean Martell”于1715年创立，现在已经经历八代相传。今天，“马爹利”已经成为名贵好酒，驰名全世界了。但由于出产地不过是座小岛，产量很小，供不应求，价钱自然就抬高了。在马爹利的全球市场中，中国区的销量位居第三位，英国、美国分居第一和第二，而在这当中，中国的潜力是最大的。<br />
马爹利是历史最悠久的大型干邑酿造厂。让˙马爹利（JeanMartell）在1715年离开了他的故居海峡泽西岛（Jersey），来到干邑定居。马爹利出生于1694年，在8个孩子中排行第二，他的父亲是个航海家和商人。马爹利给邻岛根西岛（Guernsey）的商人工作了7年时间之后，便决心自己到干邑来闯天下，因为他晓得干邑有发展的潜力。<br />
马爹利（Martell）是法国著名的白兰地品牌，始创于1715年，通过几个世纪的不断钻研与探索，马爹利形成了其独一无二的酿酒专长，它对酿酒艺术的不懈追求，造就了其芳香飘逸、回味深远的卓越口味。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%A9%AC%E7%88%B9%E5%88%A9',
    'title' => '马爹利',
    'identifier' => 'node/86',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 17:51:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '百龄坛',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f6a73546-035b-4907-bb1b-bd0a0d8879c6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798872,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '076e54bb-cf7c-4148-853f-5c9a3712eef2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Ballantine’s百龄坛。百龄坛公司创立于1827年，其产品是以产自于苏格兰高地的八家酿酒厂生产的纯麦芽威士忌为主，再配以四十二种其他苏格兰麦芽威士忌，然后与自己公司生产酿制的谷物威士忌进行混合勾兑调制而成。具有口感圆润，浓郁醇香的特点。是世界上最受欢迎的苏格兰兑和威士忌之一。产品有：特醇、金玺、12年、17年、30年等多个品种。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Ballantine’s百龄坛。百龄坛公司创立于1827年，其产品是以产自于苏格兰高地的八家酿酒厂生产的纯麦芽威士忌为主，再配以四十二种其他苏格兰麦芽威士忌，然后与自己公司生产酿制的谷物威士忌进行混合勾兑调制而成。具有口感圆润，浓郁醇香的特点。是世界上最受欢迎的苏格兰兑和威士忌之一。产品有：特醇、金玺、12年、17年、30年等多个品种。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%99%BE%E9%BE%84%E5%9D%9B',
    'title' => '百龄坛',
    'identifier' => 'node/97',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:21:12 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '御鹿',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '18a39141-6ad5-4d3b-8265-32c08ecaf7d3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798196,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '08256307-9a68-4e2b-b104-efb69a5cd540',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Hine御鹿。以酿酒公司名命名。该公司创建于1763年。由于该酿酒公司一直由英国的海因家族经营和管理，因此，在1962年被英国伊丽莎白女王指定为英国王室酒类承办商。在该公司的产品中，“古董”是圆润可口的陈酿；“珍品”是采用海因家族秘藏的古酒制成。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Hine御鹿。以酿酒公司名命名。该公司创建于1763年。由于该酿酒公司一直由英国的海因家族经营和管理，因此，在1962年被英国伊丽莎白女王指定为英国王室酒类承办商。在该公司的产品中，“古董”是圆润可口的陈酿；“珍品”是采用海因家族秘藏的古酒制成。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BE%A1%E9%B9%BF',
    'title' => '御鹿',
    'identifier' => 'node/93',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:09:56 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '安信',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c3b215bb-090e-4e42-9759-2d07a7d1f6f9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367483373,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '08585d3f-f73e-45d6-94f5-6842edb21728',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>安信伟光是目前国内木地板行业唯一一家整合原料、采购、加工、成品、流通、销售各环节优势的端到端垂直一体化企业，集全实木、多层实木、强化系列为一体，并开发生产高档的钢化地暖实木地板、艺术地板、拼花地板及别墅、卫浴、户外地板，且拥有多个新工艺专利产品。安信地板多次参与国家重大项目建设，2007年，安信地板承接北京2008年奥运会运动员公寓地板铺装项目。2008年，安信地板与万科集团、中海集团、绿地集团、复地集团、龙湖地产、富力地产、河北开元、绿城集团等中国房产百强企业结成战略合作伙伴。2009年，安信地板成为2010年上海世博会（中国）民企联合馆地板赞助商，产品成功中标铺进世博中心桥面工程用材。同年，安信地板成为2010广州亚运会运动员公寓、媒体村、官员休息中心使用产品。连续服务国际盛事的安信地板以其精良的产品品质、过硬的技术实力、配套的服务体系赢得了一个又一个荣誉。<br />
安信地板在长三角拥有上海青浦和江苏苏州两个大型木材生产加工基地，生产设施占地超过700亩，员工总数逾1500人，各种地板年生产能力可达1300万平方米，板材年加工能力达200万平方米。<br />
与百安居、家得宝等国际建材连锁巨头，居然之家、红星美凯龙、金盛家居等国内家居巨头及东方家园、好美家、九百家居、等国内建材连锁超市签署战略合作协议或建立稳定的合作关系。<br />
与上海聚通、百姓、全筑、统帅、中孚空间、上盟、星杰、奥邦及北京的东易日盛、业之峰、元洲、亚光亚等地知名的装饰公司建立了着良好的合作关系。<br />
安信地板秉持“乐享生活本真”的品牌理念，致力于打造受人尊敬的跨国企业。<br />
大自然地板安信地板永吉地板并称实木地板三巨头，为实木地板领军企业。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>安信伟光是目前国内木地板行业唯一一家整合原料、采购、加工、成品、流通、销售各环节优势的端到端垂直一体化企业，集全实木、多层实木、强化系列为一体，并开发生产高档的钢化地暖实木地板、艺术地板、拼花地板及别墅、卫浴、户外地板，且拥有多个新工艺专利产品。安信地板多次参与国家重大项目建设，2007年，安信地板承接北京2008年奥运会运动员公寓地板铺装项目。2008年，安信地板与万科集团、中海集团、绿地集团、复地集团、龙湖地产、富力地产、河北开元、绿城集团等中国房产百强企业结成战略合作伙伴。2009年，安信地板成为2010年上海世博会（中国）民企联合馆地板赞助商，产品成功中标铺进世博中心桥面工程用材。同年，安信地板成为2010广州亚运会运动员公寓、媒体村、官员休息中心使用产品。连续服务国际盛事的安信地板以其精良的产品品质、过硬的技术实力、配套的服务体系赢得了一个又一个荣誉。<br />
安信地板在长三角拥有上海青浦和江苏苏州两个大型木材生产加工基地，生产设施占地超过700亩，员工总数逾1500人，各种地板年生产能力可达1300万平方米，板材年加工能力达200万平方米。<br />
与百安居、家得宝等国际建材连锁巨头，居然之家、红星美凯龙、金盛家居等国内家居巨头及东方家园、好美家、九百家居、等国内建材连锁超市签署战略合作协议或建立稳定的合作关系。<br />
与上海聚通、百姓、全筑、统帅、中孚空间、上盟、星杰、奥邦及北京的东易日盛、业之峰、元洲、亚光亚等地知名的装饰公司建立了着良好的合作关系。<br />
安信地板秉持“乐享生活本真”的品牌理念，致力于打造受人尊敬的跨国企业。<br />
大自然地板安信地板永吉地板并称实木地板三巨头，为实木地板领军企业。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%89%E4%BF%A1',
    'title' => '安信',
    'identifier' => 'node/126',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 16:29:33 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '威雀',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f32f431f-ccc5-4384-8d07-c7676bd263ea',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799494,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '09ecd238-73d6-4371-971e-eefcbd63455b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>The Famous Grouse威雀。由创立于1800年的马修.克拉克公司出品。Famous Grouse属于其标准产品，还有Famous Grouse15（15年陈酿）和Famous Grouse21（21年陈酿）等。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>The Famous Grouse威雀。由创立于1800年的马修.克拉克公司出品。Famous Grouse属于其标准产品，还有Famous Grouse15（15年陈酿）和Famous Grouse21（21年陈酿）等。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A8%81%E9%9B%80',
    'title' => '威雀',
    'identifier' => 'node/106',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:31:34 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '蜜蜂工坊',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3ac7ed4c-5b85-4549-b1f1-d13b2c7b35a5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366512323,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0cdbf06d-0810-47e1-a5ae-589f84399977',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>蜜蜂工坊的源起要從第一代黃達先生開始說起，民國四十年代的台灣是農業時期，黃達先生白手起家，經過多年辛勤付出與豐富的經驗累積，再加上對產品品質的堅持，黃達先生所出產的蜂蜜是有口皆碑，但因黃先生年邁無法經營，盼望後繼有人，因而希望三個兒子能夠接下這份家業，回來接下父親一手創立的養蜂事業。在第二代數十年努力經營之下，公司業務蓬勃發展，市場通路包含家樂福、大潤發、全聯社、惠康等。時至今日由第三代接手經營，有感於養蜂事業處於傳統管理和行銷方式，因此於2002年，在行政院農委會輔導下成立「土庫合作農場」建立高品質之「蜜蜂工坊」品牌，並落實現代化企業管理。<br />
「蜜蜂工坊」致力於天然蜂產品之研發，以及生產符合國際性高品質產品。因此積極投入ISO22000及HACCP及HALAL國際食品管理制度，並導入自動生產設備，以&amp;quot;專業創新、服務管理”的目標前進，希望能夠讓消費者擁有天然、健康、高品質蜂產品，共同分享這份完美品質的喜悅。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>蜜蜂工坊的源起要從第一代黃達先生開始說起，民國四十年代的台灣是農業時期，黃達先生白手起家，經過多年辛勤付出與豐富的經驗累積，再加上對產品品質的堅持，黃達先生所出產的蜂蜜是有口皆碑，但因黃先生年邁無法經營，盼望後繼有人，因而希望三個兒子能夠接下這份家業，回來接下父親一手創立的養蜂事業。在第二代數十年努力經營之下，公司業務蓬勃發展，市場通路包含家樂福、大潤發、全聯社、惠康等。時至今日由第三代接手經營，有感於養蜂事業處於傳統管理和行銷方式，因此於2002年，在行政院農委會輔導下成立「土庫合作農場」建立高品質之「蜜蜂工坊」品牌，並落實現代化企業管理。<br />
「蜜蜂工坊」致力於天然蜂產品之研發，以及生產符合國際性高品質產品。因此積極投入ISO22000及HACCP及HALAL國際食品管理制度，並導入自動生產設備，以&amp;quot;專業創新、服務管理”的目標前進，希望能夠讓消費者擁有天然、健康、高品質蜂產品，共同分享這份完美品質的喜悅。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%9C%9C%E8%9C%82%E5%B7%A5%E5%9D%8A',
    'title' => '蜜蜂工坊',
    'identifier' => 'node/70',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:45:23 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '酩悦',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '7bdc0ef4-10f1-4683-ab21-d61614866ad0',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366550796,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '0ed6e9d0-a4e7-492a-ac1f-7de81efd2119',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>酩悦香槟Moet &amp; Chandon 是法国名酒，有250多年历史，拥有250年酿酒传统的Moet Chandon，曾因法皇拿破仑的喜爱而赢得“Imperial（皇室香槟）”的美誉。到目前为止，铭悦香槟已成为法国最具国际知名度的香槟。两个多世纪以来，一直是欧洲许多皇室的贡酒。</p>

<p><span style="line-height: 1.6em;">酩悦香槟的历史可追溯至250多年的家族传统。它的源流起自郊游乐园，现已改名为香槟大道。香槟区独一无二的地质和气候条件，为酩悦香槟提供了最好的原料。精益求精的酿制过程，更使法国酩悦馥郁芳香、口感绵延持久。 现时酩悦属于全法国最大的MOET HENNESSY集团所拥有，顾名思义，白兰地酒中的名厂“轩尼诗”干邑亦是其姊妹。</span></p>

<p>拥有250年酿酒传统的Moet Chandon，曾因法皇拿破仑的喜爱而赢得“Imperial（皇室香槟）”的美誉。到目前为止，铭悦香槟已成为法国最具国际知名度的香槟。<br />
据说，世界上每卖出四瓶的香槟酒（CHAMPAGNE）之中，就有一瓶是“酩悦”（MOET &amp; CHANDON）。当然，这只限于真正的“香槟”，其它的“有泡汽酒”（SPARKLING WINE）并不包括在内。<br />
关于香槟，其实就是有泡汽酒，并且是其中最好的品种。根据法国的产区命名法，只有在法国香槟区出产的，并以香槟酿造法酿制的气泡酒，才能称之为香槟。在“历史”上，曾经有过不少国家的类似有泡汽酒以“香槟”而名，亦有是指“香槟法酿制”，均被法国香槟酒商会不断抗议，甚至诉讼于国际的海牙法庭，持续数十年，最终一九九七年时裁决胜诉。自始任何国家的同类产品，均不可以再称香槟，只可以称为有泡汽酒，或者是创作出来的名字，比如西班牙的CAVA，德国的SEKT。。。等，都属此例。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>酩悦香槟Moet &amp; Chandon 是法国名酒，有250多年历史，拥有250年酿酒传统的Moet Chandon，曾因法皇拿破仑的喜爱而赢得“Imperial（皇室香槟）”的美誉。到目前为止，铭悦香槟已成为法国最具国际知名度的香槟。两个多世纪以来，一直是欧洲许多皇室的贡酒。</p>
<p>酩悦香槟的历史可追溯至250多年的家族传统。它的源流起自郊游乐园，现已改名为香槟大道。香槟区独一无二的地质和气候条件，为酩悦香槟提供了最好的原料。精益求精的酿制过程，更使法国酩悦馥郁芳香、口感绵延持久。 现时酩悦属于全法国最大的MOET HENNESSY集团所拥有，顾名思义，白兰地酒中的名厂“轩尼诗”干邑亦是其姊妹。</p>
<p>拥有250年酿酒传统的Moet Chandon，曾因法皇拿破仑的喜爱而赢得“Imperial（皇室香槟）”的美誉。到目前为止，铭悦香槟已成为法国最具国际知名度的香槟。<br />
据说，世界上每卖出四瓶的香槟酒（CHAMPAGNE）之中，就有一瓶是“酩悦”（MOET &amp; CHANDON）。当然，这只限于真正的“香槟”，其它的“有泡汽酒”（SPARKLING WINE）并不包括在内。<br />
关于香槟，其实就是有泡汽酒，并且是其中最好的品种。根据法国的产区命名法，只有在法国香槟区出产的，并以香槟酿造法酿制的气泡酒，才能称之为香槟。在“历史”上，曾经有过不少国家的类似有泡汽酒以“香槟”而名，亦有是指“香槟法酿制”，均被法国香槟酒商会不断抗议，甚至诉讼于国际的海牙法庭，持续数十年，最终一九九七年时裁决胜诉。自始任何国家的同类产品，均不可以再称香槟，只可以称为有泡汽酒，或者是创作出来的名字，比如西班牙的CAVA，德国的SEKT。。。等，都属此例。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%85%A9%E6%82%A6',
    'title' => '酩悦',
    'identifier' => 'node/77',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:26:36 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '天振',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '80c69e2a-9888-4753-8523-c4a097ba61c3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910744,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '12f3cb29-cde5-4c99-bd58-c1ff852b2f99',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江天振竹木开发有限公司，竹地板十大品牌，中国驰名商标，中国著名品牌，行业知名品牌，极具竞争力企业，浙江高新技术企业，竹地板行业重点骨干企业之一。<br />
浙江天振竹木开发有限公司以生产、研发、销售竹地板、实木复合地板、生态地板、强化地板为主营业务，公司总占地面积达20万平方米，年产量超过600万平方米。自2003年以来，天振地板产品出口销售每年以30%的增长率持续强劲增长，产品市场占有率在同行业中名列前茅，目前已发展成为世界最大的竹木地板骨干企业之一。<br />
随着全球化战略的推进，天振不断的扩大延长自身的“采购、研发、生产、销售、服务”五位一体的产业链。天振在全球拥有5大原材料供应基地和20多个联营工厂；天振始终以技术创新为导向，率先建立了国内一流的产品开发、技术实验室，先后获得20多项国家技术专利：在江西、浙江、福建、湖南分别建立了4个大型生产基地，拥有12条高标准现代化生产线的制造体系，自建36座具备国际水平的电脑数控蒸汽干燥窑：在销售系统方面，形成了“多渠道、密集型”的销售体系，目前在国外拥有1200多家专卖店和超市，与全球多家知名专业建材市场、超市形成长期战略合作伙伴，产品远销韩国、日本、新加坡、德国、意大利、美国、加拿大、澳大利亚等三十多个国家和地区。<br />
在与中国地板行业一起发展壮大的历程中，天振地板始终遵循“共创、共享、共赢”的经营理念，积极助推中国地板行业发展，为振兴民族工业品牌奉献着自己的力量。秉承“超越自我，追求卓越”的企业精神，天振以前瞻性眼光和全球化视野，致力于打造全球一流地板企业，一个全球化发展战略的国际化品牌正在崛起。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江天振竹木开发有限公司，竹地板十大品牌，中国驰名商标，中国著名品牌，行业知名品牌，极具竞争力企业，浙江高新技术企业，竹地板行业重点骨干企业之一。<br />
浙江天振竹木开发有限公司以生产、研发、销售竹地板、实木复合地板、生态地板、强化地板为主营业务，公司总占地面积达20万平方米，年产量超过600万平方米。自2003年以来，天振地板产品出口销售每年以30%的增长率持续强劲增长，产品市场占有率在同行业中名列前茅，目前已发展成为世界最大的竹木地板骨干企业之一。<br />
随着全球化战略的推进，天振不断的扩大延长自身的“采购、研发、生产、销售、服务”五位一体的产业链。天振在全球拥有5大原材料供应基地和20多个联营工厂；天振始终以技术创新为导向，率先建立了国内一流的产品开发、技术实验室，先后获得20多项国家技术专利：在江西、浙江、福建、湖南分别建立了4个大型生产基地，拥有12条高标准现代化生产线的制造体系，自建36座具备国际水平的电脑数控蒸汽干燥窑：在销售系统方面，形成了“多渠道、密集型”的销售体系，目前在国外拥有1200多家专卖店和超市，与全球多家知名专业建材市场、超市形成长期战略合作伙伴，产品远销韩国、日本、新加坡、德国、意大利、美国、加拿大、澳大利亚等三十多个国家和地区。<br />
在与中国地板行业一起发展壮大的历程中，天振地板始终遵循“共创、共享、共赢”的经营理念，积极助推中国地板行业发展，为振兴民族工业品牌奉献着自己的力量。秉承“超越自我，追求卓越”的企业精神，天振以前瞻性眼光和全球化视野，致力于打造全球一流地板企业，一个全球化发展战略的国际化品牌正在崛起。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%A9%E6%8C%AF',
    'title' => '天振',
    'identifier' => 'node/159',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:12:24 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '悠诗诗',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0741cd0c-77de-4036-9fbb-43bb051842b5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366938967,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '132b424d-212e-4eea-b919-8631ef0c2213',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>悠诗诗(UCC)咖啡是以定点精心培养、种植的咖啡豆为原料，由日本UCC上岛咖啡株式会社生产、销售的世界著名品牌咖啡。<br />
历经70多年对咖啡的潜心钻研。为了随时随地为您献上一杯香浓可口的咖啡，UCC集团将付出我们的所有努力。<br />
在国内外共拥有50多家事业公司的UCC集团，除了核心的咖啡事业以外，还积极进军食品领域，以求开拓更广大的市场。同时，UCC还全面进行品质管理活动以及文化活动等，这在全球的咖啡生产厂家也是绝无仅有的。UCC集团将以UCC为中心在更多领域大显身手。除了向咖啡店等各类饮食店、家庭、办公室提供各种咖啡产品，UCC还开设各种风格各异的咖啡店。总之，UCC以向您提供满意的服务为己任，为您的生活添姿添彩。随时随地为您提供真正香浓美味的咖啡，并且让更多的人能感受到一杯好咖啡所带来的喜悦，这就是UCC的使命。肩负这个使命，作为咖啡专业集团，UCC将倾注满腔的热血，一如既往地做好咖啡业，提高自身的综合竞争力，以日本为起点，在亚洲、在世界打造The Coffee Company，让Good Coffee Smile遍布全球。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>悠诗诗(UCC)咖啡是以定点精心培养、种植的咖啡豆为原料，由日本UCC上岛咖啡株式会社生产、销售的世界著名品牌咖啡。<br />
历经70多年对咖啡的潜心钻研。为了随时随地为您献上一杯香浓可口的咖啡，UCC集团将付出我们的所有努力。<br />
在国内外共拥有50多家事业公司的UCC集团，除了核心的咖啡事业以外，还积极进军食品领域，以求开拓更广大的市场。同时，UCC还全面进行品质管理活动以及文化活动等，这在全球的咖啡生产厂家也是绝无仅有的。UCC集团将以UCC为中心在更多领域大显身手。除了向咖啡店等各类饮食店、家庭、办公室提供各种咖啡产品，UCC还开设各种风格各异的咖啡店。总之，UCC以向您提供满意的服务为己任，为您的生活添姿添彩。随时随地为您提供真正香浓美味的咖啡，并且让更多的人能感受到一杯好咖啡所带来的喜悦，这就是UCC的使命。肩负这个使命，作为咖啡专业集团，UCC将倾注满腔的热血，一如既往地做好咖啡业，提高自身的综合竞争力，以日本为起点，在亚洲、在世界打造The Coffee Company，让Good Coffee Smile遍布全球。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'JP',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%82%A0%E8%AF%97%E8%AF%97',
    'title' => '悠诗诗',
    'identifier' => 'node/109',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 09:16:07 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '总统',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '69e50f19-c001-4ea8-a607-dc5980d84780',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365938838,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '19aa6a24-43d1-4792-a0d2-11148fc78953',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>总统为兰特黎斯集团旗下著名品牌，成立于1933年，位于法国西部产奶核心地区，同时在35个国家拥有198个生产基地，拥有丰富的乳制品生产经验，15年来一直致力于为亚洲市场提供优质的乳制品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>总统为兰特黎斯集团旗下著名品牌，成立于1933年，位于法国西部产奶核心地区，同时在35个国家拥有198个生产基地，拥有丰富的乳制品生产经验，15年来一直致力于为亚洲市场提供优质的乳制品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 332,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%80%BB%E7%BB%9F',
    'title' => '总统',
    'identifier' => 'node/20',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 19:27:18 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '剑南春',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'fcd55c8f-6574-4ce8-84c6-2c9c452a52ee',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365945057,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1a2a8670-016e-4667-9a54-49c28cb9202f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>绵竹剑南春酒，产于四川省绵竹市，因绵竹在唐代属剑南道，故称“剑南春”。四川的绵竹市素有“酒乡”之称，绵竹市因产竹产酒而得名。早在唐代就产闻名遐迩的名酒——“剑南烧春”，相传李白为喝此美酒曾在这里况把皮袄卖掉买酒痛饮，留下“士解金貂”、“解貂赎酒”的佳话。北宋苏轼称赞这种蜜酒“三日开瓮香满域”，“甘露微浊醍醐清”，其酒之引人可见一斑。</p>

<p>2010年11月由中国酒类流通协会和中华品牌战略研究院共同主办的，“华樽杯”第二届中国酒类品牌价值评议结果在国家会议中心揭晓，四川剑南春集团有限责任公司在中国白酒行业中排名第6位，品牌价值为86.78亿元（RMB），在四川白酒行业排名第4[1]位。2011年6月28日世界品牌实验室公布的2011中国500强最具价值品牌排行榜，四川剑南春品牌价值为119.76亿元。2012年中国品牌500强中排名42位，品牌价值121亿，位列中国白酒第四位。但剑南春的品质一直是中国白酒前三甲。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>绵竹剑南春酒，产于四川省绵竹市，因绵竹在唐代属剑南道，故称“剑南春”。四川的绵竹市素有“酒乡”之称，绵竹市因产竹产酒而得名。早在唐代就产闻名遐迩的名酒——“剑南烧春”，相传李白为喝此美酒曾在这里况把皮袄卖掉买酒痛饮，留下“士解金貂”、“解貂赎酒”的佳话。北宋苏轼称赞这种蜜酒“三日开瓮香满域”，“甘露微浊醍醐清”，其酒之引人可见一斑。</p>
<p>2010年11月由中国酒类流通协会和中华品牌战略研究院共同主办的，“华樽杯”第二届中国酒类品牌价值评议结果在国家会议中心揭晓，四川剑南春集团有限责任公司在中国白酒行业中排名第6位，品牌价值为86.78亿元（RMB），在四川白酒行业排名第4[1]位。2011年6月28日世界品牌实验室公布的2011中国500强最具价值品牌排行榜，四川剑南春品牌价值为119.76亿元。2012年中国品牌500强中排名42位，品牌价值121亿，位列中国白酒第四位。但剑南春的品质一直是中国白酒前三甲。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%89%91%E5%8D%97%E6%98%A5',
    'title' => '剑南春',
    'identifier' => 'node/29',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:10:57 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '科勒',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c23616ba-cee2-4f09-b159-39111bd153df',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366293636,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1dfd9de7-21e1-4916-adbc-0527122bc6a7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>美国科勒是全球最为消费者熟悉的厨卫品牌之一，创办于1873年。主要生产科勒浴缸、脸盆、座便器、龙头、橱柜等厨卫产品 。<br />
科勒经过130年的发展，现已成为最高级卫浴产品的象征。它所倡导的“优雅生活”的家居理念，最直接地触动人们对于高雅生活品质的向往和热爱。无论在世界的哪个角落，科勒都保证消费者能感受到全球统一的科勒五星级酒店式的生活享受。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>美国科勒是全球最为消费者熟悉的厨卫品牌之一，创办于1873年。主要生产科勒浴缸、脸盆、座便器、龙头、橱柜等厨卫产品 。<br />
科勒经过130年的发展，现已成为最高级卫浴产品的象征。它所倡导的“优雅生活”的家居理念，最直接地触动人们对于高雅生活品质的向往和热爱。无论在世界的哪个角落，科勒都保证消费者能感受到全球统一的科勒五星级酒店式的生活享受。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 298,
      ),
      1 => array(
        'tid' => 6,
      ),
      2 => array(
        'tid' => 126,
      ),
      3 => array(
        'tid' => 274,
      ),
      4 => array(
        'tid' => 222,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%A7%91%E5%8B%92',
    'title' => '科勒',
    'identifier' => 'node/54',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-18 22:00:36 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '库克',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '981efade-849d-4c9a-91b8-15ed1f90091e',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366552487,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '1e0e67b7-0bf4-436c-811b-62e9bf349533',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>创立于一八四三年的库克香槟,素来以酿制高品质香槟而著称.库克对品质极为重视。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>创立于一八四三年的库克香槟,素来以酿制高品质香槟而著称.库克对品质极为重视。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BA%93%E5%85%8B',
    'title' => '库克',
    'identifier' => 'node/82',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:54:47 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '晓芹',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3a796372-0134-4ef3-a9ca-19613f93c78c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365926791,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20527fdb-45ad-4e31-830f-cc975a08a153',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
晓芹海参精选大连长海县小长山岛，海洋岛和长海县其他岛屿的优质鲜活海刺参为原料，精心加工而成，海参肉质丰腴，有弹性。<br />
公司在长海县小长山岛拥有万亩无公害海域。小长山岛属于大连市长海县管辖，位于长山群岛中部，由30个岛，坨，礁组成。海岸线和94.4公里。小长山岛坐落在著名的“海洋岛渔场”之中，享有“天然渔乡”之美誉，生产盘鲍，刺参等海珍品。被列为国家级海珍品保护区，珍品丰富，岛静滩阔，犹如世外桃源。小长山列岛海上垂钓条件优越，被中国钓鱼协会批准为全国海钓基地，每年吸引大批中外钓鱼爱好者和游客上岛垂钓，休闲，娱乐。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>晓芹海参精选大连长海县小长山岛，海洋岛和长海县其他岛屿的优质鲜活海刺参为原料，精心加工而成，海参肉质丰腴，有弹性。<br />
公司在长海县小长山岛拥有万亩无公害海域。小长山岛属于大连市长海县管辖，位于长山群岛中部，由30个岛，坨，礁组成。海岸线和94.4公里。小长山岛坐落在著名的“海洋岛渔场”之中，享有“天然渔乡”之美誉，生产盘鲍，刺参等海珍品。被列为国家级海珍品保护区，珍品丰富，岛静滩阔，犹如世外桃源。小长山列岛海上垂钓条件优越，被中国钓鱼协会批准为全国海钓基地，每年吸引大批中外钓鱼爱好者和游客上岛垂钓，休闲，娱乐。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 231,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%99%93%E8%8A%B9',
    'title' => '晓芹',
    'identifier' => 'node/13',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 16:06:31 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '珍宝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f963c161-255b-48a9-bc78-4958f877c463',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799361,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '20f7a25c-ccd8-431f-9799-74d72aebb83d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>J&amp;B珍宝。始创于1749年的苏格兰混合威士忌酒，由贾斯泰瑞尼和布鲁克斯有限公司出品，该酒取名于该公司英文名称的字母缩写，属于清淡型混合威士忌酒。该酒采用四十二种不同的麦芽威士忌与谷物威士忌混合勾兑而成，且80%以上的麦芽威士忌产自于苏格兰著名Speyside地区。是目前世界上销量比较大的苏格兰威士忌酒之一。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>J&amp;B珍宝。始创于1749年的苏格兰混合威士忌酒，由贾斯泰瑞尼和布鲁克斯有限公司出品，该酒取名于该公司英文名称的字母缩写，属于清淡型混合威士忌酒。该酒采用四十二种不同的麦芽威士忌与谷物威士忌混合勾兑而成，且80%以上的麦芽威士忌产自于苏格兰著名Speyside地区。是目前世界上销量比较大的苏格兰威士忌酒之一。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%8F%8D%E5%AE%9D',
    'title' => '珍宝',
    'identifier' => 'node/103',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:29:21 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '张裕',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '30236176-49e3-4d70-aa83-abe69379918c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365995831,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2228e5ef-f8b7-4727-935c-f5200ccf5ac4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1892年，著名的爱国侨领客家人张弼士先生为了实现“实业兴邦”的梦想，先后投资300万两白银在烟台创办了“张裕酿酒公司”，中国葡萄酒工业化的序幕由此拉开。<br />
经过一百多年的发展，张裕已经发展成为中国乃至亚洲最大的葡萄酒生产经营企业。1997年和2000年张裕B股和A股先后成功发行并上市，2002年7月，张裕被中国工业经济联合会评为“最具国际竞争力向世界名牌进军的16家民族品牌之一”。在中国社会科学院等权威机构联合进行的2004年度企业竞争力监测中，张裕综合竞争力指数居位列中国上市公司食品酿酒行业的第八名，成为进入前十强的唯一一家葡萄酒企业。张裕品牌在世界 品牌价值实验室（World Brand Value Lab）编制的2010年度《中国品牌500强》排行榜中排名第64位，品牌价值已达89.27亿元。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1892年，著名的爱国侨领客家人张弼士先生为了实现“实业兴邦”的梦想，先后投资300万两白银在烟台创办了“张裕酿酒公司”，中国葡萄酒工业化的序幕由此拉开。<br />
经过一百多年的发展，张裕已经发展成为中国乃至亚洲最大的葡萄酒生产经营企业。1997年和2000年张裕B股和A股先后成功发行并上市，2002年7月，张裕被中国工业经济联合会评为“最具国际竞争力向世界名牌进军的16家民族品牌之一”。在中国社会科学院等权威机构联合进行的2004年度企业竞争力监测中，张裕综合竞争力指数居位列中国上市公司食品酿酒行业的第八名，成为进入前十强的唯一一家葡萄酒企业。张裕品牌在世界 品牌价值实验室（World Brand Value Lab）编制的2010年度《中国品牌500强》排行榜中排名第64位，品牌价值已达89.27亿元。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 339,
      ),
    ),
  ),
  'field_guoj' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BC%A0%E8%A3%95',
    'title' => '张裕',
    'identifier' => 'node/44',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 11:17:11 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '肯帝亚',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0e52a82b-2b00-44b6-bc47-4fe968d87c14',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367559016,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '228858f8-2886-458e-a85a-72a87c57da92',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江苏肯帝亚木业有限公司成立于2003年，在历史文化名城丹阳经济技术开发区肯帝亚工业园内，建有600亩现代化地板生产基地，目前已打造成为全球木地板行业的样板工厂。<br />
肯帝亚秉承“整合世界资源，打造中国品牌，让中国品牌走向世界”的经营理念，凭借优秀的产品质量、领先的环保指标、与国际市场同步的规格款式、严格规范的安装售后服务等等内容得到了各界消费者的认同。肯帝亚强化木地板是中国木地板行业中的著名品牌之一。<br />
以质量出名的肯帝亚地板，在历次国家、各省、自治区和直辖市技术质量监督检验部门的产品质量抽查检测中，各项指标均达到或优于国家标准。在多年的经营中，肯帝亚地板的质量或服务投诉，均是行业中最少的，受到了行业主管部门和消费者的认可。<br />
瞄准世界水平，坚持与全球木地板研发生产一流企业合作，保持技术领先，是肯帝亚多年来一贯坚持的做法。强化地板中的新产品“提琴漆漆面地板”就是由肯帝亚率先研发、生产推向市场的。“提琴漆漆面地板”的行业标准，由国家林业局参照肯帝亚漆面地板的企业标准起草制定的。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江苏肯帝亚木业有限公司成立于2003年，在历史文化名城丹阳经济技术开发区肯帝亚工业园内，建有600亩现代化地板生产基地，目前已打造成为全球木地板行业的样板工厂。<br />
肯帝亚秉承“整合世界资源，打造中国品牌，让中国品牌走向世界”的经营理念，凭借优秀的产品质量、领先的环保指标、与国际市场同步的规格款式、严格规范的安装售后服务等等内容得到了各界消费者的认同。肯帝亚强化木地板是中国木地板行业中的著名品牌之一。<br />
以质量出名的肯帝亚地板，在历次国家、各省、自治区和直辖市技术质量监督检验部门的产品质量抽查检测中，各项指标均达到或优于国家标准。在多年的经营中，肯帝亚地板的质量或服务投诉，均是行业中最少的，受到了行业主管部门和消费者的认可。<br />
瞄准世界水平，坚持与全球木地板研发生产一流企业合作，保持技术领先，是肯帝亚多年来一贯坚持的做法。强化地板中的新产品“提琴漆漆面地板”就是由肯帝亚率先研发、生产推向市场的。“提琴漆漆面地板”的行业标准，由国家林业局参照肯帝亚漆面地板的企业标准起草制定的。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%82%AF%E5%B8%9D%E4%BA%9A',
    'title' => '肯帝亚',
    'identifier' => 'node/136',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-03 13:30:16 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '三得利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b0e7ddb5-03de-4552-8ea0-896d50c3289b',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365947877,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '229d3b51-8401-4e87-a9b1-348179ead575',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>是由世界500强日本三得利国际集团投资的中日合作企业，成立于1995年12 月，投资总额为5450万美元，公司位于上海浦东地区，现有员工600多人。<br />
从96年8月第一瓶啤酒上市至今，三得利啤酒在上海已家喻户晓，广受欢迎，屡创佳绩，目前成为上海市场销量最大的啤酒品牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>是由世界500强日本三得利国际集团投资的中日合作企业，成立于1995年12 月，投资总额为5450万美元，公司位于上海浦东地区，现有员工600多人。<br />
从96年8月第一瓶啤酒上市至今，三得利啤酒在上海已家喻户晓，广受欢迎，屡创佳绩，目前成为上海市场销量最大的啤酒品牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 343,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'JP',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B8%89%E5%BE%97%E5%88%A9',
    'title' => '三得利',
    'identifier' => 'node/35',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:57:57 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '特仑苏',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '42cc5eb2-39c9-4769-bd0c-ea0e6a4a59d1',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365941595,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '25fb6fe3-1929-4b7d-a9bb-2ada5d238bdd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>“特仑苏”在蒙语中是“金牌牛奶”之意，也是蒙牛的一个牛奶品牌。它的产地——中国乳都核心区和林格尔，依托北纬40度左右、中温带暖湿季风性气候、世界公认的优质奶源带等一系列得天独厚的优势自然条件，提供了市场稀缺的高品质奶源。这里有蒙牛的澳亚国际牧场，有蒙牛的全球样板工厂，也有其全智能自动化控制中心与牛奶健康研究发展中心。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>“特仑苏”在蒙语中是“金牌牛奶”之意，也是蒙牛的一个牛奶品牌。它的产地——中国乳都核心区和林格尔，依托北纬40度左右、中温带暖湿季风性气候、世界公认的优质奶源带等一系列得天独厚的优势自然条件，提供了市场稀缺的高品质奶源。这里有蒙牛的澳亚国际牧场，有蒙牛的全球样板工厂，也有其全智能自动化控制中心与牛奶健康研究发展中心。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%89%B9%E4%BB%91%E8%8B%8F',
    'title' => '特仑苏',
    'identifier' => 'node/25',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:13:15 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '路易王妃',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd403aae7-d7e4-4025-a9c3-f8444decbb65',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366551163,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '266599a5-9a5c-4252-9464-f0177f8b3424',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">路易王妃香槟位于法国兰斯城（Reims），有506英亩葡萄园，只种植霞多丽（Chardonnay）和黑皮诺（Pinot Noir）这两种法定葡萄。园内微型气候相当稳定，因此不管年份如何，其香槟酒都能保持一贯水准。该酒庄的历史可以追溯到1776年，酒庄由杜布瓦 （Dubois）父子创建。直到1833年，路易·勒德雷尔（Louis Roederer）先生从他叔叔那里继承了这份产业，酒庄才更名为路易王妃香槟（Louis Roederer）。正是在他的领导下，路易王妃香槟才逐渐声名远扬，开始酿制香槟酒。</span><br />
1868年，酒庄卖出了超过 250万瓶的香槟酒，其中绝大多数出口至俄国（当时美国也是它的出口国之一）。之后，路易王妃香槟酒成为俄国沙皇的最爱，据1873年酒庄的档案文件记 载，仅一年的时间，酒庄就向俄国运送了666,386瓶香槟酒（占其总产量的27%）。3年之后，也就是1876年，酒庄应沙皇亚历山大二世 （Alexander II）的要求，为俄国皇室特别酿造了路易王妃水晶香槟酒（cuvee Cristal）。1917年，俄国十月革命爆发，路易王妃香槟从此失去了自己最大的客户。<br />
自1924年始，酒庄又重新生产 水晶香槟酒。极为精细的酿制工艺和完美无瑕的品质，使得此款酒的价格非常昂贵，可能是世界上最贵的香槟。路易王妃香槟酒和水晶香槟酒还是英国皇室的御 用香槟，由此不难看出它在西方贵族们心目中的显赫地位。水晶香槟酒外面包有一层金黄色的塑料纸，该纸只能在饮用前打开。因为水晶香槟酒的酒瓶是清洁透明 的，不像其它香槟瓶是绿色或棕色的，挡不了太阳的紫外线，所以需要另加一层保护膜。水晶香槟酒的品质极为精致，据说该酒打开金黄塑料纸后放在太阳下15分 钟就会变坏，但在黑暗的酒窖中至少可放20至30年。<br />
路易王妃香槟的酿酒方法，与其它香槟酒庄相比灵活性更强。在某些年份，该酒庄会全部进行苹果酸-乳酸发酵，但在另一些年 份则只部分进行，甚至完全不进行，这完全取决于酿酒师对葡萄的分析。酒庄的酿酒设备自身带有空调，并且干净得令人不可思议。酒庄内全部的优质陈酿——水晶 香槟的精华所在，被保存在木质酒桶内，让香槟酒的酒体更加丰腴，口感更加浓烈。该酒庄香槟酒的混合比例每年都会有所不同，但一般来说，由50%至60%的 黑皮诺调配霞多丽精酿而成，很少会出现霞多丽的比例低于40%的情况。<br />
酒庄的最佳年份有：1996、1995、1990、1985、1982、 1979、1974和1970。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>路易王妃香槟位于法国兰斯城（Reims），有506英亩葡萄园，只种植霞多丽（Chardonnay）和黑皮诺（Pinot Noir）这两种法定葡萄。园内微型气候相当稳定，因此不管年份如何，其香槟酒都能保持一贯水准。该酒庄的历史可以追溯到1776年，酒庄由杜布瓦 （Dubois）父子创建。直到1833年，路易·勒德雷尔（Louis Roederer）先生从他叔叔那里继承了这份产业，酒庄才更名为路易王妃香槟（Louis Roederer）。正是在他的领导下，路易王妃香槟才逐渐声名远扬，开始酿制香槟酒。<br />
1868年，酒庄卖出了超过 250万瓶的香槟酒，其中绝大多数出口至俄国（当时美国也是它的出口国之一）。之后，路易王妃香槟酒成为俄国沙皇的最爱，据1873年酒庄的档案文件记 载，仅一年的时间，酒庄就向俄国运送了666,386瓶香槟酒（占其总产量的27%）。3年之后，也就是1876年，酒庄应沙皇亚历山大二世 （Alexander II）的要求，为俄国皇室特别酿造了路易王妃水晶香槟酒（cuvee Cristal）。1917年，俄国十月革命爆发，路易王妃香槟从此失去了自己最大的客户。<br />
自1924年始，酒庄又重新生产 水晶香槟酒。极为精细的酿制工艺和完美无瑕的品质，使得此款酒的价格非常昂贵，可能是世界上最贵的香槟。路易王妃香槟酒和水晶香槟酒还是英国皇室的御 用香槟，由此不难看出它在西方贵族们心目中的显赫地位。水晶香槟酒外面包有一层金黄色的塑料纸，该纸只能在饮用前打开。因为水晶香槟酒的酒瓶是清洁透明 的，不像其它香槟瓶是绿色或棕色的，挡不了太阳的紫外线，所以需要另加一层保护膜。水晶香槟酒的品质极为精致，据说该酒打开金黄塑料纸后放在太阳下15分 钟就会变坏，但在黑暗的酒窖中至少可放20至30年。<br />
路易王妃香槟的酿酒方法，与其它香槟酒庄相比灵活性更强。在某些年份，该酒庄会全部进行苹果酸-乳酸发酵，但在另一些年 份则只部分进行，甚至完全不进行，这完全取决于酿酒师对葡萄的分析。酒庄的酿酒设备自身带有空调，并且干净得令人不可思议。酒庄内全部的优质陈酿——水晶 香槟的精华所在，被保存在木质酒桶内，让香槟酒的酒体更加丰腴，口感更加浓烈。该酒庄香槟酒的混合比例每年都会有所不同，但一般来说，由50%至60%的 黑皮诺调配霞多丽精酿而成，很少会出现霞多丽的比例低于40%的情况。<br />
酒庄的最佳年份有：1996、1995、1990、1985、1982、 1979、1974和1970。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%B7%AF%E6%98%93%E7%8E%8B%E5%A6%83',
    'title' => '路易王妃',
    'identifier' => 'node/79',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:32:43 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '竹涛',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '235b9020-b849-4bbb-b8c4-8d9a2c087cf3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367909996,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '27af89d7-3c07-4b75-9c14-0f6b635c75a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江西松涛竹业有限公司，竹地板十大品牌，中国著名品牌，江西著名商标，江西名牌，中国绿色环保品牌，经销商首推行地板品牌，江西省级林业龙头企业，江西省重点保护产品，专业生产竹地板并拥有自营进出口权的著名企业。<br />
<span>江西松涛竹业有限公司是一家专业生产竹地板并拥有自营进出口权的企业，公司位于竹子资源丰富，并享有“中国竹子之乡”的江西奉新。</span><br />
<span>公司占地面积60000平方米，下设八个分厂，年生产能力为160万平方米，本公司拥有雄厚的资源和经济实力，“竹涛”牌竹地板选用优质楠竹为材料，结合高新科学技术，引进了120多米长的德国进口生产地板流水线。产品执行国家竹地板GB/T20240-2006标准，出口符合欧洲CE标准，是无毒、无害的绿色环保产品。产品远销美国、日本、韩国、澳大利亚、塞尔维亚、罗马尼亚、乌克兰、墨西哥等多个国家。真正圆了建材设计界多年来“以竹代木、以竹代钢”的梦想。<br />
​</span><span>自然典雅的“竹涛”牌竹地板，宛如一幅美丽的图画，象征自然，宁静与高雅，天然本色感觉清爽雅致，炭化色竹地板颜色略深，更显高贵，沉稳或深或浅，皆能突显出与众不同的格调和品味，温馨的居室如果能配上优质的“竹涛”牌竹地板，更有一种回归自然的感觉。自然与现代科技的完美结合，使您在家中更能感受到大自然的美。</span></p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江西松涛竹业有限公司，竹地板十大品牌，中国著名品牌，江西著名商标，江西名牌，中国绿色环保品牌，经销商首推行地板品牌，江西省级林业龙头企业，江西省重点保护产品，专业生产竹地板并拥有自营进出口权的著名企业。<br />
江西松涛竹业有限公司是一家专业生产竹地板并拥有自营进出口权的企业，公司位于竹子资源丰富，并享有“中国竹子之乡”的江西奉新。<br />
公司占地面积60000平方米，下设八个分厂，年生产能力为160万平方米，本公司拥有雄厚的资源和经济实力，“竹涛”牌竹地板选用优质楠竹为材料，结合高新科学技术，引进了120多米长的德国进口生产地板流水线。产品执行国家竹地板GB/T20240-2006标准，出口符合欧洲CE标准，是无毒、无害的绿色环保产品。产品远销美国、日本、韩国、澳大利亚、塞尔维亚、罗马尼亚、乌克兰、墨西哥等多个国家。真正圆了建材设计界多年来“以竹代木、以竹代钢”的梦想。<br />
​自然典雅的“竹涛”牌竹地板，宛如一幅美丽的图画，象征自然，宁静与高雅，天然本色感觉清爽雅致，炭化色竹地板颜色略深，更显高贵，沉稳或深或浅，皆能突显出与众不同的格调和品味，温馨的居室如果能配上优质的“竹涛”牌竹地板，更有一种回归自然的感觉。自然与现代科技的完美结合，使您在家中更能感受到大自然的美。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%AB%B9%E6%B6%9B',
    'title' => '竹涛',
    'identifier' => 'node/154',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 14:59:56 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '林德曼',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '10bcfae2-4467-47e4-a598-5645a0e96778',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367148627,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2822a33a-d5a3-4fe2-a9b4-df27bf23d8fb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1809年，林德曼一家开办了一家专门酿造拉比克啤酒的酒厂，在坚持古老又传统的拉比克啤酒酿造方式的同时，又以创新的方式来应对不断变化的市场需求，最终生产出了与数种众不同的水果啤酒，一直延续到今天，其中樱桃（Kriek）味道的啤酒获得了不少奖项，而且被世界著名啤酒鉴赏家麦克·杰克逊评价为世界上最好的五种啤酒之一，而其它的口味也是备受好评。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1809年，林德曼一家开办了一家专门酿造拉比克啤酒的酒厂，在坚持古老又传统的拉比克啤酒酿造方式的同时，又以创新的方式来应对不断变化的市场需求，最终生产出了与数种众不同的水果啤酒，一直延续到今天，其中樱桃（Kriek）味道的啤酒获得了不少奖项，而且被世界著名啤酒鉴赏家麦克·杰克逊评价为世界上最好的五种啤酒之一，而其它的口味也是备受好评。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 343,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'BE',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%9E%97%E5%BE%B7%E6%9B%BC',
    'title' => '林德曼',
    'identifier' => 'node/124',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-28 19:30:27 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '雅士利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8bd9d0ea-5816-48e9-8b97-b64f782857a5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366470059,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2885897b-0317-4ad5-b54b-f33fadcf2cb2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>广东雅士利集团有限公司创办于1983年，经过近30个春秋风雨的洗礼，已发展成为拥有5000多名员工、资产数十亿元、驰名海内外的现代化大型公司。集团专业从事营养食品的研究、开发与生产，特别注重于婴幼儿产品的研究、开发与生产。现已形成主营乳品，兼营食品、营养保健、包装印刷的多元化发展格局。集团旗下有7家公司，在广东省潮州市和广州市、黑龙江省齐齐哈尔市、山西省朔州市、河南省郑州市建立了5个大型生产基地，基地占地面积超过1000亩。集团总部工业城占地面积13.8万平方米，新工业园占地200多亩。集团从国内外引进先进食品生产线，主要生产奶粉、麦片、豆奶、米粉等为主的四大系列产品，产品畅销全国各地，深受广大消费者青睐。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>广东雅士利集团有限公司创办于1983年，经过近30个春秋风雨的洗礼，已发展成为拥有5000多名员工、资产数十亿元、驰名海内外的现代化大型公司。集团专业从事营养食品的研究、开发与生产，特别注重于婴幼儿产品的研究、开发与生产。现已形成主营乳品，兼营食品、营养保健、包装印刷的多元化发展格局。集团旗下有7家公司，在广东省潮州市和广州市、黑龙江省齐齐哈尔市、山西省朔州市、河南省郑州市建立了5个大型生产基地，基地占地面积超过1000亩。集团总部工业城占地面积13.8万平方米，新工业园占地200多亩。集团从国内外引进先进食品生产线，主要生产奶粉、麦片、豆奶、米粉等为主的四大系列产品，产品畅销全国各地，深受广大消费者青睐。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%9B%85%E5%A3%AB%E5%88%A9',
    'title' => '雅士利',
    'identifier' => 'node/63',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 23:00:59 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '西班牙弗奥斯',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '81584a88-a798-4bae-9095-d1d7e7672be5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367670343,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2916846f-fd61-4adf-92b4-bf1c24ab9127',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">西班牙最大强化地板厂商FAUS + FINSA ，百分百在西班牙厂房生产。</span><br />
由1931年起，FINSA已开始生产各类木制产品，提供给全欧洲及世界各地，稳步上扬。时至今日，FISNA已成为欧洲最大的木制厂之一，并拥有22间厂房，超过5,000名员工，其与 FAUS 合并后其年产量每年可达3千万平方米,其集团每年营业额高达10亿欧元(约100亿人民币) 。<br />
FINSA生产顶级的木地板 FINfloor无缝地板， 并被欧洲地板公会评定为 “商业用途32级(prEN13329)”。而于2012年, 所有FINfloor的耐用等级将会提升到市面上最高标准AC5级及木产品最严格防火标准BflS1。<br />
西班牙FAUS护墙板产品特点<br />
FAUS墙面板为市场上最多元化，最先进的墙面板材料。<br />
当20年前第一块墙面板在西班牙出厂时，FAUS墙面板就已经领导全世界的室内设计。再加上FAUS的60年木材料经验，现在FAUS墙面板拥有市场上最广泛的墙面板和天花板装饰的设计!<br />
FAUS墙面板有不同的风格，从最现代到最经典的，或最简单到最花俏款式。FAUS墙面板都能够融洽于你的品味空间!</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>西班牙最大强化地板厂商FAUS + FINSA ，百分百在西班牙厂房生产。<br />
由1931年起，FINSA已开始生产各类木制产品，提供给全欧洲及世界各地，稳步上扬。时至今日，FISNA已成为欧洲最大的木制厂之一，并拥有22间厂房，超过5,000名员工，其与 FAUS 合并后其年产量每年可达3千万平方米,其集团每年营业额高达10亿欧元(约100亿人民币) 。<br />
FINSA生产顶级的木地板 FINfloor无缝地板， 并被欧洲地板公会评定为 “商业用途32级(prEN13329)”。而于2012年, 所有FINfloor的耐用等级将会提升到市面上最高标准AC5级及木产品最严格防火标准BflS1。<br />
西班牙FAUS护墙板产品特点<br />
FAUS墙面板为市场上最多元化，最先进的墙面板材料。<br />
当20年前第一块墙面板在西班牙出厂时，FAUS墙面板就已经领导全世界的室内设计。再加上FAUS的60年木材料经验，现在FAUS墙面板拥有市场上最广泛的墙面板和天花板装饰的设计!<br />
FAUS墙面板有不同的风格，从最现代到最经典的，或最简单到最花俏款式。FAUS墙面板都能够融洽于你的品味空间!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'ES',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%A5%BF%E7%8F%AD%E7%89%99%E5%BC%97%E5%A5%A5%E6%96%AF',
    'title' => '西班牙弗奥斯',
    'identifier' => 'node/151',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:25:43 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '蒙牛',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b58e90ee-7903-48f4-a5b3-a2f9c40903ee',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2a30fb61-974d-495d-b10b-c25eb6c433be',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>内蒙古蒙牛乳业（集团）股份有限公司始建于1999年8月，总部设在内蒙古和林格尔县盛乐经济园区。作为国家农业产业化重点龙头企业，肩负着“百年蒙牛、强乳兴农”的使命，借西部大开发的春风取得了长足发展。截至2011年底，蒙牛集团在全国20多个省、市、自治区建立生产基地30多个，总资产超200亿元，年产能超700万吨，累计创造产值1834亿元、向国家上缴税金90.9亿元，累计收购鲜奶2462万吨、为农牧民发放奶款683亿元，被社会形象地誉为西部大开发以来“最大的造饭碗企业”。2012年9月21日起，蒙牛实行大规模换装，在全国商家新包装产品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>内蒙古蒙牛乳业（集团）股份有限公司始建于1999年8月，总部设在内蒙古和林格尔县盛乐经济园区。作为国家农业产业化重点龙头企业，肩负着“百年蒙牛、强乳兴农”的使命，借西部大开发的春风取得了长足发展。截至2011年底，蒙牛集团在全国20多个省、市、自治区建立生产基地30多个，总资产超200亿元，年产能超700万吨，累计创造产值1834亿元、向国家上缴税金90.9亿元，累计收购鲜奶2462万吨、为农牧民发放奶款683亿元，被社会形象地誉为西部大开发以来“最大的造饭碗企业”。2012年9月21日起，蒙牛实行大规模换装，在全国商家新包装产品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%92%99%E7%89%9B',
    'title' => '蒙牛',
    'identifier' => 'node/12',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '芝华士',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1e8ca20b-e150-4840-8ce0-3b600a1d8370',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365946253,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '2d9b6846-229b-4313-ae29-cf2934dedcb7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1801年成立于苏格兰阿柏丁的芝华士公司，是全世界最早生产调和威士忌并将其推向市场的威士忌生产商，同时也是威士忌三重调和的创造者。出于对威士忌事业的无比沉醉，芝华士兄弟遍访欧美大陆，成为最早发现威士忌酿制秘密的先驱。创始人James Chivas坚持认为保持品牌口味的一贯性是品牌的魅力所在，并开始创造有一贯质量保证的调和型威士忌，其品牌“芝华士”诞生于十九世纪九十年代。<br />
芝华士(5张)[2]享誉世界的芝华士威士忌是最具声望的苏格兰高级威士忌。被誉为“天使的诞生”创始人詹姆斯·芝华士和约翰·芝华士兄弟开当时调配艺术风气之先，创造出芝华士这一代表了醇和、独特、出众的威士忌品牌。芝华士18年威士忌秉承其优秀传统，以卓越的品质来充分展现芝华士佳酿的崇高声望与地位。为了彰显其非凡品质，每一瓶芝华士18年苏格兰威士忌上都拥有缔造者Colin Scott的金色署名，见证着这一款至为醇厚、尊贵而典雅的苏格兰威士忌。<br />
享誉世界的芝华士威士忌是最具声望的苏格兰高级威士忌，1801年成立于苏格兰阿柏丁的芝华士公司，创始人是詹姆斯·芝华士和约翰·芝华士兄弟。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1801年成立于苏格兰阿柏丁的芝华士公司，是全世界最早生产调和威士忌并将其推向市场的威士忌生产商，同时也是威士忌三重调和的创造者。出于对威士忌事业的无比沉醉，芝华士兄弟遍访欧美大陆，成为最早发现威士忌酿制秘密的先驱。创始人James Chivas坚持认为保持品牌口味的一贯性是品牌的魅力所在，并开始创造有一贯质量保证的调和型威士忌，其品牌“芝华士”诞生于十九世纪九十年代。<br />
芝华士(5张)[2]享誉世界的芝华士威士忌是最具声望的苏格兰高级威士忌。被誉为“天使的诞生”创始人詹姆斯·芝华士和约翰·芝华士兄弟开当时调配艺术风气之先，创造出芝华士这一代表了醇和、独特、出众的威士忌品牌。芝华士18年威士忌秉承其优秀传统，以卓越的品质来充分展现芝华士佳酿的崇高声望与地位。为了彰显其非凡品质，每一瓶芝华士18年苏格兰威士忌上都拥有缔造者Colin Scott的金色署名，见证着这一款至为醇厚、尊贵而典雅的苏格兰威士忌。<br />
享誉世界的芝华士威士忌是最具声望的苏格兰高级威士忌，1801年成立于苏格兰阿柏丁的芝华士公司，创始人是詹姆斯·芝华士和约翰·芝华士兄弟。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%8A%9D%E5%8D%8E%E5%A3%AB',
    'title' => '芝华士',
    'identifier' => 'node/32',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:30:53 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => 'TOTO',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'eb779a6b-bf64-4daa-9a2d-65a4dc4e9200',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366294069,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '30a0abdb-d3a7-4a77-b17e-a7c3031b10ea',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>著名卫浴品牌TOTO，创立于1917年，在近百年的发展过程中，东陶TOTO以其尖端的科技、卓越的性能、致力于环保的企业理念，赢得了全球用户的共同信赖。<br />
无论是尖端技术实力体现的诺锐斯特·间，还是带来水洗健康体验的卫洗丽。无论是带动行业节水风潮的4.8升节水坐便器，还是水力发电龙头、海洁特瓷砖。无论是智洁技术、超漩式冲洗，还是SMA恒温、EcoMAX技术，TOTO的产品和技术给用户带去智能卫浴体验的同时，更将环保与节能融入到生活之中，并获得了节水贡献奖、环保贡献奖等众多奖项。在中国地标性建筑，中国国家游泳中心（水立方）、北京奥运会的主体育场（鸟巢）、上海环球金融中心中，你随处可见TOTO的身影。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>著名卫浴品牌TOTO，创立于1917年，在近百年的发展过程中，东陶TOTO以其尖端的科技、卓越的性能、致力于环保的企业理念，赢得了全球用户的共同信赖。<br />
无论是尖端技术实力体现的诺锐斯特·间，还是带来水洗健康体验的卫洗丽。无论是带动行业节水风潮的4.8升节水坐便器，还是水力发电龙头、海洁特瓷砖。无论是智洁技术、超漩式冲洗，还是SMA恒温、EcoMAX技术，TOTO的产品和技术给用户带去智能卫浴体验的同时，更将环保与节能融入到生活之中，并获得了节水贡献奖、环保贡献奖等众多奖项。在中国地标性建筑，中国国家游泳中心（水立方）、北京奥运会的主体育场（鸟巢）、上海环球金融中心中，你随处可见TOTO的身影。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 298,
      ),
      1 => array(
        'tid' => 6,
      ),
      2 => array(
        'tid' => 250,
      ),
      3 => array(
        'tid' => 126,
      ),
      4 => array(
        'tid' => 274,
      ),
      5 => array(
        'tid' => 222,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'JP',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/toto',
    'title' => 'TOTO',
    'identifier' => 'node/55',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-18 22:07:49 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '光明',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f023acb9-e427-4b33-93ef-e9be45debc70',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365940311,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '313b3319-dfde-45f6-ae3b-2db26be1018d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>光明乳业股份有限公司是由国资、外资、民营资本组成的产权多元化股份制上市公司，从事乳和乳制品的开发、生产和销售，奶牛和公牛饲养、培育，物流配送，营养保健食品开发、生产和销售。公司有乳品研发中心、加工设备以及加工工艺，形成了消毒奶、保鲜奶、酸奶、超高温灭菌奶、奶粉、黄油干酪、果汁饮料等系列产品，是目前国内最大规模的乳制品生产、销售企业之一。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>光明乳业股份有限公司是由国资、外资、民营资本组成的产权多元化股份制上市公司，从事乳和乳制品的开发、生产和销售，奶牛和公牛饲养、培育，物流配送，营养保健食品开发、生产和销售。公司有乳品研发中心、加工设备以及加工工艺，形成了消毒奶、保鲜奶、酸奶、超高温灭菌奶、奶粉、黄油干酪、果汁饮料等系列产品，是目前国内最大规模的乳制品生产、销售企业之一。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
      1 => array(
        'tid' => 333,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%85%89%E6%98%8E',
    'title' => '光明',
    'identifier' => 'node/21',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 19:51:51 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '腾达',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5eeebefe-513c-4fcf-a20f-68d1342d2005',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910974,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '318908a1-85a7-4395-908e-08732d724eb5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>创建于1973年,公司坐落在素有“中国竹木建材之乡”美誉的南方重点林业县—铜鼓，占地面积120余亩，现为江西省自营进出口企业，拥有资产1.09亿元，员工3000余人，其中中级以上技术人员30多人，高级技术人员5人，联营下属企业15家。并通过了ISO9001—2000质量管理体系认证。<br />
公司生产竹制品历史较长，早在八十年代就与台商合资在全国领先研发楠竹地板生产，经过二十多年的打造，公司研发的“多筋型防变形”第八代竹地板生产技术获国家两项专利（专利号：99227887.2、00259128.6）。目前，公司年生产能力已达300万平方米，产品不仅畅销国内，且大量出口至欧美、东南亚等国家和地区。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>创建于1973年,公司坐落在素有“中国竹木建材之乡”美誉的南方重点林业县—铜鼓，占地面积120余亩，现为江西省自营进出口企业，拥有资产1.09亿元，员工3000余人，其中中级以上技术人员30多人，高级技术人员5人，联营下属企业15家。并通过了ISO9001—2000质量管理体系认证。<br />
公司生产竹制品历史较长，早在八十年代就与台商合资在全国领先研发楠竹地板生产，经过二十多年的打造，公司研发的“多筋型防变形”第八代竹地板生产技术获国家两项专利（专利号：99227887.2、00259128.6）。目前，公司年生产能力已达300万平方米，产品不仅畅销国内，且大量出口至欧美、东南亚等国家和地区。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%85%BE%E8%BE%BE',
    'title' => '腾达',
    'identifier' => 'node/161',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:16:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '优佳',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c4b1d859-3eb6-4140-9836-e4ee229dfaab',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367074116,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '351a128f-c7c0-404d-90f3-e79753f85b41',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>优佳牛奶来自德国，&nbsp;HOCHWALD是德国第二大乳制品品牌,奶源的严控把关,制作过程的全程监控,产品开发的不断创新,使得HOCHWALD成为了德国,乃至欧洲的乳品专家，好沃德牛奶公司70多年的专业生产牛奶的经验，保证了好沃德牛奶及其奶制品的高品质。好沃德公司目前在德国8个州和邻国卢森堡和法国采集奶源，拥有7800个牛奶供应商，1600名员工，每年采集超过18亿吨的牛奶，年营业额超过10亿欧元。出口的营业额占总营业额的25%，目前好沃德牛奶出口的目的国已经超过了90个国家。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>优佳牛奶来自德国， HOCHWALD是德国第二大乳制品品牌,奶源的严控把关,制作过程的全程监控,产品开发的不断创新,使得HOCHWALD成为了德国,乃至欧洲的乳品专家，好沃德牛奶公司70多年的专业生产牛奶的经验，保证了好沃德牛奶及其奶制品的高品质。好沃德公司目前在德国8个州和邻国卢森堡和法国采集奶源，拥有7800个牛奶供应商，1600名员工，每年采集超过18亿吨的牛奶，年营业额超过10亿欧元。出口的营业额占总营业额的25%，目前好沃德牛奶出口的目的国已经超过了90个国家。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%BC%98%E4%BD%B3',
    'title' => '优佳',
    'identifier' => 'node/119',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 22:48:36 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '德运',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b7eebed0-fe4a-4ec2-bfb0-e7b1e3ce2cc3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36431b38-21d1-450d-aff2-6a8332a03527',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>德运低脂奶来自天然牧场澳大利亚，是澳洲最大的乳制品厂商MG公司荣誉产品，口感醇香，天然牛奶，不含任何食品添加剂和防腐剂，富含蛋白质和钙质。随着生活水平的提高，进口牛奶凭借其优异的质量和口碑，渐渐成为了广大MM们的上优之选。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>德运低脂奶来自天然牧场澳大利亚，是澳洲最大的乳制品厂商MG公司荣誉产品，口感醇香，天然牛奶，不含任何食品添加剂和防腐剂，富含蛋白质和钙质。随着生活水平的提高，进口牛奶凭借其优异的质量和口碑，渐渐成为了广大MM们的上优之选。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BE%B7%E8%BF%90',
    'title' => '德运',
    'identifier' => 'node/9',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '兰特',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f1572c45-4fdd-4432-aa4a-37f155129a18',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '36bc640c-23a7-4222-ac9a-f4d0548c8547',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>lactel兰特是法国兰特黎斯集团旗下的牛奶品牌。该集团旗下的PRESIDENT总统牌似乎更为人熟知。这款lactel兰特低脂牛奶为法国原装进口，100%纯牛奶制成，非奶粉还原。富含钙质，口味香醇，奶香味浓郁。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>lactel兰特是法国兰特黎斯集团旗下的牛奶品牌。该集团旗下的PRESIDENT总统牌似乎更为人熟知。这款lactel兰特低脂牛奶为法国原装进口，100%纯牛奶制成，非奶粉还原。富含钙质，口味香醇，奶香味浓郁。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%85%B0%E7%89%B9',
    'title' => '兰特',
    'identifier' => 'node/11',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '天美华乳',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9117a95f-c9fc-493b-b77c-538dc6988a9d',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365935357,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3724fed0-ac45-4695-ad83-72077ee77854',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>天美华乳食品有限责任公司成立于2003年，位于中国乳都——呼和浩特市，占地15000平方米，是内蒙古自治区一家专业研发、生产民族特色奶食品的企业。主要生产蒙古额颉奶茶、奶片、奶酪、奶油四大系列60余种产品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>天美华乳食品有限责任公司成立于2003年，位于中国乳都——呼和浩特市，占地15000平方米，是内蒙古自治区一家专业研发、生产民族特色奶食品的企业。主要生产蒙古额颉奶茶、奶片、奶酪、奶油四大系列60余种产品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 332,
      ),
    ),
  ),
  'field_guoj' => array(),
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%A9%E7%BE%8E%E5%8D%8E%E4%B9%B3',
    'title' => '天美华乳',
    'identifier' => 'node/18',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 18:29:17 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '自然之宝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9d90e74c-a63b-419b-92e3-5aaddc6e4011',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '383bfd5f-54b6-4168-826c-61169cac33c7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1971年，鲁道夫在家乡——纽约长岛创立了NATURE’S BOUNTY公司，意为“大自然的恩赐”，中文译为“自然之宝”。1992年，自然之宝的母公司NBTY在美国纳斯达克(NASDAQ)首次公开发行时，随即成为90年代股票表现最引人注目的公司。2003年9月，NBTY从纳斯达克迁移到更为成熟的纽约证券交易所NY.SE NATURE’S BOUNTY公司 鲁道夫专注于应用新技术、产品创新、 自然之宝 使用天然原料和降低生产成本，令自然之宝公司在诸多方面都成为行业先驱。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1971年，鲁道夫在家乡——纽约长岛创立了NATURE’S BOUNTY公司，意为“大自然的恩赐”，中文译为“自然之宝”。1992年，自然之宝的母公司NBTY在美国纳斯达克(NASDAQ)首次公开发行时，随即成为90年代股票表现最引人注目的公司。2003年9月，NBTY从纳斯达克迁移到更为成熟的纽约证券交易所NY.SE NATURE’S BOUNTY公司 鲁道夫专注于应用新技术、产品创新、 自然之宝 使用天然原料和降低生产成本，令自然之宝公司在诸多方面都成为行业先驱。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
      2 => array(
        'tid' => 288,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%87%AA%E7%84%B6%E4%B9%8B%E5%AE%9D',
    'title' => '自然之宝',
    'identifier' => 'node/4',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '深蓝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bd3e9508-9a7f-46a8-aa86-09fd09039b27',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365927374,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3a129b56-3661-4b05-8059-e0e2e71d4942',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>深蓝海参是龙升源公司的自有品牌，选用山东半岛周边海域产纯天然鲜活刺参（属海参中的极品），采用科学工艺技术精制而成，不破坏其营养价值及功效，具有强精利肾、健阳壮体、防癌抗癌、增强免疫、补血润燥、调经养颜、延缓衰老、养胎利产的功能。对癌症病人放疗、化疗后的体质恢复有辅助疗效，尤其对年老体弱、产后、术后、高血压、高血脂、糖尿病患者，效果更佳，是真正的绿色海洋保健珍品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>深蓝海参是龙升源公司的自有品牌，选用山东半岛周边海域产纯天然鲜活刺参（属海参中的极品），采用科学工艺技术精制而成，不破坏其营养价值及功效，具有强精利肾、健阳壮体、防癌抗癌、增强免疫、补血润燥、调经养颜、延缓衰老、养胎利产的功能。对癌症病人放疗、化疗后的体质恢复有辅助疗效，尤其对年老体弱、产后、术后、高血压、高血脂、糖尿病患者，效果更佳，是真正的绿色海洋保健珍品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 231,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B7%B1%E8%93%9D',
    'title' => '深蓝',
    'identifier' => 'node/15',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 16:16:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '天华山',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'aea163e4-2793-49a0-9d6e-08ab868a71a6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367073433,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3cebd0ee-36af-45bd-a125-48a905d93bc0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>天华高丽参茸有限公司是一家从事生产和加工人参及其他高级滋补品的企业，经过不段的摸索和发展，成功的开发出几十种滋补保健系列产品。因为优越的地理环境提供了我们提取高质量的传统参茸产品、标准的参茸提取物、高科技参茸保健产品。其公司生产的天华山牌高丽人参都是通过与边境国家朝鲜经过易货贸易所获取的优质原材料，产品不但品质卓越、至臻完美，且价格公道。 天华公司向您保证选择了天华你就选择了健康的生活。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>天华高丽参茸有限公司是一家从事生产和加工人参及其他高级滋补品的企业，经过不段的摸索和发展，成功的开发出几十种滋补保健系列产品。因为优越的地理环境提供了我们提取高质量的传统参茸产品、标准的参茸提取物、高科技参茸保健产品。其公司生产的天华山牌高丽人参都是通过与边境国家朝鲜经过易货贸易所获取的优质原材料，产品不但品质卓越、至臻完美，且价格公道。 天华公司向您保证选择了天华你就选择了健康的生活。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
      1 => array(
        'tid' => 65,
      ),
      2 => array(
        'tid' => 313,
      ),
      3 => array(
        'tid' => 10,
      ),
      4 => array(
        'tid' => 256,
      ),
      5 => array(
        'tid' => 158,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%A9%E5%8D%8E%E5%B1%B1',
    'title' => '天华山',
    'identifier' => 'node/118',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 22:37:13 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '雀巢',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '003052ad-2bca-46d3-bc06-be22b57697c9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366883981,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '3e09571d-cbe3-416b-8993-661615e8c21c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>雀巢公司，由亨利·内斯特莱（Henri Nestle)于1867年创建，总部设在瑞士日内瓦湖畔的沃韦(Vevey)，在全球拥有500多家工厂，为世界上最大的食品制造商。公司起源于瑞士，最初是以生产婴儿食品起家，以生产巧克力棒和速溶咖啡闻名遐迩。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>雀巢公司，由亨利·内斯特莱（Henri Nestle)于1867年创建，总部设在瑞士日内瓦湖畔的沃韦(Vevey)，在全球拥有500多家工厂，为世界上最大的食品制造商。公司起源于瑞士，最初是以生产婴儿食品起家，以生产巧克力棒和速溶咖啡闻名遐迩。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CH',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%9B%80%E5%B7%A2',
    'title' => '雀巢',
    'identifier' => 'node/107',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-25 17:59:41 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '王朝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '7f6bebf0-253e-44a9-ac2d-1314f7f482bf',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365995588,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '40b136dd-b04a-49e2-ba7b-c4e2632d1a39',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>中法合营王朝葡萄酿酒有限公司始建于1980年，是中国第二家、天津市第一家中外合资企业，合资的外方为法国人头马亚太有限公司和香港国际贸易与技术研究社 。<br />
公司从国外引进了具有国际先进水平的葡萄酒生产设备和技术，拥有国际酿酒名种葡萄原料种植基地近3万亩，建立了技术开发（科研）中心，有强劲的科技开发能力。公司现生产具有中国地域风格的三大系列80多个品种具有欧洲风格的葡萄酒，生产能力为4万吨/年，是亚洲地区规模最大的全汁高档葡萄酒生产企业之一。<br />
公司始终重视产品质量，使王朝酒享誉海内外。王朝酒曾获十四枚国际金奖、八枚国家级金奖，被布鲁塞尔国际评酒会授予国际最高质量奖。农业部首批将王朝酒确定为无污染、无公害、无病毒、营养丰富的绿色食品。目前王朝酒被指定为国宴用酒，供应231个我国驻外使、领馆，产品还远销美国、加拿大、英国、法国、日本、澳大利亚等二十多个国家和地区。随着王朝酒知名度的不断提高，企业的无形资产价值也在不断提升，经评估王朝酒的品牌价值已达25.01亿元人民币。<br />
公司具有现代化的管理运营机制，1989年被批准为国家二级企业；1996年通过了ISO9002质量管理体系认证；2000年取得了ISO14001环境管理体系认证；“王朝”被国家工商总局认定为中国“驰名商标”；1996年《王朝全汁葡萄酒规模化生产工艺技术的研究》获国家科技进步三等奖、2001年《王朝高档干红葡萄酒酿造技术与原料设备保障体系的研制与开发》获国家科技进步二等奖，成为我国酿酒行业唯一两次获此殊荣的企业；《提高企业竞争力的优化管理》荣获国家企业管理现代化创新成果二等奖；2002年王朝酒被国家质检总局认定为“免检产品”和“中国名牌”称号。公司还连续多年获得天津市优秀外商投资企业天津市优秀企业、全国双优外商投资企业、中国食品行业质量效益型先进企业、全国质量效益型先进企业等荣誉称号。王朝公司对葡萄酒事业的发展充满信心，力争实现基地规范化、产品标准化、管理现代化、市场国际化、人才智能化，以满足日益增长的市场需求，使王朝公司跨入世界著名葡萄酒企业行列，谱写中国葡萄酿酒史的新篇章。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>中法合营王朝葡萄酿酒有限公司始建于1980年，是中国第二家、天津市第一家中外合资企业，合资的外方为法国人头马亚太有限公司和香港国际贸易与技术研究社 。<br />
公司从国外引进了具有国际先进水平的葡萄酒生产设备和技术，拥有国际酿酒名种葡萄原料种植基地近3万亩，建立了技术开发（科研）中心，有强劲的科技开发能力。公司现生产具有中国地域风格的三大系列80多个品种具有欧洲风格的葡萄酒，生产能力为4万吨/年，是亚洲地区规模最大的全汁高档葡萄酒生产企业之一。<br />
公司始终重视产品质量，使王朝酒享誉海内外。王朝酒曾获十四枚国际金奖、八枚国家级金奖，被布鲁塞尔国际评酒会授予国际最高质量奖。农业部首批将王朝酒确定为无污染、无公害、无病毒、营养丰富的绿色食品。目前王朝酒被指定为国宴用酒，供应231个我国驻外使、领馆，产品还远销美国、加拿大、英国、法国、日本、澳大利亚等二十多个国家和地区。随着王朝酒知名度的不断提高，企业的无形资产价值也在不断提升，经评估王朝酒的品牌价值已达25.01亿元人民币。<br />
公司具有现代化的管理运营机制，1989年被批准为国家二级企业；1996年通过了ISO9002质量管理体系认证；2000年取得了ISO14001环境管理体系认证；“王朝”被国家工商总局认定为中国“驰名商标”；1996年《王朝全汁葡萄酒规模化生产工艺技术的研究》获国家科技进步三等奖、2001年《王朝高档干红葡萄酒酿造技术与原料设备保障体系的研制与开发》获国家科技进步二等奖，成为我国酿酒行业唯一两次获此殊荣的企业；《提高企业竞争力的优化管理》荣获国家企业管理现代化创新成果二等奖；2002年王朝酒被国家质检总局认定为“免检产品”和“中国名牌”称号。公司还连续多年获得天津市优秀外商投资企业天津市优秀企业、全国双优外商投资企业、中国食品行业质量效益型先进企业、全国质量效益型先进企业等荣誉称号。王朝公司对葡萄酒事业的发展充满信心，力争实现基地规范化、产品标准化、管理现代化、市场国际化、人才智能化，以满足日益增长的市场需求，使王朝公司跨入世界著名葡萄酒企业行列，谱写中国葡萄酿酒史的新篇章。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 339,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%8E%8B%E6%9C%9D',
    'title' => '王朝',
    'identifier' => 'node/43',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 11:13:08 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '可瑞康',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1a83dfd3-02a1-4a1e-b74d-9c7654cb5d18',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366469312,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '41269e6c-22c3-4d78-801a-62f4770ba0a4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
可瑞康(Karicare)是全球母婴营养专家Nutricia旗下著名婴幼儿奶粉品牌。<br />
Karicare可瑞康起源于1896年，由Truby King博士开发的，他最早开发这个产品的动力是“帮助辛劳的妈妈，保护可爱的宝宝”。经过百年发展，Karicare现已成为新西兰和澳大利亚市场领导品牌，是新西兰和澳大利亚妈妈们的首选品牌，尤以Karicare可瑞康金装系列最受消费者青睐。<br />
Karicare可瑞康金装系列婴幼儿配方奶粉，适合0-3岁宝宝。特含先进的科学营养配方，为宝宝每个成长阶段提供最佳的营养支持。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>可瑞康(Karicare)是全球母婴营养专家Nutricia旗下著名婴幼儿奶粉品牌。<br />
Karicare可瑞康起源于1896年，由Truby King博士开发的，他最早开发这个产品的动力是“帮助辛劳的妈妈，保护可爱的宝宝”。经过百年发展，Karicare现已成为新西兰和澳大利亚市场领导品牌，是新西兰和澳大利亚妈妈们的首选品牌，尤以Karicare可瑞康金装系列最受消费者青睐。<br />
Karicare可瑞康金装系列婴幼儿配方奶粉，适合0-3岁宝宝。特含先进的科学营养配方，为宝宝每个成长阶段提供最佳的营养支持。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%8F%AF%E7%91%9E%E5%BA%B7',
    'title' => '可瑞康',
    'identifier' => 'node/62',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 22:48:32 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '美瑞克斯',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0839e7d8-b79b-46b4-b37a-5ca3736f5b86',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366502535,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '42bda93e-faea-4680-9957-503c7d72b4cf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>美瑞克斯(MET-Rx®)是全球最大的专业功能食品生产商和销售商美国NBTY公司旗下的顶尖运动营养品牌，是全球运动营养补充剂的领导品牌。<br />
美瑞克斯(MET-Rx®)最初由波斯顿大学神经生理教授、医学博士Scott Connelly创建。 美瑞克斯(MET-Rx®)自1977年起独家冠名赞助“世界大力士”冠军赛(World’s Strongest Man)，每年都向世人展示来自世界各地的大力士们的精彩表演，并在ESPN等多家体育频道转播。美瑞克斯(MET-Rx®)的品质和技术受到多个世界顶级运动员的认可，包括 2005、2006 连续两年获得阿诺德经典赛冠军的职业健美运动员德克斯塔.杰克逊，三届世界大力士冠军赛冠军的世界超级大力士麦瑞斯。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>美瑞克斯(MET-Rx®)是全球最大的专业功能食品生产商和销售商美国NBTY公司旗下的顶尖运动营养品牌，是全球运动营养补充剂的领导品牌。<br />
美瑞克斯(MET-Rx®)最初由波斯顿大学神经生理教授、医学博士Scott Connelly创建。 美瑞克斯(MET-Rx®)自1977年起独家冠名赞助“世界大力士”冠军赛(World’s Strongest Man)，每年都向世人展示来自世界各地的大力士们的精彩表演，并在ESPN等多家体育频道转播。美瑞克斯(MET-Rx®)的品质和技术受到多个世界顶级运动员的认可，包括 2005、2006 连续两年获得阿诺德经典赛冠军的职业健美运动员德克斯塔.杰克逊，三届世界大力士冠军赛冠军的世界超级大力士麦瑞斯。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 264,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%BE%8E%E7%91%9E%E5%85%8B%E6%96%AF',
    'title' => '美瑞克斯',
    'identifier' => 'node/64',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 08:02:15 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '九牧',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b837d0bb-b52f-4fa9-a392-8320ac01c7ea',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366210429,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '43abb1d2-332a-49f4-b907-4fad60e46735',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>九牧集团有限公司于1990年创立于海峡西岸经济区福建泉州，长期专注于厨卫及配套产品的研发和生产，是一家以卫生陶瓷、智能厨卫、整体卫浴、厨卫家具、五金龙头、厨卫五金为主体业务的大型厨卫企业，被认定为“国家高新技术型企业”。九牧集团旗下品牌“JOMOO”，是消费者最为熟悉的厨卫品牌之一，曾被认定为“中国驰名商标”、“中国名牌”、“中国环境标志产品”、“CCTV年度品牌”，并多次入选政府绿色采购清单。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>九牧集团有限公司于1990年创立于海峡西岸经济区福建泉州，长期专注于厨卫及配套产品的研发和生产，是一家以卫生陶瓷、智能厨卫、整体卫浴、厨卫家具、五金龙头、厨卫五金为主体业务的大型厨卫企业，被认定为“国家高新技术型企业”。九牧集团旗下品牌“JOMOO”，是消费者最为熟悉的厨卫品牌之一，曾被认定为“中国驰名商标”、“中国名牌”、“中国环境标志产品”、“CCTV年度品牌”，并多次入选政府绿色采购清单。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 298,
      ),
      1 => array(
        'tid' => 250,
      ),
      2 => array(
        'tid' => 321,
      ),
      3 => array(
        'tid' => 274,
      ),
      4 => array(
        'tid' => 305,
      ),
      5 => array(
        'tid' => 69,
      ),
      6 => array(
        'tid' => 59,
      ),
      7 => array(
        'tid' => 329,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B9%9D%E7%89%A7',
    'title' => '九牧',
    'identifier' => 'node/53',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-17 22:53:49 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '乐家',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd2a32dc0-21b5-4b1a-a7ff-8a9c69f487ae',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366942984,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '460133a6-7d9d-4653-a966-5ade4da37889',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Roca乐家卫浴作为全球十大卫浴洁具品牌和最大的卫浴生产商之一，1917年由乐家兄弟创立于激情与灵感迸发的西班牙。其总部和全球设计中心、创新中心设在西班牙巴塞罗那。 Roca乐家公司是以生产和销售高档洁具为主，包括瓷砖、暖气系统和空调产业。产品在全球最顶尖的酒店及高档住宅中得到了广泛的采用。 Roca 乐家洁具公司目前在四大洲的16个国家设有40多家工厂，在50多个国家设有营业机构，业务遍及全球100多个国家和地区，为世界各地提供一应俱全的浴室用品，现已成为全球最大的卫浴产品集团公司。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Roca乐家卫浴作为全球十大卫浴洁具品牌和最大的卫浴生产商之一，1917年由乐家兄弟创立于激情与灵感迸发的西班牙。其总部和全球设计中心、创新中心设在西班牙巴塞罗那。 Roca乐家公司是以生产和销售高档洁具为主，包括瓷砖、暖气系统和空调产业。产品在全球最顶尖的酒店及高档住宅中得到了广泛的采用。 Roca 乐家洁具公司目前在四大洲的16个国家设有40多家工厂，在50多个国家设有营业机构，业务遍及全球100多个国家和地区，为世界各地提供一应俱全的浴室用品，现已成为全球最大的卫浴产品集团公司。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 298,
      ),
      1 => array(
        'tid' => 6,
      ),
      2 => array(
        'tid' => 130,
      ),
      3 => array(
        'tid' => 250,
      ),
      4 => array(
        'tid' => 154,
      ),
      5 => array(
        'tid' => 321,
      ),
      6 => array(
        'tid' => 227,
      ),
      7 => array(
        'tid' => 126,
      ),
      8 => array(
        'tid' => 224,
      ),
      9 => array(
        'tid' => 274,
      ),
      10 => array(
        'tid' => 222,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'ES',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B9%90%E5%AE%B6',
    'title' => '乐家',
    'identifier' => 'node/113',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 10:23:04 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '高仪',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ef49704f-458c-4be1-9d4f-c0a3de281d05',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367074737,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '472f6f9a-7bc4-43e9-b304-8391fa50697e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>水龙头世界大师.家庭装饰顶级品牌。<br />
德国高仪(Friedrich Grohe AG&amp; Co. KG)集团是世界著名的卫浴产品与系统供应商及环球性出口商。它坚守创始者讲求精密度与高品质的精神，业务遍及欧亚与其他地区，美誉传遍天下。德国高仪(Friedrich Grohe AG&amp; Co. KG)集团成立于1936年，目前在全球140个国家拥有代表办事处，另有12家生产工厂及17家营业附属公司。这意味着公司取得骄人的业绩。随着公司迈向新的环球环境，高仪在1999年的总营业额增至15亿马克，出口额则占集团销量的64.3%，连续三年获得红点大奖，是全球卫浴红一个获得最佳设计团队红点大奖，在丝顺技术侧试上，足足比第二名高了二倍，恒温龙头的特时达技术，比第二名汉斯高于快了一倍，是北京奥运会，上海世博会的首选，全球百分之八十的喜来登和凯悦和香格里拉酒店都选用高仪的产品。2011年，IF工业大奖，德国高仪这个品牌排在第20名，绝对是卫浴界最高的排名。2008年，高仪的销量超过十亿欧元。是唯一一家龙头单品牌销量超过十亿欧元的品牌，高仪是德国卫浴龙头厂商中最早实现全球性销售与国际生产网络的品牌。<br />
高仪在亚太区市场发展超过20余载，具有强大和显著的影响力。为进一步加强它的贡献，高仪于1994年在新加坡设立区域办事处，1997年在香港设立分行办事处，而上海办事处，北京及广州办事处亦分别在1998年，2000年及2001年投入服务。作为德国Friedrich Grohe AG&amp; Co. KG集团的重要经销部，高仪太平洋以更广大的分销网络为整个市场服务。今时今日，高仪产品得到众多著名酒店的垂青，并为之增添无限光彩。这些酒店包括香格里拉(Shangri-La)酒店，凯悦(Hyatt)酒店以及喜来登(Sheraton)酒店。高仪的出色表现得到全球的肯定，荣获令人引以为荣的世界级大奖如96年德国营销奖。此项奖赏乃首次为浴室，热水器与冷气产品之制造商而设。在这个组别脱颖而出的其他优胜者尚有奔驰(MercedesBenz),宝马(BMW),Henkel。除此，高仪亦凭着出类拔萃的浴室装置，花洒与配件制造与设计，获得国际品质认可证书ISO9001，成为同业中最早获得上述肯定的佼佼者之一。<br />
具体而言，高仪以产品本身的优越素质，杰出工艺及广泛研究与发展取胜。它成功的集卓越工艺及完美设计于一体，于全球各地的浴室散发高雅格调与无穷魅力。<br />
时至今日，位于德国Hemer并于1997年建成之高仪产品设计中心，仍为浴室行业，热水器及冷气产品行业内同类型之先锋及佼佼者。除了为所有优质的高仪产品提供领先的设计外，此中心更为行内精英提供了一个包含产品设计，建筑学及视觉艺术之展厅。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>水龙头世界大师.家庭装饰顶级品牌。<br />
德国高仪(Friedrich Grohe AG&amp; Co. KG)集团是世界著名的卫浴产品与系统供应商及环球性出口商。它坚守创始者讲求精密度与高品质的精神，业务遍及欧亚与其他地区，美誉传遍天下。德国高仪(Friedrich Grohe AG&amp; Co. KG)集团成立于1936年，目前在全球140个国家拥有代表办事处，另有12家生产工厂及17家营业附属公司。这意味着公司取得骄人的业绩。随着公司迈向新的环球环境，高仪在1999年的总营业额增至15亿马克，出口额则占集团销量的64.3%，连续三年获得红点大奖，是全球卫浴红一个获得最佳设计团队红点大奖，在丝顺技术侧试上，足足比第二名高了二倍，恒温龙头的特时达技术，比第二名汉斯高于快了一倍，是北京奥运会，上海世博会的首选，全球百分之八十的喜来登和凯悦和香格里拉酒店都选用高仪的产品。2011年，IF工业大奖，德国高仪这个品牌排在第20名，绝对是卫浴界最高的排名。2008年，高仪的销量超过十亿欧元。是唯一一家龙头单品牌销量超过十亿欧元的品牌，高仪是德国卫浴龙头厂商中最早实现全球性销售与国际生产网络的品牌。<br />
高仪在亚太区市场发展超过20余载，具有强大和显著的影响力。为进一步加强它的贡献，高仪于1994年在新加坡设立区域办事处，1997年在香港设立分行办事处，而上海办事处，北京及广州办事处亦分别在1998年，2000年及2001年投入服务。作为德国Friedrich Grohe AG&amp; Co. KG集团的重要经销部，高仪太平洋以更广大的分销网络为整个市场服务。今时今日，高仪产品得到众多著名酒店的垂青，并为之增添无限光彩。这些酒店包括香格里拉(Shangri-La)酒店，凯悦(Hyatt)酒店以及喜来登(Sheraton)酒店。高仪的出色表现得到全球的肯定，荣获令人引以为荣的世界级大奖如96年德国营销奖。此项奖赏乃首次为浴室，热水器与冷气产品之制造商而设。在这个组别脱颖而出的其他优胜者尚有奔驰(MercedesBenz),宝马(BMW),Henkel。除此，高仪亦凭着出类拔萃的浴室装置，花洒与配件制造与设计，获得国际品质认可证书ISO9001，成为同业中最早获得上述肯定的佼佼者之一。<br />
具体而言，高仪以产品本身的优越素质，杰出工艺及广泛研究与发展取胜。它成功的集卓越工艺及完美设计于一体，于全球各地的浴室散发高雅格调与无穷魅力。<br />
时至今日，位于德国Hemer并于1997年建成之高仪产品设计中心，仍为浴室行业，热水器及冷气产品行业内同类型之先锋及佼佼者。除了为所有优质的高仪产品提供领先的设计外，此中心更为行内精英提供了一个包含产品设计，建筑学及视觉艺术之展厅。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 274,
      ),
      1 => array(
        'tid' => 305,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%AB%98%E4%BB%AA',
    'title' => '高仪',
    'identifier' => 'node/121',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 22:58:57 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '安利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2343f661-36a7-47ca-83f9-3368a58f6799',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4733e76e-b303-421e-a8d2-dcea31c2a679',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>安利，是美国最大的著名直销企业，总公司位于美国密歇根州大急流市亚达城，于1959年由杰·温安洛和理查·狄维士在家中的地下室创立。主要经营日用消费品，涵盖了纽崔莱营养保健食品、雅姿美容化妆品、个人护理用品、家居护理用品和家居耐用品等系列，安利同时兼任生产及销售商。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>安利，是美国最大的著名直销企业，总公司位于美国密歇根州大急流市亚达城，于1959年由杰·温安洛和理查·狄维士在家中的地下室创立。主要经营日用消费品，涵盖了纽崔莱营养保健食品、雅姿美容化妆品、个人护理用品、家居护理用品和家居耐用品等系列，安利同时兼任生产及销售商。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
      2 => array(
        'tid' => 288,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%89%E5%88%A9',
    'title' => '安利',
    'identifier' => 'node/3',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '乐维萨',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8d422750-192f-41d1-a681-bb9de3940bb1',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366940144,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '47fc758c-24be-41a7-936c-6e0441d3b7ed',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
创办于2007年的Lavazza Espression是意大利最出名的品质咖啡带给消费者的一种体验：原味、创新且设计理念独具慧眼。伴随着顶级的产品和温暖宜人的环境，Lavazza Espression绝对是真正酷爱意大利咖啡的人的导航标。Espression反映出的价值体现在于经历了整个世纪，Lavazza成为了意大利格调的象征并且供应一种极其卓越的商品，也成为了世界上千百万人的最爱：espresso。<br />
回溯Lavazza一百一十年的咖啡工业史，Espression给超浓咖啡的世界带来了太多的创新。Espression是一种极其特别的多感官体验：大量筛选特制原产咖啡，通过和Ferran Adrià这样的世界级厨师合作烹制的美味相结合，利用音乐，温馨的氛围等渲染。专注于设计与摆设以及材质和色彩的选择让Espression一直走在尖端却又平易近人。还可以接触到十分引人的世界级摄影相片Lavazza日历，这也反映出公司对艺术创新表现出的长久激情。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>创办于2007年的Lavazza Espression是意大利最出名的品质咖啡带给消费者的一种体验：原味、创新且设计理念独具慧眼。伴随着顶级的产品和温暖宜人的环境，Lavazza Espression绝对是真正酷爱意大利咖啡的人的导航标。Espression反映出的价值体现在于经历了整个世纪，Lavazza成为了意大利格调的象征并且供应一种极其卓越的商品，也成为了世界上千百万人的最爱：espresso。<br />
回溯Lavazza一百一十年的咖啡工业史，Espression给超浓咖啡的世界带来了太多的创新。Espression是一种极其特别的多感官体验：大量筛选特制原产咖啡，通过和Ferran Adrià这样的世界级厨师合作烹制的美味相结合，利用音乐，温馨的氛围等渲染。专注于设计与摆设以及材质和色彩的选择让Espression一直走在尖端却又平易近人。还可以接触到十分引人的世界级摄影相片Lavazza日历，这也反映出公司对艺术创新表现出的长久激情。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'IT',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B9%90%E7%BB%B4%E8%90%A8',
    'title' => '乐维萨',
    'identifier' => 'node/111',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 09:35:44 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '惠氏',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '59c839c9-2153-49e3-b840-46508a8c9f42',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366456881,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48220418-b963-47af-b4d9-4129ef6ac905',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>新西兰提供的惠氏奶粉选用的都是100%原产于新西兰的优质奶源，安全可靠无污染。惠氏奶粉从选料的源头把控产品质量，给予妈妈和宝宝以安心安全的健康保障。<br />
新西兰的乳业是世界之最！也许您没有给宝宝尝试着喝过，那么请您试一下，相信结果一定会让您惊喜！“世界第一”的排名绝对不是徒得虚名！新西兰惠氏奶粉,粉质细腻、口感清淡香醇，很容易被宝宝接受，最重要的是它非常容易吸收，不容易上火！宝宝喝后,睡眠更好、食欲和抵抗力都很好！<br />
作为婴幼儿配方奶粉的发明者，近百年来，惠氏一直致力于婴幼儿营养领域的研发，创造的婴幼儿营养品领域的一个又一个里程碑。无论是婴幼儿配方奶粉，还是各种特殊需求婴幼儿营养品，惠氏始终坚持行业最严格的质量保证体系，希望提供给宝宝的每一餐，都是高品质的一餐。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>新西兰提供的惠氏奶粉选用的都是100%原产于新西兰的优质奶源，安全可靠无污染。惠氏奶粉从选料的源头把控产品质量，给予妈妈和宝宝以安心安全的健康保障。<br />
新西兰的乳业是世界之最！也许您没有给宝宝尝试着喝过，那么请您试一下，相信结果一定会让您惊喜！“世界第一”的排名绝对不是徒得虚名！新西兰惠氏奶粉,粉质细腻、口感清淡香醇，很容易被宝宝接受，最重要的是它非常容易吸收，不容易上火！宝宝喝后,睡眠更好、食欲和抵抗力都很好！<br />
作为婴幼儿配方奶粉的发明者，近百年来，惠氏一直致力于婴幼儿营养领域的研发，创造的婴幼儿营养品领域的一个又一个里程碑。无论是婴幼儿配方奶粉，还是各种特殊需求婴幼儿营养品，惠氏始终坚持行业最严格的质量保证体系，希望提供给宝宝的每一餐，都是高品质的一餐。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%83%A0%E6%B0%8F',
    'title' => '惠氏',
    'identifier' => 'node/59',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 19:21:21 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '世鹿',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c10dac9c-4311-4a3a-b649-3fb8f37bce90',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367073055,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '48578c50-f09c-4f35-84b7-2f1b6581cc27',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>长春世鹿鹿业有限公司，被誉为骑在梅花鹿背上的龙头企业，是经国家林业局批准，工商局注册成立的全国首家梅花鹿定点屠宰企业，主要产品梅花鹿肉，是国内唯一采用国际上先进的屠宰和低温排酸后熟技术的企业。<br />
&nbsp;&nbsp; 公司是以全国最大的梅花鹿人工驯养基地，长春双阳鹿乡梅花鹿驯养基地为依托，开展梅花鹿人工驯养、繁殖、鹿肉及鹿副产品加工、科研开发和销售为一体的实业有限公司。经营的产业有多年的历史和丰富的经验，旗下拥有几十家经国家林业局批准的养殖基地，鹿源稳定，随着产业政策的调整，净化梅花鹿种群势在必行，国家林业部门首先在全国梅花鹿之乡吉林省长春市双阳区鹿乡试点配额规模生产梅花鹿鹿肉，公司是全国产量最大、技术最先进、采用低温排酸、真空包装、电码防伪的鹿肉生产企业。</p>

<p>&nbsp;公司综合中国长白山和大、小兴安岭野生资源优势，依托先进的驯养技术和严格、科学的管理模式，选用高寒地区优质梅花鹿进行加工，确保了产品质量和货源的充足。&nbsp;公司以养殖加工销售的模式进入市场，从“农场到餐桌”的全过程进行严格的检疫检查，确保产品质量和食品安全卫生，产品完全达到标准，深受业界的亲睐。&nbsp;追求绿色、营养、健康是二十一世纪全人类的饮食消费趋势，以科学手段向全社会提供绿色、营养、安全、卫生、优质、健康的野味产品，引领饮食消费的新时尚是公司永恒的目标。&nbsp;</p>

<p>公司主要经营的产品，是国内首家经过低温排酸嫩化技术处理，产品有：梅花鹿肉，鹿茸，鹿里脊，鹿肩肉，鹿颈肉，鹿霖，鹿腱子肉，鹿皮腩，鹿骨腩，鹿腿，鹿排骨，鹿黄瓜条，鹿腿肉，鹿条里脊，鹿脊骨，鹿血，鹿鞭，鹿心，鹿肾，鹿胎，鹿筋，鹿脑，鹿尾，鹿肺，鹿脑。</p>

<p>公司是以梅花鹿人工驯养、鹿副产品加工、科研开发和销售为一体的实业有限公司。我们公司在梅花鹿人工驯养领域具有多年的历史和丰富的经验，旗下拥有数家经国家林业局批准的养殖基地，其中养殖规模在千头以上的有两家。公司还配有经国家首批批准的标准化梅花鹿屠宰厂和产品加工基地。</p>

<p>公司依托中国长白山和大、小兴安岭天然牧场的野生资源优势，运用先进的驯养技术和严格、科学的管理模式，选用高寒地区优质梅花鹿进行加工，确保了产品质量和货源的充足。&nbsp;公司以养殖—加工—销售的模式进入市场，从“农场到餐桌”的全过程进行严格的检疫检验，确保产品质量和食品安全卫生，完全达到国家标准。产品深受业界的亲睐。</p>

<p>公司长年聘用高级营养师正确指导广大消费者科学选用鹿产品。充分体现公司对广大消费者的贴心关怀。&nbsp;追求安全、绿色、营养、健康是二十一世纪全世界人民的饮食消费趋势，以科学手段向全社会提供安全、卫生、优质的梅花鹿系列野味产品，也将引领饮食消费的新时尚。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>长春世鹿鹿业有限公司，被誉为骑在梅花鹿背上的龙头企业，是经国家林业局批准，工商局注册成立的全国首家梅花鹿定点屠宰企业，主要产品梅花鹿肉，是国内唯一采用国际上先进的屠宰和低温排酸后熟技术的企业。<br />
   公司是以全国最大的梅花鹿人工驯养基地，长春双阳鹿乡梅花鹿驯养基地为依托，开展梅花鹿人工驯养、繁殖、鹿肉及鹿副产品加工、科研开发和销售为一体的实业有限公司。经营的产业有多年的历史和丰富的经验，旗下拥有几十家经国家林业局批准的养殖基地，鹿源稳定，随着产业政策的调整，净化梅花鹿种群势在必行，国家林业部门首先在全国梅花鹿之乡吉林省长春市双阳区鹿乡试点配额规模生产梅花鹿鹿肉，公司是全国产量最大、技术最先进、采用低温排酸、真空包装、电码防伪的鹿肉生产企业。</p>
<p> 公司综合中国长白山和大、小兴安岭野生资源优势，依托先进的驯养技术和严格、科学的管理模式，选用高寒地区优质梅花鹿进行加工，确保了产品质量和货源的充足。 公司以养殖加工销售的模式进入市场，从“农场到餐桌”的全过程进行严格的检疫检查，确保产品质量和食品安全卫生，产品完全达到标准，深受业界的亲睐。 追求绿色、营养、健康是二十一世纪全人类的饮食消费趋势，以科学手段向全社会提供绿色、营养、安全、卫生、优质、健康的野味产品，引领饮食消费的新时尚是公司永恒的目标。 </p>
<p>公司主要经营的产品，是国内首家经过低温排酸嫩化技术处理，产品有：梅花鹿肉，鹿茸，鹿里脊，鹿肩肉，鹿颈肉，鹿霖，鹿腱子肉，鹿皮腩，鹿骨腩，鹿腿，鹿排骨，鹿黄瓜条，鹿腿肉，鹿条里脊，鹿脊骨，鹿血，鹿鞭，鹿心，鹿肾，鹿胎，鹿筋，鹿脑，鹿尾，鹿肺，鹿脑。</p>
<p>公司是以梅花鹿人工驯养、鹿副产品加工、科研开发和销售为一体的实业有限公司。我们公司在梅花鹿人工驯养领域具有多年的历史和丰富的经验，旗下拥有数家经国家林业局批准的养殖基地，其中养殖规模在千头以上的有两家。公司还配有经国家首批批准的标准化梅花鹿屠宰厂和产品加工基地。</p>
<p>公司依托中国长白山和大、小兴安岭天然牧场的野生资源优势，运用先进的驯养技术和严格、科学的管理模式，选用高寒地区优质梅花鹿进行加工，确保了产品质量和货源的充足。 公司以养殖—加工—销售的模式进入市场，从“农场到餐桌”的全过程进行严格的检疫检验，确保产品质量和食品安全卫生，完全达到国家标准。产品深受业界的亲睐。</p>
<p>公司长年聘用高级营养师正确指导广大消费者科学选用鹿产品。充分体现公司对广大消费者的贴心关怀。 追求安全、绿色、营养、健康是二十一世纪全世界人民的饮食消费趋势，以科学手段向全社会提供安全、卫生、优质的梅花鹿系列野味产品，也将引领饮食消费的新时尚。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 17,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B8%96%E9%B9%BF',
    'title' => '世鹿',
    'identifier' => 'node/117',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 22:30:55 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '金典',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3b6dc28c-a845-4f0c-8ba4-411dba2c59b8',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365941320,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '4fd258d7-548c-4fd8-80e1-bf139c7a20f8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>金典牛奶诞生于2006年，作为伊利液体奶的首个高端副品牌；自上市起，即秉承奉献最佳品质的理念，致力于打造中国“最好的牛奶”，主要有三支单品：金典纯牛奶、金典低脂奶、金典有机奶。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>金典牛奶诞生于2006年，作为伊利液体奶的首个高端副品牌；自上市起，即秉承奉献最佳品质的理念，致力于打造中国“最好的牛奶”，主要有三支单品：金典纯牛奶、金典低脂奶、金典有机奶。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%87%91%E5%85%B8',
    'title' => '金典',
    'identifier' => 'node/24',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:08:40 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '雅培',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '08009354-8a8c-4d0d-b484-36ea0242d41c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366468275,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5157ea5f-898d-4f7d-a0c8-1b31c337c377',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
雅培，对生命的承诺 ：1888年，雅培药厂（Abbott Laboratories）由创办人Wallace C. Abbott医师在美国芝加哥成立。雅培始终以严谨的科学态度与实证效果着称于世，更以不断创新的研发为相关领域立下无数行业里程碑。雅培和每位父母一样，始终把宝宝放在首位。雅培120年科学营养史，全球7000多名科学家不断科技突破，赢得世界130多个国家妈妈的信赖。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>雅培，对生命的承诺 ：1888年，雅培药厂（Abbott Laboratories）由创办人Wallace C. Abbott医师在美国芝加哥成立。雅培始终以严谨的科学态度与实证效果着称于世，更以不断创新的研发为相关领域立下无数行业里程碑。雅培和每位父母一样，始终把宝宝放在首位。雅培120年科学营养史，全球7000多名科学家不断科技突破，赢得世界130多个国家妈妈的信赖。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%9B%85%E5%9F%B9',
    'title' => '雅培',
    'identifier' => 'node/60',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 22:31:15 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '诺优能',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b432959d-cffd-40cd-937b-549996cc4f00',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366456242,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5503b3ca-b4ad-4f06-812d-55bed4642fe4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<div>荷兰的乳制品世界闻名，其中一些重要的奶制品出口额约占世界的1/6。荷兰得天独厚的自然资源条件为荷兰的草地建设和奶牛的高产创造条件。荷兰牧场面积比耕地面积还大，平均每个荷兰人可拥有1.6头乳牛，绿色的自然环境及优质的土壤成就了最佳的奶源，也使荷兰可以生产出世界一流的高品质奶粉</div>

<div>
<div>荷兰奶业对奶牛、饲料、牧场、牛奶检测、奶制品加工、最终产品等都有严格的书面标准。以法令或以行业规章的方式颁布，并由政府或行业授权的权威机构监督执行，对奶制品的加工全面实行IS09000系列标准和HACCP质量控制体系，使荷兰奶制品的质量得到世界公认。</div>
</div>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>荷兰的乳制品世界闻名，其中一些重要的奶制品出口额约占世界的1/6。荷兰得天独厚的自然资源条件为荷兰的草地建设和奶牛的高产创造条件。荷兰牧场面积比耕地面积还大，平均每个荷兰人可拥有1.6头乳牛，绿色的自然环境及优质的土壤成就了最佳的奶源，也使荷兰可以生产出世界一流的高品质奶粉</p>
<p>荷兰奶业对奶牛、饲料、牧场、牛奶检测、奶制品加工、最终产品等都有严格的书面标准。以法令或以行业规章的方式颁布，并由政府或行业授权的权威机构监督执行，对奶制品的加工全面实行IS09000系列标准和HACCP质量控制体系，使荷兰奶制品的质量得到世界公认。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%AF%BA%E4%BC%98%E8%83%BD',
    'title' => '诺优能',
    'identifier' => 'node/58',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 19:10:42 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '声达',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'aaf994e7-f0ca-4b95-826b-f5bb4f51bf48',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366505291,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '567714cb-c249-4373-b948-13cb1293bda6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>上海声达木业有限公司成立于1998年，是上海最早从事建材专业批发的胶合板批发市场。</p>

<p>公司借助位于上海共和新路四通八达的交通地理优势和房地产的强劲发展，依靠地方政府的积极支持，目前已发展为注册资金580万元，总资产近3000万元，并拥有占地1.5万平方米场地和两家建材生产厂的、实力较雄厚的建材专业经营公司。</p>

<p>上海声达木业有限公司主要生产、经营高档装饰板、多层板、进口木方及国产细木工板、中密度板、宝丽板、复合地板等各类新型建筑材料。公司以“质量上乘、价格优惠、服务周到”为经营宗旨，在多年的经营中，取得了良好的经济效益和社会信誉。99年被上海质量技术监督局评为“放心市场先进单位”；2000年被评为“放心市场”，同时被上海市工商局授予“2000年文明市场称号”。公司在98年便实现销售额1.2亿元人民币，99年、2000年销售额连年增长，到2001年为止，已经突破了10亿元。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>上海声达木业有限公司成立于1998年，是上海最早从事建材专业批发的胶合板批发市场。</p>
<p>公司借助位于上海共和新路四通八达的交通地理优势和房地产的强劲发展，依靠地方政府的积极支持，目前已发展为注册资金580万元，总资产近3000万元，并拥有占地1.5万平方米场地和两家建材生产厂的、实力较雄厚的建材专业经营公司。</p>
<p>上海声达木业有限公司主要生产、经营高档装饰板、多层板、进口木方及国产细木工板、中密度板、宝丽板、复合地板等各类新型建筑材料。公司以“质量上乘、价格优惠、服务周到”为经营宗旨，在多年的经营中，取得了良好的经济效益和社会信誉。99年被上海质量技术监督局评为“放心市场先进单位”；2000年被评为“放心市场”，同时被上海市工商局授予“2000年文明市场称号”。公司在98年便实现销售额1.2亿元人民币，99年、2000年销售额连年增长，到2001年为止，已经突破了10亿元。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 277,
      ),
      1 => array(
        'tid' => 291,
      ),
      2 => array(
        'tid' => 170,
      ),
      3 => array(
        'tid' => 236,
      ),
      4 => array(
        'tid' => 182,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A3%B0%E8%BE%BE',
    'title' => '声达',
    'identifier' => 'node/66',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 08:48:11 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '九木堂',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '621ecbb3-844d-412e-b5bb-e9dce57d3fd6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367909594,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5701fe29-1c6c-44db-b545-c78f7d376a96',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江西九木堂竹地板实业有限公司是一家提供现代中式生活范本的地板生产商及运营商，拥有多处原材供应区、三大生产基地及十余家相关企业，全套引进国际领先的地板生产线，并且成立专门的研发中心，在产品的设计和工艺上形成了国内领先的创新研发能力，是集研发、生产、销售为一体的综合型现代企业。<br />
公司自成立至今，产品获得了“9001质量体系认证”、“14001环境管理体系认证”、“中国环境标志认证”等诸多荣誉。<br />
九木堂以竹地板为始进入家居行业，目前拥有“九木堂竹地板”与“九木堂·雅树实木多层智能地板”两大品牌，秉承传统工艺文明，以完整的产业供应链和强大生产能力保证出品之纯正。<br />
九木堂竹地板引领中国雅士人居风尚”的品牌理念，以现代智慧演绎东方5000年竹文化，打造富有深厚积淀和文化底蕴的家居铺设材料，彰显当代雅士名流的审美情操和高尚品味，以完善的管理和优秀的团队打造消费者满意的产品，力创行业典范。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江西九木堂竹地板实业有限公司是一家提供现代中式生活范本的地板生产商及运营商，拥有多处原材供应区、三大生产基地及十余家相关企业，全套引进国际领先的地板生产线，并且成立专门的研发中心，在产品的设计和工艺上形成了国内领先的创新研发能力，是集研发、生产、销售为一体的综合型现代企业。<br />
公司自成立至今，产品获得了“9001质量体系认证”、“14001环境管理体系认证”、“中国环境标志认证”等诸多荣誉。<br />
九木堂以竹地板为始进入家居行业，目前拥有“九木堂竹地板”与“九木堂·雅树实木多层智能地板”两大品牌，秉承传统工艺文明，以完整的产业供应链和强大生产能力保证出品之纯正。<br />
九木堂竹地板引领中国雅士人居风尚”的品牌理念，以现代智慧演绎东方5000年竹文化，打造富有深厚积淀和文化底蕴的家居铺设材料，彰显当代雅士名流的审美情操和高尚品味，以完善的管理和优秀的团队打造消费者满意的产品，力创行业典范。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B9%9D%E6%9C%A8%E5%A0%82',
    'title' => '九木堂',
    'identifier' => 'node/153',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 14:53:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '康比特',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c511fb68-14da-43e4-a469-b7933f904d04',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366510753,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '58476ae5-48db-4143-92bf-a9b86ed7bcec',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>北京康比特体育科技股份有限公司，是集研发、生产、销售运动营养食品于一体，并提供运动营养技术服务的高新技术企业。1998年，康比特在北京开设了它在中国的第一家运动营养食品专卖店，从此打破了中国国家队长期被国外运动营养品垄断的局面。康比特公司始终把产品安全和消费者的健康放在首位，使产品成为功效和质量安全相结合的完美统一体。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>北京康比特体育科技股份有限公司，是集研发、生产、销售运动营养食品于一体，并提供运动营养技术服务的高新技术企业。1998年，康比特在北京开设了它在中国的第一家运动营养食品专卖店，从此打破了中国国家队长期被国外运动营养品垄断的局面。康比特公司始终把产品安全和消费者的健康放在首位，使产品成为功效和质量安全相结合的完美统一体。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
      2 => array(
        'tid' => 264,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BA%B7%E6%AF%94%E7%89%B9',
    'title' => '康比特',
    'identifier' => 'node/67',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:19:13 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '人头马',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c01f1b38-5307-4269-94c9-c0a0635334bb',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366553020,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5c2d4133-498c-4ccb-acb3-e15a67c45a94',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>人头马贵为特优香槟干邑专家，一直被誉为干邑品质、形象和地位的象征。是世界四大白兰地品牌中唯一一个由干邑省本地人所创建的品牌。人头马也是四大白兰地品牌中唯一一家自己种植葡萄的公司。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>人头马贵为特优香槟干邑专家，一直被誉为干邑品质、形象和地位的象征。是世界四大白兰地品牌中唯一一个由干邑省本地人所创建的品牌。人头马也是四大白兰地品牌中唯一一家自己种植葡萄的公司。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
      ),
      1 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%BA%BA%E5%A4%B4%E9%A9%AC',
    'title' => '人头马',
    'identifier' => 'node/85',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 22:03:40 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '碧悠',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4ecbf06c-5ae7-491b-b5c6-329d61cbea4d',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366983228,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '5e02e6b5-f067-452d-bdbd-5454b06acb2e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>碧悠®是达能旗下第一大酸奶品牌，承袭卓越法国传统，以特有法国达能技术造就高品质酸奶。今天，碧悠已成为全球70多个国家和地区消费者的舒畅之选。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>碧悠®是达能旗下第一大酸奶品牌，承袭卓越法国传统，以特有法国达能技术造就高品质酸奶。今天，碧悠已成为全球70多个国家和地区消费者的舒畅之选。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 333,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%A2%A7%E6%82%A0',
    'title' => '碧悠',
    'identifier' => 'node/116',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 21:33:48 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '康富来',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f8606916-d907-422f-ab46-a5ea3f84b972',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365926928,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6045018c-0886-48fc-8f9d-bcdd065a728d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>香港康富来集团是一家国际性集团公司，在香港、东南亚及加拿大等地均有投资及贸易发展，受到各地政界及商界的重视。在中国国内主要从事新型食品、保健品、药品的专业研究、开发、生产、销售以及房地产、工业城等地产业相关项目的开发。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>香港康富来集团是一家国际性集团公司，在香港、东南亚及加拿大等地均有投资及贸易发展，受到各地政界及商界的重视。在中国国内主要从事新型食品、保健品、药品的专业研究、开发、生产、销售以及房地产、工业城等地产业相关项目的开发。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 231,
      ),
      2 => array(
        'tid' => 256,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BA%B7%E5%AF%8C%E6%9D%A5',
    'title' => '康富来',
    'identifier' => 'node/14',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 16:08:48 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '生活家',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9057ff1b-94be-40cd-bdbf-37eecb496c41',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367558385,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '61697acb-7b48-426a-b244-3891891d2c2d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>生活家：是一家致力于满足全球消费者居家木制品需求的企业。中国仿古地板专利持有者，拥有生活家、生活家·巴洛克、生活家·曼宁顿三大品牌，经营范围涵盖实木复合地板、仿古地板、强化地板、生态地板、实木地板，木门，真木墙饰以及地板基材、辅料等，在广东中山、天津、江苏南通、四川成都等地设立多个生产、研发基地，拥有员工超过2000名。<br />
生活家拥有森林资源的长期应用优势，以及强大的资源掌控与研发能力，形成完善的全球优质木材采购系统，保证了企业持续发展能力。与中国林科院木材工业研究所等国内外知名木材研发机构建立紧密合作关系，聘请国内外行业专家为技术顾问。并自主拥有木材与新品实验室，拥有先进的研发与品质检测设备。<br />
为适应全球消费者的需要，生活家在美洲、欧洲、大洋洲等地设立联络机构，与国际大型地板生产、销售商建立长期供货关系。在国内，建立健全的销售、服务网络体系，拥有超过600家销售体验中心，超过千名专业居家顾问与顾客服务工程师。通过“金钥匙服务”系统的实施，为消费者提供高质量的服务内容。秉承“务求完美”的工作标准，以持续创新能力为经营特色，生活家将在居家木制品领域为全球消费者提供更为优质与经典的产品，更为完善与尊贵的服务。<br />
生活家于2003年9月当选为中国林产工业协会副理事长单位。在2004年与多家国际地板企业如CCA、ARMSTRONG、哥伦比亚、曼宁顿、得嘉相继建立合作关系并保持着长期业务往来，2008年与马来西亚三林环球有限公司建立战略伙伴关系。工程案例涵盖中国各大一线城市天价楼盘：上海汤臣一品，北京US联邦公寓，深圳华润—幸福里，北美路易威登专卖店和青岛鲁信长春花园等。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>生活家：是一家致力于满足全球消费者居家木制品需求的企业。中国仿古地板专利持有者，拥有生活家、生活家·巴洛克、生活家·曼宁顿三大品牌，经营范围涵盖实木复合地板、仿古地板、强化地板、生态地板、实木地板，木门，真木墙饰以及地板基材、辅料等，在广东中山、天津、江苏南通、四川成都等地设立多个生产、研发基地，拥有员工超过2000名。<br />
生活家拥有森林资源的长期应用优势，以及强大的资源掌控与研发能力，形成完善的全球优质木材采购系统，保证了企业持续发展能力。与中国林科院木材工业研究所等国内外知名木材研发机构建立紧密合作关系，聘请国内外行业专家为技术顾问。并自主拥有木材与新品实验室，拥有先进的研发与品质检测设备。<br />
为适应全球消费者的需要，生活家在美洲、欧洲、大洋洲等地设立联络机构，与国际大型地板生产、销售商建立长期供货关系。在国内，建立健全的销售、服务网络体系，拥有超过600家销售体验中心，超过千名专业居家顾问与顾客服务工程师。通过“金钥匙服务”系统的实施，为消费者提供高质量的服务内容。秉承“务求完美”的工作标准，以持续创新能力为经营特色，生活家将在居家木制品领域为全球消费者提供更为优质与经典的产品，更为完善与尊贵的服务。<br />
生活家于2003年9月当选为中国林产工业协会副理事长单位。在2004年与多家国际地板企业如CCA、ARMSTRONG、哥伦比亚、曼宁顿、得嘉相继建立合作关系并保持着长期业务往来，2008年与马来西亚三林环球有限公司建立战略伙伴关系。工程案例涵盖中国各大一线城市天价楼盘：上海汤臣一品，北京US联邦公寓，深圳华润—幸福里，北美路易威登专卖店和青岛鲁信长春花园等。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%94%9F%E6%B4%BB%E5%AE%B6',
    'title' => '生活家',
    'identifier' => 'node/135',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-03 13:19:45 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '豪达',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '27c96de2-e30e-4655-8b6b-9ef9db5f12a3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798407,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6199b276-6e12-426d-91fb-e927c96275a3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Otard豪达。由英国流亡法国的约翰·安东尼瓦努·奥达尔家族酿制生产的著名法国干邑白兰地。品种有三星、“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）、Otard France Cognac豪达法兰西干邑、Otard Cognac Napoleon豪达干邑拿破仑和马利亚居以及Otard豪达干邑白兰地的极品法兰梭瓦一世·罗伊尔·巴斯特等多种类型。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Otard豪达。由英国流亡法国的约翰·安东尼瓦努·奥达尔家族酿制生产的著名法国干邑白兰地。品种有三星、“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）、Otard France Cognac豪达法兰西干邑、Otard Cognac Napoleon豪达干邑拿破仑和马利亚居以及Otard豪达干邑白兰地的极品法兰梭瓦一世·罗伊尔·巴斯特等多种类型。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%B1%AA%E8%BE%BE',
    'title' => '豪达',
    'identifier' => 'node/95',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:13:27 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '德国科诺',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1141c306-6a67-4cef-b49e-ae4594462b44',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367669470,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '63b22321-bac6-43c4-a31a-a31387d3637d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">始创于1897——柯诺木业百年传奇。德国科诺Kronotex是瑞士柯诺Krono木业集团旗下全球最专业的强化木地板制造商，连续十年全球销量第一。生产总部位于德国柏林Heiligengrabe市。至今已有116年的木制品制造历史，是世界上规模最大的人造板生产企业集团之一。</span><br />
现在，柯诺Krono木业集团在全球18个国家拥有29个产业基地。强化木地板的销售占全球市场1/3份额，成为全球木地板行业当之无愧的王者。<br />
德国科诺强化地板特点：德国制造，加工精密。全球通过欧洲最高质量认证(RAL仅有的13家之一)<br />
基材：采用新鲜松树木材生产HDF基材，不添加榉木、橡木、树皮等杂料<br />
按压式弹簧锁扣系统(Express Clic System)，弹性胶条是其显著亮点，安装极为简单，比常规地板省时50%。<br />
甲醛释放量极低：欧洲标准及国家标准为小于等于1.5mg/L，KRONOTEX的企业标准为小于等于0.5mg/L，远远低于我们饮用的自来水、啤酒等的甲醛含量标准.)。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>始创于1897——柯诺木业百年传奇。德国科诺Kronotex是瑞士柯诺Krono木业集团旗下全球最专业的强化木地板制造商，连续十年全球销量第一。生产总部位于德国柏林Heiligengrabe市。至今已有116年的木制品制造历史，是世界上规模最大的人造板生产企业集团之一。<br />
现在，柯诺Krono木业集团在全球18个国家拥有29个产业基地。强化木地板的销售占全球市场1/3份额，成为全球木地板行业当之无愧的王者。<br />
德国科诺强化地板特点：德国制造，加工精密。全球通过欧洲最高质量认证(RAL仅有的13家之一)<br />
基材：采用新鲜松树木材生产HDF基材，不添加榉木、橡木、树皮等杂料<br />
按压式弹簧锁扣系统(Express Clic System)，弹性胶条是其显著亮点，安装极为简单，比常规地板省时50%。<br />
甲醛释放量极低：欧洲标准及国家标准为小于等于1.5mg/L，KRONOTEX的企业标准为小于等于0.5mg/L，远远低于我们饮用的自来水、啤酒等的甲醛含量标准.)。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BE%B7%E5%9B%BD%E7%A7%91%E8%AF%BA',
    'title' => '德国科诺',
    'identifier' => 'node/147',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:11:10 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '澳佳宝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '47e657de-b0d8-452b-8970-2565e2412c72',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366511112,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '65226c15-2132-41ca-b111-6033fab709ba',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>澳佳宝（Blackmores）是澳大利亚的第一品牌保健品，是澳大利亚的保健品之始祖。澳佳宝成立于1930年，已经有近80年历史。经过80年努力，它已经成长为澳洲本土及全世界最被信任的生活科技健康食品公司。澳佳宝作为澳洲最受信赖的自然保健之父，已经与它“The Best Of Health”的承诺一起享誉全球。<br />
澳佳宝由英国移民 Maurice Blackmore (莫利斯&amp;布莱莫，1906-1977) 于 1930 年代创立，凭着前瞻性的健康理念与热诚，令企业成为澳洲第一健康食品品牌，70 多年来一直屹立不倒。 Maurice Blackmore深信草本植物和矿物质可促进健康，因此发展了一系列以自然疗法为基础的医疗系统。他对自然健康、预防医学、环境以及资源再生的见解，在 1930 年代是相当激进的。他的努力为疾病治疗和有效促进健康开启了另一扇通往康庄大道之门。 此外，Maurice Blackmore于 1938 年在布里斯本成立了澳洲第一间健康食品专门店，并与同事及朋友合作，在澳洲开办自然疗法学院以及协会。时至今日，他的信念仍令人信服，很多自然疗法医师也将他的理论纳入训练课程中。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>澳佳宝（Blackmores）是澳大利亚的第一品牌保健品，是澳大利亚的保健品之始祖。澳佳宝成立于1930年，已经有近80年历史。经过80年努力，它已经成长为澳洲本土及全世界最被信任的生活科技健康食品公司。澳佳宝作为澳洲最受信赖的自然保健之父，已经与它“The Best Of Health”的承诺一起享誉全球。<br />
澳佳宝由英国移民 Maurice Blackmore (莫利斯&amp;布莱莫，1906-1977) 于 1930 年代创立，凭着前瞻性的健康理念与热诚，令企业成为澳洲第一健康食品品牌，70 多年来一直屹立不倒。 Maurice Blackmore深信草本植物和矿物质可促进健康，因此发展了一系列以自然疗法为基础的医疗系统。他对自然健康、预防医学、环境以及资源再生的见解，在 1930 年代是相当激进的。他的努力为疾病治疗和有效促进健康开启了另一扇通往康庄大道之门。 此外，Maurice Blackmore于 1938 年在布里斯本成立了澳洲第一间健康食品专门店，并与同事及朋友合作，在澳洲开办自然疗法学院以及协会。时至今日，他的信念仍令人信服，很多自然疗法医师也将他的理论纳入训练课程中。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 288,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%BE%B3%E4%BD%B3%E5%AE%9D',
    'title' => '澳佳宝',
    'identifier' => 'node/68',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:25:12 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '状元红',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'cc359d92-6088-446a-aa0b-e1af8abb72cd',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365994172,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '65ec0fde-8813-4c71-ae84-2218bec9e1b3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。黄酒有数千年的历史，与江南吴越文化早已融为一体。春秋战国时期，越王句践欲与吴国争霸，以黄酒奖励生育，“生丈夫，二壶酒，一犬；生女子，二壶酒，一豚”。状元红酒即源于绍兴一带的民间风俗。当生子之年，酿酒数坛，请师傅在坛上刻字彩绘，然后泥封窑藏，以兆吉祥，期盼儿子将来成为“状元之材”，故此酒谓之“状元红”。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。黄酒有数千年的历史，与江南吴越文化早已融为一体。春秋战国时期，越王句践欲与吴国争霸，以黄酒奖励生育，“生丈夫，二壶酒，一犬；生女子，二壶酒，一豚”。状元红酒即源于绍兴一带的民间风俗。当生子之年，酿酒数坛，请师傅在坛上刻字彩绘，然后泥封窑藏，以兆吉祥，期盼儿子将来成为“状元之材”，故此酒谓之“状元红”。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%8A%B6%E5%85%83%E7%BA%A2',
    'title' => '状元红',
    'identifier' => 'node/41',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:49:32 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '多美滋',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '43e20b50-2a71-4670-878b-28fc4d8bb53f',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366513813,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '66c4759f-d1a2-4c18-9ff6-3af2f4a98001',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>多美滋品牌属于达能集团，婴幼儿营养食品是达能集团重要业务之一。旗下著名品牌有Nutricia，Cow &amp; Gate, Mulipa等，是世界上较早推出婴幼儿配方奶粉的品牌，在婴幼儿营养的研究和产品开发中，拥有超过100多年的经验。达能的业务遍及世界120个国家，尤其在欧洲，已成为婴幼儿营养品市场的领导者。<br />
多美滋品牌首创于1946年。此后，多美滋逐渐发展成为在亚洲地区居于领先地位的知名婴幼儿配方奶粉品牌。<br />
多美滋于1992年8月在上海浦东金桥出口加工区正式注册。多美滋的第一批产品于1995年5月下线，并同时在中国市场推出多美滋婴幼儿（0~6岁）系列配方奶粉。<br />
多美滋的生产线设备从丹麦、澳大利亚、新西兰、挪威等国进口，代表世界领先的乳制品制造技术。多美滋在从原材料质量检测到产品检验出厂的生产全过程中实施严格的质量监控措施。在国内，多美滋首开对原料牛奶中的抗生素和黄曲霉素残余物进行检测的先河，并对配方奶粉中的核苷酸进行分析和检测。先进的生产流程、持续的工艺改进以及优化的管理措施确保了多美滋产品的优异品质。<br />
从1996年开始，多美滋先后通过了HACCP（危害分析关键控制点）认证、ISO9001质量管理体系认证ISO14001环境管理体系认证、ISO22000食品安全管理体系认证等等。与此同时，多美滋还获得了许多荣誉称号，如“上海市诚信建设单位”、“上海市消费者满意产品”、“上海浦东新区外商投资先进企业”、“上海市外商投资先进技术企业”和“全国食品百强企业”等等，并连续5年入选“上海市工业销售500强”。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>多美滋品牌属于达能集团，婴幼儿营养食品是达能集团重要业务之一。旗下著名品牌有Nutricia，Cow &amp; Gate, Mulipa等，是世界上较早推出婴幼儿配方奶粉的品牌，在婴幼儿营养的研究和产品开发中，拥有超过100多年的经验。达能的业务遍及世界120个国家，尤其在欧洲，已成为婴幼儿营养品市场的领导者。<br />
多美滋品牌首创于1946年。此后，多美滋逐渐发展成为在亚洲地区居于领先地位的知名婴幼儿配方奶粉品牌。<br />
多美滋于1992年8月在上海浦东金桥出口加工区正式注册。多美滋的第一批产品于1995年5月下线，并同时在中国市场推出多美滋婴幼儿（0~6岁）系列配方奶粉。<br />
多美滋的生产线设备从丹麦、澳大利亚、新西兰、挪威等国进口，代表世界领先的乳制品制造技术。多美滋在从原材料质量检测到产品检验出厂的生产全过程中实施严格的质量监控措施。在国内，多美滋首开对原料牛奶中的抗生素和黄曲霉素残余物进行检测的先河，并对配方奶粉中的核苷酸进行分析和检测。先进的生产流程、持续的工艺改进以及优化的管理措施确保了多美滋产品的优异品质。<br />
从1996年开始，多美滋先后通过了HACCP（危害分析关键控制点）认证、ISO9001质量管理体系认证ISO14001环境管理体系认证、ISO22000食品安全管理体系认证等等。与此同时，多美滋还获得了许多荣誉称号，如“上海市诚信建设单位”、“上海市消费者满意产品”、“上海浦东新区外商投资先进企业”、“上海市外商投资先进技术企业”和“全国食品百强企业”等等，并连续5年入选“上海市工业销售500强”。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%9A%E7%BE%8E%E6%BB%8B',
    'title' => '多美滋',
    'identifier' => 'node/75',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 11:10:13 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '久盛',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd6bd678d-e951-4be1-80a9-a67040aea846',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367486389,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '68837d81-f12a-490f-958e-f9cebd4dbf4d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>久盛地板有限公司是目前国内木地板行业综合实力最强、发展速度最快的木地板制造企业之一，中国林产工业协会地板专业委员会副理事长单位、中国木材流通协会常务理事单位。久盛木地板产销量位列国内同行三甲，是木地板国家标准起草单位，公司被评为中国最具品牌竞争潜力的100家民营企业。久盛地板被评为中国实木地板十大品牌、国家级高新技术企业、中国优秀诚信企业等，连续四年被评为全国30家实木地板“双承诺”单位，浙江省消费者信得过单位，"久盛"品牌为中国驰名商标。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>久盛地板有限公司是目前国内木地板行业综合实力最强、发展速度最快的木地板制造企业之一，中国林产工业协会地板专业委员会副理事长单位、中国木材流通协会常务理事单位。久盛木地板产销量位列国内同行三甲，是木地板国家标准起草单位，公司被评为中国最具品牌竞争潜力的100家民营企业。久盛地板被评为中国实木地板十大品牌、国家级高新技术企业、中国优秀诚信企业等，连续四年被评为全国30家实木地板“双承诺”单位，浙江省消费者信得过单位，"久盛"品牌为中国驰名商标。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B9%85%E7%9B%9B',
    'title' => '久盛',
    'identifier' => 'node/133',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:19:49 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '奥兰',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '9c8c4ad9-508e-4289-8800-d5e9900c9e36',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366514012,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6891a331-ea24-43b5-b147-fc1245144d5c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>奥兰(ORA)麦卢卡蜂蜜采自于新西兰东海岸Whangaparaoa毛利人自治领地。这里的腹地是山坡上长满了原生麦卢卡茶树的Raukumara山脉。麦卢卡茶树的植被面积有80-100，000公顷，这些丰富的资源在古代被用于治疗战争中的伤员。奥兰(ORA) 在毛利语中象征着健康，活力和满足。 奥兰(ORA)蜂蜜是大自然送给我们的礼物，被称为世界上最天然纯正的麦卢卡蜂蜜。法卡利集团在新西兰北岛毛利人地区开辟奥兰(ORA)私家有机蜂蜜种植园，崇尚天然保养有机养植的生活态度，并向全世界渴望获得自然之源的人们提供最高品质的活性麦卢卡蜂蜜。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>奥兰(ORA)麦卢卡蜂蜜采自于新西兰东海岸Whangaparaoa毛利人自治领地。这里的腹地是山坡上长满了原生麦卢卡茶树的Raukumara山脉。麦卢卡茶树的植被面积有80-100，000公顷，这些丰富的资源在古代被用于治疗战争中的伤员。奥兰(ORA) 在毛利语中象征着健康，活力和满足。 奥兰(ORA)蜂蜜是大自然送给我们的礼物，被称为世界上最天然纯正的麦卢卡蜂蜜。法卡利集团在新西兰北岛毛利人地区开辟奥兰(ORA)私家有机蜂蜜种植园，崇尚天然保养有机养植的生活态度，并向全世界渴望获得自然之源的人们提供最高品质的活性麦卢卡蜂蜜。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A5%A5%E5%85%B0',
    'title' => '奥兰',
    'identifier' => 'node/76',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 11:13:32 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '洋河',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'df88546c-5ad1-485d-bf1c-bf40eba865a9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365945214,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6a1bc597-f02e-4b71-bb6e-95886402799b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>洋河酿酒起源于两汉而兴于唐宋，解放后政府以几家私人作坊为基础成立国营洋河酒厂，即为现洋河股份前身。洋河酒属于浓香型大曲酒，以小麦、大麦、豌豆为原料精制而成；洋河酒曾多次荣获“国际名酒”和入选中国八大名酒行列。现针对不同市场推出主要品种有洋河大曲、洋河蓝色经典系列。</p>

<p>2011年9月16日，在国家会议中心举行的华樽杯第三届中国酒类品牌价值研究成果发布会上，由中国酒类流通协会和中华品牌战略研究院公布了新的中国白酒八大品牌，洋河以210.89亿元品牌价值，位列第三，仅次于茅台和五粮液，白酒行业正在形成“茅五洋”的时代。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>洋河酿酒起源于两汉而兴于唐宋，解放后政府以几家私人作坊为基础成立国营洋河酒厂，即为现洋河股份前身。洋河酒属于浓香型大曲酒，以小麦、大麦、豌豆为原料精制而成；洋河酒曾多次荣获“国际名酒”和入选中国八大名酒行列。现针对不同市场推出主要品种有洋河大曲、洋河蓝色经典系列。</p>
<p>2011年9月16日，在国家会议中心举行的华樽杯第三届中国酒类品牌价值研究成果发布会上，由中国酒类流通协会和中华品牌战略研究院公布了新的中国白酒八大品牌，洋河以210.89亿元品牌价值，位列第三，仅次于茅台和五粮液，白酒行业正在形成“茅五洋”的时代。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B4%8B%E6%B2%B3',
    'title' => '洋河',
    'identifier' => 'node/30',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:13:34 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '奥吉尔',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '45870b70-bce6-4f38-bbbb-d1199b9bcd1a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366797815,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6a7fd7f6-af9b-49e7-993f-646ce8d38255',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Augier奥吉尔。又称爱之喜;是由创立于1643年的奥吉•弗雷尔公司生产的干邑名品。该公司由皮耶尔•奥吉创立，是干邑地区历史最悠久的干邑酿造厂商之一，其酒瓶商标上均注有“The Oldest House in Cognac”词句，意为“这是科涅克老店”，以表明其历史的悠久。等级品种分类有散发浓郁橡木香味的“三星”奥吉尔，还有用酿藏十二年以上原酒调和勾兑的“VSOP”奥吉尔。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Augier奥吉尔。又称爱之喜;是由创立于1643年的奥吉•弗雷尔公司生产的干邑名品。该公司由皮耶尔•奥吉创立，是干邑地区历史最悠久的干邑酿造厂商之一，其酒瓶商标上均注有“The Oldest House in Cognac”词句，意为“这是科涅克老店”，以表明其历史的悠久。等级品种分类有散发浓郁橡木香味的“三星”奥吉尔，还有用酿藏十二年以上原酒调和勾兑的“VSOP”奥吉尔。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A5%A5%E5%90%89%E5%B0%94',
    'title' => '奥吉尔',
    'identifier' => 'node/89',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:03:35 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '麦斯威尔',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1dfbcd22-43a4-48f8-8f99-0d2e73a11323',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366884248,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6bd11b9a-123d-426d-94c1-4153107c155b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>一种咖啡的牌子，英文名称Maxwell House。其品牌属于著名的食品巨头之一卡夫。麦斯威尔——有着100多年的辉煌历史。八十年代中，咖啡对中国来讲是一种新饮品，为逐步引导消费，卡夫推出了将咖啡、奶末和糖混合在一起的3合1速溶咖啡。在过去的几年里，卡夫的咖啡业务在大中华区迅速得到发展。近年来，由于消费者对咖啡口味需求日趋多样化，我们在原有口味（原味、摩卡、香草和橙意）的基础上，针对季节变化和咖啡的成熟消费者需求，分别开发了冰咖啡和特浓咖啡。此外，卡夫还推出了一系列“新时代”口味咖啡，包括奶特和卡布奇诺。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>一种咖啡的牌子，英文名称Maxwell House。其品牌属于著名的食品巨头之一卡夫。麦斯威尔——有着100多年的辉煌历史。八十年代中，咖啡对中国来讲是一种新饮品，为逐步引导消费，卡夫推出了将咖啡、奶末和糖混合在一起的3合1速溶咖啡。在过去的几年里，卡夫的咖啡业务在大中华区迅速得到发展。近年来，由于消费者对咖啡口味需求日趋多样化，我们在原有口味（原味、摩卡、香草和橙意）的基础上，针对季节变化和咖啡的成熟消费者需求，分别开发了冰咖啡和特浓咖啡。此外，卡夫还推出了一系列“新时代”口味咖啡，包括奶特和卡布奇诺。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%BA%A6%E6%96%AF%E5%A8%81%E5%B0%94',
    'title' => '麦斯威尔',
    'identifier' => 'node/108',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-25 18:04:08 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '澳优',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '78559fa9-c333-49f8-860c-9b451690a753',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366513580,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6d6f8d27-602b-45ac-9624-9931d6b4d7bf',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>澳优乳业股份有限公司是在香港上市的一家专业高端乳业食品公司，成立以来，整合全球最优资源，服务于全球和快速增长的中国市场，以优质乳制品服务下一代的健康成长。旗下主要营运实体包括澳优乳业（中国）有限公司、荷兰 Hyproca Dairy Group BV 等企业，在全球范围内从事生产、研究及销售婴幼儿食品、成人食品、基粉、奶酪、黄油等，拥有澳优（ ausnutria ）、能力多（ allnutria ）、佳贝艾特（ Kabrita ）、 Lyempf 、 Lypack 等著名的婴幼儿食品及乳品品牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>澳优乳业股份有限公司是在香港上市的一家专业高端乳业食品公司，成立以来，整合全球最优资源，服务于全球和快速增长的中国市场，以优质乳制品服务下一代的健康成长。旗下主要营运实体包括澳优乳业（中国）有限公司、荷兰 Hyproca Dairy Group BV 等企业，在全球范围内从事生产、研究及销售婴幼儿食品、成人食品、基粉、奶酪、黄油等，拥有澳优（ ausnutria ）、能力多（ allnutria ）、佳贝艾特（ Kabrita ）、 Lyempf 、 Lypack 等著名的婴幼儿食品及乳品品牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%BE%B3%E4%BC%98',
    'title' => '澳优',
    'identifier' => 'node/74',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 11:06:20 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '凯歌香槟',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a366765d-acb6-47c6-a77c-97cf244b98d7',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366552894,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6e5fbd6b-4e9c-400c-9260-cfaed29df441',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1772年，银行家菲利普·克里科在香槟地区的兰斯（Reims）创立了香槟酒厂，其子弗朗索瓦娶了彭撒丁（Ponsardin)家的千金，两人一起将老爹的香槟事业发展的轰轰烈烈，但就在这个这个家族企业蒸蒸日上的当日，弗朗索瓦突然去世，刚结婚四年的克里科夫人一夜之间变成了寡妇。但抱着对香槟酿造业的热爱，年仅27岁的小女子独揽大局，并把自家品牌的名字改成了Veuve Clicquot Ponsardin,这其中包含了多重含义：她既是以克里科家遗孀身份执掌家族企业，亦保留了娘家姓氏，不忘自己是个独立女性。<br />
凯歌香槟 (Veuve Clicquot)，是深受皇室贵族及名人雅士喜爱的品牌，也是世上第二大香槟制造商。其酒厂位于法国巴黎北部香槟区，是全球最古老的香槟厂之一。凯歌香槟无疑是世界上最美味的香槟酒，它的口味非常饱满，泡沫纤柔细致。随着缓缓升腾的气泡，似乎有种微酸的果香，充满活力的，却又在清新中带出一股华丽的绵密之感，那像极了一个人的品质：丰富，含蓄，生机勃勃，既天真又成熟，既机敏又坚持。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1772年，银行家菲利普·克里科在香槟地区的兰斯（Reims）创立了香槟酒厂，其子弗朗索瓦娶了彭撒丁（Ponsardin)家的千金，两人一起将老爹的香槟事业发展的轰轰烈烈，但就在这个这个家族企业蒸蒸日上的当日，弗朗索瓦突然去世，刚结婚四年的克里科夫人一夜之间变成了寡妇。但抱着对香槟酿造业的热爱，年仅27岁的小女子独揽大局，并把自家品牌的名字改成了Veuve Clicquot Ponsardin,这其中包含了多重含义：她既是以克里科家遗孀身份执掌家族企业，亦保留了娘家姓氏，不忘自己是个独立女性。<br />
凯歌香槟 (Veuve Clicquot)，是深受皇室贵族及名人雅士喜爱的品牌，也是世上第二大香槟制造商。其酒厂位于法国巴黎北部香槟区，是全球最古老的香槟厂之一。凯歌香槟无疑是世界上最美味的香槟酒，它的口味非常饱满，泡沫纤柔细致。随着缓缓升腾的气泡，似乎有种微酸的果香，充满活力的，却又在清新中带出一股华丽的绵密之感，那像极了一个人的品质：丰富，含蓄，生机勃勃，既天真又成熟，既机敏又坚持。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%87%AF%E6%AD%8C%E9%A6%99%E6%A7%9F',
    'title' => '凯歌香槟',
    'identifier' => 'node/84',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 22:01:34 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '贝纳颂',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '889801a9-ff00-4012-81cf-b01871d71a93',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366952526,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '6f0cbfcb-6535-4e83-be37-32efdab11c8c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>味全贝纳颂是味全旗下即饮咖啡品牌。贝纳颂咖啡以其欧洲油画设计的新包装隆重上市，并推出五款不同口感的咖啡：倍醇拿铁、摩卡、卡普奇诺、经典蓝山和经典拿铁，为大家带来了全新的味蕾体验。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>味全贝纳颂是味全旗下即饮咖啡品牌。贝纳颂咖啡以其欧洲油画设计的新包装隆重上市，并推出五款不同口感的咖啡：倍醇拿铁、摩卡、卡普奇诺、经典蓝山和经典拿铁，为大家带来了全新的味蕾体验。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%B4%9D%E7%BA%B3%E9%A2%82',
    'title' => '贝纳颂',
    'identifier' => 'node/115',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 13:02:06 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '鑫华昌',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'daf39a57-076d-445f-8394-c6291fca3222',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910078,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '70693011-b562-4b63-9655-f052cb92bfbd',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>成立于1996年，位于有中国竹子之乡的江西省奉新县。现占地面积182亩，固定的资产达到了九千余万元。拥有成品生产厂2个、竹坯板厂16个、竹林基地五万亩，年生产能力在180万平方米。华昌竹业集团所研制生产的“鑫华昌”竹地板产品，已经畅销与全国30多个省、市地区，并出口于北美、西欧、澳洲等10多个国家。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>成立于1996年，位于有中国竹子之乡的江西省奉新县。现占地面积182亩，固定的资产达到了九千余万元。拥有成品生产厂2个、竹坯板厂16个、竹林基地五万亩，年生产能力在180万平方米。华昌竹业集团所研制生产的“鑫华昌”竹地板产品，已经畅销与全国30多个省、市地区，并出口于北美、西欧、澳洲等10多个国家。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%91%AB%E5%8D%8E%E6%98%8C',
    'title' => '鑫华昌',
    'identifier' => 'node/155',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:01:18 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '水井坊',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '05fa1db5-9247-4b3f-9f84-826bda3a1baa',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365945826,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '72d32a9a-542a-41f8-9319-a5f8922433b7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>水井坊位于成都老东门大桥外，是一座元、明、清三代川酒老烧坊的遗址。2000年被国家文物局评为1999年度全国十大考古发现之一，2001年6月25日由国务院公布为全国重点文物保护单位。以后又被载入大世界吉尼斯之最，“世界上最古老的酿酒作坊。”水井坊遗址的发掘极大地丰富了中国传统酒文化研究的内容，填补了中国古代酒坊遗址、酿酒工艺等方面的考古空白。2012年3月，英国洋酒63亿购水井坊获得批准。</p>

<p>水井坊酒陈香飘逸、甘润幽雅的品质，为白酒专家们推崇备至，受到众多深谙品酒之道人士的青睐。美在形，更在神。酒是物质的，更是精神的，如果仅仅从物质层面考虑它的绝对值，撇开精神价值探讨白酒是不合适的，尤其是对高档白酒更是如此。消费者饮用高档白酒，一方面是满足物质层面的需要，属于物质享受，更多的是满足精神层面的需要，是精神的享受，所以酒的价格一部分取决于其品质的绝对值，一部分取决于其品牌附加值。水井坊之所以能成为中国高档白酒的典范，从众多高档白酒中独树一帜，不仅仅因为它卓越的、无与伦比的“色、香、味、格”，更主要是因为水井坊酒所蕴涵的典雅文化与高雅品位以及借助此品牌为消费者提供的各项高附加值的服务。水井坊酒的高价格，既源自它的高品质，也源自它的高品位和带给消费者至醇至美的享受。对于水井坊的消费者而言，水井坊酒不仅喝到胃里，更喝到心里。<br />
观其表而知其里。很多人对水井坊酒“一见钟情”是由于它雅致的、创新的包装在传承了中国传统文化精华的同时，又巧妙地融入了时尚先进的设计理念，带给消费者愉悦感。水井坊酒的包装在素有广告界“奥斯卡”之称的国际莫比设计大赛中，从世界3000多件优秀作品里脱颖而出，一举夺得金奖和最高成就奖，这是中国企业第一次享有此项荣誉。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>水井坊位于成都老东门大桥外，是一座元、明、清三代川酒老烧坊的遗址。2000年被国家文物局评为1999年度全国十大考古发现之一，2001年6月25日由国务院公布为全国重点文物保护单位。以后又被载入大世界吉尼斯之最，“世界上最古老的酿酒作坊。”水井坊遗址的发掘极大地丰富了中国传统酒文化研究的内容，填补了中国古代酒坊遗址、酿酒工艺等方面的考古空白。2012年3月，英国洋酒63亿购水井坊获得批准。</p>
<p>水井坊酒陈香飘逸、甘润幽雅的品质，为白酒专家们推崇备至，受到众多深谙品酒之道人士的青睐。美在形，更在神。酒是物质的，更是精神的，如果仅仅从物质层面考虑它的绝对值，撇开精神价值探讨白酒是不合适的，尤其是对高档白酒更是如此。消费者饮用高档白酒，一方面是满足物质层面的需要，属于物质享受，更多的是满足精神层面的需要，是精神的享受，所以酒的价格一部分取决于其品质的绝对值，一部分取决于其品牌附加值。水井坊之所以能成为中国高档白酒的典范，从众多高档白酒中独树一帜，不仅仅因为它卓越的、无与伦比的“色、香、味、格”，更主要是因为水井坊酒所蕴涵的典雅文化与高雅品位以及借助此品牌为消费者提供的各项高附加值的服务。水井坊酒的高价格，既源自它的高品质，也源自它的高品位和带给消费者至醇至美的享受。对于水井坊的消费者而言，水井坊酒不仅喝到胃里，更喝到心里。<br />
观其表而知其里。很多人对水井坊酒“一见钟情”是由于它雅致的、创新的包装在传承了中国传统文化精华的同时，又巧妙地融入了时尚先进的设计理念，带给消费者愉悦感。水井坊酒的包装在素有广告界“奥斯卡”之称的国际莫比设计大赛中，从世界3000多件优秀作品里脱颖而出，一举夺得金奖和最高成就奖，这是中国企业第一次享有此项荣誉。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B0%B4%E4%BA%95%E5%9D%8A',
    'title' => '水井坊',
    'identifier' => 'node/31',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:23:46 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '路易老爷',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '72affada-70f4-4919-973e-7d65d756f293',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798548,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '72d7a2de-1f74-4225-bb1c-74028ee824f7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Louis Royer路易老爷。又称路易·鲁瓦耶；1853年由路易·鲁瓦耶在雅尔纳克的夏朗德河畔建立，其先后历经四代。到了1989年，公司被日本三得利(Suntory)所收购。商标的标示是一只蜜蜂。几乎所有产品都是供出口的(法国只占1%)，主要销往欧洲、中国大陆、中国香港、中国台湾、新加坡和韩国。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Louis Royer路易老爷。又称路易·鲁瓦耶；1853年由路易·鲁瓦耶在雅尔纳克的夏朗德河畔建立，其先后历经四代。到了1989年，公司被日本三得利(Suntory)所收购。商标的标示是一只蜜蜂。几乎所有产品都是供出口的(法国只占1%)，主要销往欧洲、中国大陆、中国香港、中国台湾、新加坡和韩国。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'JP',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%B7%AF%E6%98%93%E8%80%81%E7%88%B7',
    'title' => '路易老爷',
    'identifier' => 'node/96',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:15:48 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '汾酒',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd7925efd-8363-4dbe-8e60-37af38af8550',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366082556,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '74417e5e-272f-4463-a09c-1257ea7035d7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>汾酒，清香型白酒的典型代表，工艺精湛，源远流长，素以入口绵、落口甜、饮后余香、回味悠长特色而著称，在国内外消费者中享有较高的知名度、美誉度和忠诚度。历史上，汾酒曾经过了三次辉煌：汾酒有着4000年左右的悠久历史，1500年前的南北朝时期，汾酒作为宫廷御酒受到北齐武成帝的极力推崇，被载入二十四史，使汾酒一举成名。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>汾酒，清香型白酒的典型代表，工艺精湛，源远流长，素以入口绵、落口甜、饮后余香、回味悠长特色而著称，在国内外消费者中享有较高的知名度、美誉度和忠诚度。历史上，汾酒曾经过了三次辉煌：汾酒有着4000年左右的悠久历史，1500年前的南北朝时期，汾酒作为宫廷御酒受到北齐武成帝的极力推崇，被载入二十四史，使汾酒一举成名。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B1%BE%E9%85%92',
    'title' => '汾酒',
    'identifier' => 'node/47',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-16 11:22:36 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '菲林格尔',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b538e07c-8bea-4ac5-8600-e0d4f0ab14b9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367666311,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '766981fc-51d8-41b7-8285-41225da30184',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1921年，菲林格尔成立于德国巴登符腾堡州。八十余年来，菲林格尔逐渐发展为欧洲最大的旅行车内家具制造商，是梅塞德斯·奔驰等著名汽车公司车内木制品的供货商和著名家具中间产品供货商，在木业上享有盛誉并持有数项重要专利，并逐渐发展成为覆盖室内民用木制品全线产品的家居品牌。<br />
菲林格尔目前产品覆盖系列地板、整体厨房、系统家具。其中主导产品强化木地板在国内的市场占有率达到20%以上（品牌产品），产品分为九大系列。公司销售渠道采取全国代理制，营销网点遍布全国各省市，形象专卖店上千家。<br />
菲林格尔主导产品强化木地板凭借不断的技术创新、升级，以市场为导向，以质量为中心，被消费者所认可，年销量从99年的57万平方米飙升到04的852万平方米，不但满足国内需求，而且足迹遍布世界数十个国家和地区，主要出口国为加拿大、美国、韩国、日本、菲律宾、澳大利亚、印度、俄罗斯、危地马拉等，年出口销量480多万平方米，约占总销量的一半，出口创汇达2144万美元。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1921年，菲林格尔成立于德国巴登符腾堡州。八十余年来，菲林格尔逐渐发展为欧洲最大的旅行车内家具制造商，是梅塞德斯·奔驰等著名汽车公司车内木制品的供货商和著名家具中间产品供货商，在木业上享有盛誉并持有数项重要专利，并逐渐发展成为覆盖室内民用木制品全线产品的家居品牌。<br />
菲林格尔目前产品覆盖系列地板、整体厨房、系统家具。其中主导产品强化木地板在国内的市场占有率达到20%以上（品牌产品），产品分为九大系列。公司销售渠道采取全国代理制，营销网点遍布全国各省市，形象专卖店上千家。<br />
菲林格尔主导产品强化木地板凭借不断的技术创新、升级，以市场为导向，以质量为中心，被消费者所认可，年销量从99年的57万平方米飙升到04的852万平方米，不但满足国内需求，而且足迹遍布世界数十个国家和地区，主要出口国为加拿大、美国、韩国、日本、菲律宾、澳大利亚、印度、俄罗斯、危地马拉等，年出口销量480多万平方米，约占总销量的一半，出口创汇达2144万美元。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => FALSE,
    'url' => 'http://mrating.com/node/140',
    'title' => '菲林格尔',
    'identifier' => 'node/140',
    'developer' => 1,
  ),
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:18:31 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '百威',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd316a8fb-f740-4baf-ac96-fd431b22c797',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365947300,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '76d98c2d-cd9e-4c07-b9b3-94ced6b81990',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>百威（Budweiser）是世界知名的啤酒品牌，1876年诞生于美国，创始人是Adolphus Busch，公司总部设在美国密西里州圣路易斯市。百威啤酒，百年发展中一直以其纯正的口感，过硬的质量赢得了全世界消费者的青睐，成为世界最畅销、销量最多的啤酒，长久以来被誉为是“啤酒之王”。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>百威（Budweiser）是世界知名的啤酒品牌，1876年诞生于美国，创始人是Adolphus Busch，公司总部设在美国密西里州圣路易斯市。百威啤酒，百年发展中一直以其纯正的口感，过硬的质量赢得了全世界消费者的青睐，成为世界最畅销、销量最多的啤酒，长久以来被誉为是“啤酒之王”。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 343,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'US',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%99%BE%E5%A8%81',
    'title' => '百威',
    'identifier' => 'node/34',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:48:20 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '大自然',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'daa62da5-da24-4e95-ab35-22b273455304',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367483203,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '782642fb-c6eb-43db-b291-915e96f6fd30',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>中国名牌，中国驰名商标，亚洲500最具价值品牌。广东盈然木业有限公司成立于1995年，以生产、研发、销售大自然实木地板、实木复合地板、生态地板、强化地板为主营业务，厂房面积达40万平方米，年产量超过800万平方米。自2000年以来，大自然地板产品销量每年以30%的增长率持续强劲增长，产品市场占有率在同行业中名列前茅，已成为亚洲最大的木地板骨干企业之一，在与中国地板行业一起发展壮大的历程中，大自然地板积极助推中国地板行业发展，为振兴民族工业品牌奉献着自己的力量。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>中国名牌，中国驰名商标，亚洲500最具价值品牌。广东盈然木业有限公司成立于1995年，以生产、研发、销售大自然实木地板、实木复合地板、生态地板、强化地板为主营业务，厂房面积达40万平方米，年产量超过800万平方米。自2000年以来，大自然地板产品销量每年以30%的增长率持续强劲增长，产品市场占有率在同行业中名列前茅，已成为亚洲最大的木地板骨干企业之一，在与中国地板行业一起发展壮大的历程中，大自然地板积极助推中国地板行业发展，为振兴民族工业品牌奉献着自己的力量。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%A7%E8%87%AA%E7%84%B6',
    'title' => '大自然',
    'identifier' => 'node/125',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 16:26:43 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '冠生园',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'de96620d-e9b0-47c0-9720-7dd22b6c456d',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366512866,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '79d9deae-b0f3-4650-b41f-3314ac4d9edb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>冠生园创建于1915年，已整整94年的历史。冠生园是中国民族工业的名牌老字号企业。主要生产和经营糖果、蜂制品、酒类、面制品、味精、冷冻食品、保健食品、生物医药、休闲食品等近20个系列上千个品种。<br />
“冠生园”（原“生”字牌）蜂蜜是1956年公私合营时，吸收了当时的青青蜂蜜厂成立的。“冠生园”蜂蜜历经了半个多世纪的风风雨雨，至今仍充满青春活力。2005年，冠生园蜂蜜实现销售收入1.5亿元，比上年增长近30%，在全国市场占有率名列第一。在上海的市场占有率更是连续多年保持在50%以上。<br />
冠生园蜂蜜成功的原动力就是冠生园人对产品质量的不断追求。冠生园人视“质量是产品的生命”，从原料采购到生产的全过程，每一道环节都纳入ISO9001：2000和HACCP质量管理体系。“冠生园”纯净蜂蜜是精选天然成熟蜂蜜经五重过滤精制而成的纯天然食品，里面不含任何人工添加剂。为了从源头上确保优质的蜂蜜原料供应，公司陆续在安徽的芜湖县、绩溪县以及陕西的宝鸡市建立了自己的蜂产品原料基地。在原料基地，冠生园派出养蜂专家对蜂农进行统一的用药指导，派质量控制专员对原料供应商的软硬件资质进行严格筛选，同时帮助合格的供应商建立起一整套从感官控制到各项理化指标检验的质量控制体系。为了杜绝蜂蜜原料的铁质污染，公司投入巨资将行业里常用的运输和存放蜂蜜的铁桶改为符合食品卫生标准的安全可靠的塑料桶。在原料验收入库之前，公司的质量检查小组还要对原料的各项理化指标在实验室里运用各种先进的仪器进行严格的抽样检查，确保产品质量优质、安全、可靠。<br />
如果说“冠生园”蜂蜜的成功是冠生园人在质量管理上的成功，那么冠生园最新推出的“鲜皇浆冻干粉”则体现了冠生园人对科技创新孜孜不倦的追求。蜂皇浆是一种珍贵的传统滋补保健佳品，具有美容润肤、调节肠胃、预防癌症、保护肝脏、抗疲劳、延缓衰老、调节血压、健脑益智等功能，一直深受广大消费者喜爱。但由于蜂皇浆在常温下容易变质，给运输和保存带来了困难，造成这种营养保健价值极高的天然保健品在国内没有得到应有的认识和利用。冠生园利用先进的冷冻干燥技术（在低于零下20摄氏度的低温条件下，将蜂皇浆冻干后再研磨成粉。由于整个加工过程在极低的温度条件下进行，且不添加任何食品添加剂，所以最大限度地保留了鲜皇浆的有效营养成分）将鲜皇浆制成冻干粉胶囊，克服了鲜蜂皇浆需要在冷冻条件下保存的缺点，而且使用起来更加方便，还避免了直接食用时蜂皇浆特有的酸、辛、涩等不良口感。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>冠生园创建于1915年，已整整94年的历史。冠生园是中国民族工业的名牌老字号企业。主要生产和经营糖果、蜂制品、酒类、面制品、味精、冷冻食品、保健食品、生物医药、休闲食品等近20个系列上千个品种。<br />
“冠生园”（原“生”字牌）蜂蜜是1956年公私合营时，吸收了当时的青青蜂蜜厂成立的。“冠生园”蜂蜜历经了半个多世纪的风风雨雨，至今仍充满青春活力。2005年，冠生园蜂蜜实现销售收入1.5亿元，比上年增长近30%，在全国市场占有率名列第一。在上海的市场占有率更是连续多年保持在50%以上。<br />
冠生园蜂蜜成功的原动力就是冠生园人对产品质量的不断追求。冠生园人视“质量是产品的生命”，从原料采购到生产的全过程，每一道环节都纳入ISO9001：2000和HACCP质量管理体系。“冠生园”纯净蜂蜜是精选天然成熟蜂蜜经五重过滤精制而成的纯天然食品，里面不含任何人工添加剂。为了从源头上确保优质的蜂蜜原料供应，公司陆续在安徽的芜湖县、绩溪县以及陕西的宝鸡市建立了自己的蜂产品原料基地。在原料基地，冠生园派出养蜂专家对蜂农进行统一的用药指导，派质量控制专员对原料供应商的软硬件资质进行严格筛选，同时帮助合格的供应商建立起一整套从感官控制到各项理化指标检验的质量控制体系。为了杜绝蜂蜜原料的铁质污染，公司投入巨资将行业里常用的运输和存放蜂蜜的铁桶改为符合食品卫生标准的安全可靠的塑料桶。在原料验收入库之前，公司的质量检查小组还要对原料的各项理化指标在实验室里运用各种先进的仪器进行严格的抽样检查，确保产品质量优质、安全、可靠。<br />
如果说“冠生园”蜂蜜的成功是冠生园人在质量管理上的成功，那么冠生园最新推出的“鲜皇浆冻干粉”则体现了冠生园人对科技创新孜孜不倦的追求。蜂皇浆是一种珍贵的传统滋补保健佳品，具有美容润肤、调节肠胃、预防癌症、保护肝脏、抗疲劳、延缓衰老、调节血压、健脑益智等功能，一直深受广大消费者喜爱。但由于蜂皇浆在常温下容易变质，给运输和保存带来了困难，造成这种营养保健价值极高的天然保健品在国内没有得到应有的认识和利用。冠生园利用先进的冷冻干燥技术（在低于零下20摄氏度的低温条件下，将蜂皇浆冻干后再研磨成粉。由于整个加工过程在极低的温度条件下进行，且不添加任何食品添加剂，所以最大限度地保留了鲜皇浆的有效营养成分）将鲜皇浆制成冻干粉胶囊，克服了鲜蜂皇浆需要在冷冻条件下保存的缺点，而且使用起来更加方便，还避免了直接食用时蜂皇浆特有的酸、辛、涩等不良口感。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%86%A0%E7%94%9F%E5%9B%AD',
    'title' => '冠生园',
    'identifier' => 'node/72',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:54:26 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '葡萄牙伽诺',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a9b6c97c-4f51-42b3-94bc-c28742bbfa2d',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367670200,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7c0ab097-394a-4ec4-9c6a-440720120a53',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">GRANORTE是一家葡萄牙公司，成立于1972年，葡萄牙软木制造业中品质卓越、销量排名第二的公司。由于卓越的质量保障，伽诺软木产品在全世界都享有很高的声誉。主要经营范围是：从软木塞制造业回收软木废弃物，然后进一步加工制造成新的软木产品。公司从开始到现在，就一直以优质的软木产品在世界上赢得了很高的声誉。</span><br />
GRANORTE为广大的客户提供了从颗粒到凝聚软木、软木卷、墙壁以及地板装饰等一系列的软木产品。GRANORTE已经成为了软木工业最可靠的和最有威望的公司之一。<br />
伽诺----葡萄牙销量第二、品质最高的软木企业<br />
葡萄牙伽诺软木地板特点<br />
质量第一----质量是生产之本，追求质量，这是伽诺软木产品最大的特点。<br />
超环保—采用天然的树脂粘合剂，不含任何溶剂等有害成分。地板安装推荐使<br />
用德国VAKOL水性胶，环保和安全指数更高。<br />
独有技术----锁扣型地板采用行业最强的UNICLIC® 专利锁扣设计，独有的<br />
“Joint Shield”(接缝盖面技术)保护，抗防潮设计和密封性边缘，<br />
防水抗伸缩能力更强。<br />
最安全----Microban®(微霸技术)具有抗菌保护性，杀菌能力不可消除，与地<br />
板同寿命 。VOC的含量很低，甲醛含量为0.02 ppm，锁扣板基材采<br />
用欧洲 “E0” HDF。<br />
独特漆面处理----一种全新的“超耐磨微型纳米粒子” WAT陶瓷漆面极品耐磨处<br />
理技术;一种高性能水性漆 AQUA2K弹性漆面技术，形成最经久耐用、<br />
耐高温并能有效抵抗冲击性的地板表面。<br />
设计出新---全新的色彩效果，崭新的表面纹理和独特的设计风格，新品新花色多。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>GRANORTE是一家葡萄牙公司，成立于1972年，葡萄牙软木制造业中品质卓越、销量排名第二的公司。由于卓越的质量保障，伽诺软木产品在全世界都享有很高的声誉。主要经营范围是：从软木塞制造业回收软木废弃物，然后进一步加工制造成新的软木产品。公司从开始到现在，就一直以优质的软木产品在世界上赢得了很高的声誉。<br />
GRANORTE为广大的客户提供了从颗粒到凝聚软木、软木卷、墙壁以及地板装饰等一系列的软木产品。GRANORTE已经成为了软木工业最可靠的和最有威望的公司之一。<br />
伽诺----葡萄牙销量第二、品质最高的软木企业<br />
葡萄牙伽诺软木地板特点<br />
质量第一----质量是生产之本，追求质量，这是伽诺软木产品最大的特点。<br />
超环保—采用天然的树脂粘合剂，不含任何溶剂等有害成分。地板安装推荐使<br />
用德国VAKOL水性胶，环保和安全指数更高。<br />
独有技术----锁扣型地板采用行业最强的UNICLIC® 专利锁扣设计，独有的<br />
“Joint Shield”(接缝盖面技术)保护，抗防潮设计和密封性边缘，<br />
防水抗伸缩能力更强。<br />
最安全----Microban®(微霸技术)具有抗菌保护性，杀菌能力不可消除，与地<br />
板同寿命 。VOC的含量很低，甲醛含量为0.02 ppm，锁扣板基材采<br />
用欧洲 “E0” HDF。<br />
独特漆面处理----一种全新的“超耐磨微型纳米粒子” WAT陶瓷漆面极品耐磨处<br />
理技术;一种高性能水性漆 AQUA2K弹性漆面技术，形成最经久耐用、<br />
耐高温并能有效抵抗冲击性的地板表面。<br />
设计出新---全新的色彩效果，崭新的表面纹理和独特的设计风格，新品新花色多。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 31,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'PT',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%91%A1%E8%90%84%E7%89%99%E4%BC%BD%E8%AF%BA',
    'title' => '葡萄牙伽诺',
    'identifier' => 'node/150',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:23:20 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '瑞士卢森',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e8bb8c04-74dc-49c2-99e7-e9824cb361ec',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367668406,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7ce97f12-1d0d-4608-b97e-d409420cf8b1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>瑞士卢森地板[1]（KRONOSWISS）隶属于世最大的木业制造集团之一瑞士KRONOSPAN集团，该集团拥有一百多年从事木业制造的经验，在瑞士、德国、法国、匈牙利、波兰、乌克兰、俄罗斯和美国均设工厂。瑞士卢森工厂位于卢塞恩地区，成立于1966年，是欧洲同行业中享有盛誉的工厂，产品包括高密度板、中密度板、各类家具板，及强化木复合地板，产品销往全世界100多个国家和地区。<br />
瑞士卢森地板为了更好地服务中国和东南亚市场，不仅在上海成立了专业的销售公司“瑞士卢森中国”（KRONOSWISS CHINA），并在上海外高桥保税区设立了仓库，直接对中国各地的专卖店、建材超市和东南亚地区供货，给客户提供更为优质和快捷的服务。<br />
瑞士卢森地板主要选用树龄长达50到120年的优质成年松木为原料，经过精密加工及严格检测，再配以大师设计的独特花纹，既给您永恒的品质又保证了您的使用和家居健康。<br />
<br />
瑞士质量认证<br />
最高等级的品质认证，不仅代表了我们的荣誉，更是对您使用产品的一种保障。瑞士质量认证加强了瑞士作为重要的全球出口商的形象；它强调了消费者对产品品质以及原汁原味瑞士服务的欣赏。1990年起，瑞士卢森已经成为SWISS LABEL的成员，这保证了瑞士卢森地板的优秀品质，也确保了您可以享受世界一流的瑞士品质。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>瑞士卢森地板[1]（KRONOSWISS）隶属于世最大的木业制造集团之一瑞士KRONOSPAN集团，该集团拥有一百多年从事木业制造的经验，在瑞士、德国、法国、匈牙利、波兰、乌克兰、俄罗斯和美国均设工厂。瑞士卢森工厂位于卢塞恩地区，成立于1966年，是欧洲同行业中享有盛誉的工厂，产品包括高密度板、中密度板、各类家具板，及强化木复合地板，产品销往全世界100多个国家和地区。<br />
瑞士卢森地板为了更好地服务中国和东南亚市场，不仅在上海成立了专业的销售公司“瑞士卢森中国”（KRONOSWISS CHINA），并在上海外高桥保税区设立了仓库，直接对中国各地的专卖店、建材超市和东南亚地区供货，给客户提供更为优质和快捷的服务。<br />
瑞士卢森地板主要选用树龄长达50到120年的优质成年松木为原料，经过精密加工及严格检测，再配以大师设计的独特花纹，既给您永恒的品质又保证了您的使用和家居健康。</p>
<p>瑞士质量认证<br />
最高等级的品质认证，不仅代表了我们的荣誉，更是对您使用产品的一种保障。瑞士质量认证加强了瑞士作为重要的全球出口商的形象；它强调了消费者对产品品质以及原汁原味瑞士服务的欣赏。1990年起，瑞士卢森已经成为SWISS LABEL的成员，这保证了瑞士卢森地板的优秀品质，也确保了您可以享受世界一流的瑞士品质。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CH',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%91%9E%E5%A3%AB%E5%8D%A2%E6%A3%AE',
    'title' => '瑞士卢森',
    'identifier' => 'node/145',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:53:26 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '大庄',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ac26e946-c0b4-43e0-9fe5-9275a4aec9be',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910200,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '7d89cd31-776b-466b-ab67-812a982e19b9',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">杭州大庄地板有限公司由林海董事长创建于1993年。2006年末，公司注册资本为616万美元，总资产为3352万美元， 员工计1000余名，厂房总面积达到8万多平方米。实现年销售为2400万美元，其中外销为2000余万美元。大庄的主要客户中，一部分是大型零售连锁店如Home Depot,OBI，一部分为大型生产商、进口商和分销商如Mannington、Moso和Anderson（为Shaw所有）。</span><br />
公司在中国大陆拥有1100公顷优质高产竹林基地，并在各地成立了包括竹材粗加工和精深加工在内的6家分公司。大庄通过自有特殊工艺，使产品具有阻燃、防腐等优异性能，而独特的竹集成材、竹大幅面刨切薄板已是市场认可的高强度工程材料。产品已经在国内外市场被广泛地应用作为室内、室外装饰、铺地材料和工程用材。上海世博会，西班牙马德里国际机场、德国BMW汽车内饰，奔驰汽车内饰，华硕竹制外壳笔记本电脑，已经采用了大庄加工的竹材。新型的风力发电机，也开始采用大庄的竹材制作风轮叶片。大庄产品的优良品质深受市场的欢迎，使得大庄已经成为我国竹子行业的领头雁。<br />
十七年来，大庄先后与中国林业科学院、南京林业大学、浙江大学、英国剑桥大学、芬兰赫尔辛基大学、芬兰太尔公司、德国坚弗公司等国内外高等学府、科研机构、公司建立了密切合作关系，并在国际竹藤组织的支持下，开展了一系列关于竹子的研究和开发的科研活动。07年，大庄与中国林业科学院合作成立了“中国林业科学院木材工业研究所大庄竹材应用研究中心”，旨在对竹材进行专门的技术创新研究和应用推广。<br />
由于大庄始终坚持品质与效益融为一体的经营理念，坚持依靠科技进步，不断进行管理创新，技术创新，产品创新，开发自主品牌，使其产品的优良度，在国内外享有很高的声誉。为此，大庄的大幅面毛竹刨切薄板被国家列为科技发明奖二等奖。17年来，大庄已经拥有12项国家专利，1项欧洲专利和2项美国发明专利。是中国第一家制定了完整的竹材加工技术标准规范的企业。大庄于02年通过ISO9001-2000质量管理体系认证，07年通过FSC(COC)森林认证和欧洲CE认证。<br />
同时，大庄被国家标准委员会指定参与了“中国竹地板国家标准”、“竹（材）集成材国家标准”、“竹刨切薄板国家标准”、“实木地板的国家标准”，和“木质地板铺装验收和使用规范国家标准”、“运动场馆地板国家标准”的制定工作，并是06年参与制定中国竹地板白皮书的单位之一。07年，大庄被国家标准委员会指定负责“室内、户外竹材运用国家标准”的制定。<br />
17年来，大庄除在中国注册了“大庄”和“DASSO”商标外，还有 2个美国注册商标、1个马德里缔约国国际商标。大庄（含DASSO）品牌的竹木地板系列产品，已经被评为中国最具有影响力的 “十大品牌”之一和“浙江名牌”产品。2009年被授予“中国驰名商标”。 在2009年第十一届DOMOTEX国际地材展获得“2009年度创新性绿色地板”和“年度国际地板品牌”两项大奖。<br />
公司宗旨：为全世界提供环保的健康的高品质的竹装饰材。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>杭州大庄地板有限公司由林海董事长创建于1993年。2006年末，公司注册资本为616万美元，总资产为3352万美元， 员工计1000余名，厂房总面积达到8万多平方米。实现年销售为2400万美元，其中外销为2000余万美元。大庄的主要客户中，一部分是大型零售连锁店如Home Depot,OBI，一部分为大型生产商、进口商和分销商如Mannington、Moso和Anderson（为Shaw所有）。<br />
公司在中国大陆拥有1100公顷优质高产竹林基地，并在各地成立了包括竹材粗加工和精深加工在内的6家分公司。大庄通过自有特殊工艺，使产品具有阻燃、防腐等优异性能，而独特的竹集成材、竹大幅面刨切薄板已是市场认可的高强度工程材料。产品已经在国内外市场被广泛地应用作为室内、室外装饰、铺地材料和工程用材。上海世博会，西班牙马德里国际机场、德国BMW汽车内饰，奔驰汽车内饰，华硕竹制外壳笔记本电脑，已经采用了大庄加工的竹材。新型的风力发电机，也开始采用大庄的竹材制作风轮叶片。大庄产品的优良品质深受市场的欢迎，使得大庄已经成为我国竹子行业的领头雁。<br />
十七年来，大庄先后与中国林业科学院、南京林业大学、浙江大学、英国剑桥大学、芬兰赫尔辛基大学、芬兰太尔公司、德国坚弗公司等国内外高等学府、科研机构、公司建立了密切合作关系，并在国际竹藤组织的支持下，开展了一系列关于竹子的研究和开发的科研活动。07年，大庄与中国林业科学院合作成立了“中国林业科学院木材工业研究所大庄竹材应用研究中心”，旨在对竹材进行专门的技术创新研究和应用推广。<br />
由于大庄始终坚持品质与效益融为一体的经营理念，坚持依靠科技进步，不断进行管理创新，技术创新，产品创新，开发自主品牌，使其产品的优良度，在国内外享有很高的声誉。为此，大庄的大幅面毛竹刨切薄板被国家列为科技发明奖二等奖。17年来，大庄已经拥有12项国家专利，1项欧洲专利和2项美国发明专利。是中国第一家制定了完整的竹材加工技术标准规范的企业。大庄于02年通过ISO9001-2000质量管理体系认证，07年通过FSC(COC)森林认证和欧洲CE认证。<br />
同时，大庄被国家标准委员会指定参与了“中国竹地板国家标准”、“竹（材）集成材国家标准”、“竹刨切薄板国家标准”、“实木地板的国家标准”，和“木质地板铺装验收和使用规范国家标准”、“运动场馆地板国家标准”的制定工作，并是06年参与制定中国竹地板白皮书的单位之一。07年，大庄被国家标准委员会指定负责“室内、户外竹材运用国家标准”的制定。<br />
17年来，大庄除在中国注册了“大庄”和“DASSO”商标外，还有 2个美国注册商标、1个马德里缔约国国际商标。大庄（含DASSO）品牌的竹木地板系列产品，已经被评为中国最具有影响力的 “十大品牌”之一和“浙江名牌”产品。2009年被授予“中国驰名商标”。 在2009年第十一届DOMOTEX国际地材展获得“2009年度创新性绿色地板”和“年度国际地板品牌”两项大奖。<br />
公司宗旨：为全世界提供环保的健康的高品质的竹装饰材。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A4%A7%E5%BA%84',
    'title' => '大庄',
    'identifier' => 'node/156',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:03:20 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '春红',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '93ab27f1-1b27-476e-b814-eb65fa4beb94',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367909477,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '804d741d-195a-4c9f-819a-fd562223008a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江西飞宇竹业集团有限公司（原名：江西飞宇竹制品有限公司），创建于1996年，是我国最早从事竹材资源开发利用以及国内外营销渠道建设的中国竹产业龙头企业。目前公司拥有员工1100多名，厂区占地面积23万平方米，自有竹林资源3万余亩，参股和控股的半成品加工基地16个，其中地板成品厂2个，冷热压重竹地板2个，竹家具厂1个，年可生产竹地板300万平米，竹家具1万套。公司旗下“春红”（英文名：CHOHO)品牌竹地板，目前在国内拥有直营和加盟专卖店近500家，特别是以北京为中心的华北地区，连续12年在同类产品中销量遥遥领先，成为中国内地竹地板市场中的领导品牌。同时，公司产品销往国外30多个国家和地区，深受客户的喜爱。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江西飞宇竹业集团有限公司（原名：江西飞宇竹制品有限公司），创建于1996年，是我国最早从事竹材资源开发利用以及国内外营销渠道建设的中国竹产业龙头企业。目前公司拥有员工1100多名，厂区占地面积23万平方米，自有竹林资源3万余亩，参股和控股的半成品加工基地16个，其中地板成品厂2个，冷热压重竹地板2个，竹家具厂1个，年可生产竹地板300万平米，竹家具1万套。公司旗下“春红”（英文名：CHOHO)品牌竹地板，目前在国内拥有直营和加盟专卖店近500家，特别是以北京为中心的华北地区，连续12年在同类产品中销量遥遥领先，成为中国内地竹地板市场中的领导品牌。同时，公司产品销往国外30多个国家和地区，深受客户的喜爱。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%98%A5%E7%BA%A2',
    'title' => '春红',
    'identifier' => 'node/152',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 14:51:17 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '堡林爵',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a276a718-3675-41a0-a1bd-1ca4bf481e39',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366551585,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '82061ccc-fffd-4827-9153-3e63e95369cb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">堡林爵香槟是香槟产区仅有的几座完全采用家族式经营的大牌香槟酒庄之一，它以特级葡萄园和一级葡萄园的高品质而著称。酒庄坚持传统的酿造方法，仅使用霞多丽(Chardonnay)和黑皮诺(Pinot Noir)两种葡萄，在酒桶中进行发酵，在带有软木塞的大容量酒瓶中进行陈年，最终装瓶的香槟酒全部放在阴凉处继续陈年。为了保证香槟酒的出色品质能够代代相 传，1992年，该酒庄发表了《规范与质量宪章》，勾勒出了一款出色香槟所必备的品质。1884年，堡林爵香槟酒就被维多利亚女王指定为王室御用香槟，由 此可见它无人企及的非凡品质。</span><br />
堡林爵香槟始建于1829年，创始人是亨内·德·维勒蒙 （Hennequin de Villermont）、保罗·勒诺丹（Paul Renaudin）和雅克·堡林爵（Jacques Bollinger）。由于三人一致同意创始人之一亨内·德·维勒蒙（Hennequin de Villermont）的名字不出现于酒庄名中，所以最初的酒庄名为“Renaudin Bollinger”。由于保罗·勒诺丹没有后嗣，所以在他去世之后，酒庄就落到了雅克·堡林爵（Jacques Bollinger）手中。不过直到20世纪60年代，酒庄才改名为堡林爵香槟（Bollinger）。<br />
1885年，酒庄由雅克·堡林爵的外孙——约瑟夫（Joseph）和乔治斯（Georges）接管，在他们的领导下，酒庄开始扩展，大量收购附近村庄的 葡萄园，酒庄的名声也越来越大。1918年，乔治斯的儿子接管酒庄，他的妻子为艾米丽（Emily Law de Lauriston Bourbers），人称“莉莉（Lilly）”。在他们的带领下，酒庄继续扩张：建造新酒窖，收购葡萄园。乔治斯的儿子死后，酒庄便由莉莉接管，她不仅 收购更多的葡萄园，扩大产量，还为促进品牌知名度而游历世界，为堡林爵香槟做出了重大贡献。<br />
该酒庄仍由堡林爵（Bollinger）家族管理，现任掌门人是吉斯兰·德·蒙特戈费埃（Ghislain de Montgolfier）。经过了前几代人的开拓和经营，该酒庄现已拥有超过150公顷的葡萄园。每年所产的各式香槟达1,000,000瓶。该酒庄最引 以为傲的法国老株香槟酒，采用来自3个葡萄园种植的纯正法国老葡萄树酿制。这3个葡萄园的葡萄树都是在1960年法国葡萄根瘤蚜虫侵袭的时候幸存下来，是 葡萄园中的精品。为了照顾这些老株，葡萄园全部采用人工操作，连整理工具都使用老式的。而这些葡萄老株往往可结出香气集中、糖分高而早熟的果实，但产量并 不高，每株葡萄树大概只有3至4串葡萄。用这些葡萄酿造的法国老株香槟酒年产量不会超过3,000瓶（每瓶都有编号），采用橡木桶发酵，装瓶后还要熟成3 年以上才上市，口味较重，酒体饱满。此外，该酒庄的好年份香槟（Grand Annee），只有在好的年份才会生产，选用最好的葡萄来酿造，在堡林爵香槟中的地位仅次于法国老株香槟，价格也较低。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>堡林爵香槟是香槟产区仅有的几座完全采用家族式经营的大牌香槟酒庄之一，它以特级葡萄园和一级葡萄园的高品质而著称。酒庄坚持传统的酿造方法，仅使用霞多丽(Chardonnay)和黑皮诺(Pinot Noir)两种葡萄，在酒桶中进行发酵，在带有软木塞的大容量酒瓶中进行陈年，最终装瓶的香槟酒全部放在阴凉处继续陈年。为了保证香槟酒的出色品质能够代代相 传，1992年，该酒庄发表了《规范与质量宪章》，勾勒出了一款出色香槟所必备的品质。1884年，堡林爵香槟酒就被维多利亚女王指定为王室御用香槟，由 此可见它无人企及的非凡品质。<br />
堡林爵香槟始建于1829年，创始人是亨内·德·维勒蒙 （Hennequin de Villermont）、保罗·勒诺丹（Paul Renaudin）和雅克·堡林爵（Jacques Bollinger）。由于三人一致同意创始人之一亨内·德·维勒蒙（Hennequin de Villermont）的名字不出现于酒庄名中，所以最初的酒庄名为“Renaudin Bollinger”。由于保罗·勒诺丹没有后嗣，所以在他去世之后，酒庄就落到了雅克·堡林爵（Jacques Bollinger）手中。不过直到20世纪60年代，酒庄才改名为堡林爵香槟（Bollinger）。<br />
1885年，酒庄由雅克·堡林爵的外孙——约瑟夫（Joseph）和乔治斯（Georges）接管，在他们的领导下，酒庄开始扩展，大量收购附近村庄的 葡萄园，酒庄的名声也越来越大。1918年，乔治斯的儿子接管酒庄，他的妻子为艾米丽（Emily Law de Lauriston Bourbers），人称“莉莉（Lilly）”。在他们的带领下，酒庄继续扩张：建造新酒窖，收购葡萄园。乔治斯的儿子死后，酒庄便由莉莉接管，她不仅 收购更多的葡萄园，扩大产量，还为促进品牌知名度而游历世界，为堡林爵香槟做出了重大贡献。<br />
该酒庄仍由堡林爵（Bollinger）家族管理，现任掌门人是吉斯兰·德·蒙特戈费埃（Ghislain de Montgolfier）。经过了前几代人的开拓和经营，该酒庄现已拥有超过150公顷的葡萄园。每年所产的各式香槟达1,000,000瓶。该酒庄最引 以为傲的法国老株香槟酒，采用来自3个葡萄园种植的纯正法国老葡萄树酿制。这3个葡萄园的葡萄树都是在1960年法国葡萄根瘤蚜虫侵袭的时候幸存下来，是 葡萄园中的精品。为了照顾这些老株，葡萄园全部采用人工操作，连整理工具都使用老式的。而这些葡萄老株往往可结出香气集中、糖分高而早熟的果实，但产量并 不高，每株葡萄树大概只有3至4串葡萄。用这些葡萄酿造的法国老株香槟酒年产量不会超过3,000瓶（每瓶都有编号），采用橡木桶发酵，装瓶后还要熟成3 年以上才上市，口味较重，酒体饱满。此外，该酒庄的好年份香槟（Grand Annee），只有在好的年份才会生产，选用最好的葡萄来酿造，在堡林爵香槟中的地位仅次于法国老株香槟，价格也较低。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A0%A1%E6%9E%97%E7%88%B5',
    'title' => '堡林爵',
    'identifier' => 'node/80',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:39:45 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '欧象',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bb72ab61-5c35-4ba6-b9a2-4367d4d012c5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367667239,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '822246d8-7d26-45d6-87f5-f0b8eb543565',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>欧象地板是江苏欧象万盛木业有限公司旗下的品牌，位于长江与大运河交叉口的中国经济最开发的黄金经济圈内，占地10万余平方米，生产基地的年生产能力可达800万平方米，是国内强化木地板之都的龙头企业之一。<br />
欧象地板专注于从事地板的研发与生产，拥有国际先进水平的产品研发中心，同时拥有打拼专业的研发人员和优秀的生产、销售、服务人才，在地板领域中一直保持着世界先进的水平。<br />
欧象地板拥有先进的地板生产线，并与IP（英特普莱特）、MEAD、苏德克、兰帜、大亚等世界上流厂商达成战略合作伙伴关系。<br />
欧象地板网络营销遍布全国大中型企业，并且远销五大洲及三十多个国家和地区。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>欧象地板是江苏欧象万盛木业有限公司旗下的品牌，位于长江与大运河交叉口的中国经济最开发的黄金经济圈内，占地10万余平方米，生产基地的年生产能力可达800万平方米，是国内强化木地板之都的龙头企业之一。<br />
欧象地板专注于从事地板的研发与生产，拥有国际先进水平的产品研发中心，同时拥有打拼专业的研发人员和优秀的生产、销售、服务人才，在地板领域中一直保持着世界先进的水平。<br />
欧象地板拥有先进的地板生产线，并与IP（英特普莱特）、MEAD、苏德克、兰帜、大亚等世界上流厂商达成战略合作伙伴关系。<br />
欧象地板网络营销遍布全国大中型企业，并且远销五大洲及三十多个国家和地区。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%AC%A7%E8%B1%A1',
    'title' => '欧象',
    'identifier' => 'node/143',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:33:59 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '宝禄爵',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3ba79344-04fc-4377-a65e-1c0b2160bb69',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366552778,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '83a4e6b7-ff9d-4614-8aba-71ce99aab26b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">宝禄爵香槟位于香槟产区的埃佩尔奈（Epernay）镇，创建于1849年，创始人是来自艾镇（A．y）的香槟人宝禄爵（Pol Roger）。接下来的50年里，宝禄爵先生将酒庄打造成香槟地区最受尊重的酒庄之一，并在英国确立了其坚实的贸易基石。宝禄爵先生去世后，酒庄传到他儿子莫里斯（Maurice）和乔治斯（Georges）手中。他们两兄弟各有特色，莫里斯非常愿意面对公众，而乔治斯则更喜欢待在调配室和品尝室，宝禄爵香槟则继续在他们手中发展壮大。</span><br />
该酒庄从创立至1955年，一直都没有自己的葡萄园，酒庄已经拥有55公顷的葡萄园，大多是在埃佩尔奈（Epernay）境内或周围。宝禄爵香槟酒是由 产自埃佩尔奈（Epernay）区18座葡萄园的葡萄酿造而成，酒体丰腴、深沉、醇厚，有着顶级香槟酒所特有的活力与精致，是其中的佼佼者。其珍藏香槟的 寿命可长达30年甚至更久，比法国顶级红葡萄酒的寿命还要长。该酒庄另一款出色的香槟酒就是霞多丽（Chardonnay）白香槟，它同时也是全球最出色 的白中白香槟酒之一，仅使用克拉芒（Cramant）、梅斯尼尔（Le Mesnil）、奥戈尔（Oger）以及阿伟兹（Avize）地区顶级葡萄园出产的霞多丽酿造而成。霞多丽白香槟也许是该酒庄最性感、最迷人的一款，年轻时即可饮用，与珍藏香槟以及大名鼎鼎的温斯顿·丘吉尔爵士纪念香槟相比，陈年能力稍逊一筹。<br />
经过一个半世纪的发展，在今天的宝禄爵酒庄里，可看到传统与现代元素并存在从种植到酿造的各环节中。 现代元素最直接的表现是在发酵车间里，一排排整洁闪亮的不锈钢发酵罐，暗示着酒庄已告别使用木桶进行第一次发酵和存储的时代。该酒庄大概在上个世纪30年 代，就决定不再使用木桶发酵，开始使用混凝土罐发酵，后来又使用不锈钢发酵罐。这些现代化设备可以通过控温设备来更好地保证发酵和澄清等环节的温度，从而 得到更纯净、稳定，品质更好的发酵酒。宝禄爵酒庄是香槟地区最早如此变革的酒庄之一。<br />
而酒窖则是宝禄爵酒庄体现最经典传统元素的所在地，这里的转瓶工作依然全部人工完成。酒庄有4名转瓶技师，分成两组，每组两人，每组每天转瓶15,000到16,000瓶，这绝对是一项 体力活，也是一项技术活，需要大量的实践和经验。这项工作并非仅简单的转动酒瓶，还需要根据瓶中葡萄酒的状况，评判转动的方向、角度，甚至考虑是否需要适 当的晃动等等。技师通常2年能入门，至少5年才能独立工作。相比机器转瓶，人工转瓶需要更长的周期，一般5至6周，每瓶香槟大概共需人工接触25至28次 之多。这种需要更多人力和时间成本的人工转瓶工艺，越来越多地被机械转瓶取代，即便保留的酒庄也是部分使用。像宝禄爵酒庄这样完全人工完成的古董操作几乎 已经绝迹了，宝禄爵酒庄也为这项工艺至今仍保留在家族手中而引以为傲，这对保持种植与酿造上的传统很重要。纵然某些设备或工艺会有革新，但传统与现代手法 结合中体现出的传统理念，却是让宝禄爵香槟始终保持无与伦比品质的关键，宝禄爵香槟也因此获得极高的声望，备受尊崇。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>宝禄爵香槟位于香槟产区的埃佩尔奈（Epernay）镇，创建于1849年，创始人是来自艾镇（A．y）的香槟人宝禄爵（Pol Roger）。接下来的50年里，宝禄爵先生将酒庄打造成香槟地区最受尊重的酒庄之一，并在英国确立了其坚实的贸易基石。宝禄爵先生去世后，酒庄传到他儿子莫里斯（Maurice）和乔治斯（Georges）手中。他们两兄弟各有特色，莫里斯非常愿意面对公众，而乔治斯则更喜欢待在调配室和品尝室，宝禄爵香槟则继续在他们手中发展壮大。<br />
该酒庄从创立至1955年，一直都没有自己的葡萄园，酒庄已经拥有55公顷的葡萄园，大多是在埃佩尔奈（Epernay）境内或周围。宝禄爵香槟酒是由 产自埃佩尔奈（Epernay）区18座葡萄园的葡萄酿造而成，酒体丰腴、深沉、醇厚，有着顶级香槟酒所特有的活力与精致，是其中的佼佼者。其珍藏香槟的 寿命可长达30年甚至更久，比法国顶级红葡萄酒的寿命还要长。该酒庄另一款出色的香槟酒就是霞多丽（Chardonnay）白香槟，它同时也是全球最出色 的白中白香槟酒之一，仅使用克拉芒（Cramant）、梅斯尼尔（Le Mesnil）、奥戈尔（Oger）以及阿伟兹（Avize）地区顶级葡萄园出产的霞多丽酿造而成。霞多丽白香槟也许是该酒庄最性感、最迷人的一款，年轻时即可饮用，与珍藏香槟以及大名鼎鼎的温斯顿·丘吉尔爵士纪念香槟相比，陈年能力稍逊一筹。<br />
经过一个半世纪的发展，在今天的宝禄爵酒庄里，可看到传统与现代元素并存在从种植到酿造的各环节中。 现代元素最直接的表现是在发酵车间里，一排排整洁闪亮的不锈钢发酵罐，暗示着酒庄已告别使用木桶进行第一次发酵和存储的时代。该酒庄大概在上个世纪30年 代，就决定不再使用木桶发酵，开始使用混凝土罐发酵，后来又使用不锈钢发酵罐。这些现代化设备可以通过控温设备来更好地保证发酵和澄清等环节的温度，从而 得到更纯净、稳定，品质更好的发酵酒。宝禄爵酒庄是香槟地区最早如此变革的酒庄之一。<br />
而酒窖则是宝禄爵酒庄体现最经典传统元素的所在地，这里的转瓶工作依然全部人工完成。酒庄有4名转瓶技师，分成两组，每组两人，每组每天转瓶15,000到16,000瓶，这绝对是一项 体力活，也是一项技术活，需要大量的实践和经验。这项工作并非仅简单的转动酒瓶，还需要根据瓶中葡萄酒的状况，评判转动的方向、角度，甚至考虑是否需要适 当的晃动等等。技师通常2年能入门，至少5年才能独立工作。相比机器转瓶，人工转瓶需要更长的周期，一般5至6周，每瓶香槟大概共需人工接触25至28次 之多。这种需要更多人力和时间成本的人工转瓶工艺，越来越多地被机械转瓶取代，即便保留的酒庄也是部分使用。像宝禄爵酒庄这样完全人工完成的古董操作几乎 已经绝迹了，宝禄爵酒庄也为这项工艺至今仍保留在家族手中而引以为傲，这对保持种植与酿造上的传统很重要。纵然某些设备或工艺会有革新，但传统与现代手法 结合中体现出的传统理念，却是让宝禄爵香槟始终保持无与伦比品质的关键，宝禄爵香槟也因此获得极高的声望，备受尊崇。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%9D%E7%A6%84%E7%88%B5',
    'title' => '宝禄爵',
    'identifier' => 'node/83',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:59:38 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '金铃',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '60e4e826-28e0-4db9-b74a-504c428839fc',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798924,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '87186492-acf6-4b94-8f33-ed4b0b50c250',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bell’s金铃。金铃威士忌是英国最受欢迎的威士忌品牌之一，由创立于1825年的贝尔公司生产。其产品都是使用极具平衡感的纯麦芽威士忌为原酒勾兑而成，产品有：Extra Special（标准品）、Bell’s Deluxe(12年)、Bell’s Decanter(20年)、Bell’s Royal Reserve（21年）等多个级别。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Bell’s金铃。金铃威士忌是英国最受欢迎的威士忌品牌之一，由创立于1825年的贝尔公司生产。其产品都是使用极具平衡感的纯麦芽威士忌为原酒勾兑而成，产品有：Extra Special（标准品）、Bell’s Deluxe(12年)、Bell’s Decanter(20年)、Bell’s Royal Reserve（21年）等多个级别。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%87%91%E9%93%83',
    'title' => '金铃',
    'identifier' => 'node/98',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:22:04 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '鉴湖',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e517e87f-5148-4469-90d2-afb721296b85',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365994250,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8ee5c9a1-adc0-479f-84d5-dc26fe5ed970',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。绍兴酒之所以晶莹澄澈，馥郁芬芳，成为酒中珍品，除了用料讲究和工艺精湛外，重要的还因为它是用得天独厚的鉴湖水酿制的。“汲取门前鉴湖水，酿得绍酒万里香”。位于鉴湖源头的鉴湖酿酒厂始建于1951年9月，有着50多年专业生产、经营绍兴酒的经验，生产的鉴湖牌绍兴酒是浙江省著名商标，国家免检产品，畅销全国各大城市，远销日本等国家，深受消费者青睐。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。绍兴酒之所以晶莹澄澈，馥郁芬芳，成为酒中珍品，除了用料讲究和工艺精湛外，重要的还因为它是用得天独厚的鉴湖水酿制的。“汲取门前鉴湖水，酿得绍酒万里香”。位于鉴湖源头的鉴湖酿酒厂始建于1951年9月，有着50多年专业生产、经营绍兴酒的经验，生产的鉴湖牌绍兴酒是浙江省著名商标，国家免检产品，畅销全国各大城市，远销日本等国家，深受消费者青睐。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%89%B4%E6%B9%96',
    'title' => '鉴湖',
    'identifier' => 'node/42',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:50:50 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '青岛',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3c2ed823-a56f-444e-b426-65a0db423101',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366014706,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '8f9e665a-313d-40e0-bb76-dfbeaf1e49da',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>青岛啤酒股份有限公司（以下简称“青岛啤酒”）的前身是1903年8月由德国商人和英国商人合资在青岛创建的日耳曼啤酒公司青岛股份公司，它是中国历史悠久的啤酒制造厂商，2008年北京奥运会官方赞助商，跻身世界品牌500强。<br />
1993年7月15日，青岛啤酒股票（0168）在香港交易所上市，是中国内地第一家在海外上市的企业。同年8月27日，青岛啤酒(600600)在上海证券交易所上市，成为了中国首家在两地同时上市的公司。<br />
上世纪90年代后期，运用兼并重组、破产收购、合资建厂等多种资本运作方式，青岛啤酒在中国19个省、市、自治区拥有50多家啤酒生产基地，基本完成了全国性的战略布局。<br />
青啤公司2010年累计完成啤酒销量635万千升，同比增长7.4%，实现主营业务收入人民币196.1亿元，同比增长10.4%；实现净利润人民币15.2亿元，同比增长21.6%。继续保持利润增长大于销售收入增长，销售收入增长大于销量增长的良好发展态势。<br />
青岛啤酒远销美国、日本、德国、法国、英国、意大利、加拿大、巴西、墨西哥等世界70多个国家和地区。全球啤酒行业权威报告Barth Report依据产量排名，青岛啤酒为世界第六大啤酒厂商。<br />
青啤的品牌历史悠久，在国际上的影响力比较大，可是“帆很大，船很小”。1998年，公司制定了“大名牌”发展战略，开始进行大规模的并购扩张。青啤的战略重点从“做大做强”转为“做强做大”，从扩张转向整合。青啤品牌在世界品牌价值实验室（World Brand Value Lab）编制的2012年度《中国品牌500强》，品牌价值已达631.68亿元。<br />
青岛啤酒几乎囊括了1949年新中国建立以来所举办的啤酒质量评比的所有金奖，并在世界各地举办的国际评比大赛中多次荣获金奖。1906年，建厂仅三年的青岛啤酒在慕尼黑啤酒博览会上荣获金奖；20世纪80年代三次在美国国际啤酒大赛上荣登榜首；1991年、1993年、1997年分别在比利时、新加坡和西班牙国际评比中荣获金奖；2006年，青岛啤酒荣登《福布斯》“2006年全球信誉企业200强”，位列68位；2007年荣获亚洲品牌盛典年度大奖；2009年，青岛啤酒荣获上海证券交易所“公司治理专项奖——2009年度董事会奖”、“世界品牌500强”等诸多荣誉，并第七次获得“中国最受尊敬企业”殊荣；2010年，青岛啤酒第五次登榜《财富》杂志“最受赞赏的中国公司”。<br />
青岛啤酒以“成为拥有全球影响力品牌的国际化大公司”为愿景，将不断创新，“用我们的激情，酿造全球消费者喜好的啤酒，为生活创造快乐！”</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>青岛啤酒股份有限公司（以下简称“青岛啤酒”）的前身是1903年8月由德国商人和英国商人合资在青岛创建的日耳曼啤酒公司青岛股份公司，它是中国历史悠久的啤酒制造厂商，2008年北京奥运会官方赞助商，跻身世界品牌500强。<br />
1993年7月15日，青岛啤酒股票（0168）在香港交易所上市，是中国内地第一家在海外上市的企业。同年8月27日，青岛啤酒(600600)在上海证券交易所上市，成为了中国首家在两地同时上市的公司。<br />
上世纪90年代后期，运用兼并重组、破产收购、合资建厂等多种资本运作方式，青岛啤酒在中国19个省、市、自治区拥有50多家啤酒生产基地，基本完成了全国性的战略布局。<br />
青啤公司2010年累计完成啤酒销量635万千升，同比增长7.4%，实现主营业务收入人民币196.1亿元，同比增长10.4%；实现净利润人民币15.2亿元，同比增长21.6%。继续保持利润增长大于销售收入增长，销售收入增长大于销量增长的良好发展态势。<br />
青岛啤酒远销美国、日本、德国、法国、英国、意大利、加拿大、巴西、墨西哥等世界70多个国家和地区。全球啤酒行业权威报告Barth Report依据产量排名，青岛啤酒为世界第六大啤酒厂商。<br />
青啤的品牌历史悠久，在国际上的影响力比较大，可是“帆很大，船很小”。1998年，公司制定了“大名牌”发展战略，开始进行大规模的并购扩张。青啤的战略重点从“做大做强”转为“做强做大”，从扩张转向整合。青啤品牌在世界品牌价值实验室（World Brand Value Lab）编制的2012年度《中国品牌500强》，品牌价值已达631.68亿元。<br />
青岛啤酒几乎囊括了1949年新中国建立以来所举办的啤酒质量评比的所有金奖，并在世界各地举办的国际评比大赛中多次荣获金奖。1906年，建厂仅三年的青岛啤酒在慕尼黑啤酒博览会上荣获金奖；20世纪80年代三次在美国国际啤酒大赛上荣登榜首；1991年、1993年、1997年分别在比利时、新加坡和西班牙国际评比中荣获金奖；2006年，青岛啤酒荣登《福布斯》“2006年全球信誉企业200强”，位列68位；2007年荣获亚洲品牌盛典年度大奖；2009年，青岛啤酒荣获上海证券交易所“公司治理专项奖——2009年度董事会奖”、“世界品牌500强”等诸多荣誉，并第七次获得“中国最受尊敬企业”殊荣；2010年，青岛啤酒第五次登榜《财富》杂志“最受赞赏的中国公司”。<br />
青岛啤酒以“成为拥有全球影响力品牌的国际化大公司”为愿景，将不断创新，“用我们的激情，酿造全球消费者喜好的啤酒，为生活创造快乐！”</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 343,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%9D%92%E5%B2%9B',
    'title' => '青岛',
    'identifier' => 'node/46',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 16:31:46 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '养乐多',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6d2dd957-7359-4a9a-8825-e2fee7b70a7e',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365940900,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '90257732-7bb2-4ffa-95c7-44ff7fc0ff0a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>养乐多公司（Yakult）创业于1935年，是全球最大的活性乳酸菌饮品制造公司之一，至今已有70多年生产和销售发酵型乳制品的历史。</p>

<p>一直以来，养乐多公司时刻坚持创始人代田稔医学博士的想法，致力于将健康带给全人类。从1964年第一家海外事务所在台湾成立至今，公司的销售网络已遍及全球30多个国家和地区，并分别在日本东京和欧洲比利时设立了研究机构，专门从事益生菌的研究与开发。养乐多公司现已成为拥有食品、化妆品、医药、分析试验、研究开发以及社会公益活动等事业的国际性健康食品企业。</p>

<p>养乐多公司从2001年开始进入中国大陆，将益生菌健康理念带给中国人民。今后，我们也将秉承企业理念，提供最优质的产品，为中国人民的健康而努力。</p>

<p>养乐多创始人代田稔医学博士一生致力于肠内菌群的研究与预防医学的普及。他对医学产生兴趣源于幼年时的生活经历，在他成长的乡村里，有很多同龄的孩子因为得了传染病而生命受到威胁。</p>

<p>于是，代田博士以让自己不得病的预防医学为理想，开始了微生物研究之路。1930年，代田博士首先分离并强化培养出干酪乳酸杆菌代田株Lactobacillus casei&nbsp;strain Shirota，即"养乐多®&nbsp;活性乳酸菌"。1935年，他将这100亿经过特殊培养的养乐多®活性乳酸菌保存在小小的瓶子中，作为食品开始贡献于人类的健康。</p>

<p>代田博士不论作为医生、研究人员，还是实业家都留下了不凡的足迹。而以"代田理念"为宗旨开展的养乐多事业活动，也将会把代田博士的愿望与理想一直延续下去。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>养乐多公司（Yakult）创业于1935年，是全球最大的活性乳酸菌饮品制造公司之一，至今已有70多年生产和销售发酵型乳制品的历史。</p>
<p>一直以来，养乐多公司时刻坚持创始人代田稔医学博士的想法，致力于将健康带给全人类。从1964年第一家海外事务所在台湾成立至今，公司的销售网络已遍及全球30多个国家和地区，并分别在日本东京和欧洲比利时设立了研究机构，专门从事益生菌的研究与开发。养乐多公司现已成为拥有食品、化妆品、医药、分析试验、研究开发以及社会公益活动等事业的国际性健康食品企业。</p>
<p>养乐多公司从2001年开始进入中国大陆，将益生菌健康理念带给中国人民。今后，我们也将秉承企业理念，提供最优质的产品，为中国人民的健康而努力。</p>
<p>养乐多创始人代田稔医学博士一生致力于肠内菌群的研究与预防医学的普及。他对医学产生兴趣源于幼年时的生活经历，在他成长的乡村里，有很多同龄的孩子因为得了传染病而生命受到威胁。</p>
<p>于是，代田博士以让自己不得病的预防医学为理想，开始了微生物研究之路。1930年，代田博士首先分离并强化培养出干酪乳酸杆菌代田株Lactobacillus casei strain Shirota，即"养乐多® 活性乳酸菌"。1935年，他将这100亿经过特殊培养的养乐多®活性乳酸菌保存在小小的瓶子中，作为食品开始贡献于人类的健康。</p>
<p>代田博士不论作为医生、研究人员，还是实业家都留下了不凡的足迹。而以"代田理念"为宗旨开展的养乐多事业活动，也将会把代田博士的愿望与理想一直延续下去。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 333,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'JP',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%85%BB%E4%B9%90%E5%A4%9A',
    'title' => '养乐多',
    'identifier' => 'node/22',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:01:40 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '养生堂',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'eae86b90-ad45-4c80-a479-f9a737709495',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '91b0e276-8c9a-4866-ad8d-eecde1af8fa7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>养生堂创建于1993年，十年间迅速崛起，成长为生产和经营健康产品的现代化高科技的知名企业。公司成功创立了龟鳖丸、朵而、成长快乐、成人维生素、清嘴、农夫山泉、农夫果园、尖叫、母亲牌牛肉棒以及万泰艾滋病毒快速诊断试剂等知名品牌及产品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>养生堂创建于1993年，十年间迅速崛起，成长为生产和经营健康产品的现代化高科技的知名企业。公司成功创立了龟鳖丸、朵而、成长快乐、成人维生素、清嘴、农夫山泉、农夫果园、尖叫、母亲牌牛肉棒以及万泰艾滋病毒快速诊断试剂等知名品牌及产品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%85%BB%E7%94%9F%E5%A0%82',
    'title' => '养生堂',
    'identifier' => 'node/2',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '高牌',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '250e265f-d040-4faf-b7a0-5a50ad838d66',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367486302,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '976dfc77-1257-4a39-b3b8-5f66bf8c2827',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>高牌地板是浙江高牌木业有限公司旗下的一个自主品牌之一，他位于地板之都-南浔，以央视同一首歌主持人梁永斌形象代言。公司技术力量雄厚，设备先进，获得多项荣誉，包括中国驰名商标、中国地板十佳品牌等。产品结构和多种优势便于经销商操作发展，体现双赢。公司服务体系完善，注重细节操作，多种支持铺设经销商成功之路！</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>高牌地板是浙江高牌木业有限公司旗下的一个自主品牌之一，他位于地板之都-南浔，以央视同一首歌主持人梁永斌形象代言。公司技术力量雄厚，设备先进，获得多项荣誉，包括中国驰名商标、中国地板十佳品牌等。产品结构和多种优势便于经销商操作发展，体现双赢。公司服务体系完善，注重细节操作，多种支持铺设经销商成功之路！</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 215,
      ),
      2 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%AB%98%E7%89%8C',
    'title' => '高牌',
    'identifier' => 'node/132',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:18:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '富林',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '94178642-ae21-473e-8a8d-456735a4cf9a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367559522,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '981655ab-20c0-4ee1-98b5-de4261af995f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>富林国际集团始创于1994年，致力打造全球领先的木产业生态链系统。基于15载锐意进取和极具前瞻性的全球战略目光，富林国际集团迅速发展成产业链前后向关联高度趋合的知名企业，产业群涵盖木材原料供应、基材生产、木料交易平台构建运营、木地板研产销、物流配送和售后服务。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>富林国际集团始创于1994年，致力打造全球领先的木产业生态链系统。基于15载锐意进取和极具前瞻性的全球战略目光，富林国际集团迅速发展成产业链前后向关联高度趋合的知名企业，产业群涵盖木材原料供应、基材生产、木料交易平台构建运营、木地板研产销、物流配送和售后服务。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AF%8C%E6%9E%97',
    'title' => '富林',
    'identifier' => 'node/139',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-03 13:38:42 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '扬子',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bd140842-9d0b-47ee-9f87-d4d90537c040',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367666894,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '98856063-183c-4362-bd92-d58f1cf4f090',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>扬子地板是中国最大的木地板制造企业之一，以强化复合地板、层压实木地板的研发、生产、销售、服务为核心主营业务，具有丰富的地板专业研发、制造经验与深厚的行业影响力。2006年，扬子地板正式启用新工业园，位于中国安徽滁州经济技术开发区。扬子地板——中国家庭消费者欢迎的民族品牌，是家居建材领域实至名归的“中国创造”。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>扬子地板是中国最大的木地板制造企业之一，以强化复合地板、层压实木地板的研发、生产、销售、服务为核心主营业务，具有丰富的地板专业研发、制造经验与深厚的行业影响力。2006年，扬子地板正式启用新工业园，位于中国安徽滁州经济技术开发区。扬子地板——中国家庭消费者欢迎的民族品牌，是家居建材领域实至名归的“中国创造”。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%89%AC%E5%AD%90',
    'title' => '扬子',
    'identifier' => 'node/141',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:28:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '添宝15年',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2a90a6bc-0cb2-4dbf-8184-33baffeaa63c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799182,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '997c2bdc-7a73-4107-8855-fa2a08f15ad6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Dimple添宝15年。添宝15年（Dimple）是一九八九年向世界推出的苏格兰混合威士忌，具有金丝的独特瓶型和散发着酿藏十五年的醇香，更显得独具一格，深受上层人士的喜爱。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Dimple添宝15年。添宝15年（Dimple）是一九八九年向世界推出的苏格兰混合威士忌，具有金丝的独特瓶型和散发着酿藏十五年的醇香，更显得独具一格，深受上层人士的喜爱。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B7%BB%E5%AE%9D15%E5%B9%B4',
    'title' => '添宝15年',
    'identifier' => 'node/100',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:26:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '沈永和',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd4f2e10c-7682-4728-9cc3-881d6b5cf7d6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365994084,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9a017e15-a575-4066-973a-0f69b23ea409',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。沈永和酒厂创业于清代康熙三年（1664年），是绍兴黄酒行业中历史最悠久的著名酒厂，很早就拥有“行销中外，驰名遐迩”的金字招牌，“永远和气生财”是沈永和的经营宗旨。沈永和历经六代人的努力于1910年代表绍兴黄酒在“南洋劝业会”上，为绍兴酒争得第一枚国际金牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江古越龙山绍兴酒股份有限公司旗下品牌。沈永和酒厂创业于清代康熙三年（1664年），是绍兴黄酒行业中历史最悠久的著名酒厂，很早就拥有“行销中外，驰名遐迩”的金字招牌，“永远和气生财”是沈永和的经营宗旨。沈永和历经六代人的努力于1910年代表绍兴黄酒在“南洋劝业会”上，为绍兴酒争得第一枚国际金牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B2%88%E6%B0%B8%E5%92%8C',
    'title' => '沈永和',
    'identifier' => 'node/40',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:48:04 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '世友',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4d04ccf0-ddb5-4d3d-8d7e-0a97a90eb8cc',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367486543,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9b355aa8-eca1-443c-b9ca-2efc443feba0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>世友地板是浙江世友木业有限公司旗下的核心产品，10年来，形成了以实木地板、实木复合地板、强化木地板为主，楼梯、木门、炭化木等为辅的多元化发展的产业格局。产品销往全国各地及海外市场，目前有1600个世友专卖店和售后服务网点，23个销售分公司和16个物流中心。<br />
世友地板大量引进国际先进设备，建有行业一流的自动化生产线和最大规模的研发检测中心，与多所大专院校建立战略合作关系，建立两个博士后工作站，产品技术与质量在行业里始终保持领先地位，成为国家和行业部分标准的制定者和起草者。<br />
世友地板先后通过ISO14001环境、ISO9001质量、GB/T28001-2001职业健康安全、中国环境标志产品、标准化良好行为等多个管理体系认证，并先后荣获“中国驰名商标”、“国家高新技术企业”、“中国专利优秀奖”、“浙江省质量奖”、“湖州市政府质量奖”等多项荣誉和称号，五次入选“中国500最具价值品牌”，2010年是荣登“亚洲品牌500强”榜单，200。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>世友地板是浙江世友木业有限公司旗下的核心产品，10年来，形成了以实木地板、实木复合地板、强化木地板为主，楼梯、木门、炭化木等为辅的多元化发展的产业格局。产品销往全国各地及海外市场，目前有1600个世友专卖店和售后服务网点，23个销售分公司和16个物流中心。<br />
世友地板大量引进国际先进设备，建有行业一流的自动化生产线和最大规模的研发检测中心，与多所大专院校建立战略合作关系，建立两个博士后工作站，产品技术与质量在行业里始终保持领先地位，成为国家和行业部分标准的制定者和起草者。<br />
世友地板先后通过ISO14001环境、ISO9001质量、GB/T28001-2001职业健康安全、中国环境标志产品、标准化良好行为等多个管理体系认证，并先后荣获“中国驰名商标”、“国家高新技术企业”、“中国专利优秀奖”、“浙江省质量奖”、“湖州市政府质量奖”等多项荣誉和称号，五次入选“中国500最具价值品牌”，2010年是荣登“亚洲品牌500强”榜单，200。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B8%96%E5%8F%8B',
    'title' => '世友',
    'identifier' => 'node/134',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:22:23 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '通贵',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c7bcab25-6f87-448a-bcbf-e1f545458986',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910418,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e020ea0-299b-4c4b-a71f-0518a0351fe0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江西康达竹业集团，竹地板十大品牌，江西省名牌，江西省著名商标，群众最喜爱品牌，中国品牌竹地板企业联盟副理事长单位，竹地板行业集研发、生产、销售为一体，引领行业潮流的集团化龙头企业。<br />
江西康达竹业集团，是我国竹地板行业集研发、生产、销售为一体，引领行业潮流的集团化龙头企业，目前集团公司拥有“通贵、康盛”两大品牌，产品涉足于竹地板、多层实木及强化地板三大类地面装饰材料，数百余种花色品种可供选择，满足不同品位的客户需求。<br />
集团公司成立于1993年，总部设在素有“仙源灵境”、“江南竹乡”之美誉的江西奉新。集团总资产达1.8亿元、占地面积130000平方米、员工3000余人，中、高级管理人员41人、专业技术人员47人、市场销售人员100余人。旗下有六个公司，分别建立在国家最新评定的三十大“毛竹之乡”美誉的江西奉新、江西安福、湖南绥宁、广西兴安等地。拥有引领世界先进水平的成品生产流水线5条，年生产能力可达200多万平方米，公司并拥有年提供100万根优质竹材的基地3个，面积达3万余亩。<br />
江西康达竹业集团是中国林产工业协会竹材专业委员会副理事长单位、中国林业产业协会常务理事单位、中国品牌竹地板企业联盟副理事长单位、江西省竹产业协会会长单位、江西省农业产业化经营省级龙头企业、中国竹地板消费白皮书起草单位之一、中国品牌竹地板企业联盟发起单位之一。2002年“通贵”、“康盛”牌竹地板在同行业率先通过ISO14024环境标志认证、ISO9001质量管理体系认证及欧盟CE认证。产品先后获得江西省重点保护产品、江西省名牌产品，江西省林产十大品牌产品，全国竹地板双十佳品牌产品，“通贵”连续九年被认定为江西省著名商标。<br />
公司拥有庞大的营销网络、完善的市场管理、统一的专卖店设计、周到的售后服务。销售网络遍布全国二十七个省、市的五十多个大中城市，产品连续多年国内市场销量领先，并在2008年“通贵”牌竹地板被奥运场馆选用，且销往欧美、日韩等二十多个国家和地区。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江西康达竹业集团，竹地板十大品牌，江西省名牌，江西省著名商标，群众最喜爱品牌，中国品牌竹地板企业联盟副理事长单位，竹地板行业集研发、生产、销售为一体，引领行业潮流的集团化龙头企业。<br />
江西康达竹业集团，是我国竹地板行业集研发、生产、销售为一体，引领行业潮流的集团化龙头企业，目前集团公司拥有“通贵、康盛”两大品牌，产品涉足于竹地板、多层实木及强化地板三大类地面装饰材料，数百余种花色品种可供选择，满足不同品位的客户需求。<br />
集团公司成立于1993年，总部设在素有“仙源灵境”、“江南竹乡”之美誉的江西奉新。集团总资产达1.8亿元、占地面积130000平方米、员工3000余人，中、高级管理人员41人、专业技术人员47人、市场销售人员100余人。旗下有六个公司，分别建立在国家最新评定的三十大“毛竹之乡”美誉的江西奉新、江西安福、湖南绥宁、广西兴安等地。拥有引领世界先进水平的成品生产流水线5条，年生产能力可达200多万平方米，公司并拥有年提供100万根优质竹材的基地3个，面积达3万余亩。<br />
江西康达竹业集团是中国林产工业协会竹材专业委员会副理事长单位、中国林业产业协会常务理事单位、中国品牌竹地板企业联盟副理事长单位、江西省竹产业协会会长单位、江西省农业产业化经营省级龙头企业、中国竹地板消费白皮书起草单位之一、中国品牌竹地板企业联盟发起单位之一。2002年“通贵”、“康盛”牌竹地板在同行业率先通过ISO14024环境标志认证、ISO9001质量管理体系认证及欧盟CE认证。产品先后获得江西省重点保护产品、江西省名牌产品，江西省林产十大品牌产品，全国竹地板双十佳品牌产品，“通贵”连续九年被认定为江西省著名商标。<br />
公司拥有庞大的营销网络、完善的市场管理、统一的专卖店设计、周到的售后服务。销售网络遍布全国二十七个省、市的五十多个大中城市，产品连续多年国内市场销量领先，并在2008年“通贵”牌竹地板被奥运场馆选用，且销往欧美、日韩等二十多个国家和地区。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%80%9A%E8%B4%B5',
    'title' => '通贵',
    'identifier' => 'node/157',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:06:58 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '伊利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b45425cb-b05a-4548-b0d2-c2b602715b4b',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365941141,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9e35fde3-680f-4fc6-b012-529ea05f5b8c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>内蒙古伊利实业集团股份有限公司是全国乳品行业龙头企业之一，是国家520家重点工业企业和国家八部委首批确定的全国151家农业产业化龙头企业之一，是北京2008年奥运会唯一一家乳制品赞助商，也是中国有史以来第一个赞助奥运会的中国食品品牌。2009年5月25日，伊利成功牵手2010年世博会，成为唯一一家符合世博标准、为上海世博会提供乳制品的企业。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>内蒙古伊利实业集团股份有限公司是全国乳品行业龙头企业之一，是国家520家重点工业企业和国家八部委首批确定的全国151家农业产业化龙头企业之一，是北京2008年奥运会唯一一家乳制品赞助商，也是中国有史以来第一个赞助奥运会的中国食品品牌。2009年5月25日，伊利成功牵手2010年世博会，成为唯一一家符合世博标准、为上海世博会提供乳制品的企业。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
      1 => array(
        'tid' => 333,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%BC%8A%E5%88%A9',
    'title' => '伊利',
    'identifier' => 'node/23',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:05:41 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '顺风',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '7c3941f3-3484-4dfa-833e-08c95ffa191c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799130,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => '9ea35e40-74ad-4af2-974b-612dbc1f474a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Cutty Sark顺风。又称帆船、魔女紧身衣；诞生于1923年的，具有现代口感的清淡型苏格兰混合威士忌，该酒酒性比较柔和，是国际上比较畅销的苏格兰威士忌之一。该酒采用苏格兰低地纯麦芽威士忌作为原酒与苏格兰高地纯麦芽威士忌勾兑调和而成。产品分为Cutty Sark（标准品）、Berry Sark(10年)、Cutty（12年）、St.James(圣?詹姆斯)等。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Cutty Sark顺风。又称帆船、魔女紧身衣；诞生于1923年的，具有现代口感的清淡型苏格兰混合威士忌，该酒酒性比较柔和，是国际上比较畅销的苏格兰威士忌之一。该酒采用苏格兰低地纯麦芽威士忌作为原酒与苏格兰高地纯麦芽威士忌勾兑调和而成。产品分为Cutty Sark（标准品）、Berry Sark(10年)、Cutty（12年）、St.James(圣?詹姆斯)等。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%A1%BA%E9%A3%8E',
    'title' => '顺风',
    'identifier' => 'node/99',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:25:30 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '山友',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a5f716cd-3047-479b-91ca-c82ebea2a140',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910550,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a0d90a52-ef87-4644-99cf-83ae855e02f4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>江西山友实业有限公司，竹地板十大品牌，全国竹地板市场放心品牌，绿色环保百佳畅销品牌，产品各项指标均符合国家标准，专业致力研究生产优质竹地板-竹家具材料的大型中日合资企业。<br />
江西山友实业有限公司是中日合资、专业从事研究生产优质竹地板、竹家具材料的综合性企业。公司总部位于国家自然森林保护区--靖安县生态工业园。公司旗下的二十多家原材料分厂分布在江西各主要产竹区。主导产品是山友牌无尘企口地板，形成年产量近180万平方米的规模。产品出口日本、美国、加拿大、澳大利亚、俄罗斯、芬兰等发达国家和地区。<br />
山友地板取材于靖安的优质竹材，彩用全套德国、台湾著名品牌的专业设备。经过科学的工艺管理，配以日本、德国原产的胶水和耐磨UV漆，受到国内外客户的认可和好评。<br />
山友公司秉持自然、环保、优质、健康的理念，推动竹地板这个新兴的行业不断地向前发展。<br />
山友竹地板优点： 山友竹地板表面纹理清晰、透亮；漆面厚实细腻，附着力强，耐用；材质坚硬致密；手感光滑饱满；各项指标均符合国家标准，严谨的售后服务，专业的安装维护与终身保修令你如沐春风；地板浪漫与经典的结合，时尚与实用的体现。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>江西山友实业有限公司，竹地板十大品牌，全国竹地板市场放心品牌，绿色环保百佳畅销品牌，产品各项指标均符合国家标准，专业致力研究生产优质竹地板-竹家具材料的大型中日合资企业。<br />
江西山友实业有限公司是中日合资、专业从事研究生产优质竹地板、竹家具材料的综合性企业。公司总部位于国家自然森林保护区--靖安县生态工业园。公司旗下的二十多家原材料分厂分布在江西各主要产竹区。主导产品是山友牌无尘企口地板，形成年产量近180万平方米的规模。产品出口日本、美国、加拿大、澳大利亚、俄罗斯、芬兰等发达国家和地区。<br />
山友地板取材于靖安的优质竹材，彩用全套德国、台湾著名品牌的专业设备。经过科学的工艺管理，配以日本、德国原产的胶水和耐磨UV漆，受到国内外客户的认可和好评。<br />
山友公司秉持自然、环保、优质、健康的理念，推动竹地板这个新兴的行业不断地向前发展。<br />
山友竹地板优点： 山友竹地板表面纹理清晰、透亮；漆面厚实细腻，附着力强，耐用；材质坚硬致密；手感光滑饱满；各项指标均符合国家标准，严谨的售后服务，专业的安装维护与终身保修令你如沐春风；地板浪漫与经典的结合，时尚与实用的体现。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%B1%B1%E5%8F%8B',
    'title' => '山友',
    'identifier' => 'node/158',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:09:10 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '同仁堂',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '470d647f-e1df-4092-9a88-439ab5ea09cd',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366502993,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a20bb3cc-8c10-4366-862e-864b9c6cb29b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>同仁堂，是提起中药，许多人都不约而同会想到三个字。同仁堂（原名同仁堂药室，同仁堂药铺）是乐显扬创建于中国清朝康熙八年（1669年）的一家药店。其服务宗旨是“修合无人见，存心有天知”。是国内最负盛名的老药铺。历经数代、载誉300余年的北京同仁堂，如今已发展成为跨国经营的大型国有企业--同仁堂集团公司。其产品以其传统、严谨的制药工艺，显著的疗效享誉海内外。1991年晋升为国家一级企业。1998年，中国全国总工会授予同仁堂“全国五一奖状”。1997年在上海证券交易所上市。2006年同仁堂中医药文化进入国家非物资文化遗产名录。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>同仁堂，是提起中药，许多人都不约而同会想到三个字。同仁堂（原名同仁堂药室，同仁堂药铺）是乐显扬创建于中国清朝康熙八年（1669年）的一家药店。其服务宗旨是“修合无人见，存心有天知”。是国内最负盛名的老药铺。历经数代、载誉300余年的北京同仁堂，如今已发展成为跨国经营的大型国有企业--同仁堂集团公司。其产品以其传统、严谨的制药工艺，显著的疗效享誉海内外。1991年晋升为国家一级企业。1998年，中国全国总工会授予同仁堂“全国五一奖状”。1997年在上海证券交易所上市。2006年同仁堂中医药文化进入国家非物资文化遗产名录。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 264,
      ),
      2 => array(
        'tid' => 160,
      ),
      3 => array(
        'tid' => 178,
      ),
      4 => array(
        'tid' => 30,
      ),
      5 => array(
        'tid' => 313,
      ),
      6 => array(
        'tid' => 131,
      ),
      7 => array(
        'tid' => 10,
      ),
      8 => array(
        'tid' => 256,
      ),
      9 => array(
        'tid' => 326,
      ),
      10 => array(
        'tid' => 93,
      ),
      11 => array(
        'tid' => 67,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%90%8C%E4%BB%81%E5%A0%82',
    'title' => '同仁堂',
    'identifier' => 'node/65',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 08:09:53 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '莫斯利安',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '62c30779-e2c0-4f9f-9cda-4597c815c09a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365942386,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a4dd5705-595c-4a53-897e-15eee16c89dc',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">“光明‘莫斯利安’酸奶这个名字起源于‘“酸奶之乡’”保加利亚长寿村莫斯利安。”谈及这款神秘的高端酸奶，光明牛奶常温事业部总经理梁永平娓娓道来：莫斯利安是世界五大长寿村中唯一以喝酸奶而长寿著称的。那里的百岁老人比例达到每10万人中就有32位之多，超过国际长寿地区标准的4倍多。</span><br />
莫斯利安酸奶的发现<br />
诺贝尔生理暨医学奖获得者梅契尼科夫在保加利亚旅游时曾来到这个村落，发现那里百岁老人众多，后来经过多次研究发现，原来当地的村民每天都有饮用自酿酸奶的习惯，而他们的酸奶中含特有的活性益生菌L99，能够平衡肠道健康，保持身体活力，当地人称之为“上帝赐予的礼物”。梅契尼科夫提出了长寿与自酿酸奶之间关系的研究理论并发表不少著作，此后不断去到那探询究竟秘密的科学家也纷纷同样认同了这一发现。2008年7月3日，6位肩负研发中国首款长效酸奶使命的光明人也跋涉万里来到这里，并将这一神奇菌种、长寿村的秘密以及莫斯利安人“用爱心酿制的酸奶才是好酸奶”的诚挚嘱托一并带回中国，为中国家庭酿制出地道的“莫斯利安酸奶”，带给全家优质健康的生活享受。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>“光明‘莫斯利安’酸奶这个名字起源于‘“酸奶之乡’”保加利亚长寿村莫斯利安。”谈及这款神秘的高端酸奶，光明牛奶常温事业部总经理梁永平娓娓道来：莫斯利安是世界五大长寿村中唯一以喝酸奶而长寿著称的。那里的百岁老人比例达到每10万人中就有32位之多，超过国际长寿地区标准的4倍多。<br />
莫斯利安酸奶的发现<br />
诺贝尔生理暨医学奖获得者梅契尼科夫在保加利亚旅游时曾来到这个村落，发现那里百岁老人众多，后来经过多次研究发现，原来当地的村民每天都有饮用自酿酸奶的习惯，而他们的酸奶中含特有的活性益生菌L99，能够平衡肠道健康，保持身体活力，当地人称之为“上帝赐予的礼物”。梅契尼科夫提出了长寿与自酿酸奶之间关系的研究理论并发表不少著作，此后不断去到那探询究竟秘密的科学家也纷纷同样认同了这一发现。2008年7月3日，6位肩负研发中国首款长效酸奶使命的光明人也跋涉万里来到这里，并将这一神奇菌种、长寿村的秘密以及莫斯利安人“用爱心酿制的酸奶才是好酸奶”的诚挚嘱托一并带回中国，为中国家庭酿制出地道的“莫斯利安酸奶”，带给全家优质健康的生活享受。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 333,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%8E%AB%E6%96%AF%E5%88%A9%E5%AE%89',
    'title' => '莫斯利安',
    'identifier' => 'node/26',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:26:26 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '宝林纳',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3aa31fb8-d907-4448-9804-d38a3996b8be',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367668853,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a577d4e5-de99-410d-89a8-eb4197b7e0e5',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">Barlinek S.A.总部位于波兰，迄今为止已经有152年历史，于1861年创建，从事木材采伐与加工业务。1973年开始生产三层实木地板，1999年成为私有制公司，并于2005年在华沙证券交易市场上市。迄今为止，拥有欧洲最大的三层实木复合地板生产基地，是波兰最大，欧洲排名第二专业生产地板的厂商。</span><br />
现公司拥有波兰、俄罗斯、乌克兰三大生产基地，生产线全部采用德国进口的世界顶级设备，地板年生产能力超过1300万平方米。产品已覆盖到美国、俄罗斯、德国、法国、英国、意大利等54个国家和地区。<br />
宝林纳----欧洲最大的三层实木复合地板生产商<br />
创新设计----宝林纳专利的锁扣 BARCLIK，高强度稳定抗拉升。<br />
超大超宽、豪华大板：2.2m长，18cm宽度以上，皇家奢华气派。<br />
地热地板：所有的产品适用于地暖系统。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Barlinek S.A.总部位于波兰，迄今为止已经有152年历史，于1861年创建，从事木材采伐与加工业务。1973年开始生产三层实木地板，1999年成为私有制公司，并于2005年在华沙证券交易市场上市。迄今为止，拥有欧洲最大的三层实木复合地板生产基地，是波兰最大，欧洲排名第二专业生产地板的厂商。<br />
现公司拥有波兰、俄罗斯、乌克兰三大生产基地，生产线全部采用德国进口的世界顶级设备，地板年生产能力超过1300万平方米。产品已覆盖到美国、俄罗斯、德国、法国、英国、意大利等54个国家和地区。<br />
宝林纳----欧洲最大的三层实木复合地板生产商<br />
创新设计----宝林纳专利的锁扣 BARCLIK，高强度稳定抗拉升。<br />
超大超宽、豪华大板：2.2m长，18cm宽度以上，皇家奢华气派。<br />
地热地板：所有的产品适用于地暖系统。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 204,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'PL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%9D%E6%9E%97%E7%BA%B3',
    'title' => '宝林纳',
    'identifier' => 'node/146',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:00:53 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '拉菲',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2dfff61f-4fad-474c-aefd-928d554c7537',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366087262,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a59da92c-8603-43ef-944d-4b44ba06e7b7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>拉菲葡萄酒是拉菲庄园（法文：Chateau Lafite Rothschild）出产的享誉世界的法国波尔多葡萄酒之一。<br />
拉菲是目前世界上最贵一瓶葡萄酒的纪录保持者。美国的第三任总统汤马士杰弗逊（Thomas Jefferson）不单是总统，他还是十八世纪最出名的酒评家。相当于今天的世界头号评酒大师罗伯特·帕克（Robert Parker）。1985年伦敦佳士得拍卖会上，一瓶1787年由Thomas Jefferson签名的拉菲以十万五千英镑的高价由Forbes杂志老板Malcolm Forbes投得。创下并保持了世界上最贵一瓶葡萄酒的纪录。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>拉菲葡萄酒是拉菲庄园（法文：Chateau Lafite Rothschild）出产的享誉世界的法国波尔多葡萄酒之一。<br />
拉菲是目前世界上最贵一瓶葡萄酒的纪录保持者。美国的第三任总统汤马士杰弗逊（Thomas Jefferson）不单是总统，他还是十八世纪最出名的酒评家。相当于今天的世界头号评酒大师罗伯特·帕克（Robert Parker）。1985年伦敦佳士得拍卖会上，一瓶1787年由Thomas Jefferson签名的拉菲以十万五千英镑的高价由Forbes杂志老板Malcolm Forbes投得。创下并保持了世界上最贵一瓶葡萄酒的纪录。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 339,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%8B%89%E8%8F%B2',
    'title' => '拉菲',
    'identifier' => 'node/48',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-16 12:41:02 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '玛姆',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ef9c1ce4-219d-42d6-96d0-fad6867ac85c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366552246,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a5d861af-5d29-40b4-9765-b4e1648a71ed',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>绵延着一百七十多年激情与博爱交相辉映的历史，玛姆香槟无疑已经成为世代传承的精致工艺与最先进的现代科技相融合的结晶。她的精巧绝伦使之历经岁月洗涤而经久不衰。她璀璨的色泽，细腻的芳香，优雅的气泡和多样化的混合佳酿，俘获了全世界热爱生活和香槟的鉴赏家之心，成为举世的梦寐之选。<br />
2000年，Mumm香槟签约成为F1赛事的官方香槟赞助商，每站F1比赛结束后，人们都可以看到车手们在快乐地喷洒着Mumm香槟。三年后，合约到期，Mumm香槟的老板巴里耶又迅速以每年550万美元的价格与F1签约5年，因为此时他已经意识到正是此前三年与F1的合作使Mumm香槟起死回生，而最初投入F1那600万美元，也许是他一生中花得最值的一笔投入---那些颁奖台上喷洒着的香槟泡沫，成功改变了他与竞争对手各自在客户心目中的形象。MUMM香槟虽然与速度无关，然而它代言的是胜利时刻，与欢乐有关。而事实也证明MUMM香槟自从成为F1官方指定香槟后，4年间的市场认同率从5%上升到50%，成为著名的奢侈品牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>绵延着一百七十多年激情与博爱交相辉映的历史，玛姆香槟无疑已经成为世代传承的精致工艺与最先进的现代科技相融合的结晶。她的精巧绝伦使之历经岁月洗涤而经久不衰。她璀璨的色泽，细腻的芳香，优雅的气泡和多样化的混合佳酿，俘获了全世界热爱生活和香槟的鉴赏家之心，成为举世的梦寐之选。<br />
2000年，Mumm香槟签约成为F1赛事的官方香槟赞助商，每站F1比赛结束后，人们都可以看到车手们在快乐地喷洒着Mumm香槟。三年后，合约到期，Mumm香槟的老板巴里耶又迅速以每年550万美元的价格与F1签约5年，因为此时他已经意识到正是此前三年与F1的合作使Mumm香槟起死回生，而最初投入F1那600万美元，也许是他一生中花得最值的一笔投入---那些颁奖台上喷洒着的香槟泡沫，成功改变了他与竞争对手各自在客户心目中的形象。MUMM香槟虽然与速度无关，然而它代言的是胜利时刻，与欢乐有关。而事实也证明MUMM香槟自从成为F1官方指定香槟后，4年间的市场认同率从5%上升到50%，成为著名的奢侈品牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%8E%9B%E5%A7%86',
    'title' => '玛姆',
    'identifier' => 'node/81',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:50:46 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '海格',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'fb64b8f9-63e6-4afb-b439-88f463d9f5bc',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799323,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6811c7d-6b76-4468-ad9c-ca1eb224b669',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Haig海格。是苏格兰酿制威士忌酒的老店，具有比较高的知名度，其产品有标准品Haig和Pinch(12年陈豪华酒)等。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Haig海格。是苏格兰酿制威士忌酒的老店，具有比较高的知名度，其产品有标准品Haig和Pinch(12年陈豪华酒)等。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B5%B7%E6%A0%BC',
    'title' => '海格',
    'identifier' => 'node/102',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:28:43 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '摩可纳',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd1cc2eed-d659-49a9-9852-c5f5ff22ce7c',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366939261,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a6ccaeb9-942f-4375-a312-4943b8c4fd77',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Moccona咖啡，即摩可纳咖啡，发源自于荷兰，流行于澳大利亚和新西兰等世界各地。咖啡香味醇正，入口顺滑，浪漫而又富于情调。<br />
摩可纳咖啡（Moccona Coffee），也叫蒙哥那咖啡，其品牌创立于19世纪60年代，但Moccona的历史可以追溯到1753年，埃格伯特·杜威先生（Egbert Douwes）创立的杜威·埃格伯茨（Douwe Egberts）公司，公司从销售小杯咖啡、茶叶和烟叶开始，逐步扩展到荷兰全国，成为了咖啡和茶品市场上的领军人物。后远销世界各地，在澳大利亚和新西兰更是备受推崇。无论是在门店还是各大超市都能找到他们的身影。随后的数十年，Moccona推出许多咖啡品种，包括浓咖啡系列Expresso, 经典系列Classic等都广受好评。<br />
Moccona咖啡让人们体验到浪漫情怀所融入的精致生活，它不仅仅是咖啡，更是一种享受。其气味香醇，口感柔顺，品质卓越。闲暇时，来一杯或香浓或苦涩的Moccona咖啡，当Moccona滑入喉咙，也彷如恋爱的百般滋味来到心田。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Moccona咖啡，即摩可纳咖啡，发源自于荷兰，流行于澳大利亚和新西兰等世界各地。咖啡香味醇正，入口顺滑，浪漫而又富于情调。<br />
摩可纳咖啡（Moccona Coffee），也叫蒙哥那咖啡，其品牌创立于19世纪60年代，但Moccona的历史可以追溯到1753年，埃格伯特·杜威先生（Egbert Douwes）创立的杜威·埃格伯茨（Douwe Egberts）公司，公司从销售小杯咖啡、茶叶和烟叶开始，逐步扩展到荷兰全国，成为了咖啡和茶品市场上的领军人物。后远销世界各地，在澳大利亚和新西兰更是备受推崇。无论是在门店还是各大超市都能找到他们的身影。随后的数十年，Moccona推出许多咖啡品种，包括浓咖啡系列Expresso, 经典系列Classic等都广受好评。<br />
Moccona咖啡让人们体验到浪漫情怀所融入的精致生活，它不仅仅是咖啡，更是一种享受。其气味香醇，口感柔顺，品质卓越。闲暇时，来一杯或香浓或苦涩的Moccona咖啡，当Moccona滑入喉咙，也彷如恋爱的百般滋味来到心田。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%91%A9%E5%8F%AF%E7%BA%B3',
    'title' => '摩可纳',
    'identifier' => 'node/110',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 09:21:01 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '纽麦福',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '86f4856c-278a-4d63-aa82-fdf6c456aa0f',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365928330,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'a93a33f0-6838-4209-9cad-897285165c22',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
Goodman Fielder成立于1909年,是澳洲最大上市食品公司，亦是澳大利亚和新西兰最大的食品油脂供应商，前身为Geo Fielder有限公司，公司总部设于墨尔本及悉尼,共计员工7000多人。业务范围涉及全球25个国家和地区，每天发货到全球30000个销售单位。拥有大量的伴随着新西兰和澳大利亚几代人成长的食品品牌。涵盖从早餐，午餐到晚餐，零食的所有品类。设有60间工厂,遍布澳洲、新西兰、太平洋及亚洲等多个国家及地区。<br />
Meadow Fresh由Goodman Fielder提供。Goodman Fielder作为奶制品专家，是新西兰最大的牛奶公司之一, Meadow Fresh 更是新西兰牛奶和酸奶的领导品牌。<br />
Meadow Fresh 在新西兰有50多年的历史，目前在新西兰和其他的15个国家是领导性的奶制品品牌。<br />
Meadow Fresh UHT 牛奶生产于新西兰南岛的Christchurch 基督城工厂, 采用的是新鲜纯正的新西兰牛奶。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Goodman Fielder成立于1909年,是澳洲最大上市食品公司，亦是澳大利亚和新西兰最大的食品油脂供应商，前身为Geo Fielder有限公司，公司总部设于墨尔本及悉尼,共计员工7000多人。业务范围涉及全球25个国家和地区，每天发货到全球30000个销售单位。拥有大量的伴随着新西兰和澳大利亚几代人成长的食品品牌。涵盖从早餐，午餐到晚餐，零食的所有品类。设有60间工厂,遍布澳洲、新西兰、太平洋及亚洲等多个国家及地区。<br />
Meadow Fresh由Goodman Fielder提供。Goodman Fielder作为奶制品专家，是新西兰最大的牛奶公司之一, Meadow Fresh 更是新西兰牛奶和酸奶的领导品牌。<br />
Meadow Fresh 在新西兰有50多年的历史，目前在新西兰和其他的15个国家是领导性的奶制品品牌。<br />
Meadow Fresh UHT 牛奶生产于新西兰南岛的Christchurch 基督城工厂, 采用的是新鲜纯正的新西兰牛奶。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%BA%BD%E9%BA%A6%E7%A6%8F',
    'title' => '纽麦福',
    'identifier' => 'node/16',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 16:32:10 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '百事吉',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ba0ce238-a9a2-44fb-989e-ddb58e8f15dd',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798036,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aa5af146-cca3-48d7-9a2c-e847e8af8583',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Bisquit百事吉。始创于1819年，经过一百八十余年的发展，现已成为欧洲最大的蒸馏酒酿造厂之一。品种有“三星”、“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）、“Bisquit Bubonche VSOP”百事吉·杜邦逊最佳陈年、“Extra Bisquit”百事吉远年干邑以及现在在全球限量发售的“百事吉世纪珍藏”。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Bisquit百事吉。始创于1819年，经过一百八十余年的发展，现已成为欧洲最大的蒸馏酒酿造厂之一。品种有“三星”、“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）、“Bisquit Bubonche VSOP”百事吉·杜邦逊最佳陈年、“Extra Bisquit”百事吉远年干邑以及现在在全球限量发售的“百事吉世纪珍藏”。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%99%BE%E4%BA%8B%E5%90%89',
    'title' => '百事吉',
    'identifier' => 'node/90',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:07:16 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '拿破仑',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b82dda55-8782-4b61-b663-45144c3e1a40',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366797391,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'aa97e809-e33c-4873-94a8-b0a7141f13e0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Courvosier拿破仑。音译为“库瓦齐埃”、 又称康福寿。库瓦齐埃公司创立于1790年，该公司在拿破仑一世在位时，由于献上自己公司酿制的优质白兰地而受到赞赏。在拿破仑三世时，它被指定为白兰地酒的承办商。是法国著名干邑白兰地。等级品种分类除三星、“VSOP”(陈酿)、“Napoleon”(拿破仑)和“XO”(特酿)以外，还包括Courvoisier Imperiale库瓦齐埃高级干邑白兰地、Courvoisier Napoleon Cognac库瓦齐埃拿破仑干邑、Courvoisier Extra库瓦齐埃特级以及“VOC迪坎特”和限量发售的“耶尔迪”等。从1988年起，该公司将法国绘画大师伊德的7幅作品分别投影在干邑白兰地酒瓶上。第一幅是有关葡萄园的，名为“葡萄树”;第二幅名为“丰收”，以少女手持葡萄在祥和的阳光下祝福，呈现一片富饶景象;第三幅名为“精练”，描述了蒸馏白兰地酒的过程;第四幅名为“陈酿”，以人们凝视橡木桶的陈年白兰地酒为画面，来表现拿破仑白兰地酒严格的熟化工艺;第五幅名为“品尝”等。这7幅画是伊德出于对拿破仑白兰地酒的热爱而特别为拿破仑干邑白兰地酒设计的。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Courvosier拿破仑。音译为“库瓦齐埃”、 又称康福寿。库瓦齐埃公司创立于1790年，该公司在拿破仑一世在位时，由于献上自己公司酿制的优质白兰地而受到赞赏。在拿破仑三世时，它被指定为白兰地酒的承办商。是法国著名干邑白兰地。等级品种分类除三星、“VSOP”(陈酿)、“Napoleon”(拿破仑)和“XO”(特酿)以外，还包括Courvoisier Imperiale库瓦齐埃高级干邑白兰地、Courvoisier Napoleon Cognac库瓦齐埃拿破仑干邑、Courvoisier Extra库瓦齐埃特级以及“VOC迪坎特”和限量发售的“耶尔迪”等。从1988年起，该公司将法国绘画大师伊德的7幅作品分别投影在干邑白兰地酒瓶上。第一幅是有关葡萄园的，名为“葡萄树”;第二幅名为“丰收”，以少女手持葡萄在祥和的阳光下祝福，呈现一片富饶景象;第三幅名为“精练”，描述了蒸馏白兰地酒的过程;第四幅名为“陈酿”，以人们凝视橡木桶的陈年白兰地酒为画面，来表现拿破仑白兰地酒严格的熟化工艺;第五幅名为“品尝”等。这7幅画是伊德出于对拿破仑白兰地酒的热爱而特别为拿破仑干邑白兰地酒设计的。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%8B%BF%E7%A0%B4%E4%BB%91',
    'title' => '拿破仑',
    'identifier' => 'node/88',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 17:56:31 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '柏图斯',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'af0a37a2-9a16-4c09-adfd-0d6d8744671b',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365947084,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'af20b601-fd80-40d9-9d41-36555329c960',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>在波尔多最著名的四个优质红酒产区分别是：美度（Medoc），格拉夫（Graves），圣达美隆（St.emillon）和宝物隆（Pomeral）。宝物隆虽然没有美度那样的光辉历史，又是四大产区中最小的区域，但却是波尔多目前最璀璨的明珠。区内酒庄的数目只有不到二百个，但这里的酒没有便宜货。主要原因当然是其区内的微型气候（Micro Climate）和土壤（Terroir）加上少规模庄园式的精工细致，能酿造出不少稀世之珍。而其中的第一把交椅无可争议地由柏图斯争得。<br />
法国柏图[1]斯庄园占地十二公顷，拥有11.5公顷的葡萄园。园内表层土壤是纯粘土，之下又有一层陶土，更深一层则是含铁量很高的石灰土，并有良好的排水系统。所种植的葡萄品种以美乐为主，约占95%。剩余的部分为品丽珠，比例为5%。由于品丽珠较早成熟，所以除非年份特别好，庄园一般不用来酿酒。经营者在葡萄园的更新上采取较传统的方式，亦即通过品选，以最上选者作为“母株”，这和 1946年康帝在铲除老根时的方法是一样的。葡萄园也采取严格的“控果”，每株保留几个芽眼，每个芽眼仅留下一串葡萄。目标是全熟，但避免超熟，否则即会影响葡萄酒细腻的风味。柏图斯(柏翠酒庄)的成功当然首先是品质取胜。而优秀的品质是来源于其对追求酿酒艺术的完美主义态度。年产量约五千箱酒。其选用的葡萄品种90%以上是美乐(Merlot)，所以它也是The greatest Merlot of the world。柏图斯葡萄园(柏翠酒庄)的种植密度相当低，一般只是每公顷五千至六千棵。每棵葡萄树的挂果也只限几串葡萄，以确保每粒葡萄汁液的浓度。使用的树龄都在四十至九十年之间，择摘时全部统一在干爽和阳光充足的下午，以确保阳光已将前夜留在葡萄上的露水晒干。如果阳光不够或风不够，他们会用直升机在庄园上把葡萄吹干才摘。摘择时他们会用上二百人同时进行，一次性把葡萄摘完。在酿造的过程中，柏图斯(柏翠酒庄)也是与众不同。首先他们全部采用全新的橡木桶。在一至二年的木桶陈酿中，他们每三个月就换一次木桶，让酒充分吸收不同橡木的香气。这种不惜成本的做法至今为止还是无人能比。<br />
1925年，由一位饭店的老板娘鲁芭夫人(Mam．Loubat)从园主阿诺(Arnaud)家族购得后，才改变了柏图斯的命运。当时鲁芭夫人家族已在本地区拥有两家酒厂，弟是本行政区利布尔讷(Libourne)市市长，她本人也是一个成功的企业家，在利布尔讷市拥有一家饭店。购得柏图斯后，她便爱上了本园。鲁芭夫人致力于打响其知名度。首先，她将本酒价钱提高，使得其不再是“泛泛之酒”。其次，将柏图斯介绍给她所认识的富豪朋友，柏图斯因此在法国的高级社交圈内迅速流行起来，不再是“乡下绅士”的专利品了！随后，鲁芭夫人又开始了彻底决定柏图斯日后身价的任务：打进英国的皇室。当伊丽莎白二世订婚的时候，鲁芭夫人进献的柏图斯已是皇室贵族们的杯中物。所以，1947年女王婚礼正式举行之际，鲁芭夫人也是获有皇室礼宾司寄发印有皇室雄狮与独角白马王徽喜帖的贵宾。人人都知道，正像歌剧新手要成名，必先在意大利，特别是在米兰斯卡拉歌剧院受到喝彩，才可以展开光辉灿烂的演唱生涯一样，一瓶有志‘上升”的葡萄酒要受肯定的“史卡拉”不在巴黎，而是在伦敦！所以，鲁芭夫人倒也会利用此千载难逢的时机，带着自己园中的佳酿径赴伦敦，一下子就成功地使伦敦一流餐厅的酒单上加列了柏图斯的名字。鲁芭夫人善用的这种经营上层社会的交际手腕，日后就变成了柏图斯攻城掠地的不二法门。<br />
1961年，鲁芭夫人去世。鲁芭夫人没有子女，只有两位姊妹有孩子可以继承，但皆不能担负大任，所以鲁芭夫人生前就预做安排，将本堡股份分成3份，一份让售予酿酒甚有成就的木艾(Jean-Pierre Moueix)家族，另两份由外甥继承。1964年，木艾购得其中一位的继承权，而成为经营者。木艾家族本以经营牧场、牲口买卖为主业，善于并购一些经营不善或面临资金短缺窘境的一流酒厂。“木艾王国”旗下的酒厂包括拓塔诺瓦堡及彭马鲁拉图堡(Latour a Pomerol)、弗尔·柏图斯（La Fleur-Petrus）。木艾家族在20世纪60年代重施故伎，又攻占了白宫，受到肯尼迪家族（特别是一切唯法国是尚的杰奎琳）的赞赏。几乎在一夜之间，华府的社交界名人竞相谈论柏图斯，绅士名媛若不知柏图斯为何许物，就会被认为是来自德州的乡巴佬。柏图斯经此一跃而登龙门，也成就了鲁芭夫人生前的遗愿。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>在波尔多最著名的四个优质红酒产区分别是：美度（Medoc），格拉夫（Graves），圣达美隆（St.emillon）和宝物隆（Pomeral）。宝物隆虽然没有美度那样的光辉历史，又是四大产区中最小的区域，但却是波尔多目前最璀璨的明珠。区内酒庄的数目只有不到二百个，但这里的酒没有便宜货。主要原因当然是其区内的微型气候（Micro Climate）和土壤（Terroir）加上少规模庄园式的精工细致，能酿造出不少稀世之珍。而其中的第一把交椅无可争议地由柏图斯争得。<br />
法国柏图[1]斯庄园占地十二公顷，拥有11.5公顷的葡萄园。园内表层土壤是纯粘土，之下又有一层陶土，更深一层则是含铁量很高的石灰土，并有良好的排水系统。所种植的葡萄品种以美乐为主，约占95%。剩余的部分为品丽珠，比例为5%。由于品丽珠较早成熟，所以除非年份特别好，庄园一般不用来酿酒。经营者在葡萄园的更新上采取较传统的方式，亦即通过品选，以最上选者作为“母株”，这和 1946年康帝在铲除老根时的方法是一样的。葡萄园也采取严格的“控果”，每株保留几个芽眼，每个芽眼仅留下一串葡萄。目标是全熟，但避免超熟，否则即会影响葡萄酒细腻的风味。柏图斯(柏翠酒庄)的成功当然首先是品质取胜。而优秀的品质是来源于其对追求酿酒艺术的完美主义态度。年产量约五千箱酒。其选用的葡萄品种90%以上是美乐(Merlot)，所以它也是The greatest Merlot of the world。柏图斯葡萄园(柏翠酒庄)的种植密度相当低，一般只是每公顷五千至六千棵。每棵葡萄树的挂果也只限几串葡萄，以确保每粒葡萄汁液的浓度。使用的树龄都在四十至九十年之间，择摘时全部统一在干爽和阳光充足的下午，以确保阳光已将前夜留在葡萄上的露水晒干。如果阳光不够或风不够，他们会用直升机在庄园上把葡萄吹干才摘。摘择时他们会用上二百人同时进行，一次性把葡萄摘完。在酿造的过程中，柏图斯(柏翠酒庄)也是与众不同。首先他们全部采用全新的橡木桶。在一至二年的木桶陈酿中，他们每三个月就换一次木桶，让酒充分吸收不同橡木的香气。这种不惜成本的做法至今为止还是无人能比。<br />
1925年，由一位饭店的老板娘鲁芭夫人(Mam．Loubat)从园主阿诺(Arnaud)家族购得后，才改变了柏图斯的命运。当时鲁芭夫人家族已在本地区拥有两家酒厂，弟是本行政区利布尔讷(Libourne)市市长，她本人也是一个成功的企业家，在利布尔讷市拥有一家饭店。购得柏图斯后，她便爱上了本园。鲁芭夫人致力于打响其知名度。首先，她将本酒价钱提高，使得其不再是“泛泛之酒”。其次，将柏图斯介绍给她所认识的富豪朋友，柏图斯因此在法国的高级社交圈内迅速流行起来，不再是“乡下绅士”的专利品了！随后，鲁芭夫人又开始了彻底决定柏图斯日后身价的任务：打进英国的皇室。当伊丽莎白二世订婚的时候，鲁芭夫人进献的柏图斯已是皇室贵族们的杯中物。所以，1947年女王婚礼正式举行之际，鲁芭夫人也是获有皇室礼宾司寄发印有皇室雄狮与独角白马王徽喜帖的贵宾。人人都知道，正像歌剧新手要成名，必先在意大利，特别是在米兰斯卡拉歌剧院受到喝彩，才可以展开光辉灿烂的演唱生涯一样，一瓶有志‘上升”的葡萄酒要受肯定的“史卡拉”不在巴黎，而是在伦敦！所以，鲁芭夫人倒也会利用此千载难逢的时机，带着自己园中的佳酿径赴伦敦，一下子就成功地使伦敦一流餐厅的酒单上加列了柏图斯的名字。鲁芭夫人善用的这种经营上层社会的交际手腕，日后就变成了柏图斯攻城掠地的不二法门。<br />
1961年，鲁芭夫人去世。鲁芭夫人没有子女，只有两位姊妹有孩子可以继承，但皆不能担负大任，所以鲁芭夫人生前就预做安排，将本堡股份分成3份，一份让售予酿酒甚有成就的木艾(Jean-Pierre Moueix)家族，另两份由外甥继承。1964年，木艾购得其中一位的继承权，而成为经营者。木艾家族本以经营牧场、牲口买卖为主业，善于并购一些经营不善或面临资金短缺窘境的一流酒厂。“木艾王国”旗下的酒厂包括拓塔诺瓦堡及彭马鲁拉图堡(Latour a Pomerol)、弗尔·柏图斯（La Fleur-Petrus）。木艾家族在20世纪60年代重施故伎，又攻占了白宫，受到肯尼迪家族（特别是一切唯法国是尚的杰奎琳）的赞赏。几乎在一夜之间，华府的社交界名人竞相谈论柏图斯，绅士名媛若不知柏图斯为何许物，就会被认为是来自德州的乡巴佬。柏图斯经此一跃而登龙门，也成就了鲁芭夫人生前的遗愿。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 339,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%9F%8F%E5%9B%BE%E6%96%AF',
    'title' => '柏图斯',
    'identifier' => 'node/33',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 21:44:44 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '泸州老窖',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c772b7eb-4320-4958-842c-86bab1046de1',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366091092,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b40d275b-216b-48ae-a798-418e86fb222a',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>泸州老窖酒的酿造，钟天地之灵气，聚日月之精华，贯华夏之慧根，酿人间之琼浆。其施曲蒸酿，贮存醇化之工艺，不仅开中国浓香型白酒之先河，更是中国酿酒历史文化的丰碑。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>泸州老窖酒的酿造，钟天地之灵气，聚日月之精华，贯华夏之慧根，酿人间之琼浆。其施曲蒸酿，贮存醇化之工艺，不仅开中国浓香型白酒之先河，更是中国酿酒历史文化的丰碑。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B3%B8%E5%B7%9E%E8%80%81%E7%AA%96',
    'title' => '泸州老窖',
    'identifier' => 'node/49',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-16 13:44:52 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '轩尼诗',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '7db8cd6a-a77b-41aa-9329-6d808a555cc0',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366797209,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b48d8d36-f174-45a9-bcc5-eb0a336663e8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>轩尼诗——法国LVMH集团旗下品牌。爱尔兰人李察·轩尼诗，与1765年在法国康那克地方创立了轩尼诗公司。经过了一个世纪，正逢制造白兰地热潮，制造商到处林立，令酒类爱好者困扰不已，这时正好是1865年拿破伦三世时代，该公司开始使用能够证明产品级别及品质的星号，并且获得极高评价，后来轩尼诗就成了白兰地酒的代名词，一直存在至今。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>轩尼诗——法国LVMH集团旗下品牌。爱尔兰人李察·轩尼诗，与1765年在法国康那克地方创立了轩尼诗公司。经过了一个世纪，正逢制造白兰地热潮，制造商到处林立，令酒类爱好者困扰不已，这时正好是1865年拿破伦三世时代，该公司开始使用能够证明产品级别及品质的星号，并且获得极高评价，后来轩尼诗就成了白兰地酒的代名词，一直存在至今。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%BD%A9%E5%B0%BC%E8%AF%97',
    'title' => '轩尼诗',
    'identifier' => 'node/87',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 17:53:29 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '创鑫研',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '4c1b5536-efeb-4619-94fe-883aad75826a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367484396,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b4fcde5d-0700-4f9d-9a42-2fc3b4d03167',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江创鑫木业有限公司位于中国实木地板之都——浙江南浔，我国木地板行业起步最早的生产制造企业之一，中国林产工业协会地板专业委员会常务理事单位，木蜡油地板首创企业。此外创鑫地板还被评为中国驰名商标、浙江名牌、浙江省著名商标等荣誉。<br />
创鑫以“中国木地板行业强势品牌”目标，始终坚持品牌化发展战略，用心创造，追求卓越。创鑫分别在浙江南浔、江苏吴江拥有两大生产研发基地，在全国100多个大中城市设立了400多家专卖店。创鑫以良好的市场信誉赢得广大消费者的信赖。生命不息，发展不止。<br />
创鑫积极进取，不断开拓，使企业获得突飞猛进的发展。目前创鑫木业已成为全球领先的高品质木制品生产商和稳定供应商。德国先进的生产设备、丰富的系列产品、专业的技术表现、覆盖全球的销售网络、完善的售前售后服务，以及与合作伙伴理念的融合，使创鑫木业在国内、国际市场中纵横捭阖。<br />
创新是一个企业发展的不竭动力，公司始终注重技术创新和产品研发，在与国内外著名木材研究机构开展交流合作的同时，不断加大科研投入力度，并在浙江林学院设立了“创鑫技术研发中心”。公司同意大利、德国、瑞士三国木材研发机构共同研究推出的“钢瓷面壁虎超附着力技术”，标志着创鑫技术进入了国际领先水平。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江创鑫木业有限公司位于中国实木地板之都——浙江南浔，我国木地板行业起步最早的生产制造企业之一，中国林产工业协会地板专业委员会常务理事单位，木蜡油地板首创企业。此外创鑫地板还被评为中国驰名商标、浙江名牌、浙江省著名商标等荣誉。<br />
创鑫以“中国木地板行业强势品牌”目标，始终坚持品牌化发展战略，用心创造，追求卓越。创鑫分别在浙江南浔、江苏吴江拥有两大生产研发基地，在全国100多个大中城市设立了400多家专卖店。创鑫以良好的市场信誉赢得广大消费者的信赖。生命不息，发展不止。<br />
创鑫积极进取，不断开拓，使企业获得突飞猛进的发展。目前创鑫木业已成为全球领先的高品质木制品生产商和稳定供应商。德国先进的生产设备、丰富的系列产品、专业的技术表现、覆盖全球的销售网络、完善的售前售后服务，以及与合作伙伴理念的融合，使创鑫木业在国内、国际市场中纵横捭阖。<br />
创新是一个企业发展的不竭动力，公司始终注重技术创新和产品研发，在与国内外著名木材研究机构开展交流合作的同时，不断加大科研投入力度，并在浙江林学院设立了“创鑫技术研发中心”。公司同意大利、德国、瑞士三国木材研发机构共同研究推出的“钢瓷面壁虎超附着力技术”，标志着创鑫技术进入了国际领先水平。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%88%9B%E9%91%AB%E7%A0%94',
    'title' => '创鑫研',
    'identifier' => 'node/127',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 16:46:36 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '和酒',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e4cf3c5a-e02a-451d-84b8-7533e414fbda',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365992210,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b5bda4a2-f848-419a-80bf-24c34b4cddca',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
上海冠生园华光酿酒药业有限公司系冠生园(集团)有限公司所属的全资子公司，生产和酒系列产品。<br />
公司自97年开始研发并成功运作了营养型黄酒（和酒）品牌；01年被授予“全国食品行业质量效益型先进企业”称号。<br />
产品使用的“和”注册商标在00年被认定为“上海市著名商标”，目前正在积极进行驰名商标的认定；99年申请《一种营养型黄酒‘和酒’及其制造方法》，03年被授予发明专利。<br />
和酒是公司结合自身40多年来开发和生产营养保健食品的经验，将传统中医药理论、现代药学研究与消费者的需求相结合研制开发的低酒精度、富含营养的产品。<br />
“和酒”对中国黄酒业的发展做出了七个方面的贡献：<br />
1、 和酒打破了黄酒发展的瓶颈。基本上解决了黄酒的浑浊、沉淀等问题。<br />
2、和酒创新独特制作工艺，并获得发明专利，和酒晶莹剔透，其观赏性可与XO媲美。<br />
3、首创“营养型黄酒”全新概念。强化了黄酒对提高人体免疫功能的作用，并具有滋肾润肺、补肝明目等作用。<br />
4、原创清醇淡雅的口味，喝了不上头、不口干。更适合餐桌上的“沟通与合作”。<br />
5、注入丰富的品牌文化内涵。“和谐、和平、和睦、和气生财”等意喻使“和酒”在重大国际活动时作为指定用酒。如：APEC会议、上海市委领导宴请台湾国民党和亲民党主席、海峡两岸直航、钓鱼台国宾馆用酒等。<br />
6、创新了营销思路和品牌策略。“品和酒，交真朋友”广告语脍炙人口、家喻户晓。品和酒成为一种时尚。<br />
7、改写了中国黄酒的历史，使黄酒的消费群体从中老年扩展到老中青。和酒成为黄酒业发展的第三个里程标志。<br />
和酒销售额名列上海市场占有率第一位，2006年销售额达到5.5亿元。<br />
2004年，和酒被选入国宾馆钓鱼台，成为国宴用酒；同年，被国家质检总局认定为原产地标记注册产品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>上海冠生园华光酿酒药业有限公司系冠生园(集团)有限公司所属的全资子公司，生产和酒系列产品。<br />
公司自97年开始研发并成功运作了营养型黄酒（和酒）品牌；01年被授予“全国食品行业质量效益型先进企业”称号。<br />
产品使用的“和”注册商标在00年被认定为“上海市著名商标”，目前正在积极进行驰名商标的认定；99年申请《一种营养型黄酒‘和酒’及其制造方法》，03年被授予发明专利。<br />
和酒是公司结合自身40多年来开发和生产营养保健食品的经验，将传统中医药理论、现代药学研究与消费者的需求相结合研制开发的低酒精度、富含营养的产品。<br />
“和酒”对中国黄酒业的发展做出了七个方面的贡献：<br />
1、 和酒打破了黄酒发展的瓶颈。基本上解决了黄酒的浑浊、沉淀等问题。<br />
2、和酒创新独特制作工艺，并获得发明专利，和酒晶莹剔透，其观赏性可与XO媲美。<br />
3、首创“营养型黄酒”全新概念。强化了黄酒对提高人体免疫功能的作用，并具有滋肾润肺、补肝明目等作用。<br />
4、原创清醇淡雅的口味，喝了不上头、不口干。更适合餐桌上的“沟通与合作”。<br />
5、注入丰富的品牌文化内涵。“和谐、和平、和睦、和气生财”等意喻使“和酒”在重大国际活动时作为指定用酒。如：APEC会议、上海市委领导宴请台湾国民党和亲民党主席、海峡两岸直航、钓鱼台国宾馆用酒等。<br />
6、创新了营销思路和品牌策略。“品和酒，交真朋友”广告语脍炙人口、家喻户晓。品和酒成为一种时尚。<br />
7、改写了中国黄酒的历史，使黄酒的消费群体从中老年扩展到老中青。和酒成为黄酒业发展的第三个里程标志。<br />
和酒销售额名列上海市场占有率第一位，2006年销售额达到5.5亿元。<br />
2004年，和酒被选入国宾馆钓鱼台，成为国宴用酒；同年，被国家质检总局认定为原产地标记注册产品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%92%8C%E9%85%92',
    'title' => '和酒',
    'identifier' => 'node/37',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:16:50 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '次玛陀',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2f519b11-4855-4b48-8348-0f54f499dc38',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366122794,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b75ba13e-ee01-4eb5-967c-d1c2e37b71a2',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>西藏真康生物科技开发有限公司是拉萨市主营冬虫夏草的少数民族企业，产品选自西藏那曲地区，业务范围涵盖京沪粤江浙闽等地区。<br />
特点是产自西藏那曲海拔4500以上的羌塘草原上，在长期进化过程中形成对强紫外线、低温、风大、缺氧、气压低等青藏高原气候的适应性，其生理特性强，色泽和体型上乘而在海内外享有盛誉，是高品质的冬虫夏草。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>西藏真康生物科技开发有限公司是拉萨市主营冬虫夏草的少数民族企业，产品选自西藏那曲地区，业务范围涵盖京沪粤江浙闽等地区。<br />
特点是产自西藏那曲海拔4500以上的羌塘草原上，在长期进化过程中形成对强紫外线、低温、风大、缺氧、气压低等青藏高原气候的适应性，其生理特性强，色泽和体型上乘而在海内外享有盛誉，是高品质的冬虫夏草。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 256,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%AC%A1%E7%8E%9B%E9%99%80',
    'title' => '次玛陀',
    'identifier' => 'node/50',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-16 22:33:14 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '白雪',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bc1e6e64-39a2-4761-a4d4-03aa039f6a98',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366550963,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b781eda5-2afb-4396-a3fb-e7595c5b9fd4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">白雪香槟诞生于1785年，至今旗下三款主要香槟分别以红、紫、黑命名，不仅颜色一款比一款深沉高贵，口感也一款比一款典雅细腻，品牌线路相当清晰。红牌口感年轻时尚，但给人印象不深。紫醇是半甜香槟，甜度相当高，也很圆润，有人甚至拿它当甜酒饮用，周围的人饮后都留下深刻印象。这两种香槟的口味都可用“简单明了”来表达，大概就是所谓的“国际化”吧。</span><br />
白雪香槟的产地Reims是香槟区的经济首府，也是法国的历史重镇，素有"王者之城"的美誉，因为自11世纪起，每一任法国国王都必须到这个“加冕之都”受冕登基。到了今天，白雪香槟已成为名副其实的“时尚派对制造者”，在明星云集的盛会如颁奖典礼、时装秀、电影首映等场合，都可以看到白雪香槟的踪影。好莱坞女影星玛丽莲·梦露就曾说过：“我穿的是ChanelNo.5，我喝的是Piper-HeidsieckChampagne。”白雪香槟的公关总监AlexandraRendall女士介绍说，新上市的白雪黑钻香槟将针对男性香槟品鉴者与奢侈品追慕者，并进一步寻求与奢侈品牌尤其是珠宝行业品牌的合作。<br />
为了体现白雪黑钻香槟的尊贵典雅，它采用了独特的黑色瓶身及包装，没有瓶标，而是直接将名字刻在瓶身上，正如珠宝设计师把自己的名字镌刻在珠宝上一样。在这别出心裁的瓶身设计背后，还积淀了白雪海瑟克家族两个多世纪的历史传统与质量精髓。1883年，白雪香槟百年诞辰之际，白雪香槟的合作伙伴HenriGuillaume委托曾为俄国皇室工作的著名珠宝商Faberge设计了一个特别的瓶子。这个特别的瓶子以金、青金石和钻石装饰，被称为“CuvéeRare”。一个世纪以后，为了庆祝白雪香槟酒厂诞生两百周年，VanCleef与Arpels共同设计了新版本的“CuvéeRare”瓶子，并在法国凡尔赛宫举行了揭幕发布会。<br />
而顶级的黑钻，没有酒标，直接将品名刻在瓶身，从外表上看已经先声夺人。口感则饱满精致，充满层次感，活跃的气泡刺激舌尖，动感十足，配得上黑色酒瓶予人的“有分量”的感觉。如果说前两款香槟像非典型的法国香槟，那么，黑钻仍带有典雅的法国气质。据说白雪香槟被若干个王室选为御用香槟，估计多倚仗黑钻的功劳。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>白雪香槟诞生于1785年，至今旗下三款主要香槟分别以红、紫、黑命名，不仅颜色一款比一款深沉高贵，口感也一款比一款典雅细腻，品牌线路相当清晰。红牌口感年轻时尚，但给人印象不深。紫醇是半甜香槟，甜度相当高，也很圆润，有人甚至拿它当甜酒饮用，周围的人饮后都留下深刻印象。这两种香槟的口味都可用“简单明了”来表达，大概就是所谓的“国际化”吧。<br />
白雪香槟的产地Reims是香槟区的经济首府，也是法国的历史重镇，素有"王者之城"的美誉，因为自11世纪起，每一任法国国王都必须到这个“加冕之都”受冕登基。到了今天，白雪香槟已成为名副其实的“时尚派对制造者”，在明星云集的盛会如颁奖典礼、时装秀、电影首映等场合，都可以看到白雪香槟的踪影。好莱坞女影星玛丽莲·梦露就曾说过：“我穿的是ChanelNo.5，我喝的是Piper-HeidsieckChampagne。”白雪香槟的公关总监AlexandraRendall女士介绍说，新上市的白雪黑钻香槟将针对男性香槟品鉴者与奢侈品追慕者，并进一步寻求与奢侈品牌尤其是珠宝行业品牌的合作。<br />
为了体现白雪黑钻香槟的尊贵典雅，它采用了独特的黑色瓶身及包装，没有瓶标，而是直接将名字刻在瓶身上，正如珠宝设计师把自己的名字镌刻在珠宝上一样。在这别出心裁的瓶身设计背后，还积淀了白雪海瑟克家族两个多世纪的历史传统与质量精髓。1883年，白雪香槟百年诞辰之际，白雪香槟的合作伙伴HenriGuillaume委托曾为俄国皇室工作的著名珠宝商Faberge设计了一个特别的瓶子。这个特别的瓶子以金、青金石和钻石装饰，被称为“CuvéeRare”。一个世纪以后，为了庆祝白雪香槟酒厂诞生两百周年，VanCleef与Arpels共同设计了新版本的“CuvéeRare”瓶子，并在法国凡尔赛宫举行了揭幕发布会。<br />
而顶级的黑钻，没有酒标，直接将品名刻在瓶身，从外表上看已经先声夺人。口感则饱满精致，充满层次感，活跃的气泡刺激舌尖，动感十足，配得上黑色酒瓶予人的“有分量”的感觉。如果说前两款香槟像非典型的法国香槟，那么，黑钻仍带有典雅的法国气质。据说白雪香槟被若干个王室选为御用香槟，估计多倚仗黑钻的功劳。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 337,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%99%BD%E9%9B%AA',
    'title' => '白雪',
    'identifier' => 'node/78',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 21:29:23 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '恒寿堂',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '93a72ed8-49e5-4001-8ede-7adf71ce7f70',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b9d5e34c-6390-4ea5-bdad-d89d57013542',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>上海恒寿堂药业有限公司是一家集科研，开发、生产、行销于一体，专业从事高科技生物医药保健系列产品的大型民营企业。 恒银集团于1997年11月投资创办了上海恒寿堂药业有限公司，跨出了恒银发展史上的关键一步。实现了从资本经营向实业经营的转变i.cn。作为一家民营高科技企业，恒寿堂吸取了众多中国成功企业的经验和国外优秀企业的先进管理方法，按现代企业管理制度标准在保健品领域中雄心壮志，追求卓越。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>上海恒寿堂药业有限公司是一家集科研，开发、生产、行销于一体，专业从事高科技生物医药保健系列产品的大型民营企业。 恒银集团于1997年11月投资创办了上海恒寿堂药业有限公司，跨出了恒银发展史上的关键一步。实现了从资本经营向实业经营的转变i.cn。作为一家民营高科技企业，恒寿堂吸取了众多中国成功企业的经验和国外优秀企业的先进管理方法，按现代企业管理制度标准在保健品领域中雄心壮志，追求卓越。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 312,
      ),
      1 => array(
        'tid' => 231,
      ),
      2 => array(
        'tid' => 10,
      ),
      3 => array(
        'tid' => 256,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%81%92%E5%AF%BF%E5%A0%82',
    'title' => '恒寿堂',
    'identifier' => 'node/6',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '汉斯格雅',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '61819b6f-b7e4-44c6-86ca-825f1ebf38e0',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367074530,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'b9eca302-3c1a-474d-95cf-e51cac26a61b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>1901年，汉斯·格雅（Hans Grohe）先生在德国希尔塔赫创办了以其名字命名的汉斯格雅公司。百多年来，汉斯格雅秉承黑森林的优良传统－－对工艺的精益求精及细节上的完美处理，和源自对于水的无限热爱和对生命的追求——汉斯格雅始终代表着国际卫浴行业的最高水准，引领国际卫浴界的风尚潮流。它以“环保、创新、人导、设计”为产品灵魂，致力于给消费者带来最舒适的沐浴乐趣，享受属于浴室的无限水乐趣。汉斯格雅拥有了今日的世界顶级制造商的辉煌。德国汉斯格雅汉斯格雅致力于生产花洒、龙头及全套淋浴设备，潜心为客户打造更温馨舒适的整体卫浴空间。<br />
今天，汉斯格雅作为一家跨国公司，在世界三大洲设有十家工厂，并在全球50多个国家和地区设有销售公司或服务中心。无数的技术创新及超过300个国际设计奖项使得汉斯格雅集团成为当今全球最重要、最具创造力的卫浴品牌。<br />
2011年，汉斯格雅率旗下品牌汉斯格雅hansgrohe、雅生Axor、福络Pharo和潘托斯Pantos创造了7.64亿欧元的销售额，总营业额较2010年增长百分之10.3（2010：6.93亿），汉斯格雅中国市场有史以来成为汉斯格雅集团最大的海外市场。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1901年，汉斯·格雅（Hans Grohe）先生在德国希尔塔赫创办了以其名字命名的汉斯格雅公司。百多年来，汉斯格雅秉承黑森林的优良传统－－对工艺的精益求精及细节上的完美处理，和源自对于水的无限热爱和对生命的追求——汉斯格雅始终代表着国际卫浴行业的最高水准，引领国际卫浴界的风尚潮流。它以“环保、创新、人导、设计”为产品灵魂，致力于给消费者带来最舒适的沐浴乐趣，享受属于浴室的无限水乐趣。汉斯格雅拥有了今日的世界顶级制造商的辉煌。德国汉斯格雅汉斯格雅致力于生产花洒、龙头及全套淋浴设备，潜心为客户打造更温馨舒适的整体卫浴空间。<br />
今天，汉斯格雅作为一家跨国公司，在世界三大洲设有十家工厂，并在全球50多个国家和地区设有销售公司或服务中心。无数的技术创新及超过300个国际设计奖项使得汉斯格雅集团成为当今全球最重要、最具创造力的卫浴品牌。<br />
2011年，汉斯格雅率旗下品牌汉斯格雅hansgrohe、雅生Axor、福络Pharo和潘托斯Pantos创造了7.64亿欧元的销售额，总营业额较2010年增长百分之10.3（2010：6.93亿），汉斯格雅中国市场有史以来成为汉斯格雅集团最大的海外市场。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 274,
      ),
      1 => array(
        'tid' => 305,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B1%89%E6%96%AF%E6%A0%BC%E9%9B%85',
    'title' => '汉斯格雅',
    'identifier' => 'node/120',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 22:55:30 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '康维他',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'bb76851b-a09a-46d9-9494-470e3b5e4067',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366511896,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bab50c8d-81fd-4925-88c3-5546321f14eb',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>康维他公司于1970年代在新西兰的丰富湾成立。但其最初的历史可追溯i.it到1920 年代，当时年仅11岁的公司开创人克罗德。斯特拉特福德具有了他的第一个蜂箱。这最初的介入招致他终身对养蜂业和基于自然保健品的营养观念感兴味。健康的克罗德先生今年102岁了，他从不错过对大自然的尊重和对健康生活的追求，他的健康也证明了蜂蜜的神奇功效和天然保健力量。他从不错过传播他的安康和生机的时机，以及对大自然的深深的尊重。他创立的公司往常聘用100多人。他们努力于为世界各地的顾客和朋友提供高质量的自然保健品，促进安康和福利。<br />
康维他活性麦卢卡蜂蜜是世界著名的品牌。蜜蜂从麦卢卡树上采集麦卢卡蜂蜜。这种独特的新西兰植物以其药用物质而闻名。<br />
一般的蜂蜜都可的抗菌，但新西兰怀卡托大学教授彼得.莫兰博士发现了麦卢卡蜂蜜具有独特的抗菌物质基，这种物质在其它蜂蜜中尚未发现。自从发现这些物质，麦卢卡蜂蜜以其特殊的杀菌和疗伤功能而闻名于世。<br />
麦卢卡蜂蜜以强健消化系统，护理肌胃及治理伤口功效显著而闻名世界各地，实验证明，麦卢卡蜂蜜能有效对抗多种顽劣细菌。是英文 的缩写，亦即，独麦素，是量度搞菌活性成份的单位，而只有采自新西兰独有的麦卢卡树(学名：)的花蜜，才会有含有这种搞菌活性。每一瓶包装妥当的麦卢卡 蜂蜜上，授权的商标后必定尾随一个数值；数值越高即代表抗菌能力越强。活性5+ 10+ 15+ 至20+, 例如一瓶20+麦卢卡蜂蜜的抗菌能力，就相等于一瓶10+麦卢卡蜂蜜的二倍。10+以上的麦卢卡蜂蜜可以杀死细菌，用于直接治疗不同程度的肠胃疾病、免疫 系统疾病等。<br />
康维他活性麦卢卡蜂蜜经过特殊测试和包装，保证能够提供最高品质。每一批康维他活性麦卢卡蜂蜜的抗菌活性活质都经过独立实验室的 测试，而且保证每瓶蜂蜜的抗菌作用大于标准的抗菌剂。康维他活性麦卢卡蜂蜜盛装在一种不易破裂的褐色容器内，作为保护蜂蜜中的重要天然成分不受光线的损坏。<br />
新西兰怀卡托大学教彼得.莫兰博士多年的研究发现，麦卢卡蜂蜜具有特别的医疗作用，比一般的蜂蜜更好，甚至超越传统的药物。研究证明麦卢卡蜂蜜是所有蜂蜜中疗效最好的，它可以成功的消除各种细菌包括幽门杆菌,健胃强肺、增强体质。科学家发现麦卢卡蜂蜜具有一种独特抗菌性能。所以具有杀菌和促进伤口愈合的能力。对经常性胃痛、肺弱、易感冒、肌肤干燥、便秘和肠胃敏感也狠适合。麦卢卡蜂蜜可以缓减胃溃疡和肚子痛的病症，消减各种细菌和真菌并对 伤口，烧伤和皮肤溃疡的治愈有显著疗效。康维他蜂蜜可以中和口腔里过多的酸性物质，保持牙齿健康及口腔卫生。它含有高水平抗氧化物质，提高人体综合免疫能力,它还是天然能量食品，可增加身体耐力，快速回复能量。 女士们放心服用康维他活性麦卢卡蜂蜜蜂中含有寡糖不含蔗糖，食用不会发胖，反而有助减肥。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>康维他公司于1970年代在新西兰的丰富湾成立。但其最初的历史可追溯i.it到1920 年代，当时年仅11岁的公司开创人克罗德。斯特拉特福德具有了他的第一个蜂箱。这最初的介入招致他终身对养蜂业和基于自然保健品的营养观念感兴味。健康的克罗德先生今年102岁了，他从不错过对大自然的尊重和对健康生活的追求，他的健康也证明了蜂蜜的神奇功效和天然保健力量。他从不错过传播他的安康和生机的时机，以及对大自然的深深的尊重。他创立的公司往常聘用100多人。他们努力于为世界各地的顾客和朋友提供高质量的自然保健品，促进安康和福利。<br />
康维他活性麦卢卡蜂蜜是世界著名的品牌。蜜蜂从麦卢卡树上采集麦卢卡蜂蜜。这种独特的新西兰植物以其药用物质而闻名。<br />
一般的蜂蜜都可的抗菌，但新西兰怀卡托大学教授彼得.莫兰博士发现了麦卢卡蜂蜜具有独特的抗菌物质基，这种物质在其它蜂蜜中尚未发现。自从发现这些物质，麦卢卡蜂蜜以其特殊的杀菌和疗伤功能而闻名于世。<br />
麦卢卡蜂蜜以强健消化系统，护理肌胃及治理伤口功效显著而闻名世界各地，实验证明，麦卢卡蜂蜜能有效对抗多种顽劣细菌。是英文 的缩写，亦即，独麦素，是量度搞菌活性成份的单位，而只有采自新西兰独有的麦卢卡树(学名：)的花蜜，才会有含有这种搞菌活性。每一瓶包装妥当的麦卢卡 蜂蜜上，授权的商标后必定尾随一个数值；数值越高即代表抗菌能力越强。活性5+ 10+ 15+ 至20+, 例如一瓶20+麦卢卡蜂蜜的抗菌能力，就相等于一瓶10+麦卢卡蜂蜜的二倍。10+以上的麦卢卡蜂蜜可以杀死细菌，用于直接治疗不同程度的肠胃疾病、免疫 系统疾病等。<br />
康维他活性麦卢卡蜂蜜经过特殊测试和包装，保证能够提供最高品质。每一批康维他活性麦卢卡蜂蜜的抗菌活性活质都经过独立实验室的 测试，而且保证每瓶蜂蜜的抗菌作用大于标准的抗菌剂。康维他活性麦卢卡蜂蜜盛装在一种不易破裂的褐色容器内，作为保护蜂蜜中的重要天然成分不受光线的损坏。<br />
新西兰怀卡托大学教彼得.莫兰博士多年的研究发现，麦卢卡蜂蜜具有特别的医疗作用，比一般的蜂蜜更好，甚至超越传统的药物。研究证明麦卢卡蜂蜜是所有蜂蜜中疗效最好的，它可以成功的消除各种细菌包括幽门杆菌,健胃强肺、增强体质。科学家发现麦卢卡蜂蜜具有一种独特抗菌性能。所以具有杀菌和促进伤口愈合的能力。对经常性胃痛、肺弱、易感冒、肌肤干燥、便秘和肠胃敏感也狠适合。麦卢卡蜂蜜可以缓减胃溃疡和肚子痛的病症，消减各种细菌和真菌并对 伤口，烧伤和皮肤溃疡的治愈有显著疗效。康维他蜂蜜可以中和口腔里过多的酸性物质，保持牙齿健康及口腔卫生。它含有高水平抗氧化物质，提高人体综合免疫能力,它还是天然能量食品，可增加身体耐力，快速回复能量。 女士们放心服用康维他活性麦卢卡蜂蜜蜂中含有寡糖不含蔗糖，食用不会发胖，反而有助减肥。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BA%B7%E7%BB%B4%E4%BB%96',
    'title' => '康维他',
    'identifier' => 'node/69',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:38:16 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '琅尼斯',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '5ad9add4-43b7-45ad-a979-d9c29cc64133',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366512511,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bb1caa76-b100-4feb-863c-e8e2754b47e8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>德国琅尼斯公司成立于1927年,是目前世界上最大的蜂蜜生产企业之一，产品深受各国消费者的喜爱。琅尼斯公司已通过德国HACCP食品安全与预防体系认证。作为蜂蜜市场的先行者，琅尼斯公司不仅符合欧盟食品卫生标准，还严格按照高于欧盟食品卫生标准的琅尼斯企业标准控制产品质量。为给消费者呈上优质的蜂蜜，琅尼斯公司只从德国境内及世界各地优质的蜂蜜产区采集蜂蜜，通常是那些未被触及的偏远地区、高山及原始自然环境。在蜂蜜进入琅尼斯公司的主要实验室之前，琅尼斯公司就在蜂蜜产区设立自己的实验室，从蜂蜜源头进行严格的质量控制。为严格保证产品质量，琅尼斯公司每年对蜂蜜进行检测，并不断应用先进的科技成果和现代技术，确保所有产品均达到标准。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>德国琅尼斯公司成立于1927年,是目前世界上最大的蜂蜜生产企业之一，产品深受各国消费者的喜爱。琅尼斯公司已通过德国HACCP食品安全与预防体系认证。作为蜂蜜市场的先行者，琅尼斯公司不仅符合欧盟食品卫生标准，还严格按照高于欧盟食品卫生标准的琅尼斯企业标准控制产品质量。为给消费者呈上优质的蜂蜜，琅尼斯公司只从德国境内及世界各地优质的蜂蜜产区采集蜂蜜，通常是那些未被触及的偏远地区、高山及原始自然环境。在蜂蜜进入琅尼斯公司的主要实验室之前，琅尼斯公司就在蜂蜜产区设立自己的实验室，从蜂蜜源头进行严格的质量控制。为严格保证产品质量，琅尼斯公司每年对蜂蜜进行检测，并不断应用先进的科技成果和现代技术，确保所有产品均达到标准。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%90%85%E5%B0%BC%E6%96%AF',
    'title' => '琅尼斯',
    'identifier' => 'node/71',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:48:31 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '丹麦雍客',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3d1bbce2-985c-45d6-917a-8b8055455cd8',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367669864,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bcc1a7d7-c4f1-411f-a0c3-75e331b10ec4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">丹麦雍客是欧洲最大的实木地板生厂商，拥有超过80年的实木地板生产历史，以及超过15年的地热实木地板生产经验。雍客是欧洲最大的实木地板制造商，也是丹麦木材行业最大的公司，在全球的员工超过450人，雍客在45个国家有7个分支。</span><br />
雍客---欧洲最大的实木地板生产商---世界三大专业运动地板生产商之一<br />
丹麦雍客实木地热地板特点<br />
独一无二卖点----所有实木产品可用于地热系统<br />
质感卓越：超20mm厚的原木，硬朗的纹理线条，极致的性能与享受。 通过热压风干木材密度增加30%，地板更为厚重。<br />
精选木材：欧洲寒冷木材为地热的工艺提供了最理想的地面材料，各项地热艺术功能有机地组合在一起，Junckers是顶级地热的梦想。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>丹麦雍客是欧洲最大的实木地板生厂商，拥有超过80年的实木地板生产历史，以及超过15年的地热实木地板生产经验。雍客是欧洲最大的实木地板制造商，也是丹麦木材行业最大的公司，在全球的员工超过450人，雍客在45个国家有7个分支。<br />
雍客---欧洲最大的实木地板生产商---世界三大专业运动地板生产商之一<br />
丹麦雍客实木地热地板特点<br />
独一无二卖点----所有实木产品可用于地热系统<br />
质感卓越：超20mm厚的原木，硬朗的纹理线条，极致的性能与享受。 通过热压风干木材密度增加30%，地板更为厚重。<br />
精选木材：欧洲寒冷木材为地热的工艺提供了最理想的地面材料，各项地热艺术功能有机地组合在一起，Junckers是顶级地热的梦想。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'DK',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B8%B9%E9%BA%A6%E9%9B%8D%E5%AE%A2',
    'title' => '丹麦雍客',
    'identifier' => 'node/148',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:17:44 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '梅兰日兰',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8a1489a8-9f1a-46de-8fad-5fa8fad2a595',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366454833,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'bdd67eb6-a0e8-4166-bea0-bd51bf1b7b53',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
梅兰日兰创立于1920年，通过向市场推出一款具有革命意义的高压断路器而迅速赢得国际声望。从那以后，梅兰日兰的高压和低压创新技术不断改善着配电领域的安全性和舒适性。<br />
1920年：Paul-Louis和Gaston Gerin创立梅兰日兰公司。<br />
从1920年创立至1992年被施耐德电气收购<br />
梅兰日兰（merlin Gerin）是施耐德电气的下属的配电品牌之一，也是世界上领先的配电品牌之一。“The Guiding System”（引导系统）是该品牌的一个重要理念，也是其最初的形象剪影，并为其发展创新提供源源不断的动力。<br />
品牌精神<br />
梅兰日兰为客户提供模块化和自治组件，他们能够像系统一样进行组织。该品牌还为其中间商提供生产工艺，以生产出安全、可升级、标准的优化电力设备。这项全球策略通过相关支持材料（如技术产品信息、面板安装手册等）得到进一步加强，其目的是为了提升和优化客户的执行性能。<br />
品牌简介<br />
梅兰日兰品牌的产品系列包括断路器、变压器和一些测量仪器、控制及指令设备。不管产品种类如何，其目的都是为了确保客户的财产和人身安全。<br />
在施耐德电气的增长过程中，梅兰日兰参与了终端配电的开发。这项活动将进一步扩大梅兰日兰的产品范围，使其包括安装系统、开关和插头以及VDI系统（声音-数据-图像系统）。<br />
开拓性品牌<br />
梅兰日兰开发的Prisma和Multi 9系统已成为配电领域的国际标准。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>梅兰日兰创立于1920年，通过向市场推出一款具有革命意义的高压断路器而迅速赢得国际声望。从那以后，梅兰日兰的高压和低压创新技术不断改善着配电领域的安全性和舒适性。<br />
1920年：Paul-Louis和Gaston Gerin创立梅兰日兰公司。<br />
从1920年创立至1992年被施耐德电气收购<br />
梅兰日兰（merlin Gerin）是施耐德电气的下属的配电品牌之一，也是世界上领先的配电品牌之一。“The Guiding System”（引导系统）是该品牌的一个重要理念，也是其最初的形象剪影，并为其发展创新提供源源不断的动力。<br />
品牌精神<br />
梅兰日兰为客户提供模块化和自治组件，他们能够像系统一样进行组织。该品牌还为其中间商提供生产工艺，以生产出安全、可升级、标准的优化电力设备。这项全球策略通过相关支持材料（如技术产品信息、面板安装手册等）得到进一步加强，其目的是为了提升和优化客户的执行性能。<br />
品牌简介<br />
梅兰日兰品牌的产品系列包括断路器、变压器和一些测量仪器、控制及指令设备。不管产品种类如何，其目的都是为了确保客户的财产和人身安全。<br />
在施耐德电气的增长过程中，梅兰日兰参与了终端配电的开发。这项活动将进一步扩大梅兰日兰的产品范围，使其包括安装系统、开关和插头以及VDI系统（声音-数据-图像系统）。<br />
开拓性品牌<br />
梅兰日兰开发的Prisma和Multi 9系统已成为配电领域的国际标准。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 242,
      ),
      1 => array(
        'tid' => 140,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%A2%85%E5%85%B0%E6%97%A5%E5%85%B0',
    'title' => '梅兰日兰',
    'identifier' => 'node/57',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 18:47:13 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '拉珊',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '35232f27-49cf-4828-8fa8-cca47ffd4a35',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798335,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c0213e1e-8e10-4ed7-a529-7ce89a375510',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Larsen拉珊。拉珊公司是由挪威籍的詹姆士·拉森于1926年创立。该品牌干邑产品，除一般玻璃瓶装的拉珊 “VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）和Extra等多个类型以外，还有享誉全球的以维京帆船为包装造型的玻璃瓶和瓷瓶系列。拉珊干邑白兰地全部产品均采用大、小香槟区所产原酒加以调和勾兑酿制而成，具有圆润可口的风味，为科涅克地区所产干邑白兰地的上品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Larsen拉珊。拉珊公司是由挪威籍的詹姆士·拉森于1926年创立。该品牌干邑产品，除一般玻璃瓶装的拉珊 “VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）和Extra等多个类型以外，还有享誉全球的以维京帆船为包装造型的玻璃瓶和瓷瓶系列。拉珊干邑白兰地全部产品均采用大、小香槟区所产原酒加以调和勾兑酿制而成，具有圆润可口的风味，为科涅克地区所产干邑白兰地的上品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%8B%89%E7%8F%8A',
    'title' => '拉珊',
    'identifier' => 'node/94',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:12:15 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '茅台',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '176c62c7-f1fd-41e2-aa06-caeed46c7eda',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365944093,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c15f21cd-cb68-4734-8749-80a6e719522d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>贵州茅台酒独产于中国的贵州省仁怀市茅台镇，是与苏格兰威士忌、法国科涅克白兰地齐名的三大蒸馏酒之一。1915年至今，茅台酒共获得15次国际金奖，连续五次蝉联中国国家名酒称号，与泸州老窖、杏花村汾酒并称我国三大名酒，是大曲酱香型白酒的鼻祖，有“国酒”之称。2011年11月，茅台集团负责人否认要向国际组织申报“奢侈品资格”的消息；2012年4月，茅台爽约数日未见公开销售渠道，违背承诺的“双公开”一事；2012年9月3日，贵州茅台发布公告称，自2012年9月1日起上调部分产品出厂价，平均上调幅度约为20%至30%。<br />
茅台是中国白酒的第一品牌。在由中国酒类流通协会、中华品牌战略研究院、深圳市五谷子进出口有限公司（原深圳市五谷子商贸有限公司）共同主办的“华樽杯” 中国酒类品牌价值评议中夺得第一。简单地说，就是每年公布的中国酒类品牌价值200强。茅台在2010年度的评比中，品牌价值531.46亿元，在所有白酒、啤酒、葡萄酒、保健酒、果酒中名列前茅。<br />
茅台酒素以色清透明、醇香馥郁、入口柔绵、清冽甘爽、回香持久等特点而名闻天下，被称为中国的“国酒”。它以优质高粱为料，上等小麦制曲，每年重阳之际投料，利用茅台镇特有的气候，优良的水质和适宜的土壤，采用与众不同的高温制曲、堆积、蒸酒，轻水分入池等工艺，再经过两次投料、九次蒸馏、八次发酵、七次取酒、长期陈酿而成。酒精度多在52～54度之间，是中国酱香型白酒的典范。<br />
茅台有着神秘悠远的历史。建国以来，无数次重要大活动，茅台酒都被当作国礼，赠送给外国领导人。<br />
自古至今，向往茅台、赞美茅台的文人墨客不计其数。毫不夸张地说，茅台酒的每一个细小的“侧面”都有着丰富的人文历史故事，有着深厚的文化积淀与人文价值。犹如中国发给世界的一张飘香的名片，具象的茅台酒和抽象的“人文”，在以醉人的芳香让世界了解自己的同时，也将中华酒文化的魅力和韵味淋漓尽致地展示给了世界，让其了解了中国、中国文化。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>贵州茅台酒独产于中国的贵州省仁怀市茅台镇，是与苏格兰威士忌、法国科涅克白兰地齐名的三大蒸馏酒之一。1915年至今，茅台酒共获得15次国际金奖，连续五次蝉联中国国家名酒称号，与泸州老窖、杏花村汾酒并称我国三大名酒，是大曲酱香型白酒的鼻祖，有“国酒”之称。2011年11月，茅台集团负责人否认要向国际组织申报“奢侈品资格”的消息；2012年4月，茅台爽约数日未见公开销售渠道，违背承诺的“双公开”一事；2012年9月3日，贵州茅台发布公告称，自2012年9月1日起上调部分产品出厂价，平均上调幅度约为20%至30%。<br />
茅台是中国白酒的第一品牌。在由中国酒类流通协会、中华品牌战略研究院、深圳市五谷子进出口有限公司（原深圳市五谷子商贸有限公司）共同主办的“华樽杯” 中国酒类品牌价值评议中夺得第一。简单地说，就是每年公布的中国酒类品牌价值200强。茅台在2010年度的评比中，品牌价值531.46亿元，在所有白酒、啤酒、葡萄酒、保健酒、果酒中名列前茅。<br />
茅台酒素以色清透明、醇香馥郁、入口柔绵、清冽甘爽、回香持久等特点而名闻天下，被称为中国的“国酒”。它以优质高粱为料，上等小麦制曲，每年重阳之际投料，利用茅台镇特有的气候，优良的水质和适宜的土壤，采用与众不同的高温制曲、堆积、蒸酒，轻水分入池等工艺，再经过两次投料、九次蒸馏、八次发酵、七次取酒、长期陈酿而成。酒精度多在52～54度之间，是中国酱香型白酒的典范。<br />
茅台有着神秘悠远的历史。建国以来，无数次重要大活动，茅台酒都被当作国礼，赠送给外国领导人。<br />
自古至今，向往茅台、赞美茅台的文人墨客不计其数。毫不夸张地说，茅台酒的每一个细小的“侧面”都有着丰富的人文历史故事，有着深厚的文化积淀与人文价值。犹如中国发给世界的一张飘香的名片，具象的茅台酒和抽象的“人文”，在以醉人的芳香让世界了解自己的同时，也将中华酒文化的魅力和韵味淋漓尽致地展示给了世界，让其了解了中国、中国文化。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%8C%85%E5%8F%B0',
    'title' => '茅台',
    'identifier' => 'node/27',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:54:53 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '古越龙山',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd7271b30-ad90-4b06-a4fa-8910f213dde3',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365993932,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c4e9b8a9-b5d3-4c7a-9add-0a74ab6a3364',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>古越龙山商标，取材于2500多年前的吴越春秋的故事，商标图案也是越王勾践（古称"句践"gou）兴师伐吴时的点将台城门和卧薪尝胆的龙山背景。古越是绍兴的发祥地，也是绍兴酒的发祥地，龙山是古越政治文化集中国黄酒行业标志性品牌、中国驰名商标、中国名牌产品、中华老字号诸荣誉于一身。古越龙山绍兴酒一方面体现黄酒的历史源远流长，另一方面体现其品质日臻完美。</p>

<p>“古越龙山”是中国黄酒第一品牌，中国黄酒行业标志性品牌，国宴专用黄酒，是“亚洲品牌500强”中唯一入选黄酒品牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>古越龙山商标，取材于2500多年前的吴越春秋的故事，商标图案也是越王勾践（古称"句践"gou）兴师伐吴时的点将台城门和卧薪尝胆的龙山背景。古越是绍兴的发祥地，也是绍兴酒的发祥地，龙山是古越政治文化集中国黄酒行业标志性品牌、中国驰名商标、中国名牌产品、中华老字号诸荣誉于一身。古越龙山绍兴酒一方面体现黄酒的历史源远流长，另一方面体现其品质日臻完美。</p>
<p>“古越龙山”是中国黄酒第一品牌，中国黄酒行业标志性品牌，国宴专用黄酒，是“亚洲品牌500强”中唯一入选黄酒品牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%8F%A4%E8%B6%8A%E9%BE%99%E5%B1%B1',
    'title' => '古越龙山',
    'identifier' => 'node/39',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:45:32 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '尊尼获加',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'cf779a5b-8bb4-4d0e-97d6-24c274519cc0',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799412,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c5641b05-c409-4517-a158-3ad1f799a7ba',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Johnnie Walker尊尼获加。尊尼获加（Johnnie Walker）是苏格兰威士忌的代表酒，该酒以产自于苏格兰高地的四十余种麦芽威士忌为原酒，，在混合谷物威士忌勾兑调配而成。Johnnie Walker Red Label（红方或红标）是其标准品，在世界范围内销量都很大；Johnnie Walker Black Label（黑方或黑标）是采用12年陈酿麦芽威士忌调配而成的高级品，具有圆润可口的风味。另外还有Johnnie Walker Blue Label(蓝方或蓝标)是尊尼沃克威士忌酒系列中的顶级醇醪；Johnnie Walker Gold Label(金方或金标)陈酿18年的尊尼沃克威士忌系列酒、Johnnie Walker Swing Superior(尊豪) 尊尼沃克威士忌系列酒中的极品，选用超过四十五种以上的高级麦芽威士忌混合调制而成，口感圆润，喉韵清醇。酒瓶采用不倒翁设计式样，非常独特。Johnnie Walker Premier(尊爵)属极品级苏格兰威士忌酒，该酒酒质馥郁醇厚，特别适合亚洲人的饮食口味。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Johnnie Walker尊尼获加。尊尼获加（Johnnie Walker）是苏格兰威士忌的代表酒，该酒以产自于苏格兰高地的四十余种麦芽威士忌为原酒，，在混合谷物威士忌勾兑调配而成。Johnnie Walker Red Label（红方或红标）是其标准品，在世界范围内销量都很大；Johnnie Walker Black Label（黑方或黑标）是采用12年陈酿麦芽威士忌调配而成的高级品，具有圆润可口的风味。另外还有Johnnie Walker Blue Label(蓝方或蓝标)是尊尼沃克威士忌酒系列中的顶级醇醪；Johnnie Walker Gold Label(金方或金标)陈酿18年的尊尼沃克威士忌系列酒、Johnnie Walker Swing Superior(尊豪) 尊尼沃克威士忌系列酒中的极品，选用超过四十五种以上的高级麦芽威士忌混合调制而成，口感圆润，喉韵清醇。酒瓶采用不倒翁设计式样，非常独特。Johnnie Walker Premier(尊爵)属极品级苏格兰威士忌酒，该酒酒质馥郁醇厚，特别适合亚洲人的饮食口味。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%B0%8A%E5%B0%BC%E8%8E%B7%E5%8A%A0',
    'title' => '尊尼获加',
    'identifier' => 'node/104',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:30:12 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '卡慕',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b146e3ec-f8f0-4358-ad30-99810cdff935',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798083,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c6a7cda7-e9ba-4766-8b65-6fa13b2145a1',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Camus卡慕。又称金花干邑或甘武士；由法国CAMUS公司出品，该公司创立于1863年，是法国著名的干邑白兰地生产企业。Camus卡慕所产干邑白兰地均采用自家果园栽种的圣·迪米里翁(Saint emilion)优质葡萄作为原料加以酿制混合而成，等级品种分类除“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）以外，还包括“Camus Napoleon Extra”卡慕特级拿破仑、“Camus Silver Baccarat” 卡慕嵌银百家乐水晶瓶干邑“Camus Limoges Book”卡慕瓷书（又分为Blue book蓝瓷书 和Burgundy Book红瓷书两种）、“Camus Limoges Drum”卡慕瓷鼓、“Camus Baccarat Crystal Decanter”卡慕百家乐水晶瓶、“Camus Josephine”约瑟芬以及巴雷尔、等多个系列品种。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Camus卡慕。又称金花干邑或甘武士；由法国CAMUS公司出品，该公司创立于1863年，是法国著名的干邑白兰地生产企业。Camus卡慕所产干邑白兰地均采用自家果园栽种的圣·迪米里翁(Saint emilion)优质葡萄作为原料加以酿制混合而成，等级品种分类除“VSOP”（陈酿）、“Napoleon”（拿破仑）和“XO”（特酿）以外，还包括“Camus Napoleon Extra”卡慕特级拿破仑、“Camus Silver Baccarat” 卡慕嵌银百家乐水晶瓶干邑“Camus Limoges Book”卡慕瓷书（又分为Blue book蓝瓷书 和Burgundy Book红瓷书两种）、“Camus Limoges Drum”卡慕瓷鼓、“Camus Baccarat Crystal Decanter”卡慕百家乐水晶瓶、“Camus Josephine”约瑟芬以及巴雷尔、等多个系列品种。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%8D%A1%E6%85%95',
    'title' => '卡慕',
    'identifier' => 'node/91',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:08:03 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '石库门',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '3b9a8c0c-d6c6-4604-adc7-0992fd4d6605',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365992315,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'c88f6e5c-de6e-4285-9fbb-d7a8a927aa58',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>全称是石库门上海老酒。只有金枫酿酒有限公司生产的才是正宗的。上海金枫酿酒有限公司是上海市第一食品股份有限公司全资子公司，创建于1939年，为全国大型黄酒生产企业之一，也是上海地区最大的黄酒生产企业。公司现有枫泾酒厂、淀山湖酒厂和石库门酒厂三大生产基地，占地面积388000平方米，总资产4个亿，净资产2.6个亿。早在上世纪七十年代初就致力于黄酒传统工艺改革，建成全国第一条年产万吨黄酒的新工艺生产流水线，自主研发的黄酒发酵菌种被中科院鉴定为优良菌种，收藏并编号为2?D1392，为全国黄酒企业所采用。 近年来公司坚持以市场为导向，注重观念创新，变“民以食为天”为“食以民为天”，发现需求，满足需求；坚持以消费需求为导向，注重产品创新。公司与市场调研公司和咨询策划公司合作，开展了市场调研和产品设计策划，根据市场调研结果研制全新口味的新型黄酒。在有关人员的共同努力下，全新概念的包装设计精美、产品配方合理、口味口感良好、酒瓶造型新颖、具中西文化交融及海派文化底蕴的“石库门上海老酒”应运而生，精致高档独特的包装，摆脱传统黄酒苦味、涩味的全新口味，使产品一上市就为消费者所接受和青睐。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>全称是石库门上海老酒。只有金枫酿酒有限公司生产的才是正宗的。上海金枫酿酒有限公司是上海市第一食品股份有限公司全资子公司，创建于1939年，为全国大型黄酒生产企业之一，也是上海地区最大的黄酒生产企业。公司现有枫泾酒厂、淀山湖酒厂和石库门酒厂三大生产基地，占地面积388000平方米，总资产4个亿，净资产2.6个亿。早在上世纪七十年代初就致力于黄酒传统工艺改革，建成全国第一条年产万吨黄酒的新工艺生产流水线，自主研发的黄酒发酵菌种被中科院鉴定为优良菌种，收藏并编号为2?D1392，为全国黄酒企业所采用。 近年来公司坚持以市场为导向，注重观念创新，变“民以食为天”为“食以民为天”，发现需求，满足需求；坚持以消费需求为导向，注重产品创新。公司与市场调研公司和咨询策划公司合作，开展了市场调研和产品设计策划，根据市场调研结果研制全新口味的新型黄酒。在有关人员的共同努力下，全新概念的包装设计精美、产品配方合理、口味口感良好、酒瓶造型新颖、具中西文化交融及海派文化底蕴的“石库门上海老酒”应运而生，精致高档独特的包装，摆脱传统黄酒苦味、涩味的全新口味，使产品一上市就为消费者所接受和青睐。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 342,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%9F%B3%E5%BA%93%E9%97%A8',
    'title' => '石库门',
    'identifier' => 'node/38',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 10:18:35 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '安心',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1026c6f7-117a-42c0-a87f-cb7286707773',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367485813,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ccb57aaa-937c-42a9-baa3-024fb5bbc288',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>安心地板公司位于长江下游杭嘉湖平原腹地--南浔。公司创建于一九九五年，是一家有深厚文化底蕴的木地板企业。公司成立之初就非常重视产品的品质以及技术的革新，通过与国内外科研机构的交流合作，先后获得国内外认可和保护的专利技术就有十四项，（12项中国地板专利，2项德国地板专利）。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>安心地板公司位于长江下游杭嘉湖平原腹地--南浔。公司创建于一九九五年，是一家有深厚文化底蕴的木地板企业。公司成立之初就非常重视产品的品质以及技术的革新，通过与国内外科研机构的交流合作，先后获得国内外认可和保护的专利技术就有十四项，（12项中国地板专利，2项德国地板专利）。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 215,
      ),
      2 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%89%E5%BF%83',
    'title' => '安心',
    'identifier' => 'node/129',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:10:13 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '格兰特',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'f2632adf-938c-440a-ac5a-d8fffd708cb5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799242,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ccf20f13-2a5d-4ab8-adeb-3594fb122b7b',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Grant’s格兰特。是苏格兰纯麦芽威士忌Glenfiddich格兰菲迪（又称鹿谷）的姊妹酒，均由由英国威廉?格兰特父子有限公司出品，Grant’s格兰特牌威士忌酒给人的感觉是爽快和具有男性化的辣味，因此在世界具有较高的知名度。其标准品为Standfast（意为其创始人威廉姆?格兰特常说的一句话“你奋起吧”），另外还有Grant’s Centenary格兰特世纪酒以及Grant’s Royal皇家格兰特（12年陈酿）和Grant’s 21（格兰特21年极品威士忌）等多个品种。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Grant’s格兰特。是苏格兰纯麦芽威士忌Glenfiddich格兰菲迪（又称鹿谷）的姊妹酒，均由由英国威廉?格兰特父子有限公司出品，Grant’s格兰特牌威士忌酒给人的感觉是爽快和具有男性化的辣味，因此在世界具有较高的知名度。其标准品为Standfast（意为其创始人威廉姆?格兰特常说的一句话“你奋起吧”），另外还有Grant’s Centenary格兰特世纪酒以及Grant’s Royal皇家格兰特（12年陈酿）和Grant’s 21（格兰特21年极品威士忌）等多个品种。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%A0%BC%E5%85%B0%E7%89%B9',
    'title' => '格兰特',
    'identifier' => 'node/101',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:27:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '意利',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '146195b2-a972-4b64-85d3-453316ca31ab',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366940461,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cdb5038e-b226-4b7e-a01b-fe821be91646',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
1933年成立于意大利东北部的海港城市翠斯提(Trieste)，illy咖啡公司每年生产1100万公斤以上的优质咖啡豆，居於咖啡界高品质的领航者。<br />
illy（意利）咖啡公司采用100%上选阿拉比加Arabica咖啡豆所调配出独特香醇的风味，以个别的包装分别销售至旅馆、餐厅、家庭和办公室。illy咖啡在意大利是饭店、餐馆和吧馆(HO.RE.CA)等业界所使用的第一品牌，有7.5%的市场占有率；而在家用市场方面则占30.3%。每一天，光在意大利就卖出300万杯illy咖啡(illycaffe)，全球则卖出惊人的600多万杯。每一颗咖啡豆都经过电子光谱仪的检测，不容许有一点瑕疵。这样的努力使illy公司成为全球第一家获得ISO9001认证的咖啡公司。<br />
&nbsp;</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>1933年成立于意大利东北部的海港城市翠斯提(Trieste)，illy咖啡公司每年生产1100万公斤以上的优质咖啡豆，居於咖啡界高品质的领航者。<br />
illy（意利）咖啡公司采用100%上选阿拉比加Arabica咖啡豆所调配出独特香醇的风味，以个别的包装分别销售至旅馆、餐厅、家庭和办公室。illy咖啡在意大利是饭店、餐馆和吧馆(HO.RE.CA)等业界所使用的第一品牌，有7.5%的市场占有率；而在家用市场方面则占30.3%。每一天，光在意大利就卖出300万杯illy咖啡(illycaffe)，全球则卖出惊人的600多万杯。每一颗咖啡豆都经过电子光谱仪的检测，不容许有一点瑕疵。这样的努力使illy公司成为全球第一家获得ISO9001认证的咖啡公司。<br />
 </p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'IT',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%84%8F%E5%88%A9',
    'title' => '意利',
    'identifier' => 'node/112',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 09:41:01 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '帕斯波特',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'e5dc1f45-b85a-4274-84f9-c92d110b7491',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366799454,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cdd38b7d-8f9e-4104-ad97-dbd0f9dc6464',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Passport帕斯波特。又称护照威士忌；由威廉.隆格摩尔公司于1968年推出的具有现代气息的清淡型威士忌酒，该酒具有明亮轻盈，口感圆润的特点。非常受到年轻人的欢迎。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Passport帕斯波特。又称护照威士忌；由威廉.隆格摩尔公司于1968年推出的具有现代气息的清淡型威士忌酒，该酒具有明亮轻盈，口感圆润的特点。非常受到年轻人的欢迎。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 335,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'GB',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%B8%95%E6%96%AF%E6%B3%A2%E7%89%B9',
    'title' => '帕斯波特',
    'identifier' => 'node/105',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:30:54 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '欧德堡',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'ff54e37b-f1ae-40f7-af69-45531c90ee32',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ce21eaca-d93e-47c4-91ac-1bf604d084e6',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>Nordmilch诺德集团是德国乳业巨头，在2011年兼并了竞争对手Humana后跃居为德国产量及销量第一的乳品生产商，其产品包括各类型奶粉、鲜奶、奶油、乳酪等远销世界。欧德堡为诺德集团专门针对亚洲市场推出的品牌，采用天然奶源经UltraHighTemperature超高温杀菌处理，具有保存期长的特点（保质期365天），全脂奶适用人群广，1L/盒。相比脱脂、减脂牛奶，全脂的口感更好。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Nordmilch诺德集团是德国乳业巨头，在2011年兼并了竞争对手Humana后跃居为德国产量及销量第一的乳品生产商，其产品包括各类型奶粉、鲜奶、奶油、乳酪等远销世界。欧德堡为诺德集团专门针对亚洲市场推出的品牌，采用天然奶源经UltraHighTemperature超高温杀菌处理，具有保存期长的特点（保质期365天），全脂奶适用人群广，1L/盒。相比脱脂、减脂牛奶，全脂的口感更好。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%AC%A7%E5%BE%B7%E5%A0%A1',
    'title' => '欧德堡',
    'identifier' => 'node/10',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '好运',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '76878d47-31fc-481d-ab38-8b3a31b31552',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367485953,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'cea197b5-c316-4619-b255-2e9203ce7c89',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江好运木业有限公司创建于一九九五年，地处浙江省湖州市南浔经[1]济开发区。是本地最早专业致力于地板、木门的研发、生产和销售的大型企业，资产规模近1.5亿元,在业界是中国地板行业支柱型品牌企业之一，中国林产工业协会地板专业委员会理事单位、中国木材流通协会地板委员会理事单位以及实木地板国家标准起草修订单位之一。<br />
浙江好运木业有限公司始终坚持走以质量建设推动品牌经营的道路，十余年来，公司坚持质量立企、品牌制胜的战略，扎实迈进，先后通过了ISO9001:2000质量管理体系认证和ISO14001：1996环境管理[2]体系认证，自2005年开始各项经济指标每年均以近10%的幅度稳步增长。2008年又获“浙江省知名商号”和“浙江省诚信企业”称号。2013年荣获“地板30家产品质量与售后服务双承诺企业”这些荣誉均是对好运地板如金品质的肯定，同时也是广大消费者对“好运”商标认同的结果。<br />
在木地板制造领域中，好运木业拥有强大的产品研发能力：公司与国际知名木地板研发机构南京林业大学木材研究所建立深度技术合作，开发研制的三大系列一百多个单品地板在市场中取得了良好的市场认同，荣获省科技创新奖。2006年公司研发的集成地板获得国家专利，该项产品以速生材为基材，在节约资源、保护环境及新材料利用方面有着极为深远的意义。好运木业生产的地板种类包括：实木地板、实木复合地板和强化地板，基本涵盖了当前主流的地板种类，形成了以实木为主导的全方位产品架构，基本上能够满足各个消费阶层的需要，产品更具竞争力和可选择性，消费者认同度较高。“质量立企”一直是好运木业坚定不移的最高信条。公司将产品质量视作关系到企业品牌战略成败的生命线，严把质量关，从原材料进厂开始，生产、包装、储存、搬运、出厂等各道环节均有严格的检验程序，每一道工艺流程都有专人对质量进行把关和随时检测，保证了质量处于一种持续优化的状态。同时好运木业抓质不忘环保，以打造“绿色”环保地板为己任，无论在生产实木地板还是实木复合地板或强化地板的过程中都对环保指标进行严格控制，实施抽样复检制。对复合、强化地板的制造则特别注意甲醛释放量这一指标，使其保证在允许的范围之内，并一减再减，为消费者提供放心、安全的产品。因此至今好运木业出品的产品质量始终保持稳定、过硬。好运产品版图覆盖全国30余省（市），并出口到欧、美等发达国家，是国家建设部30家康居示范工程选用产品，中国木地板行业市场影响力实木地板优秀品牌。随着销量的节节攀升，“好运”商标地板在消费者心目中的影响越来越根深蒂固。<br />
好运木业在立志成就民族工业标杆的同时，发展不忘社会责任，秉承“得诸社会报诸社会”的理念，大力参与社会公益事业。自2007年5月20日开始，好运木业与希望工程等有关部门合作，每年均提供巨资帮助数百位家庭经济困难的学子继续求学之路。<br />
“好运伴你每一天！”不仅是公司的产品诉求，更是深植于每个好运人心中的责任：为消费者提供质量上乘的产品，为社会创造出更多物质和人文价值！</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江好运木业有限公司创建于一九九五年，地处浙江省湖州市南浔经[1]济开发区。是本地最早专业致力于地板、木门的研发、生产和销售的大型企业，资产规模近1.5亿元,在业界是中国地板行业支柱型品牌企业之一，中国林产工业协会地板专业委员会理事单位、中国木材流通协会地板委员会理事单位以及实木地板国家标准起草修订单位之一。<br />
浙江好运木业有限公司始终坚持走以质量建设推动品牌经营的道路，十余年来，公司坚持质量立企、品牌制胜的战略，扎实迈进，先后通过了ISO9001:2000质量管理体系认证和ISO14001：1996环境管理[2]体系认证，自2005年开始各项经济指标每年均以近10%的幅度稳步增长。2008年又获“浙江省知名商号”和“浙江省诚信企业”称号。2013年荣获“地板30家产品质量与售后服务双承诺企业”这些荣誉均是对好运地板如金品质的肯定，同时也是广大消费者对“好运”商标认同的结果。<br />
在木地板制造领域中，好运木业拥有强大的产品研发能力：公司与国际知名木地板研发机构南京林业大学木材研究所建立深度技术合作，开发研制的三大系列一百多个单品地板在市场中取得了良好的市场认同，荣获省科技创新奖。2006年公司研发的集成地板获得国家专利，该项产品以速生材为基材，在节约资源、保护环境及新材料利用方面有着极为深远的意义。好运木业生产的地板种类包括：实木地板、实木复合地板和强化地板，基本涵盖了当前主流的地板种类，形成了以实木为主导的全方位产品架构，基本上能够满足各个消费阶层的需要，产品更具竞争力和可选择性，消费者认同度较高。“质量立企”一直是好运木业坚定不移的最高信条。公司将产品质量视作关系到企业品牌战略成败的生命线，严把质量关，从原材料进厂开始，生产、包装、储存、搬运、出厂等各道环节均有严格的检验程序，每一道工艺流程都有专人对质量进行把关和随时检测，保证了质量处于一种持续优化的状态。同时好运木业抓质不忘环保，以打造“绿色”环保地板为己任，无论在生产实木地板还是实木复合地板或强化地板的过程中都对环保指标进行严格控制，实施抽样复检制。对复合、强化地板的制造则特别注意甲醛释放量这一指标，使其保证在允许的范围之内，并一减再减，为消费者提供放心、安全的产品。因此至今好运木业出品的产品质量始终保持稳定、过硬。好运产品版图覆盖全国30余省（市），并出口到欧、美等发达国家，是国家建设部30家康居示范工程选用产品，中国木地板行业市场影响力实木地板优秀品牌。随着销量的节节攀升，“好运”商标地板在消费者心目中的影响越来越根深蒂固。<br />
好运木业在立志成就民族工业标杆的同时，发展不忘社会责任，秉承“得诸社会报诸社会”的理念，大力参与社会公益事业。自2007年5月20日开始，好运木业与希望工程等有关部门合作，每年均提供巨资帮助数百位家庭经济困难的学子继续求学之路。<br />
“好运伴你每一天！”不仅是公司的产品诉求，更是深植于每个好运人心中的责任：为消费者提供质量上乘的产品，为社会创造出更多物质和人文价值！</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%A5%BD%E8%BF%90',
    'title' => '好运',
    'identifier' => 'node/130',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:12:33 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '圣卡',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'aeb27464-cde2-4331-bbb2-ea27bdd637b6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367668133,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd04fc01a-aa1c-467d-8b87-4288138bfe4d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>圣卡地板是由江苏森森木业有限公司研发的，公司是集木地板研发、生产、销售于一体的国内大型地板企业，年生产能力700万㎡。公司引进当今世界最先进的生产设备和国际最新技术，并按照专业化分工的生产模式，与国际前沿技术始终保持同步，国际化的运作使公司品牌“圣卡”深入人心。<br />
追求卓越品质是圣卡始终不变的信念。重视生产过程中的每个步骤和环节，发挥专业化的生产效率，全方位的科学管理和高素质专业管理技术人才，是圣卡成为优质品牌的基础和保证。<br />
品质是圣卡的生命，完善的服务体系让圣卡更稳固的立足于市场，客户的需要是我们奋斗的目标。以诚实、诚信、质量和服务取胜，圣卡通过完备的设计、制造、销售服务，%E</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>圣卡地板是由江苏森森木业有限公司研发的，公司是集木地板研发、生产、销售于一体的国内大型地板企业，年生产能力700万㎡。公司引进当今世界最先进的生产设备和国际最新技术，并按照专业化分工的生产模式，与国际前沿技术始终保持同步，国际化的运作使公司品牌“圣卡”深入人心。<br />
追求卓越品质是圣卡始终不变的信念。重视生产过程中的每个步骤和环节，发挥专业化的生产效率，全方位的科学管理和高素质专业管理技术人才，是圣卡成为优质品牌的基础和保证。<br />
品质是圣卡的生命，完善的服务体系让圣卡更稳固的立足于市场，客户的需要是我们奋斗的目标。以诚实、诚信、质量和服务取胜，圣卡通过完备的设计、制造、销售服务，%E</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => FALSE,
    'url' => 'http://mrating.com/node/144',
    'title' => '圣卡',
    'identifier' => 'node/144',
    'developer' => 1,
  ),
  'print_display' => 0,
  'print_display_comment' => 0,
  'print_display_urllist' => 0,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:48:53 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '东阿阿胶',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8c5e0735-15d9-47e5-94c2-7f03bc6592ea',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366123696,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd069909c-0493-4dde-b37d-0ac537cd9498',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>阿胶，其应用已有3000年历史，历来被誉为“补血圣药”、“滋补国宝”，与人参、鹿茸一起被誉为“中药三宝”。阿胶的原产地是山东东阿县。东阿阿胶历来名冠天下，直至今日“东阿阿胶”几乎已经成为阿胶的代名词，同时也演变为对国内最大的阿胶及系列产品生产企业-山东东阿阿胶股份有限公司的简称。山东东阿阿胶股份有限公司前身为山东东阿阿胶厂，1952年建厂，1993年由国有企业改制为股份制企业。1996年成为上市公司，同年7月29日“东阿阿胶”A股股票在深交所挂牌上市。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>阿胶，其应用已有3000年历史，历来被誉为“补血圣药”、“滋补国宝”，与人参、鹿茸一起被誉为“中药三宝”。阿胶的原产地是山东东阿县。东阿阿胶历来名冠天下，直至今日“东阿阿胶”几乎已经成为阿胶的代名词，同时也演变为对国内最大的阿胶及系列产品生产企业-山东东阿阿胶股份有限公司的简称。山东东阿阿胶股份有限公司前身为山东东阿阿胶厂，1952年建厂，1993年由国有企业改制为股份制企业。1996年成为上市公司，同年7月29日“东阿阿胶”A股股票在深交所挂牌上市。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 10,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%B8%9C%E9%98%BF%E9%98%BF%E8%83%B6',
    'title' => '东阿阿胶',
    'identifier' => 'node/51',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-16 22:48:16 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '草原情',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '27046568-7a64-4d31-bb3b-51deb3a3b498',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365935597,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd08c2935-ff97-4031-9d0f-3030be1e7ada',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
内蒙古泰利达乳业有限公司成立于2000年8月，厂址位于中国乳都呼和浩特的兵州亥，居于“敕勒川，阴山下。”的腹地，相邻110国道（呼包高速公路附近），交通方便，气候宜人，有丰富的乳业资源。<br />
企业简介<br />
内蒙古泰利达乳业有限公司是专业以开发和生产草原特色食品为核心，集科研、生产、营销为一体的窗口企业。<br />
公司成立至今，秉承“创民族品牌、做百年企业”的经营宗旨，遵循“诚信合作，共同发展”的经营理念，始终视产品质量及食品安全为生产与发展之本，连续数年被评为地方食品安全示范单位，市场一片繁荣，尤其在内蒙古已具有了忠实的消费人群和稳定的销售市场，在其它省市设有区域总代理，行销全国主要大中城市。<br />
展望未来，我公司将以先进的技术、优异的产品质量、优质的售后服务以及优惠的价格来满足客户的需求，至诚为社会各界朋友提供优质的产品和服务，为内蒙古的资源性及特色性产业做出自己的贡献！<br />
工业园区位于阴山北麓最辽阔的土默特平原上，创建于2000年8月，完全按照国家食品生产备案基地标准化建设，工业园区占地40亩，生活园区占地30亩。6800平方米的现代化厂房日产量为30吨，各类加工机械20余台套，300吨容量库房。有标准化食品加工车间8间，新产品研发室2间，年总产量可达8000多吨。主要产品有乳制品，奶酪、奶皮、风干牛肉干、礼盒等各种蒙古特色食品。产品采用蒙古高原的春天然原料，经过严格的检验，符合国家各项指标，远销韩国、日本及东南亚地区。<br />
奶源基地<br />
呼伦贝尔大草原：<br />
呼伦贝尔草原是中国目前保存最完好的草原，水草丰美，120多种营养丰富的牧草，有“牧草王国”之称。呼伦贝尔大草原也是一片没有任何污染的绿色净土，呼伦贝尔的那份广袤，那份茂盛，那份浓重是众多草原无可比拟的。当你来到美丽、富饶、神奇的呼伦贝尔大草原，才能真正地感受到什么是“蓝天绿地”，什么是“绿色净土”。<br />
每逢盛夏，草原上鸟语花香、空气清新；星星点点的蒙古包上升起缕缕炊烟；微风吹来，牧草飘动，处处“风吹草地见牛塘”；蓝天白云之下，一望无际的草原、成群的牛羊、奔腾的骏马和牧民挥动马鞭、策马驰骋的英姿尽收眼底。<br />
锡林郭勒大草原：<br />
锡林郭勒盟有着优良的天然牧场，水草肥美，风光秀丽，是世界文明的大草原之一，也是我国四大草原，内蒙古草原的主要天然草场。这里不仅植被类型繁多，而且植物种类也十分丰富。为发展畜牧业提供了提供了良好的生态环境。锡林郭勒盟拥有18平方公里可利用草场，牲畜饲养规模连续8年稳定在1000万头（只）以上。<br />
产品系列<br />
草原情酪博士系列：原料均取自天然草场优质奶源，结合儿童口味特点制作，包含酸奶味、纯味、红枣味、蜂蜜味、AD钙奶口味，价格适中。<br />
草原情牛奶都系列：优质牛奶浓缩而成，特别采取低温冷凝技术，产品形态可掬，感官形象、口味体验俱佳，包含纯味、酸奶味、提子口味。<br />
草原情蒙古奶酪系列：产品包含酸奶、无蔗糖、纯奶、红枣、蜂蜜、提子五种口味。“奶酪”是牛奶经浓缩，发酵而成的奶制品，它基本上排除了牛奶中大量的水分，保留了其中营养价值极高的精华部分，被誉为乳品中的黄金。没公斤奶酪制品浓缩10公斤牛奶的蛋白质、钙和磷等人体所需的营养素，独特的发酵工艺，使其营养的吸收率达到了96%-98%。奶酪能增进人体抵抗疾病的能力，促进代谢，增强活力，保护眼睛健康并保护肌肤健康。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>内蒙古泰利达乳业有限公司成立于2000年8月，厂址位于中国乳都呼和浩特的兵州亥，居于“敕勒川，阴山下。”的腹地，相邻110国道（呼包高速公路附近），交通方便，气候宜人，有丰富的乳业资源。<br />
企业简介<br />
内蒙古泰利达乳业有限公司是专业以开发和生产草原特色食品为核心，集科研、生产、营销为一体的窗口企业。<br />
公司成立至今，秉承“创民族品牌、做百年企业”的经营宗旨，遵循“诚信合作，共同发展”的经营理念，始终视产品质量及食品安全为生产与发展之本，连续数年被评为地方食品安全示范单位，市场一片繁荣，尤其在内蒙古已具有了忠实的消费人群和稳定的销售市场，在其它省市设有区域总代理，行销全国主要大中城市。<br />
展望未来，我公司将以先进的技术、优异的产品质量、优质的售后服务以及优惠的价格来满足客户的需求，至诚为社会各界朋友提供优质的产品和服务，为内蒙古的资源性及特色性产业做出自己的贡献！<br />
工业园区位于阴山北麓最辽阔的土默特平原上，创建于2000年8月，完全按照国家食品生产备案基地标准化建设，工业园区占地40亩，生活园区占地30亩。6800平方米的现代化厂房日产量为30吨，各类加工机械20余台套，300吨容量库房。有标准化食品加工车间8间，新产品研发室2间，年总产量可达8000多吨。主要产品有乳制品，奶酪、奶皮、风干牛肉干、礼盒等各种蒙古特色食品。产品采用蒙古高原的春天然原料，经过严格的检验，符合国家各项指标，远销韩国、日本及东南亚地区。<br />
奶源基地<br />
呼伦贝尔大草原：<br />
呼伦贝尔草原是中国目前保存最完好的草原，水草丰美，120多种营养丰富的牧草，有“牧草王国”之称。呼伦贝尔大草原也是一片没有任何污染的绿色净土，呼伦贝尔的那份广袤，那份茂盛，那份浓重是众多草原无可比拟的。当你来到美丽、富饶、神奇的呼伦贝尔大草原，才能真正地感受到什么是“蓝天绿地”，什么是“绿色净土”。<br />
每逢盛夏，草原上鸟语花香、空气清新；星星点点的蒙古包上升起缕缕炊烟；微风吹来，牧草飘动，处处“风吹草地见牛塘”；蓝天白云之下，一望无际的草原、成群的牛羊、奔腾的骏马和牧民挥动马鞭、策马驰骋的英姿尽收眼底。<br />
锡林郭勒大草原：<br />
锡林郭勒盟有着优良的天然牧场，水草肥美，风光秀丽，是世界文明的大草原之一，也是我国四大草原，内蒙古草原的主要天然草场。这里不仅植被类型繁多，而且植物种类也十分丰富。为发展畜牧业提供了提供了良好的生态环境。锡林郭勒盟拥有18平方公里可利用草场，牲畜饲养规模连续8年稳定在1000万头（只）以上。<br />
产品系列<br />
草原情酪博士系列：原料均取自天然草场优质奶源，结合儿童口味特点制作，包含酸奶味、纯味、红枣味、蜂蜜味、AD钙奶口味，价格适中。<br />
草原情牛奶都系列：优质牛奶浓缩而成，特别采取低温冷凝技术，产品形态可掬，感官形象、口味体验俱佳，包含纯味、酸奶味、提子口味。<br />
草原情蒙古奶酪系列：产品包含酸奶、无蔗糖、纯奶、红枣、蜂蜜、提子五种口味。“奶酪”是牛奶经浓缩，发酵而成的奶制品，它基本上排除了牛奶中大量的水分，保留了其中营养价值极高的精华部分，被誉为乳品中的黄金。没公斤奶酪制品浓缩10公斤牛奶的蛋白质、钙和磷等人体所需的营养素，独特的发酵工艺，使其营养的吸收率达到了96%-98%。奶酪能增进人体抵抗疾病的能力，促进代谢，增强活力，保护眼睛健康并保护肌肤健康。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 332,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%8D%89%E5%8E%9F%E6%83%85',
    'title' => '草原情',
    'identifier' => 'node/19',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 18:33:17 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '五粮液',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '2ab758d9-6e0c-438f-8842-1dc2b1558119',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365944198,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd45f6d76-76f9-4870-b9ba-ef3b683ae190',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>五粮液为大曲浓香型白酒，产于四川宜宾市，用小麦、大米、玉米、高粱、糯米5种粮食发酵酿制而成，在中国浓香型酒中独树一帜。宋代宜宾姚氏家族私坊酿制，采用大豆、大米、高粱、糯米、荞子五种粮食酿造的“姚子雪曲”是五粮液最成熟的雏形。公元1368年，宜宾人陈氏继承了姚氏产业，总结出陈氏秘方，时称“杂粮酒”，后由晚清举人杨惠泉改名为“五粮液”。现在五粮液由宜宾五粮液集团有限公司酿制。2011年五粮液品牌价值达659.19亿元。五粮液是中国最高档白酒之一。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>五粮液为大曲浓香型白酒，产于四川宜宾市，用小麦、大米、玉米、高粱、糯米5种粮食发酵酿制而成，在中国浓香型酒中独树一帜。宋代宜宾姚氏家族私坊酿制，采用大豆、大米、高粱、糯米、荞子五种粮食酿造的“姚子雪曲”是五粮液最成熟的雏形。公元1368年，宜宾人陈氏继承了姚氏产业，总结出陈氏秘方，时称“杂粮酒”，后由晚清举人杨惠泉改名为“五粮液”。现在五粮液由宜宾五粮液集团有限公司酿制。2011年五粮液品牌价值达659.19亿元。五粮液是中国最高档白酒之一。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E4%BA%94%E7%B2%AE%E6%B6%B2',
    'title' => '五粮液',
    'identifier' => 'node/28',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 20:56:38 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '鹦鹉',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'aa17d0f8-ae99-4578-a06a-9a9d5b04bd10',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367559304,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd49de7f9-f420-4be5-984c-e1ead5ba39f0',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>鹦鹉地板，全球实木多层地板专业制造商——浙江裕华木业有限公司荣誉出品。公司始建于1997年，总部位于浙江，是中国最大的实木多层地板生产企业。国内首批生产研发实木多层地板，拥有十余年的实木多层地板生产经验，以其专业的品质、精湛的工艺，产品享誉全球，连续八年居国内实木多层地板出口量首位。下设七个基材厂、一个成品地板加工厂，20万平方米现代化生产厂房，年生产能力1000万平方米，1000余名高素质专业人才，国际一流的生产设备，从原木采购到成品地板加工整条实木多层地板生产链，现为一流的世界级工厂。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>鹦鹉地板，全球实木多层地板专业制造商——浙江裕华木业有限公司荣誉出品。公司始建于1997年，总部位于浙江，是中国最大的实木多层地板生产企业。国内首批生产研发实木多层地板，拥有十余年的实木多层地板生产经验，以其专业的品质、精湛的工艺，产品享誉全球，连续八年居国内实木多层地板出口量首位。下设七个基材厂、一个成品地板加工厂，20万平方米现代化生产厂房，年生产能力1000万平方米，1000余名高素质专业人才，国际一流的生产设备，从原木采购到成品地板加工整条实木多层地板生产链，现为一流的世界级工厂。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%B9%A6%E9%B9%89',
    'title' => '鹦鹉',
    'identifier' => 'node/137',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-03 13:35:04 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '永裕',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'cf281039-4993-4bfd-bed4-87db031d0cc5',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367910838,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'd6591fd2-d295-4495-8d73-203dd1741796',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">浙江永裕竹业股份有限公司始建于2000年，注册资本5480.5万元，是一家专业生产与销售竹地板、竹家具、竹饰材及其它竹制系列产品的国家高新技术企业，公司总部座落在“中国竹乡”——浙江省安吉县孝丰镇。</span><br />
永裕竹业历经十几年的发展，形成了具有自我特色的产业体系。在浙江、福建、云南等地构建了资源性基地，竹地板、竹家具、竹饰材三大系列成为企业发展的核心支柱。公司拥有15项发明和实用新型专利、四条国际一流的豪迈生产流水线、一千余名员工和近200人专业技术团队，具备年产350万平方米竹地板和20万套高档竹家具的生产能力。近几年来，公司年销售规模一直名列中国竹产业企业前茅。2011年，公司资产达3.5亿元，完成销售收入总额2.7亿元，实现利税3600万元，直接带动约1万余户竹农年创收1.8亿元。<br />
作为浙江省林业重点龙头企业和浙江省农业骨干重点龙头企业，永裕始终遵循“诚信务实、精益求精”的经营理念，不断规范企业管理，注重品牌推广，并致力于推动生态环境保护与森林资源的可持续利用，全力打造“健康、环保”的企业形象。永裕公司先后通过了ISO9001-2000国际质量体系认证、ISO14000环境体系认证以及国际森林管理组织FSC认证,“永裕”品牌也被认定为“中国驰名商标”。<br />
为进一步提高产品科技含量，增强企业科技创新能力，公司成立了专业竹家具及竹装饰材料研发和推广中心，厂房面积5万平方米，生产车间布局有实竹、实木加工流水线，拥有德国豪迈CNC铣边及钻孔加工中心、德国“HOLZMA”全自动计算器板材开料锯和德国“KUPER”自动单板纵向拼缝机等先进进口设备。在保质保交期的前提下，研发并逐步推广了各种实竹、实木橱柜，竹办公家具和竹时尚家具单品。同时，公司还与南京林业大学、浙江林学院等大专院校开展紧密的校企科技合作，成立了竹制产品研发中心，并在地方各级政府的帮助与支持下，设立了“专家院士工作站”和“博士后工作站”。这些举措极大地提升了企业自主研发能力，促进企业继续保持较快的增长步伐，预计永裕公司现已成为中国竹产业中规模最大、设备最先进、生产能力最强的企业之一,并将继续通过创新发展，不断推动永裕竹业在发展层次和速度上实现一个又一个新的跨越。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江永裕竹业股份有限公司始建于2000年，注册资本5480.5万元，是一家专业生产与销售竹地板、竹家具、竹饰材及其它竹制系列产品的国家高新技术企业，公司总部座落在“中国竹乡”——浙江省安吉县孝丰镇。<br />
永裕竹业历经十几年的发展，形成了具有自我特色的产业体系。在浙江、福建、云南等地构建了资源性基地，竹地板、竹家具、竹饰材三大系列成为企业发展的核心支柱。公司拥有15项发明和实用新型专利、四条国际一流的豪迈生产流水线、一千余名员工和近200人专业技术团队，具备年产350万平方米竹地板和20万套高档竹家具的生产能力。近几年来，公司年销售规模一直名列中国竹产业企业前茅。2011年，公司资产达3.5亿元，完成销售收入总额2.7亿元，实现利税3600万元，直接带动约1万余户竹农年创收1.8亿元。<br />
作为浙江省林业重点龙头企业和浙江省农业骨干重点龙头企业，永裕始终遵循“诚信务实、精益求精”的经营理念，不断规范企业管理，注重品牌推广，并致力于推动生态环境保护与森林资源的可持续利用，全力打造“健康、环保”的企业形象。永裕公司先后通过了ISO9001-2000国际质量体系认证、ISO14000环境体系认证以及国际森林管理组织FSC认证,“永裕”品牌也被认定为“中国驰名商标”。<br />
为进一步提高产品科技含量，增强企业科技创新能力，公司成立了专业竹家具及竹装饰材料研发和推广中心，厂房面积5万平方米，生产车间布局有实竹、实木加工流水线，拥有德国豪迈CNC铣边及钻孔加工中心、德国“HOLZMA”全自动计算器板材开料锯和德国“KUPER”自动单板纵向拼缝机等先进进口设备。在保质保交期的前提下，研发并逐步推广了各种实竹、实木橱柜，竹办公家具和竹时尚家具单品。同时，公司还与南京林业大学、浙江林学院等大专院校开展紧密的校企科技合作，成立了竹制产品研发中心，并在地方各级政府的帮助与支持下，设立了“专家院士工作站”和“博士后工作站”。这些举措极大地提升了企业自主研发能力，促进企业继续保持较快的增长步伐，预计永裕公司现已成为中国竹产业中规模最大、设备最先进、生产能力最强的企业之一,并将继续通过创新发展，不断推动永裕竹业在发展层次和速度上实现一个又一个新的跨越。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 173,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B0%B8%E8%A3%95',
    'title' => '永裕',
    'identifier' => 'node/160',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-07 15:13:58 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '艾鲜',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd75fe357-eb8d-4192-8004-f52ecc587913',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'daf399d4-3d3c-451e-a388-1085234e55e4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>SM“MLEKPOL”起源于20世纪80年代，专注于生产高品质乳产品，是波兰乳制品企业领导品牌之一</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>SM“MLEKPOL”起源于20世纪80年代，专注于生产高品质乳产品，是波兰乳制品企业领导品牌之一</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'PL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%89%BE%E9%B2%9C',
    'title' => '艾鲜',
    'identifier' => 'node/8',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '可比可',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'd4f1a7e1-503e-4760-a9bf-2629c129bbbe',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366952272,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e42ecc8d-0253-47d1-8384-4ad5391a16b4',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>可比可（KOPIKO）咖啡源自于印度尼西亚，是一款原装进口咖啡。印度尼西亚向来盛产咖啡豆，咖啡的历史源远流长，如同一段漫长的传奇故事。可比可咖啡精选上等咖啡豆，颗颗精挑细选、慢慢用心烘焙，为制作出纯正的意式咖啡，在上等的阿拉比卡咖啡豆中，添加优质的罗布斯塔咖啡豆（它能使咖啡表现应有的个性）进行完美拼配，让每一杯可比可咖啡都充满独特的个性，咖啡香味更浓烈，色泽更诱人，口感细腻醇厚，回味无穷。<br />
2012年这个东南亚著名咖啡品牌——可比可咖啡登陆中国，它与众不同的品牌推广方式，带给中国消费者耳目一新的咖啡体验，在中国市场掀起了一股意式咖啡的热潮，得到众多咖啡爱好者的喜爱和好评。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>可比可（KOPIKO）咖啡源自于印度尼西亚，是一款原装进口咖啡。印度尼西亚向来盛产咖啡豆，咖啡的历史源远流长，如同一段漫长的传奇故事。可比可咖啡精选上等咖啡豆，颗颗精挑细选、慢慢用心烘焙，为制作出纯正的意式咖啡，在上等的阿拉比卡咖啡豆中，添加优质的罗布斯塔咖啡豆（它能使咖啡表现应有的个性）进行完美拼配，让每一杯可比可咖啡都充满独特的个性，咖啡香味更浓烈，色泽更诱人，口感细腻醇厚，回味无穷。<br />
2012年这个东南亚著名咖啡品牌——可比可咖啡登陆中国，它与众不同的品牌推广方式，带给中国消费者耳目一新的咖啡体验，在中国市场掀起了一股意式咖啡的热潮，得到众多咖啡爱好者的喜爱和好评。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 46,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'ID',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%8F%AF%E6%AF%94%E5%8F%AF',
    'title' => '可比可',
    'identifier' => 'node/114',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-26 12:57:52 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '拜尔',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'c4818729-9891-4fa6-b676-9b7efbd8ada6',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367484527,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e605a7e3-3d2f-4b0c-9d58-6fc8cc92098c',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span>武汉拜尔木业有限公司成立于2000年9月，是一家专业从事生产、销售实木地板、实木复合地板、强化地板的大型专业化企业，在北京、武汉、南浔等地建起研发中心和生产基地，其生产设备均来自国内外知名企业表。拜尔木业年生产能力1500万平方米，实力雄厚。</span><br />
在公司营销战略的指导下，拜尔木业在武汉、北京、西安、重庆、湖南、新疆、云南等地建立了拜尔区域营销中心，销售服务网络遍布全国30多个省市自治区，授权专卖店达1200余家。自成立以来，拜尔地板销量持续增长，产品市场占有率逐年提升。拜尔木业以“胸怀天下、全球同步”的前瞻性眼光，致力于打造全国知名地板企业和国际化地板品牌！<br />
拜尔木业是中国质量万里行打假维权协作联盟副理事长单位，通过了ISO9001：2000国际质量管理体系认证，“中国环境标志产品”（十环）认证，2005年拜尔地板荣获由国家质检总局颁发的“国家免检产品”证书（已废止），2008年荣获“中国驰名商标”等一系列国家级荣誉称号。2010年11月，拜尔地板以其完善的品种、优质的质量和服务、实惠的价格，荣获中国建筑材料流通协会颁发的“国家建材下乡推进工作试点单位”称号，拜尔地板成为国家建材下乡工作的实践者之一。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>武汉拜尔木业有限公司成立于2000年9月，是一家专业从事生产、销售实木地板、实木复合地板、强化地板的大型专业化企业，在北京、武汉、南浔等地建起研发中心和生产基地，其生产设备均来自国内外知名企业表。拜尔木业年生产能力1500万平方米，实力雄厚。<br />
在公司营销战略的指导下，拜尔木业在武汉、北京、西安、重庆、湖南、新疆、云南等地建立了拜尔区域营销中心，销售服务网络遍布全国30多个省市自治区，授权专卖店达1200余家。自成立以来，拜尔地板销量持续增长，产品市场占有率逐年提升。拜尔木业以“胸怀天下、全球同步”的前瞻性眼光，致力于打造全国知名地板企业和国际化地板品牌！<br />
拜尔木业是中国质量万里行打假维权协作联盟副理事长单位，通过了ISO9001：2000国际质量管理体系认证，“中国环境标志产品”（十环）认证，2005年拜尔地板荣获由国家质检总局颁发的“国家免检产品”证书（已废止），2008年荣获“中国驰名商标”等一系列国家级荣誉称号。2010年11月，拜尔地板以其完善的品种、优质的质量和服务、实惠的价格，荣获中国建筑材料流通协会颁发的“国家建材下乡推进工作试点单位”称号，拜尔地板成为国家建材下乡工作的实践者之一。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 215,
      ),
      1 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%8B%9C%E5%B0%94',
    'title' => '拜尔',
    'identifier' => 'node/128',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 16:48:47 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '美素佳儿',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '91df3f9d-bbdb-46bb-aeec-3edc1ec1708a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366468748,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e6ad7739-bddf-4fe3-a9cb-b5d3817212e7',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
美素佳儿(Friso)是荷兰皇家菲仕兰坎皮纳旗下的婴幼儿奶粉品牌。<br />
荷兰皇家菲仕兰坎皮纳集团是全球最大的合作型乳品企业，由欧洲超过20,000名左右会员农场主联合经营，共同管理，严格保证了美素佳儿奶粉的稳定品质。<br />
·合作型乳制品企业<br />
·在欧洲拥有超过20,000名左右会员农场主<br />
·销售遍布全球100多个国家<br />
·目前年营业额已超过100亿欧元<br />
纯正奶源，100%荷兰原装进口美素佳儿来自拥有140多年历史的荷兰皇家菲仕兰坎皮纳公司，是真正的原装进口奶粉。我们从源头开始就严格把关，从原奶到罐装均在荷兰本地进行，全程监控，确保安全稳定的产品表现。<br />
不上火，好消化，在发达城市的高端妈妈群中极具口碑。<br />
美素佳儿奶粉在发达城市的高端妈妈群中极具口碑，在网络上的口碑也非常好，妈妈都觉得宝宝用了以后不上火，不热气，大便顺畅，也不容易生病，生长发育都很好。<br />
新升级Soft Tummy蛋白优化配方 更适合宝宝的幼小肠胃</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>美素佳儿(Friso)是荷兰皇家菲仕兰坎皮纳旗下的婴幼儿奶粉品牌。<br />
荷兰皇家菲仕兰坎皮纳集团是全球最大的合作型乳品企业，由欧洲超过20,000名左右会员农场主联合经营，共同管理，严格保证了美素佳儿奶粉的稳定品质。<br />
·合作型乳制品企业<br />
·在欧洲拥有超过20,000名左右会员农场主<br />
·销售遍布全球100多个国家<br />
·目前年营业额已超过100亿欧元<br />
纯正奶源，100%荷兰原装进口美素佳儿来自拥有140多年历史的荷兰皇家菲仕兰坎皮纳公司，是真正的原装进口奶粉。我们从源头开始就严格把关，从原奶到罐装均在荷兰本地进行，全程监控，确保安全稳定的产品表现。<br />
不上火，好消化，在发达城市的高端妈妈群中极具口碑。<br />
美素佳儿奶粉在发达城市的高端妈妈群中极具口碑，在网络上的口碑也非常好，妈妈都觉得宝宝用了以后不上火，不热气，大便顺畅，也不容易生病，生长发育都很好。<br />
新升级Soft Tummy蛋白优化配方 更适合宝宝的幼小肠胃</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 19,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E7%BE%8E%E7%B4%A0%E4%BD%B3%E5%84%BF',
    'title' => '美素佳儿',
    'identifier' => 'node/61',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 22:39:08 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '长颈',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '0f0fa42e-b2e5-42d5-a320-d36cbdf314df',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366798135,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e791b024-7aad-4c43-939f-d8568ead973e',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>F.O.V长颈。由法国狄莫酒厂出产的F.O.V是干邑白兰地的著名品牌，凭着独特优良的酒质和其匠心独运的樽型，更成为人所共知的标记，因而得享“长颈”之名。长颈F.O.V.采用上佳葡萄酿制，清冽甘香，带有怡人的原野香草气息。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>F.O.V长颈。由法国狄莫酒厂出产的F.O.V是干邑白兰地的著名品牌，凭着独特优良的酒质和其匠心独运的樽型，更成为人所共知的标记，因而得享“长颈”之名。长颈F.O.V.采用上佳葡萄酿制，清冽甘香，带有怡人的原野香草气息。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 334,
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%95%BF%E9%A2%88',
    'title' => '长颈',
    'identifier' => 'node/92',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-24 18:08:55 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '葡萄牙阿默林',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '36122d2b-9e73-4209-a73f-a405036db07d',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367670044,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'e89746f5-d79b-4a02-9b8f-c56628e2ac9d',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">AMORIM公司跻身世界500强，其软木产品占世界软木市场的78%。是软木工业的世界领导者，其生产的软木地板销售量占全球的85%，是唯一全力发展软木的企业，从1868年便开始牢牢扎根于原料的产地。时至今日，已成为全球最大的软木地板生产商，要求最高品质及技术生产质量。</span><br />
阿默林-----全球最大的软木产品生产企业<br />
工厂占地面积： 二十万平方米。生产能力：七百万平方米。市场份额占有量：为全世界需求量的60%，(销售量的65%)。<br />
员工总数: 802 (198 名海外雇员)<br />
葡萄牙阿默林软木地板特点<br />
软木工业的世界领导者：从1868年开始，至今已有143年软木生产历史。<br />
超耐磨—极品耐磨技术-Xtreme WRT®先进的陶瓷漆面处理技术，抗磨<br />
损性能优于普通漆面3.5倍，抗刮擦性能优于普通漆面4倍!<br />
超环保—全新Acrodur®纯水性粘合剂环保技术，不含任何溶剂，例如苯<br />
酚、 甲醛和异氰酸酯等有害成分。地板安装过程中推荐使用德<br />
国VAKOL水性胶，您的家从此开始纯绿色!!</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>AMORIM公司跻身世界500强，其软木产品占世界软木市场的78%。是软木工业的世界领导者，其生产的软木地板销售量占全球的85%，是唯一全力发展软木的企业，从1868年便开始牢牢扎根于原料的产地。时至今日，已成为全球最大的软木地板生产商，要求最高品质及技术生产质量。<br />
阿默林-----全球最大的软木产品生产企业<br />
工厂占地面积： 二十万平方米。生产能力：七百万平方米。市场份额占有量：为全世界需求量的60%，(销售量的65%)。<br />
员工总数: 802 (198 名海外雇员)<br />
葡萄牙阿默林软木地板特点<br />
软木工业的世界领导者：从1868年开始，至今已有143年软木生产历史。<br />
超耐磨—极品耐磨技术-Xtreme WRT®先进的陶瓷漆面处理技术，抗磨<br />
损性能优于普通漆面3.5倍，抗刮擦性能优于普通漆面4倍!<br />
超环保—全新Acrodur®纯水性粘合剂环保技术，不含任何溶剂，例如苯<br />
酚、 甲醛和异氰酸酯等有害成分。地板安装过程中推荐使用德<br />
国VAKOL水性胶，您的家从此开始纯绿色!!</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 31,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'PT',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%91%A1%E8%90%84%E7%89%99%E9%98%BF%E9%BB%98%E6%9E%97',
    'title' => '葡萄牙阿默林',
    'identifier' => 'node/149',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 20:20:44 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '喜力',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '98d2f577-9ad5-4236-a565-0b7e0470a2f9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365948195,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ed4bb26b-b1dd-4fd8-a15a-009e749af95f',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>喜力国际是一家荷兰酿酒公司，于1864年杰拉德‧阿德里安‧海尼根（Gerard Adriaan Heineken）于阿姆斯特丹创立。2012年，喜力在世界85个国家拥有超过165家酿酒厂，聘请约65,557人。长久以来，喜力酿制并销售了超过170种特制、本地性、地区性以致国际顶级的优质啤酒，包括克鲁兹坎波（Cruzcampo），阿姆斯特尔（Amstel),苏尔（Sol），纽卡索尔（Newcastle)，虎牌（Tiger），日维茨（Żywiec），斯达布鲁诺（Starobrno），扎戈尔卡（Zagorka），伯拉莫雷蒂（Birra Moretti），俄科塔（Ochota），墨菲（Murphy’s），星牌（Star），当然还有喜力比尔森（Heineken Pilsener）啤酒。喜力宣称，自从将近150年前生产出了第一桶啤酒，其原始配方从未改变。<br />
喜力全年啤酒生产量为2.24亿美制公升（hectoliters）（约合224亿公升，或0.224亿立方米），是世界第3大啤酒酿造商，排名在百威英博啤酒（AB-InBev）、SABMiller公司后。喜力的荷兰酿酒厂位于祖特伍德（Zoeterwoude）和斯海尔托亨博斯（\'s-Hertogenbosch）。最初的酿酒厂设于阿姆斯特丹，已于1988年关闭。建筑物被改装成为博物馆，取名为“喜力经验”（Heineken Experience）。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>喜力国际是一家荷兰酿酒公司，于1864年杰拉德‧阿德里安‧海尼根（Gerard Adriaan Heineken）于阿姆斯特丹创立。2012年，喜力在世界85个国家拥有超过165家酿酒厂，聘请约65,557人。长久以来，喜力酿制并销售了超过170种特制、本地性、地区性以致国际顶级的优质啤酒，包括克鲁兹坎波（Cruzcampo），阿姆斯特尔（Amstel),苏尔（Sol），纽卡索尔（Newcastle)，虎牌（Tiger），日维茨（Żywiec），斯达布鲁诺（Starobrno），扎戈尔卡（Zagorka），伯拉莫雷蒂（Birra Moretti），俄科塔（Ochota），墨菲（Murphy’s），星牌（Star），当然还有喜力比尔森（Heineken Pilsener）啤酒。喜力宣称，自从将近150年前生产出了第一桶啤酒，其原始配方从未改变。<br />
喜力全年啤酒生产量为2.24亿美制公升（hectoliters）（约合224亿公升，或0.224亿立方米），是世界第3大啤酒酿造商，排名在百威英博啤酒（AB-InBev）、SABMiller公司后。喜力的荷兰酿酒厂位于祖特伍德（Zoeterwoude）和斯海尔托亨博斯（\'s-Hertogenbosch）。最初的酿酒厂设于阿姆斯特丹，已于1988年关闭。建筑物被改装成为博物馆，取名为“喜力经验”（Heineken Experience）。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 343,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NL',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%96%9C%E5%8A%9B',
    'title' => '喜力',
    'identifier' => 'node/36',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 22:03:15 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '长城',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6ae3a879-e27d-4862-a122-807b83514a3e',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366014432,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f0621e70-5d4d-441c-a106-224d447f3540',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>由中粮酒业有限公司出品的长城葡萄酒是全球500强企业中粮集团旗下的驰名品牌，被誉为中国葡萄酒第一品牌，同时是国宴用酒，连续多年产销量居全国第一。<br />
2004年，“长城”商标被国家工商总局认定为中国驰名商标。2006年，长城葡萄酒成为北京2008年奥运会正式葡萄酒产品。同年，以125.87亿元的品牌价值荣登“2006中国品牌500强”行业榜首。2009年，长城葡萄酒成为2010年上海世博会唯一指定葡萄酒。 中粮酒业旗下长城葡萄酒是中国最早按照国际标准酿造的葡萄酒，并拥有“中国出口名牌”称号，是国家免检产品。长城葡萄酒在中国最好的葡萄产区河北沙城、河北昌黎和山东蓬莱拥有三大生产基地，其旗下著名产品长城桑干酒庄系列、华夏葡园小产区系列、星级干红系列、海岸葡萄酒系列等产品多次在巴黎、布鲁塞尔、伦敦等多个国际专业评酒会上捧得最高奖项，远销法国等20多个国家和地区，以独具个性的风格和品味带给消费者丰富多彩的葡萄酒体验。长城葡萄酒亦是唯一荣登全球权威商业调查机构美国盖洛普“21世纪奢华品牌榜之顶级品牌榜”的中国葡萄酒。近年来凭借着绝佳的品质和独特的风味让越来越多的国内外爱酒人士陶然迷醉——不仅是APEC财长会议晚宴专用酒、亚洲博鳌论坛唯一指定用酒、人民大会堂国宴用酒，还屡次因其卓越品质被用作“国家级礼物”赠予国际政要、商业巨子和学界巨擘。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>由中粮酒业有限公司出品的长城葡萄酒是全球500强企业中粮集团旗下的驰名品牌，被誉为中国葡萄酒第一品牌，同时是国宴用酒，连续多年产销量居全国第一。<br />
2004年，“长城”商标被国家工商总局认定为中国驰名商标。2006年，长城葡萄酒成为北京2008年奥运会正式葡萄酒产品。同年，以125.87亿元的品牌价值荣登“2006中国品牌500强”行业榜首。2009年，长城葡萄酒成为2010年上海世博会唯一指定葡萄酒。 中粮酒业旗下长城葡萄酒是中国最早按照国际标准酿造的葡萄酒，并拥有“中国出口名牌”称号，是国家免检产品。长城葡萄酒在中国最好的葡萄产区河北沙城、河北昌黎和山东蓬莱拥有三大生产基地，其旗下著名产品长城桑干酒庄系列、华夏葡园小产区系列、星级干红系列、海岸葡萄酒系列等产品多次在巴黎、布鲁塞尔、伦敦等多个国际专业评酒会上捧得最高奖项，远销法国等20多个国家和地区，以独具个性的风格和品味带给消费者丰富多彩的葡萄酒体验。长城葡萄酒亦是唯一荣登全球权威商业调查机构美国盖洛普“21世纪奢华品牌榜之顶级品牌榜”的中国葡萄酒。近年来凭借着绝佳的品质和独特的风味让越来越多的国内外爱酒人士陶然迷醉——不仅是APEC财长会议晚宴专用酒、亚洲博鳌论坛唯一指定用酒、人民大会堂国宴用酒，还屡次因其卓越品质被用作“国家级礼物”赠予国际政要、商业巨子和学界巨擘。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 339,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%95%BF%E5%9F%8E',
    'title' => '长城',
    'identifier' => 'node/45',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-15 16:27:12 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '舍得酒',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'b4c1e186-d7df-47dd-9fd6-01ca050bc7f0',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367147050,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f7db47cc-7fb6-4a35-a8a9-ab2382d6ec16',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>舍得酒，是沱牌集团重点发展的定位于高端的战略性品牌，是沱牌集团第三次飞跃的主要品牌产品，是目前沱牌集团重点培养、重点发展的第一品牌。舍得酒的品质依托沱牌集团30多年发展而积累的数万吨优质原酒。<br />
<br />
在白酒生产过程中，高档优质原酒的产量较低，一般的企业高档优质原酒的储量也都较低，即使是国内同等规模的企业，高档优质原酒储量也不过几千吨，而沱牌集团的高档优质原酒储量十万余吨，是目前国内高档优质原酒储量最大的企业。这是因为几十年来沱牌集团的高档优质酒销量较小，经过多年积累，才逐渐形成了目前国内储量和规模最大的高档优质原酒陶坛窖藏储存库。<br />
舍得酒定位于“中华第一文化酒” 在高档白酒市场中，舍得定位于“中华第一文化酒”，依托中国传统文化精髓优势传播品牌文化，不模仿其它白酒单纯以酒文化、窖池文化等细碎、片面的伪文化为核心的文化传播。舍得将以继承和弘扬中国国学文化的精髓为己任，在传播中华文化的同时树立舍得酒的高端白酒实力品牌形象。从文化上看，舍得酒的前身是一千多年前的射洪春酒，射洪为巴蜀腹心，是中国高端白酒的核心产区之一，2010年世界侏罗纪大会举办地。“射洪春酒”起源于汉代，唐宋年间进入鼎盛时期，成为剑南道贡献朝廷的烧春酒。唐时“射洪春酒”已负盛名，诗人杜甫赋诗赞曰“射洪春酒寒仍绿”、“蜀酒浓无敌”，“浓无敌”在蒸馏酒技术尚不发达的古代代表了一种较高的水平。此后，射洪春酒历经宋、元、明、清历代的传承和改进，集酿酒工艺之大乘，是为今日舍得酒。从汉唐延续千年酿酒历史，可谓有据可查的中国历史最早的白酒之一，同时舍得酒中“舍得之道”所蕴含的深刻文化内涵也非当今任何白酒可比，舍得定位于第一文化酒的胆识和气魄绝非其它品牌所能比拟。<br />
舍得酒是蕴涵舍得精髓的国产高档酒，浓头酱尾，六粮酿造，百斤好酒仅得二斤舍得精华。舍得酒是中国品质最好的高档白酒，成就幽雅风格之典范依托沱牌集团强大的生产和技术优势，舍得酒以“2%精华，成就极致尊享”为品质核心，力图成为中国品质最好的高档白酒品牌。中国高档白酒市场竞争的核心和本质是品质的竞争，只有高品质的白酒才有可能成为未来中国高档白酒市场的王者。舍得酒的以2%品质最佳的原酒经多年窖藏才用于勾调的品质精华论，还原中国高档白酒竞争的本质，最终将超越窖池论、历史论而成为高档白酒市场的真正权威标准！舍得酒的幽雅风格独创国家高端白酒新标准（GB/T21822-2008）。沱牌集团经过多年的稳健发展，目前企业的生产能力、生产规模、技术水平都已经成为行业的领跑者，沱牌绿色酿酒生态园是中国第一个酿酒生态园，在90年代初被作为行业典范向全行业推广；沱牌集团拥有人工窖泥培养技术、轮轮双轮底发酵技术等20多项国家专利和领先技术；沱牌集团技术团队在四川国家级评委考试中，获得20个资格中的10个，占据四川国家级评委考试的半壁江山，沱牌集团的技术实力得到了充分的展示。<br />
舍得酒是绿色生态健康型、舒适型白酒舍得人率先在行业内提出生态酿酒新概念。舍得酒生产酿造的全过程都是在绿色生态健康的环境中完成的，舍得酒的生产原则也是以奉献给消费者以绿色生态健康的优质产品，舍得酒的生产工艺中，在使白酒香味口感品质达到最佳标准的同时，科学提高白酒中有益于人体健康的微量成分，降低白酒中无益成分的指标，使舍得酒具有了前所未有的极致品质和健康概念。<br />
古人说过：“自古惟名士之杯方能成就佳酿。”杯中玉露，舍得珍酿，惟有真正成功的社会精英，善于享受生活的风流雅士，才懂得品味。<br />
品舍得酒，与其说是眼、口、鼻、舌的感官享受，不如说是种高雅的艺术鉴赏。须得在轻咂慢啜之际细细品味。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>舍得酒，是沱牌集团重点发展的定位于高端的战略性品牌，是沱牌集团第三次飞跃的主要品牌产品，是目前沱牌集团重点培养、重点发展的第一品牌。舍得酒的品质依托沱牌集团30多年发展而积累的数万吨优质原酒。</p>
<p>在白酒生产过程中，高档优质原酒的产量较低，一般的企业高档优质原酒的储量也都较低，即使是国内同等规模的企业，高档优质原酒储量也不过几千吨，而沱牌集团的高档优质原酒储量十万余吨，是目前国内高档优质原酒储量最大的企业。这是因为几十年来沱牌集团的高档优质酒销量较小，经过多年积累，才逐渐形成了目前国内储量和规模最大的高档优质原酒陶坛窖藏储存库。<br />
舍得酒定位于“中华第一文化酒” 在高档白酒市场中，舍得定位于“中华第一文化酒”，依托中国传统文化精髓优势传播品牌文化，不模仿其它白酒单纯以酒文化、窖池文化等细碎、片面的伪文化为核心的文化传播。舍得将以继承和弘扬中国国学文化的精髓为己任，在传播中华文化的同时树立舍得酒的高端白酒实力品牌形象。从文化上看，舍得酒的前身是一千多年前的射洪春酒，射洪为巴蜀腹心，是中国高端白酒的核心产区之一，2010年世界侏罗纪大会举办地。“射洪春酒”起源于汉代，唐宋年间进入鼎盛时期，成为剑南道贡献朝廷的烧春酒。唐时“射洪春酒”已负盛名，诗人杜甫赋诗赞曰“射洪春酒寒仍绿”、“蜀酒浓无敌”，“浓无敌”在蒸馏酒技术尚不发达的古代代表了一种较高的水平。此后，射洪春酒历经宋、元、明、清历代的传承和改进，集酿酒工艺之大乘，是为今日舍得酒。从汉唐延续千年酿酒历史，可谓有据可查的中国历史最早的白酒之一，同时舍得酒中“舍得之道”所蕴含的深刻文化内涵也非当今任何白酒可比，舍得定位于第一文化酒的胆识和气魄绝非其它品牌所能比拟。<br />
舍得酒是蕴涵舍得精髓的国产高档酒，浓头酱尾，六粮酿造，百斤好酒仅得二斤舍得精华。舍得酒是中国品质最好的高档白酒，成就幽雅风格之典范依托沱牌集团强大的生产和技术优势，舍得酒以“2%精华，成就极致尊享”为品质核心，力图成为中国品质最好的高档白酒品牌。中国高档白酒市场竞争的核心和本质是品质的竞争，只有高品质的白酒才有可能成为未来中国高档白酒市场的王者。舍得酒的以2%品质最佳的原酒经多年窖藏才用于勾调的品质精华论，还原中国高档白酒竞争的本质，最终将超越窖池论、历史论而成为高档白酒市场的真正权威标准！舍得酒的幽雅风格独创国家高端白酒新标准（GB/T21822-2008）。沱牌集团经过多年的稳健发展，目前企业的生产能力、生产规模、技术水平都已经成为行业的领跑者，沱牌绿色酿酒生态园是中国第一个酿酒生态园，在90年代初被作为行业典范向全行业推广；沱牌集团拥有人工窖泥培养技术、轮轮双轮底发酵技术等20多项国家专利和领先技术；沱牌集团技术团队在四川国家级评委考试中，获得20个资格中的10个，占据四川国家级评委考试的半壁江山，沱牌集团的技术实力得到了充分的展示。<br />
舍得酒是绿色生态健康型、舒适型白酒舍得人率先在行业内提出生态酿酒新概念。舍得酒生产酿造的全过程都是在绿色生态健康的环境中完成的，舍得酒的生产原则也是以奉献给消费者以绿色生态健康的优质产品，舍得酒的生产工艺中，在使白酒香味口感品质达到最佳标准的同时，科学提高白酒中有益于人体健康的微量成分，降低白酒中无益成分的指标，使舍得酒具有了前所未有的极致品质和健康概念。<br />
古人说过：“自古惟名士之杯方能成就佳酿。”杯中玉露，舍得珍酿，惟有真正成功的社会精英，善于享受生活的风流雅士，才懂得品味。<br />
品舍得酒，与其说是眼、口、鼻、舌的感官享受，不如说是种高雅的艺术鉴赏。须得在轻咂慢啜之际细细品味。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 340,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%88%8D%E5%BE%97%E9%85%92',
    'title' => '舍得酒',
    'identifier' => 'node/123',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-28 19:04:10 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '蜂之语',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '6838c4a3-699e-4d34-8f41-7a1cfb380035',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366512994,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f89735fe-9fca-420d-8c9a-060f9e23f083',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>浙江蜂之语蜂业集团有限公司由杭州天地保健品有限公司等5家企业组成，现有员工400余人，总资产11433余万元，年销售1.2亿元人民币。集团总部位于杭州市桐庐县，占地70000余平方米，建有GMP标准厂房7000平方米、-30℃冷库1800立方以及其他各类生产、综合建筑10000余平方米。<br />
公司是一家经营蜂产品系列为主的，集生产、科研、进出口为一体的农业综合开发型企业，其中蜂王浆年收购量为600余吨，约占全国总产量的25%；出口蜂王浆400余吨，约占全国出口量的30%；是全国最大的蜂产品生产、出口基地，是浙江省农业骨干龙头企业、全国蜂产品行业龙头企业、杭州市高新技术企业；"蜂之语"品牌获浙江省名牌、杭州市著名商标、浙江省优秀科技产品等称号。<br />
蜂之语创建伊始，正值改革开放兴起之时，为了能够锤炼驾驭市场的本领，以加入国际大循环为奋斗目标，放眼世界，到国际市场寻找自己的奶酪。历经8年的国际市场大舞台的跌打滚爬，取得了属于自己的蜂产品市场份额，产品远销30多个国家和地区，提供了日本市场50%的蜂皇浆，站稳了国际市场的脚跟。为此，蜂之语产品获得了出口免检的厚遇，多次荣获国际博览金奖，蜂之语公司也随之发展为全国屈指可数的蜂产品生产基地，成为中国蜂产品协会指定出口生产商。<br />
蜂之语不仅生产出口鲜皇浆，皇浆冻干粉和蜂之语胶囊，还研制开发了阳光胶囊，南美森林蜂胶软胶囊等。另外，蜂花粉、蜂蜜、蜂蜡烛等品种繁多，蜂农佳酿、蜂胶糖、脱蛋白皇浆粉、酶解蜂皇粉、花粉提取物。目前的蜂之语科技园，占地70000多平方米，建有3000平方米综合大楼；；3500平方米蜂业博物馆；7000平方米GMP标准厂房；1500立方米-30℃?以下的冷库；还有蜂产品的研发中心，实验蜂场等，形成集生产、科研、观光于一体的综合性蜂产品加工基地。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江蜂之语蜂业集团有限公司由杭州天地保健品有限公司等5家企业组成，现有员工400余人，总资产11433余万元，年销售1.2亿元人民币。集团总部位于杭州市桐庐县，占地70000余平方米，建有GMP标准厂房7000平方米、-30℃冷库1800立方以及其他各类生产、综合建筑10000余平方米。<br />
公司是一家经营蜂产品系列为主的，集生产、科研、进出口为一体的农业综合开发型企业，其中蜂王浆年收购量为600余吨，约占全国总产量的25%；出口蜂王浆400余吨，约占全国出口量的30%；是全国最大的蜂产品生产、出口基地，是浙江省农业骨干龙头企业、全国蜂产品行业龙头企业、杭州市高新技术企业；"蜂之语"品牌获浙江省名牌、杭州市著名商标、浙江省优秀科技产品等称号。<br />
蜂之语创建伊始，正值改革开放兴起之时，为了能够锤炼驾驭市场的本领，以加入国际大循环为奋斗目标，放眼世界，到国际市场寻找自己的奶酪。历经8年的国际市场大舞台的跌打滚爬，取得了属于自己的蜂产品市场份额，产品远销30多个国家和地区，提供了日本市场50%的蜂皇浆，站稳了国际市场的脚跟。为此，蜂之语产品获得了出口免检的厚遇，多次荣获国际博览金奖，蜂之语公司也随之发展为全国屈指可数的蜂产品生产基地，成为中国蜂产品协会指定出口生产商。<br />
蜂之语不仅生产出口鲜皇浆，皇浆冻干粉和蜂之语胶囊，还研制开发了阳光胶囊，南美森林蜂胶软胶囊等。另外，蜂花粉、蜂蜜、蜂蜡烛等品种繁多，蜂农佳酿、蜂胶糖、脱蛋白皇浆粉、酶解蜂皇粉、花粉提取物。目前的蜂之语科技园，占地70000多平方米，建有3000平方米综合大楼；；3500平方米蜂业博物馆；7000平方米GMP标准厂房；1500立方米-30℃?以下的冷库；还有蜂产品的研发中心，实验蜂场等，形成集生产、科研、观光于一体的综合性蜂产品加工基地。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 30,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E8%9C%82%E4%B9%8B%E8%AF%AD',
    'title' => '蜂之语',
    'identifier' => 'node/73',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-21 10:56:34 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '汤臣倍健',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '326c8abf-aa0f-4d08-8048-1450af278049',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365914662,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'f944880d-8dd4-4d5b-a624-be6cc074c5a8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>汤臣倍健创立于1995年10月，2002年系统地将膳食营养补充剂引入中国非直销领域，并迅速成长为中国膳食营养补充剂领导品牌和标杆企业，也是中国保健行业第一家A.AA信用等级企业。2010年8月，国际篮球巨星姚明签约成为汤臣倍健的形象代言人，同年12月15日，汤臣倍健（股票代码：300146.lI）在深圳交易所创业板挂牌上市。汤臣倍健恪守一套近乎苛刻的原料来源审核制度，在全球范围内精选最合适的各种原料。至今，数十种主要原料和辅料进口自新西兰、巴西、挪威、冰岛、美国、法国、德国、瑞士、澳大利亚等十数个国家和地区。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>汤臣倍健创立于1995年10月，2002年系统地将膳食营养补充剂引入中国非直销领域，并迅速成长为中国膳食营养补充剂领导品牌和标杆企业，也是中国保健行业第一家A.AA信用等级企业。2010年8月，国际篮球巨星姚明签约成为汤臣倍健的形象代言人，同年12月15日，汤臣倍健（股票代码：300146.lI）在深圳交易所创业板挂牌上市。汤臣倍健恪守一套近乎苛刻的原料来源审核制度，在全球范围内精选最合适的各种原料。至今，数十种主要原料和辅料进口自新西兰、巴西、挪威、冰岛、美国、法国、德国、瑞士、澳大利亚等十数个国家和地区。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 109,
      ),
      1 => array(
        'tid' => 312,
      ),
      2 => array(
        'tid' => 288,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%B1%A4%E8%87%A3%E5%80%8D%E5%81%A5',
    'title' => '汤臣倍健',
    'identifier' => 'node/5',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 12:44:22 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '圣象',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '196d9296-0ee9-4c8e-af53-76e5e790b579',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367074947,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fac67b9d-2a77-4b5b-9921-634e7d860540',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>圣象集团成立于1995年，总部位于上海，17年来圣象始终站在行业的前列，并以其"专业品质，值得信赖"的品牌核心价值和"用爱承载"的品牌理念，创造了一个个"第一"&nbsp;，引领着整个行业的发展。</p>

<p>第一家&nbsp;将强化复合木地板从欧洲引入中国的地板企业。</p>

<p>第一家&nbsp;逆向OEM的中国地板企业。</p>

<p>第一家&nbsp;引进国际一流的强化复合木地板生产线。</p>

<p>第一家&nbsp;以品牌专卖店形式销售地板的中国地板企业。</p>

<p>第一家&nbsp;通过在央视投放电视广告启动品牌全面塑造的地板企业。</p>

<p>第一家&nbsp;打造完整产业链的中国木业企业。</p>

<p>第一家&nbsp;在中国推出E0环保标准。</p>

<p>第一家&nbsp;全面采用F4星国际环保至高标准。</p>

<p>如今，圣象已经完成了全球一体化产业链布局，建立一条完善的、涵盖林业资源、基材、工厂、研发、设计、营销、服务7大环节的涉木家居上下游的绿色产业链，并形成了一个全面品质自控体系。通过全球化合作，圣象将最先进的技术与工艺带到中国，在三层实木与多层实木两个创新品类上建立了无可比拟的技术优势。圣象，已经成为品质和潮流的引领者。圣象及其股东已拥有150万亩速生林基地、世界一流的生产研发基地、年产能5000万平方米的9家地板及配件工厂;拥有年产能70万套的圣象木门工厂和年产能1.5万套的圣象衣柜制造基地。圣象已经从单纯的地板品类延伸至包括木门、衣柜等在内的一体化涉木家居的品类格局。</p>

<p>圣象产品涵盖强化木地板、三层实木地板、多层实木地板、木门、整体衣橱、家具等系列。营销网络遍布全球，在中国拥有3000家统一授权、统一形象的地板专营店和700家木门、衣柜专卖店，在美国、德国、日本、印度、韩国拥有多个独资、合资、合作的营销公司。2010年初，圣象进驻淘宝商城。迄今为止，圣象已成为淘宝商城的地板类销售第一名，是口碑和信誉度最高的品牌商城之一，并在北京开设了第一家圣象淘宝实体店!圣象全国系统内员工超过20000&nbsp;名，拥有500&nbsp;万幸福满意的忠实用户。</p>

<p>2011年，据世界品牌实验室最新数据发布，圣象品牌价值增至121.35亿，排名第85位，连续7年蝉联建材行业榜首，首次跻身中国品牌价值百强榜，截至2010年，圣象地板累计销量已经超过2亿平方米，并连续16年全国同类产品销量第一。</p>

<p>圣象以其永恒不变的品质承诺，领先国际的环保标准，时尚设计与个性的选择，创新领先的工艺功能，值得信赖的品质实力，积极承担的社会责任。已经成为公认的涉木家居领导品牌。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>圣象集团成立于1995年，总部位于上海，17年来圣象始终站在行业的前列，并以其"专业品质，值得信赖"的品牌核心价值和"用爱承载"的品牌理念，创造了一个个"第一" ，引领着整个行业的发展。</p>
<p>第一家 将强化复合木地板从欧洲引入中国的地板企业。</p>
<p>第一家 逆向OEM的中国地板企业。</p>
<p>第一家 引进国际一流的强化复合木地板生产线。</p>
<p>第一家 以品牌专卖店形式销售地板的中国地板企业。</p>
<p>第一家 通过在央视投放电视广告启动品牌全面塑造的地板企业。</p>
<p>第一家 打造完整产业链的中国木业企业。</p>
<p>第一家 在中国推出E0环保标准。</p>
<p>第一家 全面采用F4星国际环保至高标准。</p>
<p>如今，圣象已经完成了全球一体化产业链布局，建立一条完善的、涵盖林业资源、基材、工厂、研发、设计、营销、服务7大环节的涉木家居上下游的绿色产业链，并形成了一个全面品质自控体系。通过全球化合作，圣象将最先进的技术与工艺带到中国，在三层实木与多层实木两个创新品类上建立了无可比拟的技术优势。圣象，已经成为品质和潮流的引领者。圣象及其股东已拥有150万亩速生林基地、世界一流的生产研发基地、年产能5000万平方米的9家地板及配件工厂;拥有年产能70万套的圣象木门工厂和年产能1.5万套的圣象衣柜制造基地。圣象已经从单纯的地板品类延伸至包括木门、衣柜等在内的一体化涉木家居的品类格局。</p>
<p>圣象产品涵盖强化木地板、三层实木地板、多层实木地板、木门、整体衣橱、家具等系列。营销网络遍布全球，在中国拥有3000家统一授权、统一形象的地板专营店和700家木门、衣柜专卖店，在美国、德国、日本、印度、韩国拥有多个独资、合资、合作的营销公司。2010年初，圣象进驻淘宝商城。迄今为止，圣象已成为淘宝商城的地板类销售第一名，是口碑和信誉度最高的品牌商城之一，并在北京开设了第一家圣象淘宝实体店!圣象全国系统内员工超过20000 名，拥有500 万幸福满意的忠实用户。</p>
<p>2011年，据世界品牌实验室最新数据发布，圣象品牌价值增至121.35亿，排名第85位，连续7年蝉联建材行业榜首，首次跻身中国品牌价值百强榜，截至2010年，圣象地板累计销量已经超过2亿平方米，并连续16年全国同类产品销量第一。</p>
<p>圣象以其永恒不变的品质承诺，领先国际的环保标准，时尚设计与个性的选择，创新领先的工艺功能，值得信赖的品质实力，积极承担的社会责任。已经成为公认的涉木家居领导品牌。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 215,
      ),
      2 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%9C%A3%E8%B1%A1',
    'title' => '圣象',
    'identifier' => 'node/122',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-27 23:02:27 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '兔宝宝',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '979f25d0-99b5-439e-b358-c940b95a10b9',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366445960,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fb9a73bf-71c4-431a-9940-97879bb23298',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
德华兔宝宝装饰新材股份有限公司创建于1993年，是我国装饰贴面板行业产销规模最大企业。公司股票于2005年5月10日在深圳证券交易所上市交易（股票简称：兔宝宝，股票代码：002043），是国内同行业中首家上市公司。 公司以浙江为主要产业基地，不断优化配置资源，持续稳健对外扩张，在江苏、江西、湖北等地已形成一定规模的产业集群。 经过十多年不懈努力和创新发展，公司已经发展成为一家室内装饰材料综合供应商，形成了从林木资源的种植抚育和全球采购，到生产装饰贴面板、多层胶合板、防火胶合板、细木工板、科技木、集成材、密度板、刨花板、实木复合地板、工艺木门、纸面石膏板、油漆涂料胶粘剂等十二大产品系列的完整产业链。产品销售网络覆盖全国各地，并销往美洲、欧洲、澳洲、中东等全球各地。<br />
截至2011年，德华兔宝宝公司已通过ISO9001、ISO14001国际质量、环境管理体系认证，中国环境标志产品认证，FSC森林认证，JAS认证、CE认证，CARB认证等诸多认证，荣获中国驰名商标、中国名牌产品称号。公司在环保型装饰材料的研发和市场推广上一直处于国内领先地位，产品达到苛刻的欧洲E0、E1级环保标准。十多年来不断的资源优化组合，使公司的品牌、规模、研发能力、人力资源、原木采购和产品营销网络等在国内同行业中形成明显的领先优势，从而确保了公司业绩的稳步提升。<br />
公司以推进行业绿色进程为己任，积极整合各种优势资源参与全球竞争，倡导绿色消费理念，以高品质、高环保产品为载体，正在积极实施装饰材料环保套餐“一站式”专卖店网络建设，致力于把德华兔宝宝打造成为我国装饰材料最强综合供应商。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>德华兔宝宝装饰新材股份有限公司创建于1993年，是我国装饰贴面板行业产销规模最大企业。公司股票于2005年5月10日在深圳证券交易所上市交易（股票简称：兔宝宝，股票代码：002043），是国内同行业中首家上市公司。 公司以浙江为主要产业基地，不断优化配置资源，持续稳健对外扩张，在江苏、江西、湖北等地已形成一定规模的产业集群。 经过十多年不懈努力和创新发展，公司已经发展成为一家室内装饰材料综合供应商，形成了从林木资源的种植抚育和全球采购，到生产装饰贴面板、多层胶合板、防火胶合板、细木工板、科技木、集成材、密度板、刨花板、实木复合地板、工艺木门、纸面石膏板、油漆涂料胶粘剂等十二大产品系列的完整产业链。产品销售网络覆盖全国各地，并销往美洲、欧洲、澳洲、中东等全球各地。<br />
截至2011年，德华兔宝宝公司已通过ISO9001、ISO14001国际质量、环境管理体系认证，中国环境标志产品认证，FSC森林认证，JAS认证、CE认证，CARB认证等诸多认证，荣获中国驰名商标、中国名牌产品称号。公司在环保型装饰材料的研发和市场推广上一直处于国内领先地位，产品达到苛刻的欧洲E0、E1级环保标准。十多年来不断的资源优化组合，使公司的品牌、规模、研发能力、人力资源、原木采购和产品营销网络等在国内同行业中形成明显的领先优势，从而确保了公司业绩的稳步提升。<br />
公司以推进行业绿色进程为己任，积极整合各种优势资源参与全球竞争，倡导绿色消费理念，以高品质、高环保产品为载体，正在积极实施装饰材料环保套餐“一站式”专卖店网络建设，致力于把德华兔宝宝打造成为我国装饰材料最强综合供应商。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 277,
      ),
      1 => array(
        'tid' => 291,
      ),
      2 => array(
        'tid' => 170,
      ),
      3 => array(
        'tid' => 182,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%85%94%E5%AE%9D%E5%AE%9D',
    'title' => '兔宝宝',
    'identifier' => 'node/56',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-20 16:19:20 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '安佳',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'fc32413c-4b62-4aca-8549-d7e6a532237a',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1365934971,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fbe62fb0-69b2-4a0b-8b92-afa01b61ff09',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><br />
Anchor（安佳）是新西兰乳品巨头恒天然集团旗下的品牌。在120多年的经营中，Anchor一直致力于产品革新与开发，现在已经成长为一个全球性企业。产品销售到亚洲、中东、台湾等地，形成了世界性的销售网络。安佳在中国享有很高的知名度，在英国、亚洲和中东都享有盛誉.多年以来，安佳代表着乳品发展的创新品牌，安佳烹饪奶油的推出就是最佳的例子。安佳品牌提供中国市场的系列产品包括芝士、黄油、奶油等产品。<br />
安佳品牌致力于研发及生产创新的、高档的乳制品以满足专业市场的需要。安佳的乳制品适用于儿童、成人及中老年人，可以满足全家人对于营养的需要。安佳品牌致力于研发及生产创新的、高品质的乳制品以满足专业市场的需要并为顾客提供更加平衡的健康身体。安佳提供的产品包括芝士、牛奶、黄油、奶油等。</p>

<p>安佳品牌是1886年面世的，拥有一百二十多年历史的安佳品牌已经成为一个全球领先的乳制品品牌，在亚洲拥有很高的市场渗透率，例如在斯里兰卡，安佳的品牌知名度达到100%。<br />
自从10多年前进入中国市场以来，安佳由于其品质、可靠和稳定如一的功能享有美誉。乳品是命脉，我们的策略是成为乳制品行业的领导者。我们与世界上其它领先的乳制品公司建立很强的伙伴关系，我们由新西兰10,500个奶农以合作社的形式拥有。95%新西兰生产的乳制品出口给世界上140多个国家的顾客和消费者。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>Anchor（安佳）是新西兰乳品巨头恒天然集团旗下的品牌。在120多年的经营中，Anchor一直致力于产品革新与开发，现在已经成长为一个全球性企业。产品销售到亚洲、中东、台湾等地，形成了世界性的销售网络。安佳在中国享有很高的知名度，在英国、亚洲和中东都享有盛誉.多年以来，安佳代表着乳品发展的创新品牌，安佳烹饪奶油的推出就是最佳的例子。安佳品牌提供中国市场的系列产品包括芝士、黄油、奶油等产品。<br />
安佳品牌致力于研发及生产创新的、高档的乳制品以满足专业市场的需要。安佳的乳制品适用于儿童、成人及中老年人，可以满足全家人对于营养的需要。安佳品牌致力于研发及生产创新的、高品质的乳制品以满足专业市场的需要并为顾客提供更加平衡的健康身体。安佳提供的产品包括芝士、牛奶、黄油、奶油等。</p>
<p>安佳品牌是1886年面世的，拥有一百二十多年历史的安佳品牌已经成为一个全球领先的乳制品品牌，在亚洲拥有很高的市场渗透率，例如在斯里兰卡，安佳的品牌知名度达到100%。<br />
自从10多年前进入中国市场以来，安佳由于其品质、可靠和稳定如一的功能享有美誉。乳品是命脉，我们的策略是成为乳制品行业的领导者。我们与世界上其它领先的乳制品公司建立很强的伙伴关系，我们由新西兰10,500个奶农以合作社的形式拥有。95%新西兰生产的乳制品出口给世界上140多个国家的顾客和消费者。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 332,
      ),
      1 => array(
        'tid' => 166,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'NZ',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%AE%89%E4%BD%B3',
    'title' => '安佳',
    'identifier' => 'node/17',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-14 18:22:51 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '潜水艇',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '8d76ebf1-2897-4f9a-a558-4571e0d0ae57',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1366210126,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe1d97ea-d0ba-407f-9482-d1a8fec5e3c3',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p>享誉世界的submarine潜水艇一直致力于新型地漏系统解决方案及相关卫浴产品的研发设计制造和推广而倍受推崇，是全球领先的地漏系统的供应商。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>享誉世界的submarine潜水艇一直致力于新型地漏系统解决方案及相关卫浴产品的研发设计制造和推广而倍受推崇，是全球领先的地漏系统的供应商。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 59,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%BD%9C%E6%B0%B4%E8%89%87',
    'title' => '潜水艇',
    'identifier' => 'node/52',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-04-17 22:48:46 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '金桥',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '855aa1e8-90fd-4165-bf6c-0d9f93bbed08',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367559429,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'fe384489-38b3-4ac7-b28b-cc75858fb7e8',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">吉林森工金桥地板集团是中国吉林森工集团为整合内部资源，实现集团内部地板产业专业化管理而组建的以生产实木复合地板为主导产品的子集团公司。公司以生产实木复合地板为主，现拥有新合木业、金林木业、三林木业、松林木业、惠林木业、销售公司、吉林森工装饰公司等七家子分公司。公司拥有五家地板生产企业和三个专业子分公司，现有员工2500余人，各类专业技术人员480人。资产总值13.8亿元，各类地板设计年产能达1600万㎡，是国内首家地板集团企业，也是目前中国乃至亚洲生产规模最大、综合实力最强的实木复合地板生产企业之一。</span><br />
金桥集团依托母公司吉林森工集团的木材资源优势，经过多年的探索和持续不断的创新发展，打造出了地板行业具有卓越影响力的“金桥”品牌。作为国家实木复合地板标准的起草单位， 2002年获得国家环保总局“环境标志产品认证”，2003年获评国家质检总局“国家质量免检产品”；2004年和2007年，“金桥”牌地板两度获评“中国名牌”产品称号；作为国内首家通过欧盟CE认证的企业，先后通过了ISO9000、ISO14000体系认证和FSC/COC森林认证，产品远销欧洲、北美、东南亚等三十五个国家和地区。截至2010年末，累计生产实木复合地板2033万㎡，实现销售收入32亿元，出口创汇4.2亿美元。2011年5月，“金桥”品牌被国家工商总局评为“中国驰名”商标，8月份顺利通过了国家质检总局的“出口免验”审核，10月份无醛胶复合地板产品顺利通过了省工信厅新产品鉴定。<br />
2010年，金桥地板铺进了令人瞩目的北京人民大会堂。此项工程总面积7300㎡，共铺设地板146万块，被上海大世界基尼斯总部评定为“中国单间室内铺装木地板面积之最”。人民大会堂管理局及其专家组对工程做出“中国最好、世界一流”的高度评价，赢得了“国板”美誉。工程还被中国林产工业协会授予“中国林业产业科技创新奖”，中国木材流通协会授予“优秀工程奖”。<br />
为增加产能，扩大出口规模，提高国际竞争力，金桥集团投资兴建了金桥地板工业园实木复合地板出口加工基地。地板工业园坐落于吉林省长春市长江路经济技术开发区内，自2008年11月开始立项，共耗资3.6亿元，历时3年建成投产。金桥地板工业园具有规模较大、设备先进、低碳环保、产业链完整和配套设施齐全、功能完备等特点。2011年6月28日，成功举办了吉林森工金桥地板工业园区落成投产仪式，吉林省委孙政才书记、省政府王儒林省长、国家林业局贾治邦局长等领导出席了仪式。“十二五”期间，金桥集团将围绕地板工业园进行科学规划，一是计划新上一条年产4万延长米自动化橱柜生产线；二是拟布置一条年产10万套的实木复合门生产线；三是在未来的两年内建成年产300万套、总面积6万㎡轻质木结构房屋项目。<br />
金桥地板集团正在全面启动二次创业工作，提出了争创“中国最好、世界一流”的奋斗目标。集团紧紧围绕自身发展战略，坚持三个优化，发展三大主导产业，力争“十二五”末期全集团实现总资产30亿元、销售收入16亿元的总体目标，努力把金桥地板集团建设成结构优化、管理科学、效益显著、具有国际竞争力的行业龙头企业。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>吉林森工金桥地板集团是中国吉林森工集团为整合内部资源，实现集团内部地板产业专业化管理而组建的以生产实木复合地板为主导产品的子集团公司。公司以生产实木复合地板为主，现拥有新合木业、金林木业、三林木业、松林木业、惠林木业、销售公司、吉林森工装饰公司等七家子分公司。公司拥有五家地板生产企业和三个专业子分公司，现有员工2500余人，各类专业技术人员480人。资产总值13.8亿元，各类地板设计年产能达1600万㎡，是国内首家地板集团企业，也是目前中国乃至亚洲生产规模最大、综合实力最强的实木复合地板生产企业之一。<br />
金桥集团依托母公司吉林森工集团的木材资源优势，经过多年的探索和持续不断的创新发展，打造出了地板行业具有卓越影响力的“金桥”品牌。作为国家实木复合地板标准的起草单位， 2002年获得国家环保总局“环境标志产品认证”，2003年获评国家质检总局“国家质量免检产品”；2004年和2007年，“金桥”牌地板两度获评“中国名牌”产品称号；作为国内首家通过欧盟CE认证的企业，先后通过了ISO9000、ISO14000体系认证和FSC/COC森林认证，产品远销欧洲、北美、东南亚等三十五个国家和地区。截至2010年末，累计生产实木复合地板2033万㎡，实现销售收入32亿元，出口创汇4.2亿美元。2011年5月，“金桥”品牌被国家工商总局评为“中国驰名”商标，8月份顺利通过了国家质检总局的“出口免验”审核，10月份无醛胶复合地板产品顺利通过了省工信厅新产品鉴定。<br />
2010年，金桥地板铺进了令人瞩目的北京人民大会堂。此项工程总面积7300㎡，共铺设地板146万块，被上海大世界基尼斯总部评定为“中国单间室内铺装木地板面积之最”。人民大会堂管理局及其专家组对工程做出“中国最好、世界一流”的高度评价，赢得了“国板”美誉。工程还被中国林产工业协会授予“中国林业产业科技创新奖”，中国木材流通协会授予“优秀工程奖”。<br />
为增加产能，扩大出口规模，提高国际竞争力，金桥集团投资兴建了金桥地板工业园实木复合地板出口加工基地。地板工业园坐落于吉林省长春市长江路经济技术开发区内，自2008年11月开始立项，共耗资3.6亿元，历时3年建成投产。金桥地板工业园具有规模较大、设备先进、低碳环保、产业链完整和配套设施齐全、功能完备等特点。2011年6月28日，成功举办了吉林森工金桥地板工业园区落成投产仪式，吉林省委孙政才书记、省政府王儒林省长、国家林业局贾治邦局长等领导出席了仪式。“十二五”期间，金桥集团将围绕地板工业园进行科学规划，一是计划新上一条年产4万延长米自动化橱柜生产线；二是拟布置一条年产10万套的实木复合门生产线；三是在未来的两年内建成年产300万套、总面积6万㎡轻质木结构房屋项目。<br />
金桥地板集团正在全面启动二次创业工作，提出了争创“中国最好、世界一流”的奋斗目标。集团紧紧围绕自身发展战略，坚持三个优化，发展三大主导产业，力争“十二五”末期全集团实现总资产30亿元、销售收入16亿元的总体目标，努力把金桥地板集团建设成结构优化、管理科学、效益显著、具有国际竞争力的行业龙头企业。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E9%87%91%E6%A1%A5',
    'title' => '金桥',
    'identifier' => 'node/138',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-03 13:37:09 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '德尔',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => '1df6a08c-6aaa-4f50-825b-c2e8dda399e7',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367667118,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ff72da19-4f84-48a2-b567-30fb185d7786',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span style="line-height: 1.6em;">DER德尔是国内领先的专业木地板品牌服务商，多年来致力于为消费者提供绿色环保、科技领先的家居产品和前沿的家居体验。</span><br />
德尔国际家居股份有限公司成立于2004年，并于2011年成功登陆资本市场，成为国内A股上市企业之一（股票代码002631）。是当前国内实力规模和品牌影响力领先的木地板制造销售领导型企业之一，中国林产工业协会地板专业委员会副理事长单位，十一五国家863计划课题参与单位。<br />
公司坐落于太湖之畔的江苏省吴江市，注册资金1.6亿元人民币，下辖有苏州德尔地板服务有限公司、辽宁德尔地板有限公司、辽宁德尔新材料有限公司、成都德尔地板有限公司、成都德尔新材料有限公司五个全资子公司。德尔拥有德国HOMAG豪迈、荷兰砂霸等国际一流生产线，在地板原料加工、外观处理等方面拥有多项关键性产品专利技术。<br />
主营业务为“DER德尔”品牌木地板的研发、生产及销售，目前销售网络已覆盖国内32个省市自治区，并与国内著名房地产企业如万科集团、保利集团、恒大集团、碧桂园集团、万达集团、大连亿达集团等百强房产开发商建立了紧密的合作关系。<br />
DER德尔品牌已经逐步实现设计、生产、销售的国际化运作。企业先后通过“ISO9001-2000国际质量管理体系认证”、“中国环境标志产品认证”。<br />
2005年德尔强化复合地板获得“中国名牌产品”称号，2005年“DER”商标获得由国家工商行政管理总局商标局颁发的“中国驰名商标”称号；2007年实木复合产品获得“中国名牌产品”称号；2008年，德尔成为北京2008年残奥会家装和公装地板供应商。<br />
近年来“德尔”品牌及公司获得的其他殊荣还包括：2010年《中国家居百强企业》、《2009中国家居消费趋势最具影响力建材品牌》、《中国家居行业最具影响力建材品牌》、《改革开放30年中国建材流通风云企业》、《中国地板行业强势企业奖》和《中国地板行业形象美誉奖》等。<br />
德尔秉承“专业、专注、创新”的经营理念，以品牌为核心，围绕家居产业打造核心竞争力，努力将德尔品牌打造成国际家居领域中的领导品牌之一。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>DER德尔是国内领先的专业木地板品牌服务商，多年来致力于为消费者提供绿色环保、科技领先的家居产品和前沿的家居体验。<br />
德尔国际家居股份有限公司成立于2004年，并于2011年成功登陆资本市场，成为国内A股上市企业之一（股票代码002631）。是当前国内实力规模和品牌影响力领先的木地板制造销售领导型企业之一，中国林产工业协会地板专业委员会副理事长单位，十一五国家863计划课题参与单位。<br />
公司坐落于太湖之畔的江苏省吴江市，注册资金1.6亿元人民币，下辖有苏州德尔地板服务有限公司、辽宁德尔地板有限公司、辽宁德尔新材料有限公司、成都德尔地板有限公司、成都德尔新材料有限公司五个全资子公司。德尔拥有德国HOMAG豪迈、荷兰砂霸等国际一流生产线，在地板原料加工、外观处理等方面拥有多项关键性产品专利技术。<br />
主营业务为“DER德尔”品牌木地板的研发、生产及销售，目前销售网络已覆盖国内32个省市自治区，并与国内著名房地产企业如万科集团、保利集团、恒大集团、碧桂园集团、万达集团、大连亿达集团等百强房产开发商建立了紧密的合作关系。<br />
DER德尔品牌已经逐步实现设计、生产、销售的国际化运作。企业先后通过“ISO9001-2000国际质量管理体系认证”、“中国环境标志产品认证”。<br />
2005年德尔强化复合地板获得“中国名牌产品”称号，2005年“DER”商标获得由国家工商行政管理总局商标局颁发的“中国驰名商标”称号；2007年实木复合产品获得“中国名牌产品”称号；2008年，德尔成为北京2008年残奥会家装和公装地板供应商。<br />
近年来“德尔”品牌及公司获得的其他殊荣还包括：2010年《中国家居百强企业》、《2009中国家居消费趋势最具影响力建材品牌》、《中国家居行业最具影响力建材品牌》、《改革开放30年中国建材流通风云企业》、《中国地板行业强势企业奖》和《中国地板行业形象美誉奖》等。<br />
德尔秉承“专业、专注、创新”的经营理念，以品牌为核心，围绕家居产业打造核心竞争力，努力将德尔品牌打造成国际家居领域中的领导品牌之一。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 219,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E5%BE%B7%E5%B0%94',
    'title' => '德尔',
    'identifier' => 'node/142',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-04 19:31:58 +0800',
);
  $nodes[] = array(
  'uid' => 1,
  'title' => '林昌',
  'log' => '',
  'status' => 1,
  'comment' => 1,
  'promote' => 1,
  'sticky' => 0,
  'vuuid' => 'a480f6e9-ee84-48aa-8c2c-9e30bb454c32',
  'type' => 'brand',
  'language' => 'zh-hans',
  'created' => 1367486196,
  'tnid' => 0,
  'translate' => 0,
  'uuid' => 'ff73bd8a-3503-4aeb-86d5-92f6d0f37605',
  'revision_uid' => 1,
  'body' => array(
    'und' => array(
      0 => array(
        'value' => '<p><span>浙江林昌木业有限公司成立于2006，专业从事木地板研发、制造和销售。前身为建于1996年的林昌木制品厂，位于中国历史名镇南浔。</span><br />
该企业拥有德国进口威力四面刨，台湾产淋漆生产流水线及意大利高档地板生产设备。 其实木地板取材于印度尼西亚，马来西亚，缅甸等国。<br />
林昌木业地板成品分实木系列，实木复合系列，强化系列三个系列，产品的原材料木种有40多种，平均每个木种有10多个品种的成品。</p>
',
        'summary' => '',
        'format' => 'filtered_html',
        'safe_value' => '<p>浙江林昌木业有限公司成立于2006，专业从事木地板研发、制造和销售。前身为建于1996年的林昌木制品厂，位于中国历史名镇南浔。<br />
该企业拥有德国进口威力四面刨，台湾产淋漆生产流水线及意大利高档地板生产设备。 其实木地板取材于印度尼西亚，马来西亚，缅甸等国。<br />
林昌木业地板成品分实木系列，实木复合系列，强化系列三个系列，产品的原材料木种有40多种，平均每个木种有10多个品种的成品。</p>
',
        'safe_summary' => '',
      ),
    ),
  ),
  'field_category' => array(
    'und' => array(
      0 => array(
        'tid' => 13,
      ),
      1 => array(
        'tid' => 215,
      ),
    ),
  ),
  'field_guoj' => array(
    'und' => array(
      0 => array(
        'iso2' => 'CN',
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
  'cid' => 0,
  'last_comment_name' => NULL,
  'last_comment_uid' => 1,
  'comment_count' => 0,
  'disqus' => array(
    'domain' => 'mrating',
    'status' => TRUE,
    'url' => 'http://mrating.com/content/%E6%9E%97%E6%98%8C',
    'title' => '林昌',
    'identifier' => 'node/131',
    'developer' => 1,
  ),
  'print_display' => 1,
  'print_display_comment' => 0,
  'print_display_urllist' => 1,
  'name' => 'martin',
  'picture' => 0,
  'data' => 'b:0;',
  'date' => '2013-05-02 17:16:36 +0800',
);
  return $nodes;
}
