<?php
/**
 * @file
 * dis_core_features.features.taxonomy.inc
 */

/**
 * Implements hook_taxonomy_default_vocabularies().
 */
function dis_core_features_taxonomy_default_vocabularies() {
  return array(
    'dispatch_mode' => array(
      'name' => 'Dispatch Mode',
      'machine_name' => 'dispatch_mode',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'financial_year' => array(
      'name' => 'Financial Year',
      'machine_name' => 'financial_year',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
    'transporter_type' => array(
      'name' => 'Transporter Type',
      'machine_name' => 'transporter_type',
      'description' => '',
      'hierarchy' => 0,
      'module' => 'taxonomy',
      'weight' => 0,
    ),
  );
}
