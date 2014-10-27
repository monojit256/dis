<?php
/**
 * @file
 * dis_core_features.features.menu_links.inc
 */

/**
 * Implements hook_menu_default_menu_links().
 */
function dis_core_features_menu_default_menu_links() {
  $menu_links = array();

  // Exported menu link: main-menu_add-associate-executive-mapping:add-associate-executive-mapping
  $menu_links['main-menu_add-associate-executive-mapping:add-associate-executive-mapping'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-associate-executive-mapping',
    'router_path' => 'add-associate-executive-mapping',
    'link_title' => 'Add Associate Executive Mapping',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-associate-executive-mapping:add-associate-executive-mapping',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-associate-inward-permit:add-associate-inward-permit
  $menu_links['main-menu_add-associate-inward-permit:add-associate-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-associate-inward-permit',
    'router_path' => 'add-associate-inward-permit',
    'link_title' => 'Add Associate Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-associate-inward-permit:add-associate-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_associate-inward-permit:associate-inward-permit',
  );
  // Exported menu link: main-menu_add-business-associate:node/add/business-associate
  $menu_links['main-menu_add-business-associate:node/add/business-associate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/business-associate',
    'router_path' => 'node/add/business-associate',
    'link_title' => 'Add Business Associate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-business-associate:node/add/business-associate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-company-executive:node/add/company-executive
  $menu_links['main-menu_add-company-executive:node/add/company-executive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/company-executive',
    'router_path' => 'node/add/company-executive',
    'link_title' => 'Add Company Executive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-company-executive:node/add/company-executive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-company:node/add/company
  $menu_links['main-menu_add-company:node/add/company'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/company',
    'router_path' => 'node/add/company',
    'link_title' => 'Add Company',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-company:node/add/company',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-consignment-details:add-consignment-details
  $menu_links['main-menu_add-consignment-details:add-consignment-details'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-consignment-details',
    'router_path' => 'add-consignment-details',
    'link_title' => 'Add Consignment Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-consignment-details:add-consignment-details',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-inward:goods-inward',
  );
  // Exported menu link: main-menu_add-division:node/add/division
  $menu_links['main-menu_add-division:node/add/division'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/division',
    'router_path' => 'node/add/division',
    'link_title' => 'Add Division',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-division:node/add/division',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_add-inward-invoice:add-inward-invoice
  $menu_links['main-menu_add-inward-invoice:add-inward-invoice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-inward-invoice',
    'router_path' => 'add-inward-invoice',
    'link_title' => 'Add Inward Invoice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-inward-invoice:add-inward-invoice',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-inward:goods-inward',
  );
  // Exported menu link: main-menu_add-inward-permit:add-inward-permit
  $menu_links['main-menu_add-inward-permit:add-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-inward-permit',
    'router_path' => 'add-inward-permit',
    'link_title' => 'Add Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-inward-permit:add-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_inward-permit:inward-permit',
  );
  // Exported menu link: main-menu_add-outward-invoice:add-outward-invoice
  $menu_links['main-menu_add-outward-invoice:add-outward-invoice'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-outward-invoice',
    'router_path' => 'add-outward-invoice',
    'link_title' => 'Add Outward Invoice',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-outward-invoice:add-outward-invoice',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_add-pdc:add-pdc
  $menu_links['main-menu_add-pdc:add-pdc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'add-pdc',
    'router_path' => 'add-pdc',
    'link_title' => 'Add PDC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-pdc:add-pdc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pdc:pdc',
  );
  // Exported menu link: main-menu_add-transporter:node/add/transporter
  $menu_links['main-menu_add-transporter:node/add/transporter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'node/add/transporter',
    'router_path' => 'node/add/transporter',
    'link_title' => 'Add Transporter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_add-transporter:node/add/transporter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -40,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_admin-home:admin-home
  $menu_links['main-menu_admin-home:admin-home'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'admin-home',
    'router_path' => 'admin-home',
    'link_title' => 'Admin Home',
    'options' => array(
      'identifier' => 'main-menu_admin-home:admin-home',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
  );
  // Exported menu link: main-menu_associate-inward-permit-register:associate-inward-permit-register
  $menu_links['main-menu_associate-inward-permit-register:associate-inward-permit-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'associate-inward-permit-register',
    'router_path' => 'associate-inward-permit-register',
    'link_title' => 'Associate Inward Permit Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_associate-inward-permit-register:associate-inward-permit-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_associate-inward-permit:associate-inward-permit',
  );
  // Exported menu link: main-menu_associate-inward-permit:associate-inward-permit
  $menu_links['main-menu_associate-inward-permit:associate-inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'associate-inward-permit',
    'router_path' => 'associate-inward-permit',
    'link_title' => 'Associate Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_associate-inward-permit:associate-inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_permit:permits',
  );
  // Exported menu link: main-menu_goods-inward:goods-inward
  $menu_links['main-menu_goods-inward:goods-inward'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'goods-inward',
    'router_path' => 'goods-inward',
    'link_title' => 'Goods Inward',
    'options' => array(
      'identifier' => 'main-menu_goods-inward:goods-inward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
  );
  // Exported menu link: main-menu_goods-outward:goods-outward
  $menu_links['main-menu_goods-outward:goods-outward'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'goods-outward',
    'router_path' => 'goods-outward',
    'link_title' => 'Goods Outward',
    'options' => array(
      'identifier' => 'main-menu_goods-outward:goods-outward',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
  );
  // Exported menu link: main-menu_home:<front>
  $menu_links['main-menu_home:<front>'] = array(
    'menu_name' => 'main-menu',
    'link_path' => '<front>',
    'router_path' => '',
    'link_title' => 'Home',
    'options' => array(
      'identifier' => 'main-menu_home:<front>',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 1,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
  );
  // Exported menu link: main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer
  $menu_links['main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/associate_executive_mapping_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Associate Executive Mappings',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-associate-executive-mappings:import/associate_executive_mapping_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-business-associates:import/business_associate_importer
  $menu_links['main-menu_import-business-associates:import/business_associate_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/business_associate_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Business Associates',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-business-associates:import/business_associate_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-companies:import/company_importer
  $menu_links['main-menu_import-companies:import/company_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/company_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Companies',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-companies:import/company_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-company-executives:import/company_executive_importer
  $menu_links['main-menu_import-company-executives:import/company_executive_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/company_executive_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Company Executives',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-company-executives:import/company_executive_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-delivery-confirmation:import/delivery_importer
  $menu_links['main-menu_import-delivery-confirmation:import/delivery_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/delivery_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Delivery Confirmation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-delivery-confirmation:import/delivery_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-dispatch:import/dispatch_importer
  $menu_links['main-menu_import-dispatch:import/dispatch_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/dispatch_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Dispatch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-dispatch:import/dispatch_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-divisions:import/division_importer
  $menu_links['main-menu_import-divisions:import/division_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/division_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Divisions',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-divisions:import/division_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-packing:import/packing_importer
  $menu_links['main-menu_import-packing:import/packing_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/packing_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Packing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-packing:import/packing_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_import-transporters:import/transporter_importer
  $menu_links['main-menu_import-transporters:import/transporter_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/transporter_importer',
    'router_path' => 'import/%',
    'link_title' => 'Import Transporters',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_import-transporters:import/transporter_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_imported-outward-invoices:imported-outward-invoices
  $menu_links['main-menu_imported-outward-invoices:imported-outward-invoices'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'imported-outward-invoices',
    'router_path' => 'imported-outward-invoices',
    'link_title' => 'Imported Outward Invoices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_imported-outward-invoices:imported-outward-invoices',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_admin-home:admin-home',
  );
  // Exported menu link: main-menu_inward-permit-register:inward-permit-register
  $menu_links['main-menu_inward-permit-register:inward-permit-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'inward-permit-register',
    'router_path' => 'inward-permit-register',
    'link_title' => 'Inward Permit Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inward-permit-register:inward-permit-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_inward-permit:inward-permit',
  );
  // Exported menu link: main-menu_inward-permit:inward-permit
  $menu_links['main-menu_inward-permit:inward-permit'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'inward-permit',
    'router_path' => 'inward-permit',
    'link_title' => 'Inward Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inward-permit:inward-permit',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_permit:permits',
  );
  // Exported menu link: main-menu_inward-register:inward-register
  $menu_links['main-menu_inward-register:inward-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'inward-register',
    'router_path' => 'inward-register',
    'link_title' => 'Inward register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_inward-register:inward-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-inward:goods-inward',
  );
  // Exported menu link: main-menu_manage-invoices:manage-invoices
  $menu_links['main-menu_manage-invoices:manage-invoices'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'manage-invoices',
    'router_path' => 'manage-invoices',
    'link_title' => 'Manage Invoices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_manage-invoices:manage-invoices',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_master-data:master-data
  $menu_links['main-menu_master-data:master-data'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'master-data',
    'router_path' => 'master-data',
    'link_title' => 'Master Data',
    'options' => array(
      'identifier' => 'main-menu_master-data:master-data',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
  );
  // Exported menu link: main-menu_miscellaneous:miscellaneous
  $menu_links['main-menu_miscellaneous:miscellaneous'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'miscellaneous',
    'router_path' => 'miscellaneous',
    'link_title' => 'Miscellaneous',
    'options' => array(
      'identifier' => 'main-menu_miscellaneous:miscellaneous',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
  );
  // Exported menu link: main-menu_outward-register:outward-register
  $menu_links['main-menu_outward-register:outward-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'outward-register',
    'router_path' => 'outward-register',
    'link_title' => 'Outward Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_outward-register:outward-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -42,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_pdc-register:pdc-register
  $menu_links['main-menu_pdc-register:pdc-register'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pdc-register',
    'router_path' => 'pdc-register',
    'link_title' => 'PDC Register',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_pdc-register:pdc-register',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -48,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pdc:pdc',
  );
  // Exported menu link: main-menu_pdc:pdc
  $menu_links['main-menu_pdc:pdc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'pdc',
    'router_path' => 'pdc',
    'link_title' => 'PDC',
    'options' => array(
      'identifier' => 'main-menu_pdc:pdc',
    ),
    'module' => 'system',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => -50,
    'customized' => 1,
    'parent_identifier' => 'main-menu_miscellaneous:miscellaneous',
  );
  // Exported menu link: main-menu_permit:permits
  $menu_links['main-menu_permit:permits'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'permits',
    'router_path' => 'permits',
    'link_title' => 'Permit',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_permit:permits',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 1,
    'expanded' => 0,
    'weight' => 0,
    'customized' => 1,
    'parent_identifier' => 'main-menu_miscellaneous:miscellaneous',
  );
  // Exported menu link: main-menu_update-delivery-confirmation:update-delivery-confirmation
  $menu_links['main-menu_update-delivery-confirmation:update-delivery-confirmation'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'update-delivery-confirmation',
    'router_path' => 'update-delivery-confirmation',
    'link_title' => 'Update Delivery Confirmation',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_update-delivery-confirmation:update-delivery-confirmation',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_update-dispatch:update-dispatch
  $menu_links['main-menu_update-dispatch:update-dispatch'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'update-dispatch',
    'router_path' => 'update-dispatch',
    'link_title' => 'Update Dispatch',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_update-dispatch:update-dispatch',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -46,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_update-lr-details:update-lr-details
  $menu_links['main-menu_update-lr-details:update-lr-details'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'update-lr-details',
    'router_path' => 'update-lr-details',
    'link_title' => 'Update LR Details',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_update-lr-details:update-lr-details',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_update-lr-value:update-lr-value
  $menu_links['main-menu_update-lr-value:update-lr-value'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'update-lr-value',
    'router_path' => 'update-lr-value',
    'link_title' => 'Update LR Value',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_update-lr-value:update-lr-value',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -44,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_update-packing:update-packing
  $menu_links['main-menu_update-packing:update-packing'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'update-packing',
    'router_path' => 'update-packing',
    'link_title' => 'Update Packing',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_update-packing:update-packing',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_upload-outward-invoices:import/outward_invoice_importer
  $menu_links['main-menu_upload-outward-invoices:import/outward_invoice_importer'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'import/outward_invoice_importer',
    'router_path' => 'import/%',
    'link_title' => 'Upload Outward Invoices',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_upload-outward-invoices:import/outward_invoice_importer',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_goods-outward:goods-outward',
  );
  // Exported menu link: main-menu_utilize-pdc:utilize-pdc
  $menu_links['main-menu_utilize-pdc:utilize-pdc'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'utilize-pdc',
    'router_path' => 'utilize-pdc',
    'link_title' => 'Utilize PDC',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_utilize-pdc:utilize-pdc',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_pdc:pdc',
  );
  // Exported menu link: main-menu_viewedit-associate-executive-mapping:view-edit-associate-executive-mapping
  $menu_links['main-menu_viewedit-associate-executive-mapping:view-edit-associate-executive-mapping'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-associate-executive-mapping',
    'router_path' => 'view-edit-associate-executive-mapping',
    'link_title' => 'View/Edit Associate Executive Mapping',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-associate-executive-mapping:view-edit-associate-executive-mapping',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -41,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_viewedit-business-associate:view-edit-business-associate
  $menu_links['main-menu_viewedit-business-associate:view-edit-business-associate'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-business-associate',
    'router_path' => 'view-edit-business-associate',
    'link_title' => 'View/Edit Business Associate',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-business-associate:view-edit-business-associate',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -45,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_viewedit-company-executive:view-edit-company-executive
  $menu_links['main-menu_viewedit-company-executive:view-edit-company-executive'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-company-executive',
    'router_path' => 'view-edit-company-executive',
    'link_title' => 'View/Edit Company Executive',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-company-executive:view-edit-company-executive',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -43,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_viewedit-company:view-edit-company
  $menu_links['main-menu_viewedit-company:view-edit-company'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-company',
    'router_path' => 'view-edit-company',
    'link_title' => 'View/Edit Company',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-company:view-edit-company',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -49,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_viewedit-division:view-edit-division
  $menu_links['main-menu_viewedit-division:view-edit-division'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-division',
    'router_path' => 'view-edit-division',
    'link_title' => 'View/Edit Division',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-division:view-edit-division',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -47,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Exported menu link: main-menu_viewedit-transporter:view-edit-transporter
  $menu_links['main-menu_viewedit-transporter:view-edit-transporter'] = array(
    'menu_name' => 'main-menu',
    'link_path' => 'view-edit-transporter',
    'router_path' => 'view-edit-transporter',
    'link_title' => 'View/Edit Transporter',
    'options' => array(
      'attributes' => array(
        'title' => '',
      ),
      'identifier' => 'main-menu_viewedit-transporter:view-edit-transporter',
    ),
    'module' => 'menu',
    'hidden' => 0,
    'external' => 0,
    'has_children' => 0,
    'expanded' => 0,
    'weight' => -39,
    'customized' => 1,
    'parent_identifier' => 'main-menu_master-data:master-data',
  );
  // Translatables
  // Included for use with string extractors like potx.
  t('Add Associate Executive Mapping');
  t('Add Associate Inward Permit');
  t('Add Business Associate');
  t('Add Company');
  t('Add Company Executive');
  t('Add Consignment Details');
  t('Add Division');
  t('Add Inward Invoice');
  t('Add Inward Permit');
  t('Add Outward Invoice');
  t('Add PDC');
  t('Add Transporter');
  t('Admin Home');
  t('Associate Inward Permit');
  t('Associate Inward Permit Register');
  t('Goods Inward');
  t('Goods Outward');
  t('Home');
  t('Import Associate Executive Mappings');
  t('Import Business Associates');
  t('Import Companies');
  t('Import Company Executives');
  t('Import Delivery Confirmation');
  t('Import Dispatch');
  t('Import Divisions');
  t('Import Packing');
  t('Import Transporters');
  t('Imported Outward Invoices');
  t('Inward Permit');
  t('Inward Permit Register');
  t('Inward register');
  t('Manage Invoices');
  t('Master Data');
  t('Miscellaneous');
  t('Outward Register');
  t('PDC');
  t('PDC Register');
  t('Permit');
  t('Update Delivery Confirmation');
  t('Update Dispatch');
  t('Update LR Details');
  t('Update LR Value');
  t('Update Packing');
  t('Upload Outward Invoices');
  t('Utilize PDC');
  t('View/Edit Associate Executive Mapping');
  t('View/Edit Business Associate');
  t('View/Edit Company');
  t('View/Edit Company Executive');
  t('View/Edit Division');
  t('View/Edit Transporter');


  return $menu_links;
}
