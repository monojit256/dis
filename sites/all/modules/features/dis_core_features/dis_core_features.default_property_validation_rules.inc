<?php
/**
 * @file
 * dis_core_features.default_property_validation_rules.inc
 */

/**
 * Implements hook_default_property_validation_rule().
 */
function dis_core_features_default_property_validation_rule() {
  $export = array();

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Company Code Length';
  $rule->name = 'company_code_length';
  $rule->property_name = 'title';
  $rule->entity_type = 'node';
  $rule->bundle = 'company';
  $rule->validator = 'property_validation_length_validator';
  $rule->settings = array(
    'min' => '3',
    'max' => '3',
  );
  $rule->error_message = 'Company code should be a three character code';
  $export['company_code_length'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Division Code Length';
  $rule->name = 'division_code_length';
  $rule->property_name = 'title';
  $rule->entity_type = 'node';
  $rule->bundle = 'division';
  $rule->validator = 'property_validation_length_validator';
  $rule->settings = array(
    'min' => '3',
    'max' => '3',
  );
  $rule->error_message = 'Division code should be a unique three character code';
  $export['division_code_length'] = $rule;

  $rule = new stdClass();
  $rule->disabled = FALSE; /* Edit this to true to make a default rule disabled initially */
  $rule->api_version = 2;
  $rule->rulename = 'Division Code Unique';
  $rule->name = 'division_code_unique';
  $rule->property_name = 'title';
  $rule->entity_type = 'node';
  $rule->bundle = 'division';
  $rule->validator = 'property_validation_unique_validator';
  $rule->settings = array(
    'data' => 'bundle',
  );
  $rule->error_message = 'Division code should be a unique three character code';
  $export['division_code_unique'] = $rule;

  return $export;
}
