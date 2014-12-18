<?php
/**
 * @file
 * bsc_install.panels_default.inc
 */

/**
 * Implements hook_default_panels_mini().
 */
function bsc_install_default_panels_mini() {
  $export = array();

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer';
  $mini->category = '';
  $mini->admin_title = 'Footer';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = 'ead15477-98e1-4727-9838-a5c8f3bc8ea7';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
    $pane->panel = 'middle';
    $pane->type = 'panels_mini';
    $pane->subtype = 'footer_left';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-8',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0effc461-6710-4289-96c7-b99265fd14c3';
    $display->content['new-0effc461-6710-4289-96c7-b99265fd14c3'] = $pane;
    $display->panels['middle'][0] = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
    $pane = new stdClass();
    $pane->pid = 'new-6ac1008c-5f9e-41c3-82d5-616ecfb15dc8';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_6';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-4',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '6ac1008c-5f9e-41c3-82d5-616ecfb15dc8';
    $display->content['new-6ac1008c-5f9e-41c3-82d5-616ecfb15dc8'] = $pane;
    $display->panels['middle'][1] = 'new-6ac1008c-5f9e-41c3-82d5-616ecfb15dc8';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-0effc461-6710-4289-96c7-b99265fd14c3';
  $mini->display = $display;
  $export['footer'] = $mini;

  $mini = new stdClass();
  $mini->disabled = FALSE; /* Edit this to true to make a default mini disabled initially */
  $mini->api_version = 1;
  $mini->name = 'footer_left';
  $mini->category = '';
  $mini->admin_title = 'Footer Left';
  $mini->admin_description = '';
  $mini->requiredcontexts = array();
  $mini->contexts = array();
  $mini->relationships = array();
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
  $display->uuid = '68d05198-b25c-41fa-acf2-da2bb20a9cf8';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1f490dec-ff3d-48f2-81f7-b01026fb272f';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_5';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-12',
    );
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1f490dec-ff3d-48f2-81f7-b01026fb272f';
    $display->content['new-1f490dec-ff3d-48f2-81f7-b01026fb272f'] = $pane;
    $display->panels['middle'][0] = 'new-1f490dec-ff3d-48f2-81f7-b01026fb272f';
    $pane = new stdClass();
    $pane->pid = 'new-977e981c-e0b8-42ed-8379-da915a1a62c0';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '977e981c-e0b8-42ed-8379-da915a1a62c0';
    $display->content['new-977e981c-e0b8-42ed-8379-da915a1a62c0'] = $pane;
    $display->panels['middle'][1] = 'new-977e981c-e0b8-42ed-8379-da915a1a62c0';
    $pane = new stdClass();
    $pane->pid = 'new-80b7c937-d641-43b4-9c78-063e903ec659';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_2';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '80b7c937-d641-43b4-9c78-063e903ec659';
    $display->content['new-80b7c937-d641-43b4-9c78-063e903ec659'] = $pane;
    $display->panels['middle'][2] = 'new-80b7c937-d641-43b4-9c78-063e903ec659';
    $pane = new stdClass();
    $pane->pid = 'new-a4a2b510-5b64-40a1-8c79-6b9d069be650';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_3';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = 'a4a2b510-5b64-40a1-8c79-6b9d069be650';
    $display->content['new-a4a2b510-5b64-40a1-8c79-6b9d069be650'] = $pane;
    $display->panels['middle'][3] = 'new-a4a2b510-5b64-40a1-8c79-6b9d069be650';
    $pane = new stdClass();
    $pane->pid = 'new-b1155ce6-eba8-4e97-b7ad-96ad0748e63b';
    $pane->panel = 'middle';
    $pane->type = 'block';
    $pane->subtype = 'boxes-install_boxes_4';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array(
      'css_id' => '',
      'css_class' => 'col-sm-3',
    );
    $pane->extras = array();
    $pane->position = 4;
    $pane->locks = array();
    $pane->uuid = 'b1155ce6-eba8-4e97-b7ad-96ad0748e63b';
    $display->content['new-b1155ce6-eba8-4e97-b7ad-96ad0748e63b'] = $pane;
    $display->panels['middle'][4] = 'new-b1155ce6-eba8-4e97-b7ad-96ad0748e63b';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $mini->display = $display;
  $export['footer_left'] = $mini;

  return $export;
}
