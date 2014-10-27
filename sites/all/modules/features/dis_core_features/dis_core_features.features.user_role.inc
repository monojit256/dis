<?php
/**
 * @file
 * dis_core_features.features.user_role.inc
 */

/**
 * Implements hook_user_default_roles().
 */
function dis_core_features_user_default_roles() {
  $roles = array();

  // Exported role: Billing Executive.
  $roles['Billing Executive'] = array(
    'name' => 'Billing Executive',
    'weight' => 5,
  );

  // Exported role: Billing Supervisor.
  $roles['Billing Supervisor'] = array(
    'name' => 'Billing Supervisor',
    'weight' => 8,
  );

  // Exported role: DIS Administrator.
  $roles['DIS Administrator'] = array(
    'name' => 'DIS Administrator',
    'weight' => 12,
  );

  // Exported role: Dispatch Executive.
  $roles['Dispatch Executive'] = array(
    'name' => 'Dispatch Executive',
    'weight' => 4,
  );

  // Exported role: Dispatch Supervisor.
  $roles['Dispatch Supervisor'] = array(
    'name' => 'Dispatch Supervisor',
    'weight' => 7,
  );

  // Exported role: Distribution Executive.
  $roles['Distribution Executive'] = array(
    'name' => 'Distribution Executive',
    'weight' => 9,
  );

  // Exported role: Distribution Supervisor.
  $roles['Distribution Supervisor'] = array(
    'name' => 'Distribution Supervisor',
    'weight' => 10,
  );

  // Exported role: Godown Executive.
  $roles['Godown Executive'] = array(
    'name' => 'Godown Executive',
    'weight' => 3,
  );

  // Exported role: Godown Supervisor.
  $roles['Godown Supervisor'] = array(
    'name' => 'Godown Supervisor',
    'weight' => 6,
  );

  // Exported role: Master Maintainer.
  $roles['Master Maintainer'] = array(
    'name' => 'Master Maintainer',
    'weight' => 11,
  );

  // Exported role: administrator.
  $roles['administrator'] = array(
    'name' => 'administrator',
    'weight' => 13,
  );

  return $roles;
}
