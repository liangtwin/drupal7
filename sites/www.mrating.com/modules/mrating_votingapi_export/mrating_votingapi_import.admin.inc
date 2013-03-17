<?php
/**
 * Page callback: Mraitng Voting API Import settings
 *
 * @see mrating_votingapi_import_menu()
 */
function mrating_votingapi_import_form($form, &$form_state) {
  $form['mrating_votingapi_import'] = array(
    '#type' => 'fieldset',
    '#title' => t('Voting API Import'),
    '#tree' => TRUE,
  );

  $form['mrating_votingapi_import']['upload'] = array(
    '#type' => 'textfield',
    '#title' => 'Input a JSon File',
    '#description' => 'Input a JSon File restored in Private directory!',
  );

  $form['mrating_votingapi_import']['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Import'),
  );

  return $form;
}

function mrating_votingapi_import_form_submit($form, &$form_state) {
  $filename = $form['mrating_votingapi_import']['upload']['#value'];
  $query = new EntityFieldQuery();
  $result = $query
    ->entityCondition('entity_type', 'file')
    ->propertyCondition('filename', basename($filename))
    ->execute();
  foreach ($result['file'] as $values) {
    $fid = $values->fid;
    break;
  }

  $tablename = explode(".", $filename);

  $file = file_load($fid);
  $content = file_get_contents($file->uri);
  $array = drupal_json_decode($content);

  foreach($array as $value){
    $key = key($value);
    $result_vote = db_query("SELECT $key FROM {$tablename[0]} WHERE $key = :id", array(':id' => $value[$key]));
    if(count($result_vote->fetchAll())>0){
      drupal_set_message(t('The record is existing.'));
    }else{
      $result = db_query("SELECT nid FROM {node} WHERE uuid = :uuid", array(':uuid' => $value['uuid']));
      if(count($result->fetchAll())>0){
	unset($value['uuid']);
        db_insert($tablename[0])->fields($value)->execute();
      }
	drupal_set_message(t('record is imported successfully!'));
    }
  }
  
}
