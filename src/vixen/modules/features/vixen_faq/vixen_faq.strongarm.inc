<?php
/**
 * @file
 * vixen_faq.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function vixen_faq_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'ant_faq_item';
  $strongarm->value = '1';
  $export['ant_faq_item'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_faq_item';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_faq_item'] = $strongarm;

  return $export;
}
