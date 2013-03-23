<?php
/**
 * @file
 * A export form callback function.
 */

/**
 * Page callback: Mraitng Voting API Export settings
 *
 * @see mrating_votingapi_export_menu()
 */
function mrating_votingapi_export_form($form, &$form_state) {
  $form['mrating_votingapi_export'] = array(
    '#type' => 'fieldset',
    '#title' => t('Voting API Export'),
    '#tree' => TRUE,
  );

  $form['mrating_votingapi_export']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Export'),
  );

  return $form;
}

function mrating_votingapi_export_form_submit($form, &$form_state) {

  $votingapi_vote_array = array();
  $votingapi_vote_query = db_select('votingapi_vote', 'vv');
  $votingapi_vote_query->join('node', 'n', 'vv.entity_id = n.nid');
  $votingapi_vote_query->fields('vv', array('vote_id', 'entity_type', 'entity_id', 'value', 'value_type', 'tag', 'uid', 'timestamp', 'vote_source'));
  $votingapi_vote_query->fields('n', array('uuid'));
  $votingapi_vote_query->orderBy('vote_id', 'desc');
  $votingapi_vote_result = $votingapi_vote_query->execute();
  while ($record = $votingapi_vote_result->fetchAssoc()) {
    $votingapi_vote_array[] = $record;
  }

  $votingapi_cache_array = array();
  $votingapi_cache_query = db_select('votingapi_cache', 'vc');
  $votingapi_cache_query->join('node', 'n', 'vc.entity_id = n.nid');
  $votingapi_cache_query->fields('vc', array('vote_cache_id', 'entity_type', 'entity_id', 'value', 'value_type', 'tag', 'function', 'timestamp'));
  $votingapi_cache_query->fields('n', array('uuid'));
  $votingapi_cache_query->orderBy('vote_cache_id', 'desc');
  $votingapi_cache_result = $votingapi_cache_query->execute();
  while ($record = $votingapi_cache_result->fetchAssoc()) {
    $votingapi_cache_array[] = $record;
  }

  $votingapi_vote_json  = drupal_json_encode($votingapi_vote_array);
  $votingapi_vote_json_filename = 'votingapi_vote.' . time() . '.json';
  $votingapi_cache_json  = drupal_json_encode($votingapi_cache_array);
  $votingapi_cache_json_filename = 'votingapi_cache.' . time() . '.json';

  file_save_data($votingapi_vote_json, 'private://' . $votingapi_vote_json_filename);
  file_save_data($votingapi_cache_json, 'private://' . $votingapi_cache_json_filename);
 
  drupal_set_message(t('Files @votingapi_vote_json_filename and @votingapi_cache_json_filename saved successfully.' , array('@votingapi_vote_json_filename' => $votingapi_vote_json_filename, '@votingapi_cache_json_filename' => $votingapi_cache_json_filename)));
}