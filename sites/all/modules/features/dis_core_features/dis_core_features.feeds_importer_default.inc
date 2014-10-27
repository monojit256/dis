<?php
/**
 * @file
 * dis_core_features.feeds_importer_default.inc
 */

/**
 * Implements hook_feeds_importer_default().
 */
function dis_core_features_feeds_importer_default() {
  $export = array();

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'associate_executive_mapping_importer';
  $feeds_importer->config = array(
    'name' => 'Associate Executive Mapping Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Associate',
            'target' => 'field_associate:etid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Division',
            'target' => 'field_division:etid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Executives',
            'target' => 'field_executives:etid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'associate_executive_mapping',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['associate_executive_mapping_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'business_associate_importer';
  $feeds_importer->config = array(
    'name' => 'Business Associate Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Associate Type',
            'target' => 'field_associate_type',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Associate Name',
            'target' => 'field_name',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Address 1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Address 2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Postal Code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Contact Person',
            'target' => 'field_contact_person',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Mobile No',
            'target' => 'field_mobile',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'TIN',
            'target' => 'field_tin',
            'unique' => FALSE,
          ),
          14 => array(
            'source' => 'DL No',
            'target' => 'field_dl',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'business_associate',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['business_associate_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'company_executive_importer';
  $feeds_importer->config = array(
    'name' => 'Company Executive Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Executive Name',
            'target' => 'field_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Address 1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Address 2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Pin Code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Mobile No',
            'target' => 'field_mobile',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'company_executive',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['company_executive_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'company_importer';
  $feeds_importer->config = array(
    'name' => 'Company Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company Code',
            'target' => 'title',
            'unique' => 1,
          ),
          1 => array(
            'source' => 'Company Name',
            'target' => 'field_company_name',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Address 1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Address 2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Postal Code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Contact Person',
            'target' => 'field_contact_person',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Mobile No',
            'target' => 'field_mobile',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
          12 => array(
            'source' => 'TIN',
            'target' => 'field_tin',
            'unique' => FALSE,
          ),
          13 => array(
            'source' => 'DL No',
            'target' => 'field_dl',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'company',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['company_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'delivery_importer';
  $feeds_importer->config = array(
    'name' => 'Delivery Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Dispatch Nid',
            'target' => 'field_dispatch:etid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Delivery Date',
            'target' => 'field_delivery_date:start',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'delivery_confirmation',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['delivery_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'dispatch_importer';
  $feeds_importer->config = array(
    'name' => 'Dispatch Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'LR Date',
            'target' => 'field_dispatch_date:start',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Dispatch Mode',
            'target' => 'field_dispatch_mode:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'LR No',
            'target' => 'field_lr_no',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'LR Date',
            'target' => 'field_lr_date:start',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'LR Value',
            'target' => 'field_lr_value',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Packing Nid',
            'target' => 'field_packing:etid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'dispatch',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['dispatch_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'division_importer';
  $feeds_importer->config = array(
    'name' => 'Division Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Division Code',
            'target' => 'title',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Division Name',
            'target' => 'field_division_name',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'division',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['division_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'outward_invoice_importer';
  $feeds_importer->config = array(
    'name' => 'Outward Invoice Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Invoice Date',
            'target' => 'field_invoice_date:start',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Company',
            'target' => 'field_company:etid',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Consignee',
            'target' => 'field_consignee:etid',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Invoice Value',
            'target' => 'field_invoice_value',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Outward Type',
            'target' => 'field_outward_type',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'Division',
            'target' => 'field_division:etid',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'Invoice No',
            'target' => 'field_invoice_no',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'outward_invoice',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['outward_invoice_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'packing_importer';
  $feeds_importer->config = array(
    'name' => 'Packing Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Company',
            'target' => 'field_company:label',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Cases',
            'target' => 'field_cases',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Transporter',
            'target' => 'field_transporter:label',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Packing Date',
            'target' => 'field_packing_date:start',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Invoice Nids',
            'target' => 'field_outward_invoices:etid',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'packing',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['packing_importer'] = $feeds_importer;

  $feeds_importer = new stdClass();
  $feeds_importer->disabled = FALSE; /* Edit this to true to make a default feeds_importer disabled initially */
  $feeds_importer->api_version = 1;
  $feeds_importer->id = 'transporter_importer';
  $feeds_importer->config = array(
    'name' => 'Transporter Importer',
    'description' => '',
    'fetcher' => array(
      'plugin_key' => 'FeedsFileFetcher',
      'config' => array(
        'allowed_extensions' => 'txt csv tsv xml opml',
        'direct' => FALSE,
        'directory' => 'public://feeds',
        'allowed_schemes' => array(
          0 => 'public',
        ),
      ),
    ),
    'parser' => array(
      'plugin_key' => 'FeedsCSVParser',
      'config' => array(
        'delimiter' => ',',
        'no_headers' => 0,
      ),
    ),
    'processor' => array(
      'plugin_key' => 'FeedsNodeProcessor',
      'config' => array(
        'expire' => '-1',
        'author' => 0,
        'authorize' => 1,
        'mappings' => array(
          0 => array(
            'source' => 'Transporter Name',
            'target' => 'field_name',
            'unique' => FALSE,
          ),
          1 => array(
            'source' => 'Transporter Type',
            'target' => 'field_transporter_type:label',
            'unique' => FALSE,
          ),
          2 => array(
            'source' => 'Tracking URL',
            'target' => 'field_tracking_url',
            'unique' => FALSE,
          ),
          3 => array(
            'source' => 'Address 1',
            'target' => 'field_address:thoroughfare',
            'unique' => FALSE,
          ),
          4 => array(
            'source' => 'Address 2',
            'target' => 'field_address:premise',
            'unique' => FALSE,
          ),
          5 => array(
            'source' => 'City',
            'target' => 'field_address:locality',
            'unique' => FALSE,
          ),
          6 => array(
            'source' => 'State',
            'target' => 'field_address:administrative_area',
            'unique' => FALSE,
          ),
          7 => array(
            'source' => 'Pin Code',
            'target' => 'field_address:postal_code',
            'unique' => FALSE,
          ),
          8 => array(
            'source' => 'Country',
            'target' => 'field_address:country',
            'unique' => FALSE,
          ),
          9 => array(
            'source' => 'Mobile No',
            'target' => 'field_mobile',
            'unique' => FALSE,
          ),
          10 => array(
            'source' => 'Phone',
            'target' => 'field_phone',
            'unique' => FALSE,
          ),
          11 => array(
            'source' => 'Email',
            'target' => 'field_email',
            'unique' => FALSE,
          ),
        ),
        'update_existing' => '0',
        'input_format' => 'plain_text',
        'skip_hash_check' => 0,
        'bundle' => 'transporter',
      ),
    ),
    'content_type' => '',
    'update' => 0,
    'import_period' => '-1',
    'expire_period' => 3600,
    'import_on_create' => 1,
    'process_in_background' => 0,
  );
  $export['transporter_importer'] = $feeds_importer;

  return $export;
}
