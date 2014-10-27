<?php
/**
 * @file
 * dis_core_features.feeds_tamper_default.inc
 */

/**
 * Implements hook_feeds_tamper_default().
 */
function dis_core_features_feeds_tamper_default() {
  $export = array();

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'company_executive_importer-mobile_no-explode';
  $feeds_tamper->importer = 'company_executive_importer';
  $feeds_tamper->source = 'Mobile No';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',',
    'limit' => '',
    'real_separator' => ',',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['company_executive_importer-mobile_no-explode'] = $feeds_tamper;

  $feeds_tamper = new stdClass();
  $feeds_tamper->disabled = FALSE; /* Edit this to true to make a default feeds_tamper disabled initially */
  $feeds_tamper->api_version = 2;
  $feeds_tamper->id = 'packing_importer-invoice_nids-explode';
  $feeds_tamper->importer = 'packing_importer';
  $feeds_tamper->source = 'Invoice Nids';
  $feeds_tamper->plugin_id = 'explode';
  $feeds_tamper->settings = array(
    'separator' => ',%s',
    'limit' => '',
    'real_separator' => ', ',
  );
  $feeds_tamper->weight = 0;
  $feeds_tamper->description = 'Explode';
  $export['packing_importer-invoice_nids-explode'] = $feeds_tamper;

  return $export;
}
