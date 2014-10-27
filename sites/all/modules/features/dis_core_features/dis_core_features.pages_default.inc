<?php
/**
 * @file
 * dis_core_features.pages_default.inc
 */

/**
 * Implements hook_default_page_manager_handlers().
 */
function dis_core_features_default_page_manager_handlers() {
  $export = array();

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Edit Packing',
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
              'packing' => 'packing',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
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
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $display->content['new-3e1b9d1f-6cf2-4d10-8a24-969568b163da'] = $pane;
    $display->panels['center'][0] = 'new-3e1b9d1f-6cf2-4d10-8a24-969568b163da';
    $pane = new stdClass();
    $pane->pid = 'new-8c82b038-c1d0-48f9-bb12-25f182cf1b69';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_node_edit_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '8c82b038-c1d0-48f9-bb12-25f182cf1b69';
    $display->content['new-8c82b038-c1d0-48f9-bb12-25f182cf1b69'] = $pane;
    $display->panels['center'][1] = 'new-8c82b038-c1d0-48f9-bb12-25f182cf1b69';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_2';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'Edit Dispatch',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Packing [field_packing])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_packing-node-node',
        'delta' => 0,
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_packing-node-node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'dispatch' => 'dispatch',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
          'not' => FALSE,
        ),
      ),
      'logic' => 'and',
    ),
  );
  $display = new panels_display();
  $display->layout = 'flexible';
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'center',
        ),
        'parent' => 'main',
      ),
      'center' => array(
        'type' => 'region',
        'title' => 'Center',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'testing' => array(
        'corner_location' => 'panel',
      ),
      'invoices' => NULL,
      'center' => NULL,
    ),
    'testing' => array(
      'style' => 'rounded_corners',
    ),
    'center' => array(
      'style' => '-1',
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-0943243f-ca49-404d-abd8-c6488dbba4d5';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '0943243f-ca49-404d-abd8-c6488dbba4d5';
    $display->content['new-0943243f-ca49-404d-abd8-c6488dbba4d5'] = $pane;
    $display->panels['center'][0] = 'new-0943243f-ca49-404d-abd8-c6488dbba4d5';
    $pane = new stdClass();
    $pane->pid = 'new-e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_dispatch-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $display->content['new-e05d067d-81cb-41fd-961c-58bdaa24cdd0'] = $pane;
    $display->panels['center'][1] = 'new-e05d067d-81cb-41fd-961c-58bdaa24cdd0';
    $pane = new stdClass();
    $pane->pid = 'new-5a065b75-a72f-4f70-999d-b6c303a7f771';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = '5a065b75-a72f-4f70-999d-b6c303a7f771';
    $display->content['new-5a065b75-a72f-4f70-999d-b6c303a7f771'] = $pane;
    $display->panels['center'][2] = 'new-5a065b75-a72f-4f70-999d-b6c303a7f771';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_3';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'Edit Delivery Confirmation',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Dispatch [field_dispatch])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_dispatch-node-node',
        'delta' => 0,
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Packing [field_packing])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_packing-node-node',
        'delta' => 0,
        'context' => 'relationship_entity_from_field:field_dispatch-node-node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node edit form from Dispatch',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_dispatch-node-node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node edit form from Packing',
        'keyword' => 'node_form_2',
        'name' => 'node_edit_form_from_node',
        'context' => 'relationship_entity_from_field:field_packing-node-node_1',
        'id' => 2,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'delivery_confirmation' => 'delivery_confirmation',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
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
  $display->uuid = '05d89d1a-0ab2-451a-a61d-50bcffb2e681';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $display->content['new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be'] = $pane;
    $display->panels['center'][0] = 'new-1d621c7a-8e5c-48d1-ba7b-ae352cdd27be';
    $pane = new stdClass();
    $pane->pid = 'new-08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_delivery_confirmation-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_dispatch-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $display->content['new-08bf481e-4a49-4c3b-abee-17f71ea002c4'] = $pane;
    $display->panels['center'][1] = 'new-08bf481e-4a49-4c3b-abee-17f71ea002c4';
    $pane = new stdClass();
    $pane->pid = 'new-b222c05a-9946-46f4-83ef-e092bc6cd768';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'update_dispatch-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 2;
    $pane->locks = array();
    $pane->uuid = 'b222c05a-9946-46f4-83ef-e092bc6cd768';
    $display->content['new-b222c05a-9946-46f4-83ef-e092bc6cd768'] = $pane;
    $display->panels['center'][2] = 'new-b222c05a-9946-46f4-83ef-e092bc6cd768';
    $pane = new stdClass();
    $pane->pid = 'new-0b5372a7-8487-408c-9cf1-8be3173bbd76';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'relationship_entity_from_field:field_packing-node-node_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 3;
    $pane->locks = array();
    $pane->uuid = '0b5372a7-8487-408c-9cf1-8be3173bbd76';
    $display->content['new-0b5372a7-8487-408c-9cf1-8be3173bbd76'] = $pane;
    $display->panels['center'][3] = 'new-0b5372a7-8487-408c-9cf1-8be3173bbd76';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_4';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'Edit Consignment Details',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node edit form from node',
        'keyword' => 'node_form',
        'name' => 'node_edit_form_from_node',
        'context' => 'argument_node_edit_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'consignment_details' => 'consignment_details',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
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
  $display->uuid = '56619ff6-b47f-41af-b1f3-1cefba296380';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-3f060195-3901-4ccc-99e1-cd0ee6a1e916';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f060195-3901-4ccc-99e1-cd0ee6a1e916';
    $display->content['new-3f060195-3901-4ccc-99e1-cd0ee6a1e916'] = $pane;
    $display->panels['center'][0] = 'new-3f060195-3901-4ccc-99e1-cd0ee6a1e916';
    $pane = new stdClass();
    $pane->pid = 'new-7ef7102f-1255-47d9-a573-b99f05afa67e';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_inward_invoices-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_node_edit_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = '7ef7102f-1255-47d9-a573-b99f05afa67e';
    $display->content['new-7ef7102f-1255-47d9-a573-b99f05afa67e'] = $pane;
    $display->panels['center'][1] = 'new-7ef7102f-1255-47d9-a573-b99f05afa67e';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_edit_panel_context_5';
  $handler->task = 'node_edit';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'Edit PDC Utilization',
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
              'pdc_utilization' => 'pdc_utilization',
            ),
          ),
          'context' => 'argument_node_edit_1',
          'not' => FALSE,
        ),
        1 => array(
          'name' => 'path_visibility',
          'settings' => array(
            'visibility_setting' => '1',
            'paths' => 'node/*/edit',
          ),
          'context' => 'empty',
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
  $display->uuid = '19bd13fa-4d63-4d23-a660-5092716aa59c';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-fcf2e063-5de4-40a8-86f9-fe45041e929c';
    $pane->panel = 'center';
    $pane->type = 'form';
    $pane->subtype = 'form';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => 'argument_node_edit_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'fcf2e063-5de4-40a8-86f9-fe45041e929c';
    $display->content['new-fcf2e063-5de4-40a8-86f9-fe45041e929c'] = $pane;
    $display->panels['center'][0] = 'new-fcf2e063-5de4-40a8-86f9-fe45041e929c';
    $pane = new stdClass();
    $pane->pid = 'new-fad98722-7630-4c13-b3d7-c332fae669b7';
    $pane->panel = 'center';
    $pane->type = 'views_panes';
    $pane->subtype = 'manage_pdcs-panel_pane_1';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'context' => array(
        0 => 'argument_node_edit_1',
      ),
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 1;
    $pane->locks = array();
    $pane->uuid = 'fad98722-7630-4c13-b3d7-c332fae669b7';
    $display->content['new-fad98722-7630-4c13-b3d7-c332fae669b7'] = $pane;
    $display->panels['center'][1] = 'new-fad98722-7630-4c13-b3d7-c332fae669b7';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_edit_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'View Business Associate',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Company [field_company])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_company-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'business_associate' => 'business_associate',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 1,
          1 => 'main-row',
          2 => 2,
          3 => 3,
          4 => 4,
          5 => 5,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'associate_name',
        ),
        'parent' => 'main',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'company',
          1 => 'associate_type',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'company' => array(
        'type' => 'region',
        'title' => 'Company',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'associate_type' => array(
        'type' => 'region',
        'title' => 'Associate Type',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'associate_name' => array(
        'type' => 'region',
        'title' => 'Associate Name',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'address',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'address' => array(
        'type' => 'region',
        'title' => 'Address',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'email_',
          1 => 'contact_person',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'contact_person' => array(
        'type' => 'region',
        'title' => 'Contact Person',
        'width' => '50.04100104737736',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mobile',
          1 => 'phone',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'mobile' => array(
        'type' => 'region',
        'title' => 'Mobile',
        'width' => '50',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'phone' => array(
        'type' => 'region',
        'title' => 'Phone',
        'width' => '50',
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      5 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tin',
          1 => 'dl_no',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'tin' => array(
        'type' => 'region',
        'title' => 'TIN',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'dl_no' => array(
        'type' => 'region',
        'title' => 'DL No',
        'width' => 50,
        'width_type' => '%',
        'parent' => '5',
        'class' => '',
      ),
      'email_' => array(
        'type' => 'region',
        'title' => 'Email',
        'width' => '49.95899895262264',
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'associate_type' => NULL,
      'company' => NULL,
      'associate_name' => NULL,
      'address' => NULL,
      'email' => NULL,
      'contact_person' => NULL,
      'mobile' => NULL,
      'phone' => NULL,
      'tin' => NULL,
      'dl_no' => NULL,
      'email_' => NULL,
    ),
    'style' => 'default',
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '8b302819-3f84-4ecb-9459-ee4080e6ca44';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-e23d925d-c921-4d91-b66e-4a4a74723b37';
    $pane->panel = 'address';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e23d925d-c921-4d91-b66e-4a4a74723b37';
    $display->content['new-e23d925d-c921-4d91-b66e-4a4a74723b37'] = $pane;
    $display->panels['address'][0] = 'new-e23d925d-c921-4d91-b66e-4a4a74723b37';
    $pane = new stdClass();
    $pane->pid = 'new-9367a6b3-6f39-4f0b-bde9-41a06c6e2def';
    $pane->panel = 'associate_name';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9367a6b3-6f39-4f0b-bde9-41a06c6e2def';
    $display->content['new-9367a6b3-6f39-4f0b-bde9-41a06c6e2def'] = $pane;
    $display->panels['associate_name'][0] = 'new-9367a6b3-6f39-4f0b-bde9-41a06c6e2def';
    $pane = new stdClass();
    $pane->pid = 'new-25719661-b4bb-481a-8173-b33e110e79a1';
    $pane->panel = 'associate_type';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_associate_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '25719661-b4bb-481a-8173-b33e110e79a1';
    $display->content['new-25719661-b4bb-481a-8173-b33e110e79a1'] = $pane;
    $display->panels['associate_type'][0] = 'new-25719661-b4bb-481a-8173-b33e110e79a1';
    $pane = new stdClass();
    $pane->pid = 'new-c14be5ff-b3f1-474c-9016-949ffdbc4739';
    $pane->panel = 'company';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_company_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_company-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c14be5ff-b3f1-474c-9016-949ffdbc4739';
    $display->content['new-c14be5ff-b3f1-474c-9016-949ffdbc4739'] = $pane;
    $display->panels['company'][0] = 'new-c14be5ff-b3f1-474c-9016-949ffdbc4739';
    $pane = new stdClass();
    $pane->pid = 'new-9786a38b-e3a9-41d7-a36d-f4835e3d2cae';
    $pane->panel = 'contact_person';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact_person';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '9786a38b-e3a9-41d7-a36d-f4835e3d2cae';
    $display->content['new-9786a38b-e3a9-41d7-a36d-f4835e3d2cae'] = $pane;
    $display->panels['contact_person'][0] = 'new-9786a38b-e3a9-41d7-a36d-f4835e3d2cae';
    $pane = new stdClass();
    $pane->pid = 'new-7c5a02ae-ca56-45f4-b455-d1f8d5f85733';
    $pane->panel = 'dl_no';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dl';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7c5a02ae-ca56-45f4-b455-d1f8d5f85733';
    $display->content['new-7c5a02ae-ca56-45f4-b455-d1f8d5f85733'] = $pane;
    $display->panels['dl_no'][0] = 'new-7c5a02ae-ca56-45f4-b455-d1f8d5f85733';
    $pane = new stdClass();
    $pane->pid = 'new-093d3a25-b016-4a4f-ae1e-92e229f126b2';
    $pane->panel = 'email_';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '093d3a25-b016-4a4f-ae1e-92e229f126b2';
    $display->content['new-093d3a25-b016-4a4f-ae1e-92e229f126b2'] = $pane;
    $display->panels['email_'][0] = 'new-093d3a25-b016-4a4f-ae1e-92e229f126b2';
    $pane = new stdClass();
    $pane->pid = 'new-c25f1174-4d91-42bc-8029-e57d8b605ec3';
    $pane->panel = 'mobile';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c25f1174-4d91-42bc-8029-e57d8b605ec3';
    $display->content['new-c25f1174-4d91-42bc-8029-e57d8b605ec3'] = $pane;
    $display->panels['mobile'][0] = 'new-c25f1174-4d91-42bc-8029-e57d8b605ec3';
    $pane = new stdClass();
    $pane->pid = 'new-2dcf4e48-2eee-48cb-98de-5525ac0c80e1';
    $pane->panel = 'phone';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '2dcf4e48-2eee-48cb-98de-5525ac0c80e1';
    $display->content['new-2dcf4e48-2eee-48cb-98de-5525ac0c80e1'] = $pane;
    $display->panels['phone'][0] = 'new-2dcf4e48-2eee-48cb-98de-5525ac0c80e1';
    $pane = new stdClass();
    $pane->pid = 'new-4e7f0e10-66cc-4357-a864-028ecaffb5eb';
    $pane->panel = 'tin';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '4e7f0e10-66cc-4357-a864-028ecaffb5eb';
    $display->content['new-4e7f0e10-66cc-4357-a864-028ecaffb5eb'] = $pane;
    $display->panels['tin'][0] = 'new-4e7f0e10-66cc-4357-a864-028ecaffb5eb';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_2';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 1;
  $handler->conf = array(
    'title' => 'View Associate Executive Mapping',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Company [field_company])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_company-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Associate [field_associate])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_associate-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      2 => array(
        'identifier' => 'Node from Node (on Node: Division [field_division])',
        'keyword' => 'node_4',
        'name' => 'entity_from_field:field_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      3 => array(
        'identifier' => 'Node from Node (on Node: Executives [field_executives])',
        'keyword' => 'node_5',
        'name' => 'entity_from_field:field_executives-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'associate_executive_mapping' => 'associate_executive_mapping',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'company',
          1 => 'division',
        ),
        'parent' => 'main',
      ),
      'company' => array(
        'type' => 'region',
        'title' => 'Company',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      'division' => array(
        'type' => 'region',
        'title' => 'Division',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'associate',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'associate' => array(
        'type' => 'region',
        'title' => 'Associate',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'executives',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'executives' => array(
        'type' => 'region',
        'title' => 'Executives',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'company' => NULL,
      'division' => NULL,
      'associate' => NULL,
      'executives' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '64f3b3a5-9195-4db0-990c-70abc7baf912';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-db3ec974-8cc5-4aad-9e87-28cbd6869268';
    $pane->panel = 'associate';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_associate';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db3ec974-8cc5-4aad-9e87-28cbd6869268';
    $display->content['new-db3ec974-8cc5-4aad-9e87-28cbd6869268'] = $pane;
    $display->panels['associate'][0] = 'new-db3ec974-8cc5-4aad-9e87-28cbd6869268';
    $pane = new stdClass();
    $pane->pid = 'new-3f0031cf-4a9a-4978-b6f1-fc20c35a111b';
    $pane->panel = 'company';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_company_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_company-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '3f0031cf-4a9a-4978-b6f1-fc20c35a111b';
    $display->content['new-3f0031cf-4a9a-4978-b6f1-fc20c35a111b'] = $pane;
    $display->panels['company'][0] = 'new-3f0031cf-4a9a-4978-b6f1-fc20c35a111b';
    $pane = new stdClass();
    $pane->pid = 'new-1181f074-82e5-46b7-ad60-8030409c9fd4';
    $pane->panel = 'division';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_division_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_division-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1181f074-82e5-46b7-ad60-8030409c9fd4';
    $display->content['new-1181f074-82e5-46b7-ad60-8030409c9fd4'] = $pane;
    $display->panels['division'][0] = 'new-1181f074-82e5-46b7-ad60-8030409c9fd4';
    $pane = new stdClass();
    $pane->pid = 'new-d0ca7168-3479-45ba-8b2f-d5ad1d2d511a';
    $pane->panel = 'executives';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_executives';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(
        'link' => 1,
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0ca7168-3479-45ba-8b2f-d5ad1d2d511a';
    $display->content['new-d0ca7168-3479-45ba-8b2f-d5ad1d2d511a'] = $pane;
    $display->panels['executives'][0] = 'new-d0ca7168-3479-45ba-8b2f-d5ad1d2d511a';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-3f0031cf-4a9a-4978-b6f1-fc20c35a111b';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_2'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_3';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 2;
  $handler->conf = array(
    'title' => 'View Company',
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
              'company' => 'company',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'company',
        ),
        'parent' => 'main',
      ),
      'company' => array(
        'type' => 'region',
        'title' => 'Company',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'address',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'address' => array(
        'type' => 'region',
        'title' => 'Address',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'email',
          1 => 'contact_person',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'email' => array(
        'type' => 'region',
        'title' => 'Email',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'contact_person' => array(
        'type' => 'region',
        'title' => 'Contact Person',
        'width' => 50,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mobile',
          1 => 'phone',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'mobile' => array(
        'type' => 'region',
        'title' => 'Mobile',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'phone' => array(
        'type' => 'region',
        'title' => 'Phone',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tin',
          1 => 'dl_no',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'tin' => array(
        'type' => 'region',
        'title' => 'TIN',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'dl_no' => array(
        'type' => 'region',
        'title' => 'DL No',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'company' => NULL,
      'address' => NULL,
      'email' => NULL,
      'contact_person' => NULL,
      'mobile' => NULL,
      'phone' => NULL,
      'tin' => NULL,
      'dl_no' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '6c7131c5-16d0-4c63-9b0c-1764d58d974f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-b808e865-ca0b-4072-94a8-bf6c703f6a70';
    $pane->panel = 'address';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'b808e865-ca0b-4072-94a8-bf6c703f6a70';
    $display->content['new-b808e865-ca0b-4072-94a8-bf6c703f6a70'] = $pane;
    $display->panels['address'][0] = 'new-b808e865-ca0b-4072-94a8-bf6c703f6a70';
    $pane = new stdClass();
    $pane->pid = 'new-a87cf55d-e906-4e3d-aa05-6802d748b6c6';
    $pane->panel = 'company';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_company_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'a87cf55d-e906-4e3d-aa05-6802d748b6c6';
    $display->content['new-a87cf55d-e906-4e3d-aa05-6802d748b6c6'] = $pane;
    $display->panels['company'][0] = 'new-a87cf55d-e906-4e3d-aa05-6802d748b6c6';
    $pane = new stdClass();
    $pane->pid = 'new-ebcae79e-19c4-4403-9854-d39c7b77f113';
    $pane->panel = 'contact_person';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact_person';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'ebcae79e-19c4-4403-9854-d39c7b77f113';
    $display->content['new-ebcae79e-19c4-4403-9854-d39c7b77f113'] = $pane;
    $display->panels['contact_person'][0] = 'new-ebcae79e-19c4-4403-9854-d39c7b77f113';
    $pane = new stdClass();
    $pane->pid = 'new-8cb44322-704a-46c0-9210-521531d8972b';
    $pane->panel = 'dl_no';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_dl';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8cb44322-704a-46c0-9210-521531d8972b';
    $display->content['new-8cb44322-704a-46c0-9210-521531d8972b'] = $pane;
    $display->panels['dl_no'][0] = 'new-8cb44322-704a-46c0-9210-521531d8972b';
    $pane = new stdClass();
    $pane->pid = 'new-493b1a43-0cb5-4eae-bc44-0e973fd71aec';
    $pane->panel = 'email';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '493b1a43-0cb5-4eae-bc44-0e973fd71aec';
    $display->content['new-493b1a43-0cb5-4eae-bc44-0e973fd71aec'] = $pane;
    $display->panels['email'][0] = 'new-493b1a43-0cb5-4eae-bc44-0e973fd71aec';
    $pane = new stdClass();
    $pane->pid = 'new-436e9d9b-ab45-42ec-915b-bf678c49f886';
    $pane->panel = 'mobile';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '436e9d9b-ab45-42ec-915b-bf678c49f886';
    $display->content['new-436e9d9b-ab45-42ec-915b-bf678c49f886'] = $pane;
    $display->panels['mobile'][0] = 'new-436e9d9b-ab45-42ec-915b-bf678c49f886';
    $pane = new stdClass();
    $pane->pid = 'new-e03c71c0-fe0a-4ca7-8abc-fafecf986b0a';
    $pane->panel = 'phone';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e03c71c0-fe0a-4ca7-8abc-fafecf986b0a';
    $display->content['new-e03c71c0-fe0a-4ca7-8abc-fafecf986b0a'] = $pane;
    $display->panels['phone'][0] = 'new-e03c71c0-fe0a-4ca7-8abc-fafecf986b0a';
    $pane = new stdClass();
    $pane->pid = 'new-eb219ba4-4636-4f96-ae45-19eb86fb2d42';
    $pane->panel = 'tin';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tin';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'eb219ba4-4636-4f96-ae45-19eb86fb2d42';
    $display->content['new-eb219ba4-4636-4f96-ae45-19eb86fb2d42'] = $pane;
    $display->panels['tin'][0] = 'new-eb219ba4-4636-4f96-ae45-19eb86fb2d42';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = 'new-a87cf55d-e906-4e3d-aa05-6802d748b6c6';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_3'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_4';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 3;
  $handler->conf = array(
    'title' => 'View Company Executive',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Company [field_company])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_company-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Executives [field_executives])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_executives-node-node',
        'delta' => '0',
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'company_executive' => 'company_executive',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'company',
        ),
        'parent' => 'main',
      ),
      'company' => array(
        'type' => 'region',
        'title' => 'Company',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'executive',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'executive' => array(
        'type' => 'region',
        'title' => 'Executive',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'address',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'address' => array(
        'type' => 'region',
        'title' => 'Address',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'email',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'email' => array(
        'type' => 'region',
        'title' => 'Email',
        'width' => 100,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mobile',
          1 => 'phone',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'mobile' => array(
        'type' => 'region',
        'title' => 'Mobile',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'phone' => array(
        'type' => 'region',
        'title' => 'Phone',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'company' => NULL,
      'executive' => NULL,
      'address' => NULL,
      'email' => NULL,
      'mobile' => NULL,
      'phone' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = '42e079a1-368a-47bc-89c6-03713364bc19';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bddbe555-4a93-4ac1-9eb3-655a82be3eec';
    $pane->panel = 'address';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bddbe555-4a93-4ac1-9eb3-655a82be3eec';
    $display->content['new-bddbe555-4a93-4ac1-9eb3-655a82be3eec'] = $pane;
    $display->panels['address'][0] = 'new-bddbe555-4a93-4ac1-9eb3-655a82be3eec';
    $pane = new stdClass();
    $pane->pid = 'new-5ed07b11-c1a2-4416-b034-0f40c2b3502c';
    $pane->panel = 'company';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_company_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_company-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '5ed07b11-c1a2-4416-b034-0f40c2b3502c';
    $display->content['new-5ed07b11-c1a2-4416-b034-0f40c2b3502c'] = $pane;
    $display->panels['company'][0] = 'new-5ed07b11-c1a2-4416-b034-0f40c2b3502c';
    $pane = new stdClass();
    $pane->pid = 'new-16fef7e0-bd3d-415f-843a-f84f59f79800';
    $pane->panel = 'email';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '16fef7e0-bd3d-415f-843a-f84f59f79800';
    $display->content['new-16fef7e0-bd3d-415f-843a-f84f59f79800'] = $pane;
    $display->panels['email'][0] = 'new-16fef7e0-bd3d-415f-843a-f84f59f79800';
    $pane = new stdClass();
    $pane->pid = 'new-975870ad-8646-42c2-ab13-0fedd71085b3';
    $pane->panel = 'executive';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_executives-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '975870ad-8646-42c2-ab13-0fedd71085b3';
    $display->content['new-975870ad-8646-42c2-ab13-0fedd71085b3'] = $pane;
    $display->panels['executive'][0] = 'new-975870ad-8646-42c2-ab13-0fedd71085b3';
    $pane = new stdClass();
    $pane->pid = 'new-e89e906e-2727-46b7-b6a0-b769b672b907';
    $pane->panel = 'mobile';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e89e906e-2727-46b7-b6a0-b769b672b907';
    $display->content['new-e89e906e-2727-46b7-b6a0-b769b672b907'] = $pane;
    $display->panels['mobile'][0] = 'new-e89e906e-2727-46b7-b6a0-b769b672b907';
    $pane = new stdClass();
    $pane->pid = 'new-1048bf72-494f-489f-828f-870581a89ecf';
    $pane->panel = 'phone';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1048bf72-494f-489f-828f-870581a89ecf';
    $display->content['new-1048bf72-494f-489f-828f-870581a89ecf'] = $pane;
    $display->panels['phone'][0] = 'new-1048bf72-494f-489f-828f-870581a89ecf';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_4'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_5';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 4;
  $handler->conf = array(
    'title' => 'View Transporter',
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
              'transporter' => 'transporter',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'transporter_type',
        ),
        'parent' => 'main',
      ),
      'transporter_type' => array(
        'type' => 'region',
        'title' => 'Transporter Type',
        'width' => 100,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'address',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'tracking_url',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'email',
          1 => 'contact_person',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'address' => array(
        'type' => 'region',
        'title' => 'Address',
        'width' => 100,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'tracking_url' => array(
        'type' => 'region',
        'title' => 'Tracking URL',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'email' => array(
        'type' => 'region',
        'title' => 'Email',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'contact_person' => array(
        'type' => 'region',
        'title' => 'Contact Person',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'mobile',
          1 => 'phone',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'mobile' => array(
        'type' => 'region',
        'title' => 'Mobile',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
      'phone' => array(
        'type' => 'region',
        'title' => 'Phone',
        'width' => 50,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'transporter_type' => NULL,
      'address' => NULL,
      'tracking_url' => NULL,
      'email' => NULL,
      'contact_person' => NULL,
      'mobile' => NULL,
      'phone' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'e7f46cf8-1863-4a0b-a857-e2f82b4a9b33';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-bef72735-e5c9-43dc-9391-7a88feb98fb5';
    $pane->panel = 'address';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_address';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'addressfield_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'use_widget_handlers' => 1,
        'format_handlers' => array(
          'address' => 'address',
        ),
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'bef72735-e5c9-43dc-9391-7a88feb98fb5';
    $display->content['new-bef72735-e5c9-43dc-9391-7a88feb98fb5'] = $pane;
    $display->panels['address'][0] = 'new-bef72735-e5c9-43dc-9391-7a88feb98fb5';
    $pane = new stdClass();
    $pane->pid = 'new-7a6849bd-c890-40af-a497-861e4aaba544';
    $pane->panel = 'contact_person';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_contact_person';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '7a6849bd-c890-40af-a497-861e4aaba544';
    $display->content['new-7a6849bd-c890-40af-a497-861e4aaba544'] = $pane;
    $display->panels['contact_person'][0] = 'new-7a6849bd-c890-40af-a497-861e4aaba544';
    $pane = new stdClass();
    $pane->pid = 'new-8337a091-9097-4053-9c45-064a99cc115f';
    $pane->panel = 'email';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_email';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'email_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8337a091-9097-4053-9c45-064a99cc115f';
    $display->content['new-8337a091-9097-4053-9c45-064a99cc115f'] = $pane;
    $display->panels['email'][0] = 'new-8337a091-9097-4053-9c45-064a99cc115f';
    $pane = new stdClass();
    $pane->pid = 'new-39c2e16a-8586-476d-b2da-b71d6b3cc3c7';
    $pane->panel = 'mobile';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_mobile';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '39c2e16a-8586-476d-b2da-b71d6b3cc3c7';
    $display->content['new-39c2e16a-8586-476d-b2da-b71d6b3cc3c7'] = $pane;
    $display->panels['mobile'][0] = 'new-39c2e16a-8586-476d-b2da-b71d6b3cc3c7';
    $pane = new stdClass();
    $pane->pid = 'new-210c70f4-83b4-425d-95a4-ed81b29f0620';
    $pane->panel = 'phone';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_phone';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => '0',
      'delta_offset' => '0',
      'delta_reversed' => 0,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '210c70f4-83b4-425d-95a4-ed81b29f0620';
    $display->content['new-210c70f4-83b4-425d-95a4-ed81b29f0620'] = $pane;
    $display->panels['phone'][0] = 'new-210c70f4-83b4-425d-95a4-ed81b29f0620';
    $pane = new stdClass();
    $pane->pid = 'new-f204b680-9431-482c-81cd-c619b5157867';
    $pane->panel = 'tracking_url';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_tracking_url';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f204b680-9431-482c-81cd-c619b5157867';
    $display->content['new-f204b680-9431-482c-81cd-c619b5157867'] = $pane;
    $display->panels['tracking_url'][0] = 'new-f204b680-9431-482c-81cd-c619b5157867';
    $pane = new stdClass();
    $pane->pid = 'new-db972e11-9417-4f3a-ac21-52dc2fed17ab';
    $pane->panel = 'transporter_type';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_transporter_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 0,
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'db972e11-9417-4f3a-ac21-52dc2fed17ab';
    $display->content['new-db972e11-9417-4f3a-ac21-52dc2fed17ab'] = $pane;
    $display->panels['transporter_type'][0] = 'new-db972e11-9417-4f3a-ac21-52dc2fed17ab';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_5'] = $handler;

  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'node_view_panel_context_6';
  $handler->task = 'node_view';
  $handler->subtask = '';
  $handler->handler = 'panel_context';
  $handler->weight = 5;
  $handler->conf = array(
    'title' => 'View Outward Invoice',
    'no_blocks' => 0,
    'pipeline' => 'standard',
    'body_classes_to_remove' => '',
    'body_classes_to_add' => '',
    'css_id' => '',
    'css' => '',
    'contexts' => array(),
    'relationships' => array(
      0 => array(
        'identifier' => 'Node from Node (on Node: Company [field_company])',
        'keyword' => 'node_2',
        'name' => 'entity_from_field:field_company-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
      1 => array(
        'identifier' => 'Node from Node (on Node: Division [field_division])',
        'keyword' => 'node_3',
        'name' => 'entity_from_field:field_division-node-node',
        'delta' => 0,
        'context' => 'argument_entity_id:node_1',
        'id' => 1,
      ),
    ),
    'access' => array(
      'plugins' => array(
        0 => array(
          'name' => 'node_type',
          'settings' => array(
            'type' => array(
              'outward_invoice' => 'outward_invoice',
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
  $display->layout_settings = array(
    'items' => array(
      'canvas' => array(
        'type' => 'row',
        'contains' => 'column',
        'children' => array(
          0 => 'main',
        ),
        'parent' => NULL,
      ),
      'main' => array(
        'type' => 'column',
        'width' => 100,
        'width_type' => '%',
        'children' => array(
          0 => 'main-row',
          1 => 1,
          2 => 2,
          3 => 3,
          4 => 4,
        ),
        'parent' => 'canvas',
      ),
      'main-row' => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'company',
          1 => 'type',
        ),
        'parent' => 'main',
      ),
      'company' => array(
        'type' => 'region',
        'title' => 'Company',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      1 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'division',
          1 => 'status',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'type' => array(
        'type' => 'region',
        'title' => 'Type',
        'width' => 50,
        'width_type' => '%',
        'parent' => 'main-row',
        'class' => '',
      ),
      2 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'consignee',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      3 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'invoice_no',
          1 => 'invoice_date',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      4 => array(
        'type' => 'row',
        'contains' => 'region',
        'children' => array(
          0 => 'invoice_value',
        ),
        'parent' => 'main',
        'class' => '',
      ),
      'division' => array(
        'type' => 'region',
        'title' => 'Division',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'status' => array(
        'type' => 'region',
        'title' => 'Status',
        'width' => 50,
        'width_type' => '%',
        'parent' => '1',
        'class' => '',
      ),
      'consignee' => array(
        'type' => 'region',
        'title' => 'Consignee',
        'width' => 100,
        'width_type' => '%',
        'parent' => '2',
        'class' => '',
      ),
      'invoice_no' => array(
        'type' => 'region',
        'title' => 'Invoice No',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'invoice_date' => array(
        'type' => 'region',
        'title' => 'Invoice Date',
        'width' => 50,
        'width_type' => '%',
        'parent' => '3',
        'class' => '',
      ),
      'invoice_value' => array(
        'type' => 'region',
        'title' => 'Invoice value',
        'width' => 100,
        'width_type' => '%',
        'parent' => '4',
        'class' => '',
      ),
    ),
  );
  $display->panel_settings = array(
    'style_settings' => array(
      'default' => NULL,
      'center' => NULL,
      'company' => NULL,
      'type' => NULL,
      'division' => NULL,
      'status' => NULL,
      'consignee' => NULL,
      'invoice_no' => NULL,
      'invoice_date' => NULL,
      'invoice_value' => NULL,
    ),
  );
  $display->cache = array();
  $display->title = '';
  $display->uuid = 'f6626341-9272-489c-ba94-5358134d5a7f';
  $display->content = array();
  $display->panels = array();
    $pane = new stdClass();
    $pane->pid = 'new-c28a7fce-ed78-4dc8-907b-d76d33ae7034';
    $pane->panel = 'company';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_company_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_company-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'c28a7fce-ed78-4dc8-907b-d76d33ae7034';
    $display->content['new-c28a7fce-ed78-4dc8-907b-d76d33ae7034'] = $pane;
    $display->panels['company'][0] = 'new-c28a7fce-ed78-4dc8-907b-d76d33ae7034';
    $pane = new stdClass();
    $pane->pid = 'new-1908f623-865e-47ee-a7d5-8f787599f4a6';
    $pane->panel = 'consignee';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_consignee';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'entityreference_label',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'link' => 1,
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '1908f623-865e-47ee-a7d5-8f787599f4a6';
    $display->content['new-1908f623-865e-47ee-a7d5-8f787599f4a6'] = $pane;
    $display->panels['consignee'][0] = 'new-1908f623-865e-47ee-a7d5-8f787599f4a6';
    $pane = new stdClass();
    $pane->pid = 'new-8e944fcf-0b79-44c7-b567-8bc61fc9961b';
    $pane->panel = 'division';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_division_name';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
      'context' => 'relationship_entity_from_field:field_division-node-node_1',
      'override_title' => 0,
      'override_title_text' => '',
    );
    $pane->cache = array();
    $pane->style = array(
      'settings' => NULL,
    );
    $pane->css = array();
    $pane->extras = array();
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8e944fcf-0b79-44c7-b567-8bc61fc9961b';
    $display->content['new-8e944fcf-0b79-44c7-b567-8bc61fc9961b'] = $pane;
    $display->panels['division'][0] = 'new-8e944fcf-0b79-44c7-b567-8bc61fc9961b';
    $pane = new stdClass();
    $pane->pid = 'new-f0d21859-b21c-4a0d-bf22-4ca0f4323fe9';
    $pane->panel = 'invoice_date';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_invoice_date';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'date_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'format_type' => 'long',
        'multiple_number' => '',
        'multiple_from' => '',
        'multiple_to' => '',
        'fromto' => 'both',
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'f0d21859-b21c-4a0d-bf22-4ca0f4323fe9';
    $display->content['new-f0d21859-b21c-4a0d-bf22-4ca0f4323fe9'] = $pane;
    $display->panels['invoice_date'][0] = 'new-f0d21859-b21c-4a0d-bf22-4ca0f4323fe9';
    $pane = new stdClass();
    $pane->pid = 'new-d0bf6065-8c65-4ede-9816-e826abc2af06';
    $pane->panel = 'invoice_no';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_invoice_no';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'text_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'd0bf6065-8c65-4ede-9816-e826abc2af06';
    $display->content['new-d0bf6065-8c65-4ede-9816-e826abc2af06'] = $pane;
    $display->panels['invoice_no'][0] = 'new-d0bf6065-8c65-4ede-9816-e826abc2af06';
    $pane = new stdClass();
    $pane->pid = 'new-940b444f-effe-44d7-bd8e-0028613e7ecf';
    $pane->panel = 'invoice_value';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_invoice_value';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'number_decimal',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(
        'thousand_separator' => '',
        'decimal_separator' => '.',
        'scale' => '2',
        'prefix_suffix' => 1,
      ),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '940b444f-effe-44d7-bd8e-0028613e7ecf';
    $display->content['new-940b444f-effe-44d7-bd8e-0028613e7ecf'] = $pane;
    $display->panels['invoice_value'][0] = 'new-940b444f-effe-44d7-bd8e-0028613e7ecf';
    $pane = new stdClass();
    $pane->pid = 'new-8d8c9f0a-0122-4379-b984-d1d23fbbc95e';
    $pane->panel = 'status';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_status';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = '8d8c9f0a-0122-4379-b984-d1d23fbbc95e';
    $display->content['new-8d8c9f0a-0122-4379-b984-d1d23fbbc95e'] = $pane;
    $display->panels['status'][0] = 'new-8d8c9f0a-0122-4379-b984-d1d23fbbc95e';
    $pane = new stdClass();
    $pane->pid = 'new-e674c540-bb8b-424c-850d-cd032606b677';
    $pane->panel = 'type';
    $pane->type = 'entity_field';
    $pane->subtype = 'node:field_outward_type';
    $pane->shown = TRUE;
    $pane->access = array();
    $pane->configuration = array(
      'label' => 'inline',
      'formatter' => 'list_default',
      'delta_limit' => 0,
      'delta_offset' => '0',
      'delta_reversed' => FALSE,
      'formatter_settings' => array(),
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
    $pane->position = 0;
    $pane->locks = array();
    $pane->uuid = 'e674c540-bb8b-424c-850d-cd032606b677';
    $display->content['new-e674c540-bb8b-424c-850d-cd032606b677'] = $pane;
    $display->panels['type'][0] = 'new-e674c540-bb8b-424c-850d-cd032606b677';
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $export['node_view_panel_context_6'] = $handler;

  return $export;
}

/**
 * Implements hook_default_page_manager_pages().
 */
function dis_core_features_default_page_manager_pages() {
  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'admin_home';
  $page->task = 'page';
  $page->admin_title = 'Admin Home';
  $page->admin_description = '';
  $page->path = 'admin-home';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Admin Home',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_admin_home_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'admin_home';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Admin Home';
  $display->uuid = '69938739-410c-4074-86ea-1d0877722517';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['admin_home'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'associate_inward_permit';
  $page->task = 'page';
  $page->admin_title = 'Associate Inward Permit';
  $page->admin_description = '';
  $page->path = 'associate-inward-permit';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_associate_inward_permit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'associate_inward_permit';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Associate Inward Permit';
  $display->uuid = 'a9997b3e-bd85-451d-ad71-a068a8442caf';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['associate_inward_permit'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'goods_inward';
  $page->task = 'page';
  $page->admin_title = 'Goods Inward';
  $page->admin_description = '';
  $page->path = 'goods-inward';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 10,
            1 => 6,
            2 => 3,
            3 => 11,
            4 => 7,
            5 => 4,
            6 => 8,
            7 => 9,
            8 => 12,
            9 => 5,
            10 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Goods Inward',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_goods_inward_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'goods_inward';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Goods Inward';
  $display->uuid = 'fd75392b-6e6c-473e-978e-0d89187d3d69';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['goods_inward'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'goods_outward';
  $page->task = 'page';
  $page->admin_title = 'Goods Outward';
  $page->admin_description = '';
  $page->path = 'goods-outward';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 10,
            1 => 6,
            2 => 3,
            3 => 11,
            4 => 7,
            5 => 4,
            6 => 8,
            7 => 9,
            8 => 12,
            9 => 5,
            10 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Goods Outward',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_goods_outward_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'goods_outward';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Goods Outward';
  $display->uuid = '287d6be2-7011-406d-985b-caad2c4a2e12';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['goods_outward'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'inward_permit';
  $page->task = 'page';
  $page->admin_title = 'Inward Permit';
  $page->admin_description = '';
  $page->path = 'inward-permit';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => '',
    'weight' => '0',
    'name' => 'navigation',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_inward_permit_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'inward_permit';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Inward Permit';
  $display->uuid = '501703ba-7e5b-44b2-a691-1aaddaa92895';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['inward_permit'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'master_data';
  $page->task = 'page';
  $page->admin_title = 'Master Data';
  $page->admin_description = '';
  $page->path = 'master-data';
  $page->access = array(
    'type' => 'none',
    'settings' => NULL,
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 11,
            2 => 7,
            3 => 4,
            4 => 8,
            5 => 9,
            6 => 12,
            7 => 5,
            8 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Master Data',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_master_data_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'master_data';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Master Data';
  $display->uuid = '4931a7c2-55a2-40e8-a01c-a8c93b1544bc';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['master_data'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'miscellaneous';
  $page->task = 'page';
  $page->admin_title = 'Miscellaneous';
  $page->admin_description = '';
  $page->path = 'miscellaneous';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 8,
            3 => 9,
            4 => 12,
            5 => 5,
            6 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'Miscellaneous',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_miscellaneous_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'miscellaneous';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Miscellaneous';
  $display->uuid = 'f3905885-74b2-4a41-a111-3b72e21999ec';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['miscellaneous'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'pdc';
  $page->task = 'page';
  $page->admin_title = 'PDC';
  $page->admin_description = '';
  $page->path = 'pdc';
  $page->access = array(
    'plugins' => array(
      0 => array(
        'name' => 'role',
        'settings' => array(
          'rids' => array(
            0 => 3,
            1 => 4,
            2 => 8,
            3 => 9,
            4 => 12,
            5 => 5,
            6 => 13,
          ),
        ),
        'context' => 'logged-in-user',
        'not' => FALSE,
      ),
    ),
    'logic' => 'and',
  );
  $page->menu = array(
    'type' => 'normal',
    'title' => 'PDC',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_pdc_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'pdc';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'PDC';
  $display->uuid = '0fd6c00f-3938-45a5-a2b0-9523a1ddd0c9';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['pdc'] = $page;

  $page = new stdClass();
  $page->disabled = FALSE; /* Edit this to true to make a default page disabled initially */
  $page->api_version = 1;
  $page->name = 'permits';
  $page->task = 'page';
  $page->admin_title = 'Permits';
  $page->admin_description = '';
  $page->path = 'permits';
  $page->access = array();
  $page->menu = array(
    'type' => 'none',
    'title' => 'Permit',
    'weight' => '0',
    'name' => 'main-menu',
    'parent' => array(
      'type' => 'none',
      'title' => '',
      'weight' => 0,
      'name' => 'navigation',
    ),
  );
  $page->arguments = array();
  $page->conf = array();
  $page->default_handlers = array();
  $handler = new stdClass();
  $handler->disabled = FALSE; /* Edit this to true to make a default handler disabled initially */
  $handler->api_version = 1;
  $handler->name = 'page_permits_panel_context';
  $handler->task = 'page';
  $handler->subtask = 'permits';
  $handler->handler = 'panel_context';
  $handler->weight = 0;
  $handler->conf = array(
    'title' => 'Landing page',
    'no_blocks' => FALSE,
    'pipeline' => 'ipe',
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
  $display->title = 'Permits';
  $display->uuid = '9eb8c1e6-11f1-4b21-8a5c-091de759f197';
  $display->content = array();
  $display->panels = array();
  $display->hide_title = PANELS_TITLE_FIXED;
  $display->title_pane = '0';
  $handler->conf['display'] = $display;
  $page->default_handlers[$handler->name] = $handler;
  $pages['permits'] = $page;

  return $pages;

}
