<?php
/**
 * @file
 * dis_core_features.features.uuid_term.inc
 */

/**
 * Implements hook_uuid_features_default_terms().
 */
function dis_core_features_uuid_features_default_terms() {
  $terms = array();

  $terms[] = array(
    'name' => '2014-15',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '0bd91fe0-2391-49e3-b4b7-ee5ef1892b15',
    'vocabulary_machine_name' => 'financial_year',
  );
  $terms[] = array(
    'name' => '2012-13',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '13f8a6b2-4d9a-499b-8849-de217a548274',
    'vocabulary_machine_name' => 'financial_year',
  );
  $terms[] = array(
    'name' => 'Courier',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '2c261c45-85e5-4893-8c1e-329c416e1a09',
    'vocabulary_machine_name' => 'transporter_type',
  );
  $terms[] = array(
    'name' => '2013-14',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '36506934-dbe2-4dc7-859e-43d7cd658c13',
    'vocabulary_machine_name' => 'financial_year',
  );
  $terms[] = array(
    'name' => 'Hand Delivery',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '3bdf49bc-3346-4d64-acdb-c2e29e810ff6',
    'vocabulary_machine_name' => 'transporter_type',
  );
  $terms[] = array(
    'name' => 'Transporter',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '40a3320f-fc25-4365-b221-4a207a445036',
    'vocabulary_machine_name' => 'transporter_type',
  );
  $terms[] = array(
    'name' => 'Hand Delivery',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '80c82347-c3ca-4ca0-839e-0801ac4a40cc',
    'vocabulary_machine_name' => 'dispatch_mode',
  );
  $terms[] = array(
    'name' => 'Door Pickup',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '8ddcf342-75bb-41a9-8513-45b1b02eacee',
    'vocabulary_machine_name' => 'dispatch_mode',
  );
  $terms[] = array(
    'name' => 'Logistics',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => '9eeda251-130d-4365-83b3-4958397eed71',
    'vocabulary_machine_name' => 'transporter_type',
  );
  $terms[] = array(
    'name' => '2011-12',
    'description' => '',
    'format' => 'filtered_html',
    'weight' => 0,
    'uuid' => 'b390d08d-84e0-44be-8eea-1492ba2ba1e3',
    'vocabulary_machine_name' => 'financial_year',
  );
  return $terms;
}
