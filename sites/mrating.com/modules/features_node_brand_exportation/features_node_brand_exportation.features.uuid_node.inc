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
  return $nodes;
}
