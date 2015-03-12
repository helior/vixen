<?php
/**
 * @file
 * vixen_faq.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function vixen_faq_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_node_info().
 */
function vixen_faq_node_info() {
  $items = array(
    'faq_item' => array(
      'name' => t('FAQ Item'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  drupal_alter('node_info', $items);
  return $items;
}
