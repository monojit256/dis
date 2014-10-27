<?php
/**
 * @file
 * dis_core_features.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function dis_core_features_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'add_consignment_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Add Consignment Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Add Consignment Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignor_target_id']['id'] = 'field_consignor_target_id';
  $handler->display->display_options['relationships']['field_consignor_target_id']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['relationships']['field_consignor_target_id']['field'] = 'field_consignor_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['id'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['field'] = 'reverse_field_inward_invoices_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_consignment_details' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Inward Type */
  $handler->display->display_options['fields']['field_inward_type']['id'] = 'field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['table'] = 'field_data_field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['field'] = 'field_inward_type';
  /* Field: Content: Consignor */
  $handler->display->display_options['fields']['field_consignor']['id'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['fields']['field_consignor']['field'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice No */
  $handler->display->display_options['fields']['field_invoice_no']['id'] = 'field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['field'] = 'field_invoice_no';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inward_invoice' => 'inward_invoice',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Inward Type (field_inward_type) */
  $handler->display->display_options['filters']['field_inward_type_value']['id'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['table'] = 'field_data_field_inward_type';
  $handler->display->display_options['filters']['field_inward_type_value']['field'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['operator_id'] = 'field_inward_type_value_op';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['label'] = 'Inward Type';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['operator'] = 'field_inward_type_value_op';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['identifier'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignor_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignor';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'add-consignment-details';
  $export['add_consignment_details'] = $view;

  $view = new view();
  $view->name = 'associate_inward_permit_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Associate Inward Permit List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Associate Inward Permit List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_target_id']['id'] = 'field_associate_target_id';
  $handler->display->display_options['relationships']['field_associate_target_id']['table'] = 'field_data_field_associate';
  $handler->display->display_options['relationships']['field_associate_target_id']['field'] = 'field_associate_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_consignee_node']['id'] = 'reverse_field_consignee_node';
  $handler->display->display_options['relationships']['reverse_field_consignee_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_consignee_node']['field'] = 'reverse_field_consignee_node';
  $handler->display->display_options['relationships']['reverse_field_consignee_node']['relationship'] = 'field_associate_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['relationship'] = 'reverse_field_consignee_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['relationship'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_inward_permit_target_id']['id'] = 'field_associate_inward_permit_target_id';
  $handler->display->display_options['relationships']['field_associate_inward_permit_target_id']['table'] = 'field_data_field_associate_inward_permit';
  $handler->display->display_options['relationships']['field_associate_inward_permit_target_id']['field'] = 'field_associate_inward_permit_target_id';
  $handler->display->display_options['relationships']['field_associate_inward_permit_target_id']['relationship'] = 'reverse_field_packing_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_associate_inward_permit_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'node';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'associate_inward_permit' => 'associate_inward_permit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_consignee_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  $handler->display->display_options['filters']['type_1']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'not empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: Permit Status (field_permit_status) */
  $handler->display->display_options['filters']['field_permit_status_value']['id'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['filters']['field_permit_status_value']['field'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['value'] = array(
    'Unutilized' => 'Unutilized',
  );
  $handler->display->display_options['filters']['field_permit_status_value']['group'] = 2;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 2;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'nid_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'nid';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_associate' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['associate_inward_permit_list'] = $view;

  $view = new view();
  $view->name = 'associate_inward_permit_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Associate Inward Permit Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Associate Inward Permit Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_associate_inward_permit_node']['id'] = 'reverse_field_associate_inward_permit_node';
  $handler->display->display_options['relationships']['reverse_field_associate_inward_permit_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_associate_inward_permit_node']['field'] = 'reverse_field_associate_inward_permit_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['relationship'] = 'reverse_field_associate_inward_permit_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_target_id']['id'] = 'field_associate_target_id';
  $handler->display->display_options['relationships']['field_associate_target_id']['table'] = 'field_data_field_associate';
  $handler->display->display_options['relationships']['field_associate_target_id']['field'] = 'field_associate_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Associate */
  $handler->display->display_options['fields']['field_associate']['id'] = 'field_associate';
  $handler->display->display_options['fields']['field_associate']['table'] = 'field_data_field_associate';
  $handler->display->display_options['fields']['field_associate']['field'] = 'field_associate';
  $handler->display->display_options['fields']['field_associate']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Permit No */
  $handler->display->display_options['fields']['field_permit_no']['id'] = 'field_permit_no';
  $handler->display->display_options['fields']['field_permit_no']['table'] = 'field_data_field_permit_no';
  $handler->display->display_options['fields']['field_permit_no']['field'] = 'field_permit_no';
  /* Field: Content: Permit Date */
  $handler->display->display_options['fields']['field_permit_date']['id'] = 'field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['table'] = 'field_data_field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['field'] = 'field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Permit Status */
  $handler->display->display_options['fields']['field_permit_status']['id'] = 'field_permit_status';
  $handler->display->display_options['fields']['field_permit_status']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['fields']['field_permit_status']['field'] = 'field_permit_status';
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dispatch Mode */
  $handler->display->display_options['fields']['field_dispatch_mode']['id'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['table'] = 'field_data_field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['field'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['relationship'] = 'reverse_field_associate_inward_permit_node';
  $handler->display->display_options['fields']['field_dispatch_mode']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['relationship'] = 'reverse_field_associate_inward_permit_node';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['relationship'] = 'reverse_field_associate_inward_permit_node';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'associate_inward_permit' => 'associate_inward_permit',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_associate_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Associate Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Permit Status (field_permit_status) */
  $handler->display->display_options['filters']['field_permit_status_value']['id'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['filters']['field_permit_status_value']['field'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['operator_id'] = 'field_permit_status_value_op';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['label'] = 'Permit Status';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['operator'] = 'field_permit_status_value_op';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['identifier'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'associate-inward-permit-register';
  $export['associate_inward_permit_register'] = $view;

  $view = new view();
  $view->name = 'associate_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Associate List by Company and Associate Type';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Name (field_name) */
  $handler->display->display_options['sorts']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['sorts']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_value']['field'] = 'field_name_value';
  /* Contextual filter: Content: Company (field_company) */
  $handler->display->display_options['arguments']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['arguments']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_company_target_id']['summary_options']['items_per_page'] = '25';
  /* Contextual filter: Content: Associate Type (field_associate_type) */
  $handler->display->display_options['arguments']['field_associate_type_value']['id'] = 'field_associate_type_value';
  $handler->display->display_options['arguments']['field_associate_type_value']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['arguments']['field_associate_type_value']['field'] = 'field_associate_type_value';
  $handler->display->display_options['arguments']['field_associate_type_value']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_associate_type_value']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_associate_type_value']['default_argument_options']['index'] = '4';
  $handler->display->display_options['arguments']['field_associate_type_value']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_associate_type_value']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_associate_type_value']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['arguments']['field_associate_type_value']['limit'] = '0';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_associate' => 'business_associate',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_name' => 'field_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['associate_list'] = $view;

  $view = new view();
  $view->name = 'company_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Company List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['label'] = '';
  $handler->display->display_options['fields']['field_company_name']['element_label_colon'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_company_name' => 'field_company_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['company_list'] = $view;

  $view = new view();
  $view->name = 'customer_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Customer List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_associate' => 'business_associate',
  );
  /* Filter criterion: Content: Associate Type (field_associate_type) */
  $handler->display->display_options['filters']['field_associate_type_value']['id'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['filters']['field_associate_type_value']['field'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['value'] = array(
    'Customer' => 'Customer',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['customer_list'] = $view;

  $view = new view();
  $view->name = 'division_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Division List by Company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Division Name */
  $handler->display->display_options['fields']['field_division_name']['id'] = 'field_division_name';
  $handler->display->display_options['fields']['field_division_name']['table'] = 'field_data_field_division_name';
  $handler->display->display_options['fields']['field_division_name']['field'] = 'field_division_name';
  $handler->display->display_options['fields']['field_division_name']['label'] = '';
  $handler->display->display_options['fields']['field_division_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Company (field_company) */
  $handler->display->display_options['arguments']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['arguments']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_skip_url'] = TRUE;
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_company_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'division' => 'division',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_division_name' => 'field_division_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['division_list'] = $view;

  $view = new view();
  $view->name = 'executive_list_by_company';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Executive List by Company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'default';
  $handler->display->display_options['row_plugin'] = 'fields';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = '';
  $handler->display->display_options['fields']['field_name']['element_label_colon'] = FALSE;
  /* Sort criterion: Content: Name (field_name) */
  $handler->display->display_options['sorts']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['sorts']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_value']['field'] = 'field_name_value';
  /* Contextual filter: Content: Company (field_company) */
  $handler->display->display_options['arguments']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['arguments']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['arguments']['field_company_target_id']['default_action'] = 'default';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['field_company_target_id']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['field_company_target_id']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['field_company_target_id']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company_executive' => 'company_executive',
  );

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'field_name' => 'field_name',
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['executive_list_by_company'] = $view;

  $view = new view();
  $view->name = 'imported_outward_invoices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Imported Outward Invoices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Imported Outward Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['relationship'] = 'reverse_field_outward_invoices_node';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Identifier';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_company]-[title]-[field_invoice_date]';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['label'] = 'Invoice Nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['nid_1']['label'] = 'Packing Nid';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_2']['id'] = 'nid_2';
  $handler->display->display_options['fields']['nid_2']['table'] = 'node';
  $handler->display->display_options['fields']['nid_2']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_2']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['nid_2']['label'] = 'Dispatch Nid';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  $handler->display->display_options['path'] = 'imported-outward-invoices';
  $handler->display->display_options['menu']['title'] = 'Manage Invoices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'imported-outward-invoices-xlsexport';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['imported_outward_invoices'] = $view;

  $view = new view();
  $view->name = 'inward_permit_list';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inward Permit List';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Associate Inward Permit List';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_target_id']['id'] = 'field_associate_target_id';
  $handler->display->display_options['relationships']['field_associate_target_id']['table'] = 'field_data_field_associate';
  $handler->display->display_options['relationships']['field_associate_target_id']['field'] = 'field_associate_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_consignor_node']['id'] = 'reverse_field_consignor_node';
  $handler->display->display_options['relationships']['reverse_field_consignor_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_consignor_node']['field'] = 'reverse_field_consignor_node';
  $handler->display->display_options['relationships']['reverse_field_consignor_node']['relationship'] = 'field_associate_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['id'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['field'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['relationship'] = 'reverse_field_consignor_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_inward_permit_target_id']['id'] = 'field_inward_permit_target_id';
  $handler->display->display_options['relationships']['field_inward_permit_target_id']['table'] = 'field_data_field_inward_permit';
  $handler->display->display_options['relationships']['field_inward_permit_target_id']['field'] = 'field_inward_permit_target_id';
  $handler->display->display_options['relationships']['field_inward_permit_target_id']['relationship'] = 'reverse_field_inward_invoices_node';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = '';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  $handler->display->display_options['fields']['title']['link_to_node'] = FALSE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_inward_permit_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_consignor_node';
  $handler->display->display_options['arguments']['nid']['default_action'] = 'default';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '3';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inward_permit' => 'inward_permit',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Permit Status (field_permit_status) */
  $handler->display->display_options['filters']['field_permit_status_value']['id'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['filters']['field_permit_status_value']['field'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['value'] = array(
    'Unutilized' => 'Unutilized',
  );
  $handler->display->display_options['filters']['field_permit_status_value']['group'] = 2;
  /* Filter criterion: Global: Fields comparison */
  $handler->display->display_options['filters']['fields_compare']['id'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['table'] = 'views';
  $handler->display->display_options['filters']['fields_compare']['field'] = 'fields_compare';
  $handler->display->display_options['filters']['fields_compare']['group'] = 2;
  $handler->display->display_options['filters']['fields_compare']['right_field'] = 'nid_1';
  $handler->display->display_options['filters']['fields_compare']['left_field'] = 'nid';

  /* Display: Entity Reference */
  $handler = $view->new_display('entityreference', 'Entity Reference', 'entityreference_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['defaults']['style_plugin'] = FALSE;
  $handler->display->display_options['style_plugin'] = 'entityreference_style';
  $handler->display->display_options['style_options']['search_fields'] = array(
    'title' => 'title',
    'field_associate' => 0,
  );
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_plugin'] = FALSE;
  $handler->display->display_options['row_plugin'] = 'entityreference_fields';
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $export['inward_permit_list'] = $view;

  $view = new view();
  $view->name = 'inward_permit_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inward Permit Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inward Permit Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inward_permit_node']['id'] = 'reverse_field_inward_permit_node';
  $handler->display->display_options['relationships']['reverse_field_inward_permit_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inward_permit_node']['field'] = 'reverse_field_inward_permit_node';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Associate */
  $handler->display->display_options['fields']['field_associate']['id'] = 'field_associate';
  $handler->display->display_options['fields']['field_associate']['table'] = 'field_data_field_associate';
  $handler->display->display_options['fields']['field_associate']['field'] = 'field_associate';
  $handler->display->display_options['fields']['field_associate']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Permit No */
  $handler->display->display_options['fields']['field_permit_no']['id'] = 'field_permit_no';
  $handler->display->display_options['fields']['field_permit_no']['table'] = 'field_data_field_permit_no';
  $handler->display->display_options['fields']['field_permit_no']['field'] = 'field_permit_no';
  /* Field: Content: Permit Date */
  $handler->display->display_options['fields']['field_permit_date']['id'] = 'field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['table'] = 'field_data_field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['field'] = 'field_permit_date';
  $handler->display->display_options['fields']['field_permit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Permit Status */
  $handler->display->display_options['fields']['field_permit_status']['id'] = 'field_permit_status';
  $handler->display->display_options['fields']['field_permit_status']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['fields']['field_permit_status']['field'] = 'field_permit_status';
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'reverse_field_inward_permit_node';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'reverse_field_inward_permit_node';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['relationship'] = 'reverse_field_inward_permit_node';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['relationship'] = 'reverse_field_inward_permit_node';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Inward Invoices */
  $handler->display->display_options['fields']['field_inward_invoices']['id'] = 'field_inward_invoices';
  $handler->display->display_options['fields']['field_inward_invoices']['table'] = 'field_data_field_inward_invoices';
  $handler->display->display_options['fields']['field_inward_invoices']['field'] = 'field_inward_invoices';
  $handler->display->display_options['fields']['field_inward_invoices']['relationship'] = 'reverse_field_inward_permit_node';
  $handler->display->display_options['fields']['field_inward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_inward_invoices']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inward_permit' => 'inward_permit',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_associate_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Associate Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Permit Status (field_permit_status) */
  $handler->display->display_options['filters']['field_permit_status_value']['id'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['table'] = 'field_data_field_permit_status';
  $handler->display->display_options['filters']['field_permit_status_value']['field'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['operator_id'] = 'field_permit_status_value_op';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['label'] = 'Permit Status';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['operator'] = 'field_permit_status_value_op';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['identifier'] = 'field_permit_status_value';
  $handler->display->display_options['filters']['field_permit_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'inward-permit-register';
  $export['inward_permit_register'] = $view;

  $view = new view();
  $view->name = 'inward_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Inward Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Inward Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['id'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['field'] = 'reverse_field_inward_invoices_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignor_target_id']['id'] = 'field_consignor_target_id';
  $handler->display->display_options['relationships']['field_consignor_target_id']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['relationships']['field_consignor_target_id']['field'] = 'field_consignor_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'rules_component::rules_add_consignment_details' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_inward_invoice' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Edit Inward Invoice',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Inward Type */
  $handler->display->display_options['fields']['field_inward_type']['id'] = 'field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['table'] = 'field_data_field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['field'] = 'field_inward_type';
  /* Field: Content: Consignor */
  $handler->display->display_options['fields']['field_consignor']['id'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['fields']['field_consignor']['field'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice No */
  $handler->display->display_options['fields']['field_invoice_no']['id'] = 'field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['field'] = 'field_invoice_no';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Internal Ref No */
  $handler->display->display_options['fields']['field_internal_ref_no']['id'] = 'field_internal_ref_no';
  $handler->display->display_options['fields']['field_internal_ref_no']['table'] = 'field_data_field_internal_ref_no';
  $handler->display->display_options['fields']['field_internal_ref_no']['field'] = 'field_internal_ref_no';
  $handler->display->display_options['fields']['field_internal_ref_no']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_internal_ref_no']['label'] = 'Ref No';
  /* Field: Content: Internal Ref Date */
  $handler->display->display_options['fields']['field_internal_ref_date']['id'] = 'field_internal_ref_date';
  $handler->display->display_options['fields']['field_internal_ref_date']['table'] = 'field_data_field_internal_ref_date';
  $handler->display->display_options['fields']['field_internal_ref_date']['field'] = 'field_internal_ref_date';
  $handler->display->display_options['fields']['field_internal_ref_date']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_internal_ref_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['relationship'] = 'reverse_field_inward_invoices_node';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Receipt Date */
  $handler->display->display_options['fields']['field_receipt_date']['id'] = 'field_receipt_date';
  $handler->display->display_options['fields']['field_receipt_date']['table'] = 'field_data_field_receipt_date';
  $handler->display->display_options['fields']['field_receipt_date']['field'] = 'field_receipt_date';
  $handler->display->display_options['fields']['field_receipt_date']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_receipt_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Issues */
  $handler->display->display_options['fields']['field_issues']['id'] = 'field_issues';
  $handler->display->display_options['fields']['field_issues']['table'] = 'field_data_field_issues';
  $handler->display->display_options['fields']['field_issues']['field'] = 'field_issues';
  $handler->display->display_options['fields']['field_issues']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['fields']['field_issues']['delta_offset'] = '0';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inward_invoice' => 'inward_invoice',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Inward Type (field_inward_type) */
  $handler->display->display_options['filters']['field_inward_type_value']['id'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['table'] = 'field_data_field_inward_type';
  $handler->display->display_options['filters']['field_inward_type_value']['field'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['operator_id'] = 'field_inward_type_value_op';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['label'] = 'Inward Type';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['operator'] = 'field_inward_type_value_op';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['identifier'] = 'field_inward_type_value';
  $handler->display->display_options['filters']['field_inward_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignor_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignor';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice Date (field_invoice_date) */
  $handler->display->display_options['filters']['field_invoice_date_value']['id'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['filters']['field_invoice_date_value']['field'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_invoice_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator_id'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['label'] = 'Invoice Date';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['identifier'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_invoice_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Receipt Date (field_receipt_date) */
  $handler->display->display_options['filters']['field_receipt_date_value']['id'] = 'field_receipt_date_value';
  $handler->display->display_options['filters']['field_receipt_date_value']['table'] = 'field_data_field_receipt_date';
  $handler->display->display_options['filters']['field_receipt_date_value']['field'] = 'field_receipt_date_value';
  $handler->display->display_options['filters']['field_receipt_date_value']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['filters']['field_receipt_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_receipt_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_receipt_date_value']['expose']['operator_id'] = 'field_receipt_date_value_op';
  $handler->display->display_options['filters']['field_receipt_date_value']['expose']['label'] = 'Receipt Date';
  $handler->display->display_options['filters']['field_receipt_date_value']['expose']['operator'] = 'field_receipt_date_value_op';
  $handler->display->display_options['filters']['field_receipt_date_value']['expose']['identifier'] = 'field_receipt_date_value';
  $handler->display->display_options['filters']['field_receipt_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_receipt_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Issues (field_issues) */
  $handler->display->display_options['filters']['field_issues_value']['id'] = 'field_issues_value';
  $handler->display->display_options['filters']['field_issues_value']['table'] = 'field_data_field_issues';
  $handler->display->display_options['filters']['field_issues_value']['field'] = 'field_issues_value';
  $handler->display->display_options['filters']['field_issues_value']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['filters']['field_issues_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_issues_value']['expose']['operator_id'] = 'field_issues_value_op';
  $handler->display->display_options['filters']['field_issues_value']['expose']['label'] = 'Issues';
  $handler->display->display_options['filters']['field_issues_value']['expose']['operator'] = 'field_issues_value_op';
  $handler->display->display_options['filters']['field_issues_value']['expose']['identifier'] = 'field_issues_value';
  $handler->display->display_options['filters']['field_issues_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_issues_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'inward-register';
  $export['inward_register'] = $view;

  $view = new view();
  $view->name = 'manage_invoices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Invoices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Manage Invoices';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit/[nid_1]/[field_associate_type]?field_company=[nid_1]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'packing' => 'packing',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  $handler->display->display_options['path'] = 'manage-invoices';
  $handler->display->display_options['menu']['title'] = 'Manage Invoices';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['relationships'] = FALSE;
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'packing' => 'packing',
  );
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['manage_invoices'] = $view;

  $view = new view();
  $view->name = 'manage_inward_invoices';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage Inward Invoices';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['id'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_inward_invoices_node']['field'] = 'reverse_field_inward_invoices_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignor_target_id']['id'] = 'field_consignor_target_id';
  $handler->display->display_options['relationships']['field_consignor_target_id']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['relationships']['field_consignor_target_id']['field'] = 'field_consignor_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Inward Type */
  $handler->display->display_options['fields']['field_inward_type']['id'] = 'field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['table'] = 'field_data_field_inward_type';
  $handler->display->display_options['fields']['field_inward_type']['field'] = 'field_inward_type';
  /* Field: Content: Consignor */
  $handler->display->display_options['fields']['field_consignor']['id'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['table'] = 'field_data_field_consignor';
  $handler->display->display_options['fields']['field_consignor']['field'] = 'field_consignor';
  $handler->display->display_options['fields']['field_consignor']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_consignor_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit/[nid_1]/[field_associate_type]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'raw';
  $handler->display->display_options['arguments']['nid']['default_argument_options']['index'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'inward_invoice' => 'inward_invoice',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_inward_invoices_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'consignment_details' => 'consignment_details',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['manage_inward_invoices'] = $view;

  $view = new view();
  $view->name = 'manage_pdcs';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Manage PDCs';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'field_cheque_no' => 'field_cheque_no',
    'field_customer' => 'field_customer',
    'field_bank' => 'field_bank',
    'edit_node' => 'edit_node',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'field_cheque_no' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_customer' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'field_bank' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
    'edit_node' => array(
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['id'] = 'reverse_field_pdc_node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['field'] = 'reverse_field_pdc_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Bank */
  $handler->display->display_options['fields']['field_bank']['id'] = 'field_bank';
  $handler->display->display_options['fields']['field_bank']['table'] = 'field_data_field_bank';
  $handler->display->display_options['fields']['field_bank']['field'] = 'field_bank';
  /* Field: Content: Cheque No */
  $handler->display->display_options['fields']['field_cheque_no']['id'] = 'field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['table'] = 'field_data_field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['field'] = 'field_cheque_no';
  /* Field: Content: PDC Status */
  $handler->display->display_options['fields']['field_pdc_status']['id'] = 'field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['table'] = 'field_data_field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['field'] = 'field_pdc_status';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid_1]/edit/[nid]';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pdc' => 'pdc',
  );
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type_1']['id'] = 'type_1';
  $handler->display->display_options['filters']['type_1']['table'] = 'node';
  $handler->display->display_options['filters']['type_1']['field'] = 'type';
  $handler->display->display_options['filters']['type_1']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['filters']['type_1']['value'] = array(
    'pdc_utilization' => 'pdc_utilization',
  );

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['manage_pdcs'] = $view;

  $view = new view();
  $view->name = 'outward_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Outward Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Outward Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['relationship'] = 'reverse_field_outward_invoices_node';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['id'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['field'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['relationship'] = 'reverse_field_packing_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Edit Invoice Details',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Status */
  $handler->display->display_options['fields']['field_status']['id'] = 'field_status';
  $handler->display->display_options['fields']['field_status']['table'] = 'field_data_field_status';
  $handler->display->display_options['fields']['field_status']['field'] = 'field_status';
  /* Field: Content: Packing Date */
  $handler->display->display_options['fields']['field_packing_date']['id'] = 'field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['table'] = 'field_data_field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['field'] = 'field_packing_date';
  $handler->display->display_options['fields']['field_packing_date']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_packing_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['relationship'] = 'reverse_field_packing_node';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Delivery Date */
  $handler->display->display_options['fields']['field_delivery_date']['id'] = 'field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['table'] = 'field_data_field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['field'] = 'field_delivery_date';
  $handler->display->display_options['fields']['field_delivery_date']['relationship'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['fields']['field_delivery_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['exclude'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks_1']['id'] = 'field_remarks_1';
  $handler->display->display_options['fields']['field_remarks_1']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks_1']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks_1']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['fields']['field_remarks_1']['exclude'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks_2']['id'] = 'field_remarks_2';
  $handler->display->display_options['fields']['field_remarks_2']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks_2']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks_2']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['fields']['field_remarks_2']['exclude'] = TRUE;
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks_3']['id'] = 'field_remarks_3';
  $handler->display->display_options['fields']['field_remarks_3']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks_3']['field'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks_3']['relationship'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['fields']['field_remarks_3']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Remarks';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = '[field_remarks]
[field_remarks_1]
[field_remarks_2]
[field_remarks_3]';
  /* Sort criterion: Content: Company (field_company) */
  $handler->display->display_options['sorts']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['sorts']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['sorts']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Sort criterion: Content: Outward Type (field_outward_type) */
  $handler->display->display_options['sorts']['field_outward_type_value']['id'] = 'field_outward_type_value';
  $handler->display->display_options['sorts']['field_outward_type_value']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['sorts']['field_outward_type_value']['field'] = 'field_outward_type_value';
  /* Sort criterion: Content: Financial Year (field_financial_year) */
  $handler->display->display_options['sorts']['field_financial_year_target_id']['id'] = 'field_financial_year_target_id';
  $handler->display->display_options['sorts']['field_financial_year_target_id']['table'] = 'field_data_field_financial_year';
  $handler->display->display_options['sorts']['field_financial_year_target_id']['field'] = 'field_financial_year_target_id';
  $handler->display->display_options['sorts']['field_financial_year_target_id']['order'] = 'DESC';
  /* Sort criterion: Content: Invoice No (field_invoice_no) */
  $handler->display->display_options['sorts']['field_invoice_no_value']['id'] = 'field_invoice_no_value';
  $handler->display->display_options['sorts']['field_invoice_no_value']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['sorts']['field_invoice_no_value']['field'] = 'field_invoice_no_value';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Division (field_division) */
  $handler->display->display_options['filters']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['filters']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_division_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator_id'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Outward Type (field_outward_type) */
  $handler->display->display_options['filters']['field_outward_type_value']['id'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['filters']['field_outward_type_value']['field'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_outward_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['operator_id'] = 'field_outward_type_value_op';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['label'] = 'Outward Type';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['operator'] = 'field_outward_type_value_op';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['identifier'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  $handler->display->display_options['filters']['field_status_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['operator_id'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['label'] = 'Status';
  $handler->display->display_options['filters']['field_status_value']['expose']['operator'] = 'field_status_value_op';
  $handler->display->display_options['filters']['field_status_value']['expose']['identifier'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_status_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice No (field_invoice_no) */
  $handler->display->display_options['filters']['field_invoice_no_value']['id'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['filters']['field_invoice_no_value']['field'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_invoice_no_value']['group'] = 1;
  $handler->display->display_options['filters']['field_invoice_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['operator_id'] = 'field_invoice_no_value_op';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['label'] = 'Invoice No';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['operator'] = 'field_invoice_no_value_op';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['identifier'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Financial Year (field_financial_year) */
  $handler->display->display_options['filters']['field_financial_year_target_id']['id'] = 'field_financial_year_target_id';
  $handler->display->display_options['filters']['field_financial_year_target_id']['table'] = 'field_data_field_financial_year';
  $handler->display->display_options['filters']['field_financial_year_target_id']['field'] = 'field_financial_year_target_id';
  $handler->display->display_options['filters']['field_financial_year_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_financial_year_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_financial_year_target_id']['expose']['operator_id'] = 'field_financial_year_target_id_op';
  $handler->display->display_options['filters']['field_financial_year_target_id']['expose']['label'] = 'Financial Year';
  $handler->display->display_options['filters']['field_financial_year_target_id']['expose']['operator'] = 'field_financial_year_target_id_op';
  $handler->display->display_options['filters']['field_financial_year_target_id']['expose']['identifier'] = 'field_financial_year_target_id';
  $handler->display->display_options['filters']['field_financial_year_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Quarter (field_quarter) */
  $handler->display->display_options['filters']['field_quarter_value']['id'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['table'] = 'field_data_field_quarter';
  $handler->display->display_options['filters']['field_quarter_value']['field'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['group'] = 1;
  $handler->display->display_options['filters']['field_quarter_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator_id'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['label'] = 'Quarter';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['operator'] = 'field_quarter_value_op';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['identifier'] = 'field_quarter_value';
  $handler->display->display_options['filters']['field_quarter_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_quarter_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice Date (field_invoice_date) */
  $handler->display->display_options['filters']['field_invoice_date_value']['id'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['filters']['field_invoice_date_value']['field'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_invoice_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_invoice_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator_id'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['label'] = 'Invoice Date';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['identifier'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_invoice_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: Transporter (field_transporter) */
  $handler->display->display_options['filters']['field_transporter_target_id']['id'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['field'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['filters']['field_transporter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator_id'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['identifier'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_lr_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['operator_id'] = 'field_lr_date_value_op';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['label'] = 'LR Date';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['operator'] = 'field_lr_date_value_op';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['identifier'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_lr_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_lr_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['operator_id'] = 'field_lr_no_value_op';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['label'] = 'LR No';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['operator'] = 'field_lr_no_value_op';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['identifier'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'outward-register';
  $handler->display->display_options['menu']['title'] = 'Outward Register';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Data export */
  $handler = $view->new_display('views_data_export', 'Data export', 'views_data_export_1');
  $handler->display->display_options['pager']['type'] = 'none';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['style_plugin'] = 'views_data_export_xls';
  $handler->display->display_options['style_options']['provide_file'] = 1;
  $handler->display->display_options['style_options']['parent_sort'] = 0;
  $handler->display->display_options['path'] = 'outward-register-xls';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['use_batch'] = 'batch';
  $handler->display->display_options['segment_size'] = '100';
  $export['outward_register'] = $view;

  $view = new view();
  $view->name = 'pdc_register';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'PDC Register';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'PDC Register';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['id'] = 'reverse_field_pdc_node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_pdc_node']['field'] = 'reverse_field_pdc_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '0';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_map_invoices_to_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 1,
      'postpone_processing' => 0,
      'skip_confirmation' => 1,
      'override_label' => 1,
      'label' => 'Edit PDC Details',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Customer */
  $handler->display->display_options['fields']['field_customer']['id'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['table'] = 'field_data_field_customer';
  $handler->display->display_options['fields']['field_customer']['field'] = 'field_customer';
  $handler->display->display_options['fields']['field_customer']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Bank */
  $handler->display->display_options['fields']['field_bank']['id'] = 'field_bank';
  $handler->display->display_options['fields']['field_bank']['table'] = 'field_data_field_bank';
  $handler->display->display_options['fields']['field_bank']['field'] = 'field_bank';
  /* Field: Content: Cheque No */
  $handler->display->display_options['fields']['field_cheque_no']['id'] = 'field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['table'] = 'field_data_field_cheque_no';
  $handler->display->display_options['fields']['field_cheque_no']['field'] = 'field_cheque_no';
  /* Field: Content: PDC Status */
  $handler->display->display_options['fields']['field_pdc_status']['id'] = 'field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['table'] = 'field_data_field_pdc_status';
  $handler->display->display_options['fields']['field_pdc_status']['field'] = 'field_pdc_status';
  /* Field: Content: Cheque Date */
  $handler->display->display_options['fields']['field_cheque_date']['id'] = 'field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['table'] = 'field_data_field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['field'] = 'field_cheque_date';
  $handler->display->display_options['fields']['field_cheque_date']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_cheque_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Cheque Amount */
  $handler->display->display_options['fields']['field_cheque_amount']['id'] = 'field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['table'] = 'field_data_field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['field'] = 'field_cheque_amount';
  $handler->display->display_options['fields']['field_cheque_amount']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_cheque_amount']['settings'] = array(
    'thousand_separator' => ',',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Deposit Date */
  $handler->display->display_options['fields']['field_deposit_date']['id'] = 'field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['table'] = 'field_data_field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['field'] = 'field_deposit_date';
  $handler->display->display_options['fields']['field_deposit_date']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_deposit_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_pdc_invoices']['id'] = 'field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['table'] = 'field_data_field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['field'] = 'field_pdc_invoices';
  $handler->display->display_options['fields']['field_pdc_invoices']['relationship'] = 'reverse_field_pdc_node';
  $handler->display->display_options['fields']['field_pdc_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_pdc_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_pdc_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'pdc' => 'pdc',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'pdc-register';
  $export['pdc_register'] = $view;

  $view = new view();
  $view->name = 'update_delivery_confirmation';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Delivery Confirmation';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['id'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_dispatch_node']['field'] = 'reverse_field_dispatch_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Dispatch Mode */
  $handler->display->display_options['fields']['field_dispatch_mode']['id'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['table'] = 'field_data_field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['field'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Vehicle No / Delivery Person */
  $handler->display->display_options['fields']['field_vehicle_no']['id'] = 'field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['table'] = 'field_data_field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['field'] = 'field_vehicle_no';
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Update Delivery Confirmation';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Update';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/delivery-confirmation?field_company=[nid_1]&field_dispatch=[nid]&destination=update-delivery-confirmation';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_dispatch_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'not empty';
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'not empty';
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Transporter (field_transporter) */
  $handler->display->display_options['filters']['field_transporter_target_id']['id'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['field'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator_id'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['identifier'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value_1']['id'] = 'field_lr_no_value_1';
  $handler->display->display_options['filters']['field_lr_no_value_1']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value_1']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value_1']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_lr_no_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['operator_id'] = 'field_lr_no_value_1_op';
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['label'] = 'LR No';
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['operator'] = 'field_lr_no_value_1_op';
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['identifier'] = 'field_lr_no_value_1';
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_lr_no_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value_1']['id'] = 'field_lr_date_value_1';
  $handler->display->display_options['filters']['field_lr_date_value_1']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value_1']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value_1']['operator'] = 'between';
  $handler->display->display_options['filters']['field_lr_date_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['operator_id'] = 'field_lr_date_value_1_op';
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['label'] = 'LR Date';
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['operator'] = 'field_lr_date_value_1_op';
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['identifier'] = 'field_lr_date_value_1';
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['remember'] = TRUE;
  $handler->display->display_options['filters']['field_lr_date_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_lr_date_value_1']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'update-delivery-confirmation';
  $handler->display->display_options['menu']['title'] = 'Update Delivery Confirmation';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Dispatch';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['exclude'] = TRUE;
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Mode */
  $handler->display->display_options['fields']['field_dispatch_mode']['id'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['table'] = 'field_data_field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['field'] = 'field_dispatch_mode';
  $handler->display->display_options['fields']['field_dispatch_mode']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Vehicle No / Delivery Person */
  $handler->display->display_options['fields']['field_vehicle_no']['id'] = 'field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['table'] = 'field_data_field_vehicle_no';
  $handler->display->display_options['fields']['field_vehicle_no']['field'] = 'field_vehicle_no';
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Update Delivery Confirmation';
  $handler->display->display_options['fields']['nothing']['exclude'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Update';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/add/delivery-confirmation?field_company=[nid_1]&field_dispatch=[nid]';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  $handler->display->display_options['pane_title'] = 'Manage Dispatch';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['update_delivery_confirmation'] = $view;

  $view = new view();
  $view->name = 'update_dispatch';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Dispatch';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Dispatch';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '20';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_packing_node']['id'] = 'reverse_field_packing_node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_packing_node']['field'] = 'reverse_field_packing_node';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['field_company_name']['label'] = 'Company';
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete Packing';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete Packing';
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'packing' => 'packing',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_packing_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Transporter (field_transporter) */
  $handler->display->display_options['filters']['field_transporter_target_id']['id'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['field'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_transporter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator_id'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['identifier'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 1;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '20';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_map_invoices_to_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 1,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  $handler->display->display_options['path'] = 'update-dispatch';
  $handler->display->display_options['menu']['title'] = 'Update Dispatch';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;

  /* Display: Content pane */
  $handler = $view->new_display('panel_pane', 'Content pane', 'panel_pane_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['title'] = 'Manage Packing';
  $handler->display->display_options['defaults']['fields'] = FALSE;
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  $handler->display->display_options['fields']['field_outward_invoices']['multi_type'] = 'ul';
  /* Field: Content: Remarks */
  $handler->display->display_options['fields']['field_remarks']['id'] = 'field_remarks';
  $handler->display->display_options['fields']['field_remarks']['table'] = 'field_data_field_remarks';
  $handler->display->display_options['fields']['field_remarks']['field'] = 'field_remarks';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  $handler->display->display_options['defaults']['arguments'] = FALSE;
  /* Contextual filter: Content: Nid */
  $handler->display->display_options['arguments']['nid']['id'] = 'nid';
  $handler->display->display_options['arguments']['nid']['table'] = 'node';
  $handler->display->display_options['arguments']['nid']['field'] = 'nid';
  $handler->display->display_options['arguments']['nid']['default_argument_type'] = 'fixed';
  $handler->display->display_options['arguments']['nid']['summary']['number_of_records'] = '0';
  $handler->display->display_options['arguments']['nid']['summary']['format'] = 'default_summary';
  $handler->display->display_options['arguments']['nid']['summary_options']['items_per_page'] = '25';
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'packing' => 'packing',
  );
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['pane_title'] = 'Manage Packing';
  $handler->display->display_options['argument_input'] = array(
    'nid' => array(
      'type' => 'context',
      'context' => 'entity:node.nid',
      'context_optional' => 0,
      'panel' => '0',
      'fixed' => '',
      'label' => 'Content: Nid',
    ),
  );
  $export['update_dispatch'] = $view;

  $view = new view();
  $view->name = 'update_lr_details';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update LR Details';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update LR Details';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoices */
  $handler->display->display_options['fields']['field_outward_invoices']['id'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['field'] = 'field_outward_invoices';
  $handler->display->display_options['fields']['field_outward_invoices']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_outward_invoices']['settings'] = array(
    'link' => 1,
  );
  $handler->display->display_options['fields']['field_outward_invoices']['delta_offset'] = '0';
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update LR Details';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Update LR Details';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Transporter (field_transporter) */
  $handler->display->display_options['filters']['field_transporter_target_id']['id'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['field'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_transporter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator_id'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['identifier'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Dispatch Date (field_dispatch_date) */
  $handler->display->display_options['filters']['field_dispatch_date_value']['id'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['filters']['field_dispatch_date_value']['field'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_dispatch_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dispatch_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['operator_id'] = 'field_dispatch_date_value_op';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['label'] = 'Dispatch Date';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['operator'] = 'field_dispatch_date_value_op';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['identifier'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_dispatch_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_no_value']['group'] = 2;
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_date_value']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-lr-details';
  $handler->display->display_options['menu']['title'] = 'Update LR Details';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['update_lr_details'] = $view;

  $view = new view();
  $view->name = 'update_lr_value';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update LR Value';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update LR Value';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_packing_target_id']['id'] = 'field_packing_target_id';
  $handler->display->display_options['relationships']['field_packing_target_id']['table'] = 'field_data_field_packing';
  $handler->display->display_options['relationships']['field_packing_target_id']['field'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['id'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['field'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['relationships']['field_outward_invoices_target_id']['relationship'] = 'field_packing_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['relationship'] = 'field_outward_invoices_target_id';
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['relationship'] = 'field_outward_invoices_target_id';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Transporter */
  $handler->display->display_options['fields']['field_transporter']['id'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['fields']['field_transporter']['field'] = 'field_transporter';
  $handler->display->display_options['fields']['field_transporter']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_transporter']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Cases */
  $handler->display->display_options['fields']['field_cases']['id'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['table'] = 'field_data_field_cases';
  $handler->display->display_options['fields']['field_cases']['field'] = 'field_cases';
  $handler->display->display_options['fields']['field_cases']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['fields']['field_cases']['settings'] = array(
    'thousand_separator' => '',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Dispatch Date */
  $handler->display->display_options['fields']['field_dispatch_date']['id'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['field'] = 'field_dispatch_date';
  $handler->display->display_options['fields']['field_dispatch_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR No */
  $handler->display->display_options['fields']['field_lr_no']['id'] = 'field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['fields']['field_lr_no']['field'] = 'field_lr_no';
  /* Field: Content: LR Date */
  $handler->display->display_options['fields']['field_lr_date']['id'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['field'] = 'field_lr_date';
  $handler->display->display_options['fields']['field_lr_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: LR Value */
  $handler->display->display_options['fields']['field_lr_value']['id'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['field'] = 'field_lr_value';
  $handler->display->display_options['fields']['field_lr_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Update LR Value';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Update LR Value';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  $handler->display->display_options['filter_groups']['groups'] = array(
    1 => 'AND',
    2 => 'OR',
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'dispatch' => 'dispatch',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Invoices (field_outward_invoices:delta) */
  $handler->display->display_options['filters']['delta']['id'] = 'delta';
  $handler->display->display_options['filters']['delta']['table'] = 'field_data_field_outward_invoices';
  $handler->display->display_options['filters']['delta']['field'] = 'delta';
  $handler->display->display_options['filters']['delta']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['delta']['value']['value'] = '0';
  $handler->display->display_options['filters']['delta']['group'] = 1;
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Transporter (field_transporter) */
  $handler->display->display_options['filters']['field_transporter_target_id']['id'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['table'] = 'field_data_field_transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['field'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['relationship'] = 'field_packing_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_transporter_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator_id'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['operator'] = 'field_transporter_target_id_op';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['identifier'] = 'field_transporter_target_id';
  $handler->display->display_options['filters']['field_transporter_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Dispatch Date (field_dispatch_date) */
  $handler->display->display_options['filters']['field_dispatch_date_value']['id'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['table'] = 'field_data_field_dispatch_date';
  $handler->display->display_options['filters']['field_dispatch_date_value']['field'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_dispatch_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_dispatch_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['operator_id'] = 'field_dispatch_date_value_op';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['label'] = 'Dispatch Date';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['operator'] = 'field_dispatch_date_value_op';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['identifier'] = 'field_dispatch_date_value';
  $handler->display->display_options['filters']['field_dispatch_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_dispatch_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: LR No (field_lr_no) */
  $handler->display->display_options['filters']['field_lr_no_value']['id'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['table'] = 'field_data_field_lr_no';
  $handler->display->display_options['filters']['field_lr_no_value']['field'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_lr_no_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lr_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['operator_id'] = 'field_lr_no_value_op';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['label'] = 'LR No';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['operator'] = 'field_lr_no_value_op';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['identifier'] = 'field_lr_no_value';
  $handler->display->display_options['filters']['field_lr_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: LR Date (field_lr_date) */
  $handler->display->display_options['filters']['field_lr_date_value']['id'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['table'] = 'field_data_field_lr_date';
  $handler->display->display_options['filters']['field_lr_date_value']['field'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_lr_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_lr_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['operator_id'] = 'field_lr_date_value_op';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['label'] = 'LR Date';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['operator'] = 'field_lr_date_value_op';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['identifier'] = 'field_lr_date_value';
  $handler->display->display_options['filters']['field_lr_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_lr_date_value']['form_type'] = 'date_popup';
  /* Filter criterion: Content: LR Value (field_lr_value) */
  $handler->display->display_options['filters']['field_lr_value_value']['id'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['filters']['field_lr_value_value']['field'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value']['operator'] = 'empty';
  $handler->display->display_options['filters']['field_lr_value_value']['group'] = 2;
  /* Filter criterion: Content: LR Value (field_lr_value) */
  $handler->display->display_options['filters']['field_lr_value_value_1']['id'] = 'field_lr_value_value_1';
  $handler->display->display_options['filters']['field_lr_value_value_1']['table'] = 'field_data_field_lr_value';
  $handler->display->display_options['filters']['field_lr_value_value_1']['field'] = 'field_lr_value_value';
  $handler->display->display_options['filters']['field_lr_value_value_1']['value']['value'] = '0.00';
  $handler->display->display_options['filters']['field_lr_value_value_1']['group'] = 2;

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-lr-value';
  $handler->display->display_options['menu']['title'] = 'Update LR Value';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['update_lr_value'] = $view;

  $view = new view();
  $view->name = 'update_packing';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Update Packing';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Update Packing';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['exposed_form']['options']['reset_button'] = TRUE;
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Relationship: Entity Reference: Referencing entity */
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['id'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['table'] = 'node';
  $handler->display->display_options['relationships']['reverse_field_outward_invoices_node']['field'] = 'reverse_field_outward_invoices_node';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '30';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Outward Type */
  $handler->display->display_options['fields']['field_outward_type']['id'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['field'] = 'field_outward_type';
  $handler->display->display_options['fields']['field_outward_type']['label'] = 'Invoice Type';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Invoice No';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'long',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_1']['id'] = 'nid_1';
  $handler->display->display_options['fields']['nid_1']['table'] = 'node';
  $handler->display->display_options['fields']['nid_1']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_1']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_1']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit?field_company=[nid_1]&field_associate_type=[field_associate_type]';
  /* Field: Content: Delete link */
  $handler->display->display_options['fields']['delete_node']['id'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['delete_node']['field'] = 'delete_node';
  $handler->display->display_options['fields']['delete_node']['label'] = 'Delete';
  $handler->display->display_options['fields']['delete_node']['text'] = 'Delete';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  $handler->display->display_options['filters']['type']['group'] = 1;
  /* Filter criterion: Content: Nid */
  $handler->display->display_options['filters']['nid']['id'] = 'nid';
  $handler->display->display_options['filters']['nid']['table'] = 'node';
  $handler->display->display_options['filters']['nid']['field'] = 'nid';
  $handler->display->display_options['filters']['nid']['relationship'] = 'reverse_field_outward_invoices_node';
  $handler->display->display_options['filters']['nid']['operator'] = 'empty';
  $handler->display->display_options['filters']['nid']['group'] = 1;
  /* Filter criterion: Content: Status (field_status) */
  $handler->display->display_options['filters']['field_status_value']['id'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['table'] = 'field_data_field_status';
  $handler->display->display_options['filters']['field_status_value']['field'] = 'field_status_value';
  $handler->display->display_options['filters']['field_status_value']['operator'] = 'not';
  $handler->display->display_options['filters']['field_status_value']['value'] = array(
    'Reversed' => 'Reversed',
  );
  $handler->display->display_options['filters']['field_status_value']['group'] = 1;
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Division (field_division) */
  $handler->display->display_options['filters']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['filters']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['group'] = 1;
  $handler->display->display_options['filters']['field_division_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator_id'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Outward Type (field_outward_type) */
  $handler->display->display_options['filters']['field_outward_type_value']['id'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['filters']['field_outward_type_value']['field'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['group'] = 1;
  $handler->display->display_options['filters']['field_outward_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['operator_id'] = 'field_outward_type_value_op';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['label'] = 'Outward Type';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['operator'] = 'field_outward_type_value_op';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['identifier'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['group'] = 1;
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Consignee';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice No (field_invoice_no) */
  $handler->display->display_options['filters']['field_invoice_no_value']['id'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['filters']['field_invoice_no_value']['field'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_invoice_no_value']['group'] = 1;
  $handler->display->display_options['filters']['field_invoice_no_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['operator_id'] = 'field_invoice_no_value_op';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['label'] = 'Invoice No';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['operator'] = 'field_invoice_no_value_op';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['identifier'] = 'field_invoice_no_value';
  $handler->display->display_options['filters']['field_invoice_no_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice Date (field_invoice_date) */
  $handler->display->display_options['filters']['field_invoice_date_value']['id'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['filters']['field_invoice_date_value']['field'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_invoice_date_value']['group'] = 1;
  $handler->display->display_options['filters']['field_invoice_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator_id'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['label'] = 'Invoice Date';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['identifier'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_invoice_date_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'update-packing';
  $handler->display->display_options['menu']['title'] = 'Update Packing';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['update_packing'] = $view;

  $view = new view();
  $view->name = 'utilize_pdc';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'Utilize PDC';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'Utilize PDC';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '30';
  $handler->display->display_options['pager']['options']['offset'] = '0';
  $handler->display->display_options['pager']['options']['id'] = '0';
  $handler->display->display_options['pager']['options']['quantity'] = '9';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_consignee_target_id']['id'] = 'field_consignee_target_id';
  $handler->display->display_options['relationships']['field_consignee_target_id']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['relationships']['field_consignee_target_id']['field'] = 'field_consignee_target_id';
  /* Field: Bulk operations: Content */
  $handler->display->display_options['fields']['views_bulk_operations']['id'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['table'] = 'node';
  $handler->display->display_options['fields']['views_bulk_operations']['field'] = 'views_bulk_operations';
  $handler->display->display_options['fields']['views_bulk_operations']['label'] = '';
  $handler->display->display_options['fields']['views_bulk_operations']['element_label_colon'] = FALSE;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['display_type'] = '1';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['enable_select_all_pages'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['force_single'] = 0;
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_settings']['entity_load_capacity'] = '10';
  $handler->display->display_options['fields']['views_bulk_operations']['vbo_operations'] = array(
    'action::node_assign_owner_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_item' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_delete_revision' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_script_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_sticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_make_unsticky_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_map_invoices_to_pdc' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::views_bulk_operations_modify_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'show_all_tokens' => 1,
        'display_values' => array(
          '_all_' => '_all_',
        ),
      ),
    ),
    'action::views_bulk_operations_argument_selector_action' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
      'settings' => array(
        'url' => '',
      ),
    ),
    'action::node_promote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_publish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_invoice' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_redirect_edit_pdc' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpromote_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_save_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::system_send_email_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_set_invoice_reversed' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::node_unpublish_by_keyword_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_dispatch' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'action::pathauto_node_update_action' => array(
      'selected' => 0,
      'postpone_processing' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_update_packing' => array(
      'selected' => 0,
      'skip_confirmation' => 0,
      'override_label' => 0,
      'label' => '',
    ),
    'rules_component::rules_utilize_pdc' => array(
      'selected' => 1,
      'skip_confirmation' => 1,
      'override_label' => 0,
      'label' => '',
    ),
  );
  /* Field: Content: Company */
  $handler->display->display_options['fields']['field_company']['id'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['table'] = 'field_data_field_company';
  $handler->display->display_options['fields']['field_company']['field'] = 'field_company';
  $handler->display->display_options['fields']['field_company']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Division */
  $handler->display->display_options['fields']['field_division']['id'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['table'] = 'field_data_field_division';
  $handler->display->display_options['fields']['field_division']['field'] = 'field_division';
  $handler->display->display_options['fields']['field_division']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Consignee */
  $handler->display->display_options['fields']['field_consignee']['id'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['table'] = 'field_data_field_consignee';
  $handler->display->display_options['fields']['field_consignee']['field'] = 'field_consignee';
  $handler->display->display_options['fields']['field_consignee']['label'] = 'Customer';
  $handler->display->display_options['fields']['field_consignee']['settings'] = array(
    'link' => 1,
  );
  /* Field: Content: Invoice No */
  $handler->display->display_options['fields']['field_invoice_no']['id'] = 'field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['table'] = 'field_data_field_invoice_no';
  $handler->display->display_options['fields']['field_invoice_no']['field'] = 'field_invoice_no';
  /* Field: Content: Invoice Date */
  $handler->display->display_options['fields']['field_invoice_date']['id'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['field'] = 'field_invoice_date';
  $handler->display->display_options['fields']['field_invoice_date']['settings'] = array(
    'format_type' => 'short',
    'fromto' => 'both',
    'multiple_number' => '',
    'multiple_from' => '',
    'multiple_to' => '',
  );
  /* Field: Content: Invoice Value */
  $handler->display->display_options['fields']['field_invoice_value']['id'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['table'] = 'field_data_field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['field'] = 'field_invoice_value';
  $handler->display->display_options['fields']['field_invoice_value']['settings'] = array(
    'thousand_separator' => '',
    'decimal_separator' => '.',
    'scale' => '2',
    'prefix_suffix' => 1,
  );
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'outward_invoice' => 'outward_invoice',
  );
  /* Filter criterion: Content: Outward Type (field_outward_type) */
  $handler->display->display_options['filters']['field_outward_type_value']['id'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['table'] = 'field_data_field_outward_type';
  $handler->display->display_options['filters']['field_outward_type_value']['field'] = 'field_outward_type_value';
  $handler->display->display_options['filters']['field_outward_type_value']['value'] = array(
    'Sales Invoice' => 'Sales Invoice',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Division (field_division) */
  $handler->display->display_options['filters']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['filters']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator_id'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_consignee_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Customer';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Invoice Date (field_invoice_date) */
  $handler->display->display_options['filters']['field_invoice_date_value']['id'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['table'] = 'field_data_field_invoice_date';
  $handler->display->display_options['filters']['field_invoice_date_value']['field'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['operator'] = 'between';
  $handler->display->display_options['filters']['field_invoice_date_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator_id'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['label'] = 'Invoice Date';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['operator'] = 'field_invoice_date_value_op';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['identifier'] = 'field_invoice_date_value';
  $handler->display->display_options['filters']['field_invoice_date_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_invoice_date_value']['form_type'] = 'date_popup';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'utilize-pdc';
  $export['utilize_pdc'] = $view;

  $view = new view();
  $view->name = 'view_edit_associate_executive_mapping';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Associate Executive Mapping';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Associate Executive Mapping';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['query']['options']['distinct'] = TRUE;
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['relationships']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['relationships']['field_division_target_id']['field'] = 'field_division_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_associate_target_id']['id'] = 'field_associate_target_id';
  $handler->display->display_options['relationships']['field_associate_target_id']['table'] = 'field_data_field_associate';
  $handler->display->display_options['relationships']['field_associate_target_id']['field'] = 'field_associate_target_id';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_executives_target_id']['id'] = 'field_executives_target_id';
  $handler->display->display_options['relationships']['field_executives_target_id']['table'] = 'field_data_field_executives';
  $handler->display->display_options['relationships']['field_executives_target_id']['field'] = 'field_executives_target_id';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['field_company_name']['label'] = 'Company';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['relationship'] = 'field_associate_target_id';
  $handler->display->display_options['fields']['field_name']['label'] = 'Associate';
  /* Field: Content: Division Name */
  $handler->display->display_options['fields']['field_division_name']['id'] = 'field_division_name';
  $handler->display->display_options['fields']['field_division_name']['table'] = 'field_data_field_division_name';
  $handler->display->display_options['fields']['field_division_name']['field'] = 'field_division_name';
  $handler->display->display_options['fields']['field_division_name']['relationship'] = 'field_division_target_id';
  $handler->display->display_options['fields']['field_division_name']['label'] = 'Division';
  /* Field: Content: Executives */
  $handler->display->display_options['fields']['field_executives']['id'] = 'field_executives';
  $handler->display->display_options['fields']['field_executives']['table'] = 'field_data_field_executives';
  $handler->display->display_options['fields']['field_executives']['field'] = 'field_executives';
  $handler->display->display_options['fields']['field_executives']['settings'] = array(
    'link' => 0,
  );
  $handler->display->display_options['fields']['field_executives']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid']['id'] = 'nid';
  $handler->display->display_options['fields']['nid']['table'] = 'node';
  $handler->display->display_options['fields']['nid']['field'] = 'nid';
  $handler->display->display_options['fields']['nid']['exclude'] = TRUE;
  /* Field: Content: Nid */
  $handler->display->display_options['fields']['nid_3']['id'] = 'nid_3';
  $handler->display->display_options['fields']['nid_3']['table'] = 'node';
  $handler->display->display_options['fields']['nid_3']['field'] = 'nid';
  $handler->display->display_options['fields']['nid_3']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['nid_3']['exclude'] = TRUE;
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['relationship'] = 'field_associate_target_id';
  $handler->display->display_options['fields']['field_associate_type']['exclude'] = TRUE;
  /* Field: Global: Custom text */
  $handler->display->display_options['fields']['nothing']['id'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['table'] = 'views';
  $handler->display->display_options['fields']['nothing']['field'] = 'nothing';
  $handler->display->display_options['fields']['nothing']['label'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['text'] = 'Edit';
  $handler->display->display_options['fields']['nothing']['alter']['make_link'] = TRUE;
  $handler->display->display_options['fields']['nothing']['alter']['path'] = 'node/[nid]/edit/[nid_3]/[field_associate_type]?field_company=[nid_3]';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'associate_executive_mapping' => 'associate_executive_mapping',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_company_target_id']['group_info']['label'] = 'Company (field_company)';
  $handler->display->display_options['filters']['field_company_target_id']['group_info']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_company_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Division (field_division) */
  $handler->display->display_options['filters']['field_division_target_id']['id'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['table'] = 'field_data_field_division';
  $handler->display->display_options['filters']['field_division_target_id']['field'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator_id'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['label'] = 'Division';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['operator'] = 'field_division_target_id_op';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_division_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  $handler->display->display_options['filters']['field_division_target_id']['group_info']['label'] = 'Division (field_division)';
  $handler->display->display_options['filters']['field_division_target_id']['group_info']['identifier'] = 'field_division_target_id';
  $handler->display->display_options['filters']['field_division_target_id']['group_info']['remember'] = FALSE;
  $handler->display->display_options['filters']['field_division_target_id']['group_info']['group_items'] = array(
    1 => array(),
    2 => array(),
    3 => array(),
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['relationship'] = 'field_associate_target_id';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Associate Name';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value_1']['id'] = 'field_name_value_1';
  $handler->display->display_options['filters']['field_name_value_1']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value_1']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value_1']['relationship'] = 'field_executives_target_id';
  $handler->display->display_options['filters']['field_name_value_1']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value_1']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value_1']['expose']['operator_id'] = 'field_name_value_1_op';
  $handler->display->display_options['filters']['field_name_value_1']['expose']['label'] = 'Executive Name';
  $handler->display->display_options['filters']['field_name_value_1']['expose']['operator'] = 'field_name_value_1_op';
  $handler->display->display_options['filters']['field_name_value_1']['expose']['identifier'] = 'field_name_value_1';
  $handler->display->display_options['filters']['field_name_value_1']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-associate-executive-mapping';
  $handler->display->display_options['menu']['title'] = 'View/Edit Associate Executive Mapping';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_associate_executive_mapping'] = $view;

  $view = new view();
  $view->name = 'view_edit_business_associate';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Business Associate';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Business Associate';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Associate';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['field_company_name']['label'] = 'Company';
  /* Field: Content: Associate Type */
  $handler->display->display_options['fields']['field_associate_type']['id'] = 'field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['fields']['field_associate_type']['field'] = 'field_associate_type';
  /* Field: Content: Address - Locality (i.e. City) */
  $handler->display->display_options['fields']['field_address_locality']['id'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['table'] = 'field_data_field_address';
  $handler->display->display_options['fields']['field_address_locality']['field'] = 'field_address_locality';
  $handler->display->display_options['fields']['field_address_locality']['label'] = 'City';
  /* Field: Content: Mobile No */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'business_associate' => 'business_associate',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Associate Type (field_associate_type) */
  $handler->display->display_options['filters']['field_associate_type_value']['id'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['table'] = 'field_data_field_associate_type';
  $handler->display->display_options['filters']['field_associate_type_value']['field'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['operator_id'] = 'field_associate_type_value_op';
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['label'] = 'Associate Type';
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['operator'] = 'field_associate_type_value_op';
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['identifier'] = 'field_associate_type_value';
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_associate_type_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Associate';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-business-associate';
  $handler->display->display_options['menu']['title'] = 'View/Edit Business Associate';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_business_associate'] = $view;

  $view = new view();
  $view->name = 'view_edit_company';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Company';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Company';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Company Code';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Mobile No */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['delta_offset'] = '0';
  /* Field: Content: Phone */
  $handler->display->display_options['fields']['field_phone']['id'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['table'] = 'field_data_field_phone';
  $handler->display->display_options['fields']['field_phone']['field'] = 'field_phone';
  $handler->display->display_options['fields']['field_phone']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company' => 'company',
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-company';
  $handler->display->display_options['menu']['title'] = 'View/Edit Company';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_company'] = $view;

  $view = new view();
  $view->name = 'view_edit_company_executive';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Company Executive';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Company Executive';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  $handler->display->display_options['fields']['field_company_name']['label'] = 'Company';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Executive';
  /* Field: Content: Mobile No */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['delta_offset'] = '0';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Name (field_name:format) */
  $handler->display->display_options['sorts']['field_name_format']['id'] = 'field_name_format';
  $handler->display->display_options['sorts']['field_name_format']['table'] = 'field_data_field_name';
  $handler->display->display_options['sorts']['field_name_format']['field'] = 'field_name_format';
  /* Sort criterion: Content: Company Name (field_company_name) */
  $handler->display->display_options['sorts']['field_company_name_value']['id'] = 'field_company_name_value';
  $handler->display->display_options['sorts']['field_company_name_value']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['sorts']['field_company_name_value']['field'] = 'field_company_name_value';
  $handler->display->display_options['sorts']['field_company_name_value']['relationship'] = 'field_company_target_id';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'company_executive' => 'company_executive',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Executive';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-company-executive';
  $handler->display->display_options['menu']['title'] = 'View/Edit Company Executive';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_company_executive'] = $view;

  $view = new view();
  $view->name = 'view_edit_division';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Division';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Division';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Relationship: Entity Reference: Referenced Entity */
  $handler->display->display_options['relationships']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['relationships']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['relationships']['field_company_target_id']['field'] = 'field_company_target_id';
  /* Field: Content: Company Name */
  $handler->display->display_options['fields']['field_company_name']['id'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['fields']['field_company_name']['field'] = 'field_company_name';
  $handler->display->display_options['fields']['field_company_name']['relationship'] = 'field_company_target_id';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Division Code';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Division Name */
  $handler->display->display_options['fields']['field_division_name']['id'] = 'field_division_name';
  $handler->display->display_options['fields']['field_division_name']['table'] = 'field_data_field_division_name';
  $handler->display->display_options['fields']['field_division_name']['field'] = 'field_division_name';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Company Name (field_company_name) */
  $handler->display->display_options['sorts']['field_company_name_value']['id'] = 'field_company_name_value';
  $handler->display->display_options['sorts']['field_company_name_value']['table'] = 'field_data_field_company_name';
  $handler->display->display_options['sorts']['field_company_name_value']['field'] = 'field_company_name_value';
  $handler->display->display_options['sorts']['field_company_name_value']['relationship'] = 'field_company_target_id';
  /* Sort criterion: Content: Title */
  $handler->display->display_options['sorts']['title']['id'] = 'title';
  $handler->display->display_options['sorts']['title']['table'] = 'node';
  $handler->display->display_options['sorts']['title']['field'] = 'title';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'division' => 'division',
  );
  /* Filter criterion: Content: Company (field_company) */
  $handler->display->display_options['filters']['field_company_target_id']['id'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['table'] = 'field_data_field_company';
  $handler->display->display_options['filters']['field_company_target_id']['field'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator_id'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['label'] = 'Company';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['operator'] = 'field_company_target_id_op';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['identifier'] = 'field_company_target_id';
  $handler->display->display_options['filters']['field_company_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_company_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-division';
  $handler->display->display_options['menu']['title'] = 'View/Edit Division';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_division'] = $view;

  $view = new view();
  $view->name = 'view_edit_transporter';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'View/Edit Transporter';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'View/Edit Transporter';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'full';
  $handler->display->display_options['pager']['options']['items_per_page'] = '10';
  $handler->display->display_options['style_plugin'] = 'table';
  /* Field: Content: Name */
  $handler->display->display_options['fields']['field_name']['id'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['table'] = 'field_data_field_name';
  $handler->display->display_options['fields']['field_name']['field'] = 'field_name';
  $handler->display->display_options['fields']['field_name']['label'] = 'Transporter';
  /* Field: Content: Transporter Type */
  $handler->display->display_options['fields']['field_transporter_type']['id'] = 'field_transporter_type';
  $handler->display->display_options['fields']['field_transporter_type']['table'] = 'field_data_field_transporter_type';
  $handler->display->display_options['fields']['field_transporter_type']['field'] = 'field_transporter_type';
  $handler->display->display_options['fields']['field_transporter_type']['settings'] = array(
    'link' => 0,
  );
  /* Field: Content: Contact Person */
  $handler->display->display_options['fields']['field_contact_person']['id'] = 'field_contact_person';
  $handler->display->display_options['fields']['field_contact_person']['table'] = 'field_data_field_contact_person';
  $handler->display->display_options['fields']['field_contact_person']['field'] = 'field_contact_person';
  /* Field: Content: Email */
  $handler->display->display_options['fields']['field_email']['id'] = 'field_email';
  $handler->display->display_options['fields']['field_email']['table'] = 'field_data_field_email';
  $handler->display->display_options['fields']['field_email']['field'] = 'field_email';
  /* Field: Content: Mobile No */
  $handler->display->display_options['fields']['field_mobile']['id'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['table'] = 'field_data_field_mobile';
  $handler->display->display_options['fields']['field_mobile']['field'] = 'field_mobile';
  $handler->display->display_options['fields']['field_mobile']['delta_offset'] = '0';
  /* Field: Content: Link */
  $handler->display->display_options['fields']['view_node']['id'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['view_node']['field'] = 'view_node';
  $handler->display->display_options['fields']['view_node']['label'] = 'View';
  $handler->display->display_options['fields']['view_node']['text'] = 'View';
  /* Field: Content: Edit link */
  $handler->display->display_options['fields']['edit_node']['id'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['table'] = 'views_entity_node';
  $handler->display->display_options['fields']['edit_node']['field'] = 'edit_node';
  $handler->display->display_options['fields']['edit_node']['label'] = 'Edit';
  $handler->display->display_options['fields']['edit_node']['text'] = 'Edit';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Type */
  $handler->display->display_options['filters']['type']['id'] = 'type';
  $handler->display->display_options['filters']['type']['table'] = 'node';
  $handler->display->display_options['filters']['type']['field'] = 'type';
  $handler->display->display_options['filters']['type']['value'] = array(
    'transporter' => 'transporter',
  );
  /* Filter criterion: Content: Transporter Type (field_transporter_type) */
  $handler->display->display_options['filters']['field_transporter_type_target_id']['id'] = 'field_transporter_type_target_id';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['table'] = 'field_data_field_transporter_type';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['field'] = 'field_transporter_type_target_id';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['operator_id'] = 'field_transporter_type_target_id_op';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['label'] = 'Transporter Type';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['operator'] = 'field_transporter_type_target_id_op';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['identifier'] = 'field_transporter_type_target_id';
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['multiple'] = TRUE;
  $handler->display->display_options['filters']['field_transporter_type_target_id']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );
  /* Filter criterion: Content: Name (field_name) */
  $handler->display->display_options['filters']['field_name_value']['id'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['table'] = 'field_data_field_name';
  $handler->display->display_options['filters']['field_name_value']['field'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['operator'] = 'starts';
  $handler->display->display_options['filters']['field_name_value']['exposed'] = TRUE;
  $handler->display->display_options['filters']['field_name_value']['expose']['operator_id'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['label'] = 'Transporter';
  $handler->display->display_options['filters']['field_name_value']['expose']['operator'] = 'field_name_value_op';
  $handler->display->display_options['filters']['field_name_value']['expose']['identifier'] = 'field_name_value';
  $handler->display->display_options['filters']['field_name_value']['expose']['remember_roles'] = array(
    2 => '2',
    1 => 0,
    10 => 0,
    6 => 0,
    3 => 0,
    11 => 0,
    7 => 0,
    4 => 0,
    8 => 0,
    9 => 0,
    12 => 0,
    5 => 0,
    13 => 0,
  );

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'view-edit-transporter';
  $handler->display->display_options['menu']['title'] = 'View/Edit Transporter';
  $handler->display->display_options['menu']['weight'] = '0';
  $handler->display->display_options['menu']['name'] = 'main-menu';
  $handler->display->display_options['menu']['context'] = 0;
  $handler->display->display_options['menu']['context_only_inline'] = 0;
  $export['view_edit_transporter'] = $view;

  return $export;
}
