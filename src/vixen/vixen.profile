<?php

/**
 * Implements hook_profile_details().
 */
function vixen_profile_details() {
  return array(
    'name' => 'Vixen',
    'description' => 'Install profile for managing the Foxtail API.',
  );
}

/**
 * Implements hook_install_tasks().
 */
function vixen_install_tasks() {
  return array(
    '_satellite_install_task_theme' => array('display' => FALSE),
  );
}

function _vixen_install_task_theme(&$install_state) {
  $theme = 'rubik';
  theme_enable(array($theme));
  variable_set('theme_default', $theme);
  theme_disable(array('bartik'));
}
