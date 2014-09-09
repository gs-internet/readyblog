<?php
/**
 * @file
 * readyblog.features.field_instance.inc
 */

/**
 * Implements hook_field_default_field_instances().
 */
function readyblog_field_default_field_instances() {
  $field_instances = array();

  // Exported field_instance: 'node-article-body'
  $field_instances['node-article-body'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Exported field_instance: 'node-article-field_categories'
  $field_instances['node-article-field_categories'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 1,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_categories',
    'label' => 'categories',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 0,
    ),
  );

  // Exported field_instance: 'node-article-field_image'
  $field_instances['node-article-field_image'] = array(
    'bundle' => 'article',
    'deleted' => 0,
    'description' => 'Upload an image to go with this article.',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => '',
          'image_style' => '',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'image',
        'settings' => array(
          'image_link' => 'content',
          'image_style' => 'medium',
        ),
        'type' => 'image',
        'weight' => -1,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_image',
    'label' => 'Image',
    'required' => 0,
    'settings' => array(
      'alt_field' => 1,
      'default_image' => 0,
      'file_directory' => 'image_article',
      'file_extensions' => 'png gif jpg jpeg',
      'max_filesize' => '',
      'max_resolution' => '',
      'min_resolution' => '',
      'title_field' => 0,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 1,
      'module' => 'image',
      'settings' => array(
        'preview_image_style' => 'thumbnail',
        'progress_indicator' => 'throbber',
      ),
      'type' => 'image_image',
      'weight' => -1,
    ),
  );

  // Exported field_instance: 'node-article-field_like'
  $field_instances['node-article-field_like'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'likebtn',
        'settings' => array(),
        'type' => 'default',
        'weight' => 3,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_like',
    'label' => 'Like',
    'required' => 0,
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
      'likebtn_extra_display_options' => array(
        'likebtn_alignment' => 'left',
        'likebtn_html_after' => '',
        'likebtn_html_before' => '',
      ),
      'likebtn_settings_appearance_behaviour' => array(
        'likebtn_settings_dislike_enabled' => 0,
        'likebtn_settings_display_only' => 0,
        'likebtn_settings_event_handler' => '',
        'likebtn_settings_icon_dislike_show' => 0,
        'likebtn_settings_icon_like_show' => 1,
        'likebtn_settings_info_message' => 0,
        'likebtn_settings_lazy_load' => 0,
        'likebtn_settings_like_dislike_at_the_same_time' => 0,
        'likebtn_settings_like_enabled' => 1,
        'likebtn_settings_popup_content_order' => 'popup_share,popup_donate,popup_html',
        'likebtn_settings_popup_dislike' => 0,
        'likebtn_settings_popup_donate' => '',
        'likebtn_settings_popup_enabled' => 0,
        'likebtn_settings_popup_hide_on_outside_click' => 1,
        'likebtn_settings_popup_html' => '',
        'likebtn_settings_popup_position' => 'top',
        'likebtn_settings_popup_style' => 'light',
        'likebtn_settings_revote_period' => '',
        'likebtn_settings_show_copyright' => 0,
        'likebtn_settings_show_dislike_label' => 0,
        'likebtn_settings_show_like_label' => 1,
        'likebtn_settings_unlike_allowed' => 0,
      ),
      'likebtn_settings_counter' => array(
        'likebtn_settings_counter_clickable' => 0,
        'likebtn_settings_counter_padding' => '',
        'likebtn_settings_counter_show' => 1,
        'likebtn_settings_counter_type' => 'number',
        'likebtn_settings_counter_zero_show' => 1,
      ),
      'likebtn_settings_domains' => array(
        'likebtn_settings_domain_from_parent' => 0,
      ),
      'likebtn_settings_i18n' => array(
        'likebtn_settings_i18n_after_dislike' => '',
        'likebtn_settings_i18n_after_like' => '',
        'likebtn_settings_i18n_dislike' => '',
        'likebtn_settings_i18n_dislike_tooltip' => '',
        'likebtn_settings_i18n_like' => '',
        'likebtn_settings_i18n_like_tooltip' => '',
        'likebtn_settings_i18n_popup_close' => '',
        'likebtn_settings_i18n_popup_donate' => '',
        'likebtn_settings_i18n_popup_text' => '',
        'likebtn_settings_i18n_share_text' => '',
        'likebtn_settings_i18n_undislike_tooltip' => '',
        'likebtn_settings_i18n_unlike_tooltip' => '',
      ),
      'likebtn_settings_loader' => array(
        'likebtn_settings_loader_image' => '',
        'likebtn_settings_loader_show' => 0,
      ),
      'likebtn_settings_sharing' => array(
        'likebtn_settings_addthis_pubid' => '',
        'likebtn_settings_addthis_service_codes' => '',
        'likebtn_settings_share_enabled' => 0,
      ),
      'likebtn_settings_style_language' => array(
        'likebtn_settings_lang' => 'en',
        'likebtn_settings_style' => 'white',
      ),
      'likebtn_settings_tooltips' => array(
        'likebtn_settings_tooltip_enabled' => 0,
      ),
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
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'likebtn',
      'settings' => array(),
      'type' => 'likebtn_default_widget',
      'weight' => 2,
    ),
  );

  // Exported field_instance: 'node-article-field_tags'
  $field_instances['node-article-field_tags'] = array(
    'bundle' => 'article',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'above',
        'module' => 'taxonomy',
        'settings' => array(),
        'type' => 'taxonomy_term_reference_link',
        'weight' => 2,
      ),
      'teaser' => array(
        'label' => 'above',
        'settings' => array(),
        'type' => 'hidden',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'field_tags',
    'label' => 'Tags',
    'required' => 0,
    'settings' => array(
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'active' => 0,
      'module' => 'taxonomy',
      'settings' => array(
        'autocomplete_path' => 'taxonomy/autocomplete',
        'size' => 60,
      ),
      'type' => 'taxonomy_autocomplete',
      'weight' => 1,
    ),
  );

  // Exported field_instance: 'node-page-body'
  $field_instances['node-page-body'] = array(
    'bundle' => 'page',
    'default_value' => NULL,
    'deleted' => 0,
    'description' => '',
    'display' => array(
      'default' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(),
        'type' => 'text_default',
        'weight' => 0,
      ),
      'teaser' => array(
        'label' => 'hidden',
        'module' => 'text',
        'settings' => array(
          'trim_length' => 600,
        ),
        'type' => 'text_summary_or_trimmed',
        'weight' => 0,
      ),
    ),
    'entity_type' => 'node',
    'field_name' => 'body',
    'label' => 'Body',
    'required' => FALSE,
    'settings' => array(
      'display_summary' => TRUE,
      'text_processing' => 1,
      'user_register_form' => FALSE,
    ),
    'widget' => array(
      'module' => 'text',
      'settings' => array(
        'rows' => 20,
        'summary_rows' => 5,
      ),
      'type' => 'text_textarea_with_summary',
      'weight' => -4,
    ),
  );

  // Translatables
  // Included for use with string extractors like potx.
  t('Body');
  t('Image');
  t('Like');
  t('Tags');
  t('Upload an image to go with this article.');
  t('categories');

  return $field_instances;
}
