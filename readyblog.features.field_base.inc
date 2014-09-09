<?php
/**
 * @file
 * readyblog.features.field_base.inc
 */

/**
 * Implements hook_field_default_field_bases().
 */
function readyblog_field_default_field_bases() {
  $field_bases = array();

  // Exported field_base: 'body'
  $field_bases['body'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(
      0 => 'node',
    ),
    'field_name' => 'body',
    'foreign keys' => array(
      'format' => array(
        'columns' => array(
          'format' => 'format',
        ),
        'table' => 'filter_format',
      ),
    ),
    'indexes' => array(
      'format' => array(
        0 => 'format',
      ),
    ),
    'locked' => 0,
    'module' => 'text',
    'settings' => array(),
    'translatable' => 0,
    'type' => 'text_with_summary',
  );

  // Exported field_base: 'field_categories'
  $field_bases['field_categories'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_categories',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'category',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  // Exported field_base: 'field_image'
  $field_bases['field_image'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_image',
    'foreign keys' => array(
      'fid' => array(
        'columns' => array(
          'fid' => 'fid',
        ),
        'table' => 'file_managed',
      ),
    ),
    'indexes' => array(
      'fid' => array(
        0 => 'fid',
      ),
    ),
    'locked' => 0,
    'module' => 'image',
    'settings' => array(
      'default_image' => 0,
      'uri_scheme' => 'public',
    ),
    'translatable' => 0,
    'type' => 'image',
  );

  // Exported field_base: 'field_like'
  $field_bases['field_like'] = array(
    'active' => 1,
    'cardinality' => 1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_like',
    'foreign keys' => array(),
    'indexes' => array(),
    'locked' => 0,
    'module' => 'likebtn',
    'settings' => array(
      'addthis_pubid' => '',
      'addthis_service_codes' => '',
      'counter_clickable' => FALSE,
      'counter_padding' => '',
      'counter_show' => TRUE,
      'counter_type' => 'number',
      'counter_zero_show' => FALSE,
      'dislike_enabled' => TRUE,
      'display_only' => FALSE,
      'domain_from_parent' => FALSE,
      'event_handler' => '',
      'i18n_after_dislike' => '',
      'i18n_after_like' => '',
      'i18n_dislike' => '',
      'i18n_dislike_tooltip' => '',
      'i18n_like' => '',
      'i18n_like_tooltip' => '',
      'i18n_popup_close' => '',
      'i18n_popup_donate' => '',
      'i18n_popup_text' => '',
      'i18n_share_text' => '',
      'i18n_undislike_tooltip' => '',
      'i18n_unlike_tooltip' => '',
      'icon_dislike_show' => TRUE,
      'icon_like_show' => TRUE,
      'identifier' => '',
      'info_message' => '',
      'item_description' => '',
      'item_image' => '',
      'item_title' => '',
      'item_url' => '',
      'lang' => 'en',
      'lazy_load' => FALSE,
      'like_dislike_at_the_same_time' => FALSE,
      'like_enabled' => TRUE,
      'loader_image' => '',
      'loader_show' => FALSE,
      'local_domain' => '',
      'popup_content_order' => 'popup_share,popup_donate,popup_html',
      'popup_dislike' => FALSE,
      'popup_donate' => '',
      'popup_enabled' => TRUE,
      'popup_hide_on_outside_click' => TRUE,
      'popup_html' => '',
      'popup_position' => 'top',
      'popup_style' => 'light',
      'revote_period' => '',
      'share_enabled' => TRUE,
      'show_copyright' => TRUE,
      'show_dislike_label' => FALSE,
      'show_like_label' => TRUE,
      'style' => 'white',
      'subdirectory' => '',
      'tooltip_enabled' => TRUE,
      'unlike_allowed' => TRUE,
    ),
    'translatable' => 0,
    'type' => 'likebtn_field',
  );

  // Exported field_base: 'field_tags'
  $field_bases['field_tags'] = array(
    'active' => 1,
    'cardinality' => -1,
    'deleted' => 0,
    'entity_types' => array(),
    'field_name' => 'field_tags',
    'foreign keys' => array(
      'tid' => array(
        'columns' => array(
          'tid' => 'tid',
        ),
        'table' => 'taxonomy_term_data',
      ),
    ),
    'indexes' => array(
      'tid' => array(
        0 => 'tid',
      ),
    ),
    'locked' => 0,
    'module' => 'taxonomy',
    'settings' => array(
      'allowed_values' => array(
        0 => array(
          'vocabulary' => 'tag',
          'parent' => 0,
        ),
      ),
    ),
    'translatable' => 0,
    'type' => 'taxonomy_term_reference',
  );

  return $field_bases;
}
