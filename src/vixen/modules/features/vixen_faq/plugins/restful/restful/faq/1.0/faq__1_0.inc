<?php

$plugin = array(
  'label' => t('FAQ'),
  'resource' => 'faq',
  'name' => 'faq__1_0',
  'entity_type' => 'node',
  'bundle' => 'faq_item',
  'description' => t('Export the FAQ Item content type.'),
  'class' => 'VixenFaq',
  'authentication_types' => TRUE,
  'authentication_optional' => TRUE,
);
