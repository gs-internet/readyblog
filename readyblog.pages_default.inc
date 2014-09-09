<?php
/**
 * @file
 * readyblog.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function readyblog_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Page Article',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'article' => 'article',
            ),
          ),
          'context' => 'argument_entity_id:node_1',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'ceb3c383-f816-4748-a995-aeeddd3f8b28';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-79653fb7-6817-4245-b7ab-1f5cd1e2d9d2';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'article_page-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_entity_id:node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '79653fb7-6817-4245-b7ab-1f5cd1e2d9d2';
    $display->content['new-79653fb7-6817-4245-b7ab-1f5cd1e2d9d2'] = $pane;
    $display->panels['center'][0] = 'new-79653fb7-6817-4245-b7ab-1f5cd1e2d9d2';
    $pane = new stdClass();
    $pane->pid = 'new-e4dcf1c8-cf20-4fb0-876d-0a5a9fd2151f';
    $pane->panel = 'center';
    $pane->type = 'comment_reply_form';
    $pane->subtype = 'comment_reply_form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'anon_links' => FALSE,
      'context' => array(
        0 => 'argument_entity_id:node_1',
        1 => 'empty',
      ),
      'override_title' => 1,
      'override_title_text' => 'Post A Comment',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e4dcf1c8-cf20-4fb0-876d-0a5a9fd2151f';
    $display->content['new-e4dcf1c8-cf20-4fb0-876d-0a5a9fd2151f'] = $pane;
    $display->panels['center'][1] = 'new-e4dcf1c8-cf20-4fb0-876d-0a5a9fd2151f';
    $pane = new stdClass();
    $pane->pid = 'new-d3827206-7d1f-4d55-a3a1-2ef81dd6d446';
    $pane->panel = 'center';
    $pane->type = 'node_comments';
    $pane->subtype = 'node_comments';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'mode' => '1',
      'comments_per_page' => '50',
      'context' => 'argument_entity_id:node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'd3827206-7d1f-4d55-a3a1-2ef81dd6d446';
    $display->content['new-d3827206-7d1f-4d55-a3a1-2ef81dd6d446'] = $pane;
    $display->panels['center'][2] = 'new-d3827206-7d1f-4d55-a3a1-2ef81dd6d446';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'term_view_panel_context';
  $handler->task = 'term_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Taxonomy articles',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'onecol';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'middle' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '027d13be-01e9-4676-bb76-76016bf830af';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-96911270-0a14-443a-9b14-7cb25d3a534c';
    $pane->panel = 'middle';
    $pane->type = 'views_panes';
    $pane->subtype = 'taxonomy_articles-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_term_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '96911270-0a14-443a-9b14-7cb25d3a534c';
    $display->content['new-96911270-0a14-443a-9b14-7cb25d3a534c'] = $pane;
    $display->panels['middle'][0] = 'new-96911270-0a14-443a-9b14-7cb25d3a534c';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-96911270-0a14-443a-9b14-7cb25d3a534c';
  $handler->conf['display'] = $display;
  $export['term_view_panel_context'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function readyblog_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'front';
  $page->task = 'page';
  $page->admin_title = 'Front';
  $page->admin_description = '';
  $page->path = 'home';
  $page->access = array();
  $page->menu = array();
  $page->arguments = array();
  $page->conf = array(
    'admin_paths' => FALSE,
  );
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_front_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'front';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Panel',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array();
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '4fdbc81f-8e4d-4fe3-a480-3101c3aabd60';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-2c13ec3f-ad9f-4dd0-a85a-8ea64ae60658';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'frontend_blog-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array();
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2c13ec3f-ad9f-4dd0-a85a-8ea64ae60658';
    $display->content['new-2c13ec3f-ad9f-4dd0-a85a-8ea64ae60658'] = $pane;
    $display->panels['center'][0] = 'new-2c13ec3f-ad9f-4dd0-a85a-8ea64ae60658';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-2c13ec3f-ad9f-4dd0-a85a-8ea64ae60658';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['front'] = $page;

  return $pages;

}
