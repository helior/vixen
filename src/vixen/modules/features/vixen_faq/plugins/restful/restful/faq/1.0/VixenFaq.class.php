<?php

/**
 * @file
 * Contains AtlasEpisodes.
 */

class VixenFaq extends RestfulEntityBaseNode {
  /**
   * {@inheritdoc}
   */
  public function publicFieldsInfo() {
    $fields = parent::publicFieldsInfo();
    $fields['questions'] = array('property' => 'field_faq_questions');
    $fields['answer'] = array('property' => 'field_faq_answer', 'sub_property' => 'value');
    $fields['category'] = array('property' => 'field_faq_category', 'sub_property' => 'name');

    return $fields;
  }
}
