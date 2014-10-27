<?php
/**
 * @file
 * dis_core_features.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function dis_core_features_user_default_permissions() {
  $permissions = array();

  // Exported permission: 'access administration pages'.
  $permissions['access administration pages'] = array(
    'name' => 'access administration pages',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access all views'.
  $permissions['access all views'] = array(
    'name' => 'access all views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'access backup and migrate'.
  $permissions['access backup and migrate'] = array(
    'name' => 'access backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access backup files'.
  $permissions['access backup files'] = array(
    'name' => 'access backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'access content'.
  $permissions['access content'] = array(
    'name' => 'access content',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access content overview'.
  $permissions['access content overview'] = array(
    'name' => 'access content overview',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'access contextual links'.
  $permissions['access contextual links'] = array(
    'name' => 'access contextual links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'contextual',
  );

  // Exported permission: 'access dashboard'.
  $permissions['access dashboard'] = array(
    'name' => 'access dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'dashboard',
  );

  // Exported permission: 'access print'.
  $permissions['access print'] = array(
    'name' => 'access print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'access private fields'.
  $permissions['access private fields'] = array(
    'name' => 'access private fields',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'access rules debug'.
  $permissions['access rules debug'] = array(
    'name' => 'access rules debug',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'access site in maintenance mode'.
  $permissions['access site in maintenance mode'] = array(
    'name' => 'access site in maintenance mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access site reports'.
  $permissions['access site reports'] = array(
    'name' => 'access site reports',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'access toolbar'.
  $permissions['access toolbar'] = array(
    'name' => 'access toolbar',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'toolbar',
  );

  // Exported permission: 'access user profiles'.
  $permissions['access user profiles'] = array(
    'name' => 'access user profiles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'add terms in dispatch_mode'.
  $permissions['add terms in dispatch_mode'] = array(
    'name' => 'add terms in dispatch_mode',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in financial_year'.
  $permissions['add terms in financial_year'] = array(
    'name' => 'add terms in financial_year',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'add terms in transporter_type'.
  $permissions['add terms in transporter_type'] = array(
    'name' => 'add terms in transporter_type',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy_access_fix',
  );

  // Exported permission: 'administer actions'.
  $permissions['administer actions'] = array(
    'name' => 'administer actions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer advanced pane settings'.
  $permissions['administer advanced pane settings'] = array(
    'name' => 'administer advanced pane settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer backup and migrate'.
  $permissions['administer backup and migrate'] = array(
    'name' => 'administer backup and migrate',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'administer blocks'.
  $permissions['administer blocks'] = array(
    'name' => 'administer blocks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'block',
  );

  // Exported permission: 'administer content types'.
  $permissions['administer content types'] = array(
    'name' => 'administer content types',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer features'.
  $permissions['administer features'] = array(
    'name' => 'administer features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'administer feeds'.
  $permissions['administer feeds'] = array(
    'name' => 'administer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'administer feeds_tamper'.
  $permissions['administer feeds_tamper'] = array(
    'name' => 'administer feeds_tamper',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'administer field permissions'.
  $permissions['administer field permissions'] = array(
    'name' => 'administer field permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'administer filters'.
  $permissions['administer filters'] = array(
    'name' => 'administer filters',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'filter',
  );

  // Exported permission: 'administer image styles'.
  $permissions['administer image styles'] = array(
    'name' => 'administer image styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'image',
  );

  // Exported permission: 'administer mailsystem'.
  $permissions['administer mailsystem'] = array(
    'name' => 'administer mailsystem',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mailsystem',
  );

  // Exported permission: 'administer menu'.
  $permissions['administer menu'] = array(
    'name' => 'administer menu',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'menu',
  );

  // Exported permission: 'administer modules'.
  $permissions['administer modules'] = array(
    'name' => 'administer modules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer nodes'.
  $permissions['administer nodes'] = array(
    'name' => 'administer nodes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'administer page manager'.
  $permissions['administer page manager'] = array(
    'name' => 'administer page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'administer pane access'.
  $permissions['administer pane access'] = array(
    'name' => 'administer pane access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels layouts'.
  $permissions['administer panels layouts'] = array(
    'name' => 'administer panels layouts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer panels styles'.
  $permissions['administer panels styles'] = array(
    'name' => 'administer panels styles',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'administer pathauto'.
  $permissions['administer pathauto'] = array(
    'name' => 'administer pathauto',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'administer permissions'.
  $permissions['administer permissions'] = array(
    'name' => 'administer permissions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer print'.
  $permissions['administer print'] = array(
    'name' => 'administer print',
    'roles' => array(),
    'module' => 'print',
  );

  // Exported permission: 'administer rules'.
  $permissions['administer rules'] = array(
    'name' => 'administer rules',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'administer shortcuts'.
  $permissions['administer shortcuts'] = array(
    'name' => 'administer shortcuts',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'administer site configuration'.
  $permissions['administer site configuration'] = array(
    'name' => 'administer site configuration',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer software updates'.
  $permissions['administer software updates'] = array(
    'name' => 'administer software updates',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer superfish'.
  $permissions['administer superfish'] = array(
    'name' => 'administer superfish',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'superfish',
  );

  // Exported permission: 'administer taxonomy'.
  $permissions['administer taxonomy'] = array(
    'name' => 'administer taxonomy',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'administer themes'.
  $permissions['administer themes'] = array(
    'name' => 'administer themes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'administer url aliases'.
  $permissions['administer url aliases'] = array(
    'name' => 'administer url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'administer users'.
  $permissions['administer users'] = array(
    'name' => 'administer users',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'administer uuid'.
  $permissions['administer uuid'] = array(
    'name' => 'administer uuid',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'uuid',
  );

  // Exported permission: 'administer views'.
  $permissions['administer views'] = array(
    'name' => 'administer views',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'views',
  );

  // Exported permission: 'assign roles'.
  $permissions['assign roles'] = array(
    'name' => 'assign roles',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'roleassign',
  );

  // Exported permission: 'block IP addresses'.
  $permissions['block IP addresses'] = array(
    'name' => 'block IP addresses',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  // Exported permission: 'bypass node access'.
  $permissions['bypass node access'] = array(
    'name' => 'bypass node access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'bypass rules access'.
  $permissions['bypass rules access'] = array(
    'name' => 'bypass rules access',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'cancel account'.
  $permissions['cancel account'] = array(
    'name' => 'cancel account',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'change layouts in place editing'.
  $permissions['change layouts in place editing'] = array(
    'name' => 'change layouts in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'change own username'.
  $permissions['change own username'] = array(
    'name' => 'change own username',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'clear associate_executive_mapping_importer feeds'.
  $permissions['clear associate_executive_mapping_importer feeds'] = array(
    'name' => 'clear associate_executive_mapping_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear business_associate_importer feeds'.
  $permissions['clear business_associate_importer feeds'] = array(
    'name' => 'clear business_associate_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear company_executive_importer feeds'.
  $permissions['clear company_executive_importer feeds'] = array(
    'name' => 'clear company_executive_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear company_importer feeds'.
  $permissions['clear company_importer feeds'] = array(
    'name' => 'clear company_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear delivery_importer feeds'.
  $permissions['clear delivery_importer feeds'] = array(
    'name' => 'clear delivery_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear dispatch_importer feeds'.
  $permissions['clear dispatch_importer feeds'] = array(
    'name' => 'clear dispatch_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear division_importer feeds'.
  $permissions['clear division_importer feeds'] = array(
    'name' => 'clear division_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear outward_invoice_importer feeds'.
  $permissions['clear outward_invoice_importer feeds'] = array(
    'name' => 'clear outward_invoice_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'clear packing_importer feeds'.
  $permissions['clear packing_importer feeds'] = array(
    'name' => 'clear packing_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'clear transporter_importer feeds'.
  $permissions['clear transporter_importer feeds'] = array(
    'name' => 'clear transporter_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'create associate_executive_mapping content'.
  $permissions['create associate_executive_mapping content'] = array(
    'name' => 'create associate_executive_mapping content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create associate_inward_permit content'.
  $permissions['create associate_inward_permit content'] = array(
    'name' => 'create associate_inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create business_associate content'.
  $permissions['create business_associate content'] = array(
    'name' => 'create business_associate content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create company content'.
  $permissions['create company content'] = array(
    'name' => 'create company content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create company_executive content'.
  $permissions['create company_executive content'] = array(
    'name' => 'create company_executive content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create consignment_details content'.
  $permissions['create consignment_details content'] = array(
    'name' => 'create consignment_details content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create delivery_confirmation content'.
  $permissions['create delivery_confirmation content'] = array(
    'name' => 'create delivery_confirmation content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create dispatch content'.
  $permissions['create dispatch content'] = array(
    'name' => 'create dispatch content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Executive' => 'Dispatch Executive',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create division content'.
  $permissions['create division content'] = array(
    'name' => 'create division content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create field_financial_year'.
  $permissions['create field_financial_year'] = array(
    'name' => 'create field_financial_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_pdc_status'.
  $permissions['create field_pdc_status'] = array(
    'name' => 'create field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_permit_status'.
  $permissions['create field_permit_status'] = array(
    'name' => 'create field_permit_status',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_quarter'.
  $permissions['create field_quarter'] = array(
    'name' => 'create field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create field_status'.
  $permissions['create field_status'] = array(
    'name' => 'create field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'create inward_invoice content'.
  $permissions['create inward_invoice content'] = array(
    'name' => 'create inward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create inward_permit content'.
  $permissions['create inward_permit content'] = array(
    'name' => 'create inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create outward_invoice content'.
  $permissions['create outward_invoice content'] = array(
    'name' => 'create outward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create packing content'.
  $permissions['create packing content'] = array(
    'name' => 'create packing content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Executive' => 'Godown Executive',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create pdc content'.
  $permissions['create pdc content'] = array(
    'name' => 'create pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create pdc_utilization content'.
  $permissions['create pdc_utilization content'] = array(
    'name' => 'create pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create transporter content'.
  $permissions['create transporter content'] = array(
    'name' => 'create transporter content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'create url aliases'.
  $permissions['create url aliases'] = array(
    'name' => 'create url aliases',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'path',
  );

  // Exported permission: 'customize shortcut links'.
  $permissions['customize shortcut links'] = array(
    'name' => 'customize shortcut links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'delete any associate_executive_mapping content'.
  $permissions['delete any associate_executive_mapping content'] = array(
    'name' => 'delete any associate_executive_mapping content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any associate_inward_permit content'.
  $permissions['delete any associate_inward_permit content'] = array(
    'name' => 'delete any associate_inward_permit content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any business_associate content'.
  $permissions['delete any business_associate content'] = array(
    'name' => 'delete any business_associate content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any company content'.
  $permissions['delete any company content'] = array(
    'name' => 'delete any company content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any company_executive content'.
  $permissions['delete any company_executive content'] = array(
    'name' => 'delete any company_executive content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any consignment_details content'.
  $permissions['delete any consignment_details content'] = array(
    'name' => 'delete any consignment_details content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any delivery_confirmation content'.
  $permissions['delete any delivery_confirmation content'] = array(
    'name' => 'delete any delivery_confirmation content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any dispatch content'.
  $permissions['delete any dispatch content'] = array(
    'name' => 'delete any dispatch content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any division content'.
  $permissions['delete any division content'] = array(
    'name' => 'delete any division content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inward_invoice content'.
  $permissions['delete any inward_invoice content'] = array(
    'name' => 'delete any inward_invoice content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any inward_permit content'.
  $permissions['delete any inward_permit content'] = array(
    'name' => 'delete any inward_permit content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any outward_invoice content'.
  $permissions['delete any outward_invoice content'] = array(
    'name' => 'delete any outward_invoice content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any packing content'.
  $permissions['delete any packing content'] = array(
    'name' => 'delete any packing content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc content'.
  $permissions['delete any pdc content'] = array(
    'name' => 'delete any pdc content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any pdc_utilization content'.
  $permissions['delete any pdc_utilization content'] = array(
    'name' => 'delete any pdc_utilization content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete any transporter content'.
  $permissions['delete any transporter content'] = array(
    'name' => 'delete any transporter content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete backup files'.
  $permissions['delete backup files'] = array(
    'name' => 'delete backup files',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'delete own associate_executive_mapping content'.
  $permissions['delete own associate_executive_mapping content'] = array(
    'name' => 'delete own associate_executive_mapping content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own associate_inward_permit content'.
  $permissions['delete own associate_inward_permit content'] = array(
    'name' => 'delete own associate_inward_permit content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own business_associate content'.
  $permissions['delete own business_associate content'] = array(
    'name' => 'delete own business_associate content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own company content'.
  $permissions['delete own company content'] = array(
    'name' => 'delete own company content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own company_executive content'.
  $permissions['delete own company_executive content'] = array(
    'name' => 'delete own company_executive content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own consignment_details content'.
  $permissions['delete own consignment_details content'] = array(
    'name' => 'delete own consignment_details content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own delivery_confirmation content'.
  $permissions['delete own delivery_confirmation content'] = array(
    'name' => 'delete own delivery_confirmation content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own dispatch content'.
  $permissions['delete own dispatch content'] = array(
    'name' => 'delete own dispatch content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own division content'.
  $permissions['delete own division content'] = array(
    'name' => 'delete own division content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inward_invoice content'.
  $permissions['delete own inward_invoice content'] = array(
    'name' => 'delete own inward_invoice content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own inward_permit content'.
  $permissions['delete own inward_permit content'] = array(
    'name' => 'delete own inward_permit content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own outward_invoice content'.
  $permissions['delete own outward_invoice content'] = array(
    'name' => 'delete own outward_invoice content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own packing content'.
  $permissions['delete own packing content'] = array(
    'name' => 'delete own packing content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc content'.
  $permissions['delete own pdc content'] = array(
    'name' => 'delete own pdc content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own pdc_utilization content'.
  $permissions['delete own pdc_utilization content'] = array(
    'name' => 'delete own pdc_utilization content',
    'roles' => array(
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete own transporter content'.
  $permissions['delete own transporter content'] = array(
    'name' => 'delete own transporter content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete revisions'.
  $permissions['delete revisions'] = array(
    'name' => 'delete revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'delete terms in dispatch_mode'.
  $permissions['delete terms in dispatch_mode'] = array(
    'name' => 'delete terms in dispatch_mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in financial_year'.
  $permissions['delete terms in financial_year'] = array(
    'name' => 'delete terms in financial_year',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'delete terms in transporter_type'.
  $permissions['delete terms in transporter_type'] = array(
    'name' => 'delete terms in transporter_type',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit any associate_executive_mapping content'.
  $permissions['edit any associate_executive_mapping content'] = array(
    'name' => 'edit any associate_executive_mapping content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any associate_inward_permit content'.
  $permissions['edit any associate_inward_permit content'] = array(
    'name' => 'edit any associate_inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any business_associate content'.
  $permissions['edit any business_associate content'] = array(
    'name' => 'edit any business_associate content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any company content'.
  $permissions['edit any company content'] = array(
    'name' => 'edit any company content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any company_executive content'.
  $permissions['edit any company_executive content'] = array(
    'name' => 'edit any company_executive content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any consignment_details content'.
  $permissions['edit any consignment_details content'] = array(
    'name' => 'edit any consignment_details content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any delivery_confirmation content'.
  $permissions['edit any delivery_confirmation content'] = array(
    'name' => 'edit any delivery_confirmation content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any dispatch content'.
  $permissions['edit any dispatch content'] = array(
    'name' => 'edit any dispatch content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Executive' => 'Dispatch Executive',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any division content'.
  $permissions['edit any division content'] = array(
    'name' => 'edit any division content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inward_invoice content'.
  $permissions['edit any inward_invoice content'] = array(
    'name' => 'edit any inward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any inward_permit content'.
  $permissions['edit any inward_permit content'] = array(
    'name' => 'edit any inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any outward_invoice content'.
  $permissions['edit any outward_invoice content'] = array(
    'name' => 'edit any outward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any packing content'.
  $permissions['edit any packing content'] = array(
    'name' => 'edit any packing content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Executive' => 'Godown Executive',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc content'.
  $permissions['edit any pdc content'] = array(
    'name' => 'edit any pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any pdc_utilization content'.
  $permissions['edit any pdc_utilization content'] = array(
    'name' => 'edit any pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit any transporter content'.
  $permissions['edit any transporter content'] = array(
    'name' => 'edit any transporter content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit field_financial_year'.
  $permissions['edit field_financial_year'] = array(
    'name' => 'edit field_financial_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_pdc_status'.
  $permissions['edit field_pdc_status'] = array(
    'name' => 'edit field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_permit_status'.
  $permissions['edit field_permit_status'] = array(
    'name' => 'edit field_permit_status',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_quarter'.
  $permissions['edit field_quarter'] = array(
    'name' => 'edit field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit field_status'.
  $permissions['edit field_status'] = array(
    'name' => 'edit field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit mimemail user settings'.
  $permissions['edit mimemail user settings'] = array(
    'name' => 'edit mimemail user settings',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'edit own associate_executive_mapping content'.
  $permissions['edit own associate_executive_mapping content'] = array(
    'name' => 'edit own associate_executive_mapping content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own associate_inward_permit content'.
  $permissions['edit own associate_inward_permit content'] = array(
    'name' => 'edit own associate_inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own business_associate content'.
  $permissions['edit own business_associate content'] = array(
    'name' => 'edit own business_associate content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own company content'.
  $permissions['edit own company content'] = array(
    'name' => 'edit own company content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own company_executive content'.
  $permissions['edit own company_executive content'] = array(
    'name' => 'edit own company_executive content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own consignment_details content'.
  $permissions['edit own consignment_details content'] = array(
    'name' => 'edit own consignment_details content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own delivery_confirmation content'.
  $permissions['edit own delivery_confirmation content'] = array(
    'name' => 'edit own delivery_confirmation content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own dispatch content'.
  $permissions['edit own dispatch content'] = array(
    'name' => 'edit own dispatch content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Executive' => 'Dispatch Executive',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own division content'.
  $permissions['edit own division content'] = array(
    'name' => 'edit own division content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own field_financial_year'.
  $permissions['edit own field_financial_year'] = array(
    'name' => 'edit own field_financial_year',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_pdc_status'.
  $permissions['edit own field_pdc_status'] = array(
    'name' => 'edit own field_pdc_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_permit_status'.
  $permissions['edit own field_permit_status'] = array(
    'name' => 'edit own field_permit_status',
    'roles' => array(),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_quarter'.
  $permissions['edit own field_quarter'] = array(
    'name' => 'edit own field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own field_status'.
  $permissions['edit own field_status'] = array(
    'name' => 'edit own field_status',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'edit own inward_invoice content'.
  $permissions['edit own inward_invoice content'] = array(
    'name' => 'edit own inward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own inward_permit content'.
  $permissions['edit own inward_permit content'] = array(
    'name' => 'edit own inward_permit content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own outward_invoice content'.
  $permissions['edit own outward_invoice content'] = array(
    'name' => 'edit own outward_invoice content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own packing content'.
  $permissions['edit own packing content'] = array(
    'name' => 'edit own packing content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Executive' => 'Godown Executive',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdc content'.
  $permissions['edit own pdc content'] = array(
    'name' => 'edit own pdc content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own pdc_utilization content'.
  $permissions['edit own pdc_utilization content'] = array(
    'name' => 'edit own pdc_utilization content',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit own transporter content'.
  $permissions['edit own transporter content'] = array(
    'name' => 'edit own transporter content',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'edit terms in dispatch_mode'.
  $permissions['edit terms in dispatch_mode'] = array(
    'name' => 'edit terms in dispatch_mode',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in financial_year'.
  $permissions['edit terms in financial_year'] = array(
    'name' => 'edit terms in financial_year',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'edit terms in transporter_type'.
  $permissions['edit terms in transporter_type'] = array(
    'name' => 'edit terms in transporter_type',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'administrator' => 'administrator',
    ),
    'module' => 'taxonomy',
  );

  // Exported permission: 'generate features'.
  $permissions['generate features'] = array(
    'name' => 'generate features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'import associate_executive_mapping_importer feeds'.
  $permissions['import associate_executive_mapping_importer feeds'] = array(
    'name' => 'import associate_executive_mapping_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import business_associate_importer feeds'.
  $permissions['import business_associate_importer feeds'] = array(
    'name' => 'import business_associate_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import company_executive_importer feeds'.
  $permissions['import company_executive_importer feeds'] = array(
    'name' => 'import company_executive_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import company_importer feeds'.
  $permissions['import company_importer feeds'] = array(
    'name' => 'import company_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import delivery_importer feeds'.
  $permissions['import delivery_importer feeds'] = array(
    'name' => 'import delivery_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import dispatch_importer feeds'.
  $permissions['import dispatch_importer feeds'] = array(
    'name' => 'import dispatch_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import division_importer feeds'.
  $permissions['import division_importer feeds'] = array(
    'name' => 'import division_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import outward_invoice_importer feeds'.
  $permissions['import outward_invoice_importer feeds'] = array(
    'name' => 'import outward_invoice_importer feeds',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'import packing_importer feeds'.
  $permissions['import packing_importer feeds'] = array(
    'name' => 'import packing_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'import transporter_importer feeds'.
  $permissions['import transporter_importer feeds'] = array(
    'name' => 'import transporter_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'manage features'.
  $permissions['manage features'] = array(
    'name' => 'manage features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'features',
  );

  // Exported permission: 'node-specific print configuration'.
  $permissions['node-specific print configuration'] = array(
    'name' => 'node-specific print configuration',
    'roles' => array(),
    'module' => 'print_ui',
  );

  // Exported permission: 'notify of path changes'.
  $permissions['notify of path changes'] = array(
    'name' => 'notify of path changes',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'pathauto',
  );

  // Exported permission: 'perform backup'.
  $permissions['perform backup'] = array(
    'name' => 'perform backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'restore from backup'.
  $permissions['restore from backup'] = array(
    'name' => 'restore from backup',
    'roles' => array(),
    'module' => 'backup_migrate',
  );

  // Exported permission: 'revert revisions'.
  $permissions['revert revisions'] = array(
    'name' => 'revert revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'select account cancellation method'.
  $permissions['select account cancellation method'] = array(
    'name' => 'select account cancellation method',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'user',
  );

  // Exported permission: 'send arbitrary files'.
  $permissions['send arbitrary files'] = array(
    'name' => 'send arbitrary files',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'mimemail',
  );

  // Exported permission: 'switch shortcut sets'.
  $permissions['switch shortcut sets'] = array(
    'name' => 'switch shortcut sets',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'shortcut',
  );

  // Exported permission: 'tamper associate_executive_mapping_importer'.
  $permissions['tamper associate_executive_mapping_importer'] = array(
    'name' => 'tamper associate_executive_mapping_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper business_associate_importer'.
  $permissions['tamper business_associate_importer'] = array(
    'name' => 'tamper business_associate_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper company_executive_importer'.
  $permissions['tamper company_executive_importer'] = array(
    'name' => 'tamper company_executive_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper company_importer'.
  $permissions['tamper company_importer'] = array(
    'name' => 'tamper company_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper delivery_importer'.
  $permissions['tamper delivery_importer'] = array(
    'name' => 'tamper delivery_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper dispatch_importer'.
  $permissions['tamper dispatch_importer'] = array(
    'name' => 'tamper dispatch_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper division_importer'.
  $permissions['tamper division_importer'] = array(
    'name' => 'tamper division_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper outward_invoice_importer'.
  $permissions['tamper outward_invoice_importer'] = array(
    'name' => 'tamper outward_invoice_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper packing_importer'.
  $permissions['tamper packing_importer'] = array(
    'name' => 'tamper packing_importer',
    'roles' => array(),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'tamper transporter_importer'.
  $permissions['tamper transporter_importer'] = array(
    'name' => 'tamper transporter_importer',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds_tamper',
  );

  // Exported permission: 'unique_field_perm_admin'.
  $permissions['unique_field_perm_admin'] = array(
    'name' => 'unique_field_perm_admin',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'unique_field_perm_bypass'.
  $permissions['unique_field_perm_bypass'] = array(
    'name' => 'unique_field_perm_bypass',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'unique_field',
  );

  // Exported permission: 'unlock associate_executive_mapping_importer feeds'.
  $permissions['unlock associate_executive_mapping_importer feeds'] = array(
    'name' => 'unlock associate_executive_mapping_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock business_associate_importer feeds'.
  $permissions['unlock business_associate_importer feeds'] = array(
    'name' => 'unlock business_associate_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock company_executive_importer feeds'.
  $permissions['unlock company_executive_importer feeds'] = array(
    'name' => 'unlock company_executive_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock company_importer feeds'.
  $permissions['unlock company_importer feeds'] = array(
    'name' => 'unlock company_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock delivery_importer feeds'.
  $permissions['unlock delivery_importer feeds'] = array(
    'name' => 'unlock delivery_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock dispatch_importer feeds'.
  $permissions['unlock dispatch_importer feeds'] = array(
    'name' => 'unlock dispatch_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock division_importer feeds'.
  $permissions['unlock division_importer feeds'] = array(
    'name' => 'unlock division_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock outward_invoice_importer feeds'.
  $permissions['unlock outward_invoice_importer feeds'] = array(
    'name' => 'unlock outward_invoice_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock packing_importer feeds'.
  $permissions['unlock packing_importer feeds'] = array(
    'name' => 'unlock packing_importer feeds',
    'roles' => array(),
    'module' => 'feeds',
  );

  // Exported permission: 'unlock transporter_importer feeds'.
  $permissions['unlock transporter_importer feeds'] = array(
    'name' => 'unlock transporter_importer feeds',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'feeds',
  );

  // Exported permission: 'use PHP for title patterns'.
  $permissions['use PHP for title patterns'] = array(
    'name' => 'use PHP for title patterns',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'auto_nodetitle',
  );

  // Exported permission: 'use Rules component rules_redirect_edit_invoice'.
  $permissions['use Rules component rules_redirect_edit_invoice'] = array(
    'name' => 'use Rules component rules_redirect_edit_invoice',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_set_invoice_reversed'.
  $permissions['use Rules component rules_set_invoice_reversed'] = array(
    'name' => 'use Rules component rules_set_invoice_reversed',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_update_dispatch'.
  $permissions['use Rules component rules_update_dispatch'] = array(
    'name' => 'use Rules component rules_update_dispatch',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Dispatch Executive' => 'Dispatch Executive',
      'Dispatch Supervisor' => 'Dispatch Supervisor',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_update_packing'.
  $permissions['use Rules component rules_update_packing'] = array(
    'name' => 'use Rules component rules_update_packing',
    'roles' => array(
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Godown Executive' => 'Godown Executive',
      'Godown Supervisor' => 'Godown Supervisor',
      'Master Maintainer' => 'Master Maintainer',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use Rules component rules_utilize_pdc'.
  $permissions['use Rules component rules_utilize_pdc'] = array(
    'name' => 'use Rules component rules_utilize_pdc',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
    ),
    'module' => 'rules',
  );

  // Exported permission: 'use bulk exporter'.
  $permissions['use bulk exporter'] = array(
    'name' => 'use bulk exporter',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'bulk_export',
  );

  // Exported permission: 'use ipe with page manager'.
  $permissions['use ipe with page manager'] = array(
    'name' => 'use ipe with page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use page manager'.
  $permissions['use page manager'] = array(
    'name' => 'use page manager',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'page_manager',
  );

  // Exported permission: 'use panels caching features'.
  $permissions['use panels caching features'] = array(
    'name' => 'use panels caching features',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels dashboard'.
  $permissions['use panels dashboard'] = array(
    'name' => 'use panels dashboard',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels in place editing'.
  $permissions['use panels in place editing'] = array(
    'name' => 'use panels in place editing',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'use panels locks'.
  $permissions['use panels locks'] = array(
    'name' => 'use panels locks',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view field_financial_year'.
  $permissions['view field_financial_year'] = array(
    'name' => 'view field_financial_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_pdc_status'.
  $permissions['view field_pdc_status'] = array(
    'name' => 'view field_pdc_status',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_permit_status'.
  $permissions['view field_permit_status'] = array(
    'name' => 'view field_permit_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_quarter'.
  $permissions['view field_quarter'] = array(
    'name' => 'view field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view field_status'.
  $permissions['view field_status'] = array(
    'name' => 'view field_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_financial_year'.
  $permissions['view own field_financial_year'] = array(
    'name' => 'view own field_financial_year',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_pdc_status'.
  $permissions['view own field_pdc_status'] = array(
    'name' => 'view own field_pdc_status',
    'roles' => array(
      'Billing Executive' => 'Billing Executive',
      'Billing Supervisor' => 'Billing Supervisor',
      'DIS Administrator' => 'DIS Administrator',
      'Distribution Executive' => 'Distribution Executive',
      'Distribution Supervisor' => 'Distribution Supervisor',
      'Master Maintainer' => 'Master Maintainer',
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_permit_status'.
  $permissions['view own field_permit_status'] = array(
    'name' => 'view own field_permit_status',
    'roles' => array(
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_quarter'.
  $permissions['view own field_quarter'] = array(
    'name' => 'view own field_quarter',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own field_status'.
  $permissions['view own field_status'] = array(
    'name' => 'view own field_status',
    'roles' => array(
      'administrator' => 'administrator',
      'authenticated user' => 'authenticated user',
    ),
    'module' => 'field_permissions',
  );

  // Exported permission: 'view own unpublished content'.
  $permissions['view own unpublished content'] = array(
    'name' => 'view own unpublished content',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view pane admin links'.
  $permissions['view pane admin links'] = array(
    'name' => 'view pane admin links',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'panels',
  );

  // Exported permission: 'view revisions'.
  $permissions['view revisions'] = array(
    'name' => 'view revisions',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'node',
  );

  // Exported permission: 'view the administration theme'.
  $permissions['view the administration theme'] = array(
    'name' => 'view the administration theme',
    'roles' => array(
      'administrator' => 'administrator',
    ),
    'module' => 'system',
  );

  return $permissions;
}
