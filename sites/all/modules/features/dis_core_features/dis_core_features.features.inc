<?php
/**
 * @file
 * dis_core_features.features.inc
 */

/**
 * Implements hook_ctools_plugin_api().
 */
function dis_core_features_ctools_plugin_api($module = NULL, $api = NULL) {
  if ($module == "backup_migrate" && $api == "backup_migrate_exportables") {
    return array("version" => "1");
  }
  if ($module == "feeds" && $api == "feeds_importer_default") {
    return array("version" => "1");
  }
  if ($module == "feeds_tamper" && $api == "feeds_tamper_default") {
    return array("version" => "2");
  }
  if ($module == "page_manager" && $api == "pages_default") {
    return array("version" => "1");
  }
  if ($module == "property_validation" && $api == "default_property_validation_rules") {
    return array("version" => "2");
  }
  if ($module == "strongarm" && $api == "strongarm") {
    return array("version" => "1");
  }
}

/**
 * Implements hook_views_api().
 */
function dis_core_features_views_api($module = NULL, $api = NULL) {
  return array("api" => "3.0");
}

/**
 * Implements hook_node_info().
 */
function dis_core_features_node_info() {
  $items = array(
    'associate_executive_mapping' => array(
      'name' => t('Associate Executive Mapping'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'associate_inward_permit' => array(
      'name' => t('Associate Inward Permit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'business_associate' => array(
      'name' => t('Business Associate'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'company' => array(
      'name' => t('Company'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Company Code'),
      'help' => '',
    ),
    'company_executive' => array(
      'name' => t('Company Executive'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'consignment_details' => array(
      'name' => t('Consignment Details'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'delivery_confirmation' => array(
      'name' => t('Delivery Confirmation'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'dispatch' => array(
      'name' => t('Dispatch'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'division' => array(
      'name' => t('Division'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Division Code'),
      'help' => '',
    ),
    'inward_invoice' => array(
      'name' => t('Inward Invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'inward_permit' => array(
      'name' => t('Inward Permit'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'outward_invoice' => array(
      'name' => t('Outward Invoice'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'packing' => array(
      'name' => t('Packing'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pdc' => array(
      'name' => t('PDC'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'pdc_utilization' => array(
      'name' => t('PDC Utilization'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
    'transporter' => array(
      'name' => t('Transporter'),
      'base' => 'node_content',
      'description' => '',
      'has_title' => '1',
      'title_label' => t('Title'),
      'help' => '',
    ),
  );
  return $items;
}

/**
 * Implements hook_user_default_roles_plus().
 */
function dis_core_features_user_default_roles_plus() {
  $roles = array();

  // Exported role: Billing Executive
  $roles['Billing Executive'] = array(
    'name' => 'Billing Executive',
    'weight' => 5,
    'permissions' => array(
      'create associate_inward_permit content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: Billing Supervisor
  $roles['Billing Supervisor'] = array(
    'name' => 'Billing Supervisor',
    'weight' => 8,
    'permissions' => array(
      'create associate_inward_permit content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'delete any associate_inward_permit content' => TRUE,
      'delete any consignment_details content' => TRUE,
      'delete any delivery_confirmation content' => TRUE,
      'delete any inward_invoice content' => TRUE,
      'delete any inward_permit content' => TRUE,
      'delete any outward_invoice content' => TRUE,
      'delete any pdc content' => TRUE,
      'delete any pdc_utilization content' => TRUE,
      'delete own associate_inward_permit content' => TRUE,
      'delete own consignment_details content' => TRUE,
      'delete own delivery_confirmation content' => TRUE,
      'delete own inward_invoice content' => TRUE,
      'delete own inward_permit content' => TRUE,
      'delete own outward_invoice content' => TRUE,
      'delete own pdc content' => TRUE,
      'delete own pdc_utilization content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: DIS Administrator
  $roles['DIS Administrator'] = array(
    'name' => 'DIS Administrator',
    'weight' => 12,
    'permissions' => array(
      'access private fields' => TRUE,
      'add terms in dispatch_mode' => TRUE,
      'add terms in financial_year' => TRUE,
      'add terms in transporter_type' => TRUE,
      'assign roles' => TRUE,
      'create associate_executive_mapping content' => TRUE,
      'create associate_inward_permit content' => TRUE,
      'create business_associate content' => TRUE,
      'create company content' => TRUE,
      'create company_executive content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create dispatch content' => TRUE,
      'create division content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create packing content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'create transporter content' => TRUE,
      'delete any associate_executive_mapping content' => TRUE,
      'delete any associate_inward_permit content' => TRUE,
      'delete any business_associate content' => TRUE,
      'delete any company content' => TRUE,
      'delete any company_executive content' => TRUE,
      'delete any consignment_details content' => TRUE,
      'delete any delivery_confirmation content' => TRUE,
      'delete any dispatch content' => TRUE,
      'delete any division content' => TRUE,
      'delete any inward_invoice content' => TRUE,
      'delete any inward_permit content' => TRUE,
      'delete any outward_invoice content' => TRUE,
      'delete any packing content' => TRUE,
      'delete any pdc content' => TRUE,
      'delete any pdc_utilization content' => TRUE,
      'delete any transporter content' => TRUE,
      'delete own associate_executive_mapping content' => TRUE,
      'delete own associate_inward_permit content' => TRUE,
      'delete own business_associate content' => TRUE,
      'delete own company content' => TRUE,
      'delete own company_executive content' => TRUE,
      'delete own consignment_details content' => TRUE,
      'delete own delivery_confirmation content' => TRUE,
      'delete own dispatch content' => TRUE,
      'delete own division content' => TRUE,
      'delete own inward_invoice content' => TRUE,
      'delete own inward_permit content' => TRUE,
      'delete own outward_invoice content' => TRUE,
      'delete own packing content' => TRUE,
      'delete own pdc content' => TRUE,
      'delete own pdc_utilization content' => TRUE,
      'delete own transporter content' => TRUE,
      'delete terms in 2' => TRUE,
      'delete terms in 3' => TRUE,
      'edit any associate_executive_mapping content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any business_associate content' => TRUE,
      'edit any company content' => TRUE,
      'edit any company_executive content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit any division content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any packing content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit any transporter content' => TRUE,
      'edit own associate_executive_mapping content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own business_associate content' => TRUE,
      'edit own company content' => TRUE,
      'edit own company_executive content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own dispatch content' => TRUE,
      'edit own division content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own packing content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'edit own transporter content' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: Dispatch Executive
  $roles['Dispatch Executive'] = array(
    'name' => 'Dispatch Executive',
    'weight' => 4,
    'permissions' => array(
      'create dispatch content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit own dispatch content' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
    ),
  );

  // Exported role: Dispatch Supervisor
  $roles['Dispatch Supervisor'] = array(
    'name' => 'Dispatch Supervisor',
    'weight' => 7,
    'permissions' => array(
      'create dispatch content' => TRUE,
      'delete any dispatch content' => TRUE,
      'delete own dispatch content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit own dispatch content' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
    ),
  );

  // Exported role: Distribution Executive
  $roles['Distribution Executive'] = array(
    'name' => 'Distribution Executive',
    'weight' => 9,
    'permissions' => array(
      'create associate_inward_permit content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create dispatch content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create packing content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any packing content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own dispatch content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own packing content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: Distribution Supervisor
  $roles['Distribution Supervisor'] = array(
    'name' => 'Distribution Supervisor',
    'weight' => 10,
    'permissions' => array(
      'create associate_inward_permit content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create dispatch content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create packing content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'delete any associate_inward_permit content' => TRUE,
      'delete any consignment_details content' => TRUE,
      'delete any delivery_confirmation content' => TRUE,
      'delete any dispatch content' => TRUE,
      'delete any inward_invoice content' => TRUE,
      'delete any inward_permit content' => TRUE,
      'delete any outward_invoice content' => TRUE,
      'delete any packing content' => TRUE,
      'delete any pdc content' => TRUE,
      'delete any pdc_utilization content' => TRUE,
      'delete own associate_inward_permit content' => TRUE,
      'delete own consignment_details content' => TRUE,
      'delete own delivery_confirmation content' => TRUE,
      'delete own dispatch content' => TRUE,
      'delete own inward_invoice content' => TRUE,
      'delete own inward_permit content' => TRUE,
      'delete own outward_invoice content' => TRUE,
      'delete own packing content' => TRUE,
      'delete own pdc content' => TRUE,
      'delete own pdc_utilization content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any packing content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own dispatch content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own packing content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: Godown Executive
  $roles['Godown Executive'] = array(
    'name' => 'Godown Executive',
    'weight' => 3,
    'permissions' => array(
      'create packing content' => TRUE,
      'edit any packing content' => TRUE,
      'edit own packing content' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
    ),
  );

  // Exported role: Godown Supervisor
  $roles['Godown Supervisor'] = array(
    'name' => 'Godown Supervisor',
    'weight' => 6,
    'permissions' => array(
      'create packing content' => TRUE,
      'delete any packing content' => TRUE,
      'delete own packing content' => TRUE,
      'edit any packing content' => TRUE,
      'edit own packing content' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
    ),
  );

  // Exported role: Master Maintainer
  $roles['Master Maintainer'] = array(
    'name' => 'Master Maintainer',
    'weight' => 11,
    'permissions' => array(
      'create associate_executive_mapping content' => TRUE,
      'create associate_inward_permit content' => TRUE,
      'create business_associate content' => TRUE,
      'create company_executive content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create dispatch content' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create packing content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'create transporter content' => TRUE,
      'delete any associate_executive_mapping content' => TRUE,
      'delete any associate_inward_permit content' => TRUE,
      'delete any business_associate content' => TRUE,
      'delete any company_executive content' => TRUE,
      'delete any consignment_details content' => TRUE,
      'delete any delivery_confirmation content' => TRUE,
      'delete any dispatch content' => TRUE,
      'delete any inward_invoice content' => TRUE,
      'delete any inward_permit content' => TRUE,
      'delete any outward_invoice content' => TRUE,
      'delete any packing content' => TRUE,
      'delete any pdc content' => TRUE,
      'delete any pdc_utilization content' => TRUE,
      'delete any transporter content' => TRUE,
      'delete own associate_executive_mapping content' => TRUE,
      'delete own associate_inward_permit content' => TRUE,
      'delete own business_associate content' => TRUE,
      'delete own company_executive content' => TRUE,
      'delete own consignment_details content' => TRUE,
      'delete own delivery_confirmation content' => TRUE,
      'delete own dispatch content' => TRUE,
      'delete own inward_invoice content' => TRUE,
      'delete own inward_permit content' => TRUE,
      'delete own outward_invoice content' => TRUE,
      'delete own packing content' => TRUE,
      'delete own pdc content' => TRUE,
      'delete own pdc_utilization content' => TRUE,
      'delete own transporter content' => TRUE,
      'edit any associate_executive_mapping content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any business_associate content' => TRUE,
      'edit any company_executive content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any packing content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit any transporter content' => TRUE,
      'edit own associate_executive_mapping content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own business_associate content' => TRUE,
      'edit own company_executive content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own dispatch content' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own packing content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'edit own transporter content' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'use Rules component rules_redirect_edit_invoice' => TRUE,
      'use Rules component rules_set_invoice_reversed' => TRUE,
      'use Rules component rules_update_dispatch' => TRUE,
      'use Rules component rules_update_packing' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_pdc_status' => TRUE,
      'view own field_pdc_status' => TRUE,
    ),
  );

  // Exported role: administrator
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 13,
    'permissions' => array(
      'access administration pages' => TRUE,
      'access all views' => TRUE,
      'access content' => TRUE,
      'access content overview' => TRUE,
      'access contextual links' => TRUE,
      'access dashboard' => TRUE,
      'access private fields' => TRUE,
      'access rules debug' => TRUE,
      'access site in maintenance mode' => TRUE,
      'access site reports' => TRUE,
      'access toolbar' => TRUE,
      'access user profiles' => TRUE,
      'add terms in dispatch_mode' => TRUE,
      'add terms in financial_year' => TRUE,
      'add terms in transporter_type' => TRUE,
      'administer actions' => TRUE,
      'administer advanced pane settings' => TRUE,
      'administer blocks' => TRUE,
      'administer content types' => TRUE,
      'administer features' => TRUE,
      'administer feeds' => TRUE,
      'administer feeds_tamper' => TRUE,
      'administer field permissions' => TRUE,
      'administer filters' => TRUE,
      'administer image styles' => TRUE,
      'administer mailsystem' => TRUE,
      'administer menu' => TRUE,
      'administer modules' => TRUE,
      'administer nodes' => TRUE,
      'administer page manager' => TRUE,
      'administer pane access' => TRUE,
      'administer panels layouts' => TRUE,
      'administer panels styles' => TRUE,
      'administer pathauto' => TRUE,
      'administer permissions' => TRUE,
      'administer rules' => TRUE,
      'administer shortcuts' => TRUE,
      'administer site configuration' => TRUE,
      'administer software updates' => TRUE,
      'administer superfish' => TRUE,
      'administer taxonomy' => TRUE,
      'administer themes' => TRUE,
      'administer url aliases' => TRUE,
      'administer users' => TRUE,
      'administer uuid' => TRUE,
      'administer views' => TRUE,
      'assign roles' => TRUE,
      'block IP addresses' => TRUE,
      'bypass node access' => TRUE,
      'bypass rules access' => TRUE,
      'cancel account' => TRUE,
      'change layouts in place editing' => TRUE,
      'change own username' => TRUE,
      'clear associate_executive_mapping_importer feeds' => TRUE,
      'clear business_associate_importer feeds' => TRUE,
      'clear company_executive_importer feeds' => TRUE,
      'clear company_importer feeds' => TRUE,
      'clear division_importer feeds' => TRUE,
      'clear outward_invoice_importer feeds' => TRUE,
      'clear transporter_importer feeds' => TRUE,
      'create associate_executive_mapping content' => TRUE,
      'create associate_inward_permit content' => TRUE,
      'create business_associate content' => TRUE,
      'create company content' => TRUE,
      'create company_executive content' => TRUE,
      'create consignment_details content' => TRUE,
      'create delivery_confirmation content' => TRUE,
      'create dispatch content' => TRUE,
      'create division content' => TRUE,
      'create field_financial_year' => TRUE,
      'create field_pdc_status' => TRUE,
      'create field_quarter' => TRUE,
      'create field_status' => TRUE,
      'create inward_invoice content' => TRUE,
      'create inward_permit content' => TRUE,
      'create outward_invoice content' => TRUE,
      'create packing content' => TRUE,
      'create pdc content' => TRUE,
      'create pdc_utilization content' => TRUE,
      'create transporter content' => TRUE,
      'create url aliases' => TRUE,
      'customize shortcut links' => TRUE,
      'delete any associate_executive_mapping content' => TRUE,
      'delete any associate_inward_permit content' => TRUE,
      'delete any business_associate content' => TRUE,
      'delete any company content' => TRUE,
      'delete any company_executive content' => TRUE,
      'delete any consignment_details content' => TRUE,
      'delete any delivery_confirmation content' => TRUE,
      'delete any dispatch content' => TRUE,
      'delete any division content' => TRUE,
      'delete any inward_invoice content' => TRUE,
      'delete any inward_permit content' => TRUE,
      'delete any outward_invoice content' => TRUE,
      'delete any packing content' => TRUE,
      'delete any pdc content' => TRUE,
      'delete any pdc_utilization content' => TRUE,
      'delete any transporter content' => TRUE,
      'delete own associate_executive_mapping content' => TRUE,
      'delete own associate_inward_permit content' => TRUE,
      'delete own business_associate content' => TRUE,
      'delete own company content' => TRUE,
      'delete own company_executive content' => TRUE,
      'delete own consignment_details content' => TRUE,
      'delete own delivery_confirmation content' => TRUE,
      'delete own dispatch content' => TRUE,
      'delete own division content' => TRUE,
      'delete own inward_invoice content' => TRUE,
      'delete own inward_permit content' => TRUE,
      'delete own outward_invoice content' => TRUE,
      'delete own packing content' => TRUE,
      'delete own pdc content' => TRUE,
      'delete own pdc_utilization content' => TRUE,
      'delete own transporter content' => TRUE,
      'delete revisions' => TRUE,
      'delete terms in 1' => TRUE,
      'delete terms in 2' => TRUE,
      'delete terms in 3' => TRUE,
      'edit any associate_executive_mapping content' => TRUE,
      'edit any associate_inward_permit content' => TRUE,
      'edit any business_associate content' => TRUE,
      'edit any company content' => TRUE,
      'edit any company_executive content' => TRUE,
      'edit any consignment_details content' => TRUE,
      'edit any delivery_confirmation content' => TRUE,
      'edit any dispatch content' => TRUE,
      'edit any division content' => TRUE,
      'edit any inward_invoice content' => TRUE,
      'edit any inward_permit content' => TRUE,
      'edit any outward_invoice content' => TRUE,
      'edit any packing content' => TRUE,
      'edit any pdc content' => TRUE,
      'edit any pdc_utilization content' => TRUE,
      'edit any transporter content' => TRUE,
      'edit field_financial_year' => TRUE,
      'edit field_pdc_status' => TRUE,
      'edit field_quarter' => TRUE,
      'edit field_status' => TRUE,
      'edit mimemail user settings' => TRUE,
      'edit own associate_executive_mapping content' => TRUE,
      'edit own associate_inward_permit content' => TRUE,
      'edit own business_associate content' => TRUE,
      'edit own company content' => TRUE,
      'edit own company_executive content' => TRUE,
      'edit own consignment_details content' => TRUE,
      'edit own delivery_confirmation content' => TRUE,
      'edit own dispatch content' => TRUE,
      'edit own division content' => TRUE,
      'edit own field_financial_year' => TRUE,
      'edit own field_pdc_status' => TRUE,
      'edit own field_quarter' => TRUE,
      'edit own field_status' => TRUE,
      'edit own inward_invoice content' => TRUE,
      'edit own inward_permit content' => TRUE,
      'edit own outward_invoice content' => TRUE,
      'edit own packing content' => TRUE,
      'edit own pdc content' => TRUE,
      'edit own pdc_utilization content' => TRUE,
      'edit own transporter content' => TRUE,
      'edit terms in 1' => TRUE,
      'edit terms in 2' => TRUE,
      'edit terms in 3' => TRUE,
      'generate features' => TRUE,
      'import associate_executive_mapping_importer feeds' => TRUE,
      'import business_associate_importer feeds' => TRUE,
      'import company_executive_importer feeds' => TRUE,
      'import company_importer feeds' => TRUE,
      'import division_importer feeds' => TRUE,
      'import outward_invoice_importer feeds' => TRUE,
      'import transporter_importer feeds' => TRUE,
      'manage features' => TRUE,
      'notify of path changes' => TRUE,
      'revert revisions' => TRUE,
      'select account cancellation method' => TRUE,
      'send arbitrary files' => TRUE,
      'switch shortcut sets' => TRUE,
      'tamper associate_executive_mapping_importer' => TRUE,
      'tamper business_associate_importer' => TRUE,
      'tamper company_executive_importer' => TRUE,
      'tamper company_importer' => TRUE,
      'tamper division_importer' => TRUE,
      'tamper outward_invoice_importer' => TRUE,
      'tamper transporter_importer' => TRUE,
      'unique_field_perm_admin' => TRUE,
      'unique_field_perm_bypass' => TRUE,
      'unlock associate_executive_mapping_importer feeds' => TRUE,
      'unlock business_associate_importer feeds' => TRUE,
      'unlock company_executive_importer feeds' => TRUE,
      'unlock company_importer feeds' => TRUE,
      'unlock division_importer feeds' => TRUE,
      'unlock outward_invoice_importer feeds' => TRUE,
      'unlock transporter_importer feeds' => TRUE,
      'use bulk exporter' => TRUE,
      'use ipe with page manager' => TRUE,
      'use page manager' => TRUE,
      'use panels caching features' => TRUE,
      'use panels dashboard' => TRUE,
      'use panels in place editing' => TRUE,
      'use panels locks' => TRUE,
      'use PHP for title patterns' => TRUE,
      'use Rules component rules_utilize_pdc' => TRUE,
      'view field_financial_year' => TRUE,
      'view field_pdc_status' => TRUE,
      'view field_quarter' => TRUE,
      'view field_status' => TRUE,
      'view own field_financial_year' => TRUE,
      'view own field_pdc_status' => TRUE,
      'view own field_quarter' => TRUE,
      'view own field_status' => TRUE,
      'view own unpublished content' => TRUE,
      'view pane admin links' => TRUE,
      'view revisions' => TRUE,
      'view the administration theme' => TRUE,
    ),
  );

  // Exported role: anonymous user
  $roles['anonymous user'] = array(
    'name' => 'anonymous user',
    'weight' => 0,
    'permissions' => array(),
  );

  // Exported role: authenticated user
  $roles['authenticated user'] = array(
    'name' => 'authenticated user',
    'weight' => 1,
    'permissions' => array(
      'access content' => TRUE,
      'access private fields' => TRUE,
      'view field_financial_year' => TRUE,
      'view field_pdc_status' => TRUE,
      'view field_permit_status' => TRUE,
      'view field_quarter' => TRUE,
      'view field_status' => TRUE,
      'view own field_financial_year' => TRUE,
      'view own field_pdc_status' => TRUE,
      'view own field_permit_status' => TRUE,
      'view own field_quarter' => TRUE,
      'view own field_status' => TRUE,
    ),
  );

  return $roles;
}
