<?php

/**
 * @file
 * Provides Rules integration for custom actions.
 */
/*
 * Implement hook_rules_action_info()
 */
function dis_rules_action_info() {
    return array(
        'dis_ruleaction_get_quarter_fy' => array(
            'label' => t('Get Quarter and Financial Year'),
            'group' => t('DIS'),
            'parameter' => array(
                'invoice_date' => array(
                    'label' => t('Invoice Date'),
                    'type' => 'date',
                ),
            ),
            'provides' => array(
                'quarter' => array(
                    'type' => 'text',
                    'label' => t('Quarter'),
                ),
                'financial_year' => array(
                    'type' => 'integer',
                    'label' => t('Financial Year'),
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_redirect_packing_page' => array(
            'label' => t('Redirect to Packing Page'),
            'group' => 'DIS',
            'parameter' => array(
                'invoices' => array(
                    'label' => t('Invoices'),
                    'type' => 'list<node>',
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_redirect_consignment_details_page' => array(
            'label' => t('Redirect to Add Consignment Dettails Page'),
            'group' => 'DIS',
            'parameter' => array(
                'invoices' => array(
                    'label' => t('Invoices'),
                    'type' => 'list<node>',
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_update_dispatch' => array(
            'label' => t('Update Dispatch'),
            'group' => 'DIS',
            'parameter' => array(
                'packings' => array(
                    'label' => t('Packings'),
                    'type' => 'list<node>',
                ),
                'dispatch_date' => array(
                    'label' => t('Dispatch Date'),
                    'type' => 'date',
                ),
                'dispatch_mode' => array(
                    'label' => t('Dispatch Mode'),
                    'type' => 'list<text>',
                ),
                'vehicle_no' => array(
                    'label' => t('Vehicle no'),
                    'type' => 'text',
                ),
            ),
            'module' => 'dis',
        ),        
        'dis_ruleaction_redirect_edit_invoice' => array(
            'label' => t('Redirect Edit Invoice'),
            'group' => 'DIS',
            'parameter' => array(
                'invoice' => array(
                    'label' => t('Invoice'),
                    'type' => 'node',
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_redirect_edit_inward_invoice' => array(
            'label' => t('Redirect Edit Inward Invoice'),
            'group' => 'DIS',
            'parameter' => array(
                'invoice' => array(
                    'label' => t('Invoice'),
                    'type' => 'node',
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_set_invoice_reversed' => array(
            'label' => t('Set Invoice Reversed'),
            'group' => 'DIS',
            'parameter' => array(
                'invoice' => array(
                    'label' => t('Invoice'),
                    'type' => 'node',
                ),
                'reason' => array(
                    'label' => t('Reason'),
                    'type' => 'text',
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_get_email_recipients' => array(
            'label' => t('Get Email Recipients'),
            'group' => t('DIS'),
            'parameter' => array(
                'packing' => array(
                    'label' => t('Invoices'),
                    'type' => 'list<node>',
                ),
            ),
            'provides' => array(
                'recipients' => array(
                    'type' => 'text',
                    'label' => t('Recipients'),
                ),
            ),
            'module' => 'dis',
        ),
        'dis_ruleaction_get_first_node_in_list' => array(
            'label' => t('Get First Node in a List of Nodes'),
            'group' => t('DIS'),
            'parameter' => array(
                'node_list' => array(
                    'label' => t('Node List'),
                    'type' => 'list<node>',
                ),
            ),
            'provides' => array(
                'first_node' => array(
                    'type' => 'node',
                    'label' => t('First Node'),
                ),
            ),
            'module' => 'dis',
        ),
    );
}

function dis_ruleaction_get_quarter_fy($invoice_date) {

    //Fetch data from custom function defined in dis.module
    return dis_get_quarter_financialyear(format_date($invoice_date));
}

function dis_ruleaction_redirect_packing_page($invoices) {

    $counter = 0;
    $first_invoice_company_tid = 0;
    $first_invoice_supply_location_nid = 0;
    $invoices_valid = TRUE;
    $array_ids = array();

    foreach ($invoices as $invoice) {
        if ($counter == 0) {
            $first_invoice_company_nid = $invoice->field_company['und']['0']['target_id'];
            $first_invoice_consignee_nid = $invoice->field_consignee['und']['0']['target_id'];
        } else {
            if ($first_invoice_consignee_nid != $invoice->field_consignee['und']['0']['target_id']) {
                $invoices_valid = FALSE;
            }
        }
        $array_ids[] = $invoice->vid;
        $counter++;
    }

    if ($invoices_valid == FALSE) {
        drupal_set_message('Multiple consignee in selected invoices. Please select invoices pertaining to one consignee only.', 'error');
    } else {
        $outward_invoices = implode(',', $array_ids);
        $q = array();
        $q['field_company'] = $first_invoice_company_nid;
        $q['field_outward_invoices'] = $outward_invoices;
        drupal_goto('node/add/packing/', array('query' => $q));
    }
}

function dis_ruleaction_update_dispatch($packings, $dispatch_date, $dispatch_mode, $vehicle_no) {
    
    require_once DRUPAL_ROOT . '/includes/bootstrap.inc';
    drupal_bootstrap(DRUPAL_BOOTSTRAP_FULL);

    foreach ($packings as $packing) {
        
            $node = new stdClass();
            $node->title = "";
            $node->type = 'dispatch';
            node_object_prepare($node); // Sets some defaults. Invokes hook_prepare() and hook_node_prepare().    
            $node->language = LANGUAGE_NONE; // Or e.g. 'en' if locale is enabled
            //$node->uid = $user->uid;
            $node->status = 1; //(1 or 0): published or not
            $node->promote = 0; //(1 or 0): promoted to front page
            $node->comment = 1; //2 = comments on, 1 = comments off

            $node->field_packing[$node->language][] = array(
                'target_id' => $packing->vid,
                'target_type' => 'node',
            );

            $node->field_company[$node->language][] = array(
                'target_id' => $packing->field_company['und']['0']['target_id'],
                'target_type' => 'node',
            );

            $node->field_dispatch_date[$node->language][]['value'] = format_date($dispatch_date, 'custom', 'Y-m-d');

            $node->field_dispatch_mode[$node->language][] = array(
                'target_id' => $dispatch_mode['0'],
                'target_type' => 'node',
            );

            $node->field_vehicle_no[$node->language][]['value'] = $vehicle_no;

            //In case of hand delivery, update LR No as NA and LR Date as dispatch date
            $mode_term = taxonomy_term_load($dispatch_mode[0]);

            if($mode_term->name == 'Hand Delivery'){
                $node->field_lr_no[$node->language][]['value'] = 'NA';
                $node->field_lr_date[$node->language][]['value'] = format_date($dispatch_date, 'custom', 'Y-m-d');
                $node->field_lr_value[$node->language][]['value'] = 0;
            }

            $node = node_submit($node); // Prepare node for saving
            node_save($node);
        
    }    
    
}

function dis_ruleaction_redirect_edit_invoice($invoice){
        
        $nid = $invoice->vid;
        $status = $invoice->field_status['und'][0]['value'];
        $q = array();
        $redirect_nid = $nid;  
        $arg = "";

        $q['field_company'] = $invoice->field_company['und'][0]['target_id'];

        if($status == 'Created'){           
                        
            $consignee = node_load($invoice->field_consignee['und'][0]['target_id']);
            $arg = '/' . $invoice->field_company['und'][0]['target_id'] . '/' . $consignee->field_associate_type['und'][0]['value'];                     
        } 

        if($status == 'Packed' || $status == 'Dispatched' || $status == 'Delivered'){
            $packing_query = new EntityFieldQuery();
            $packing_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'packing')
                    ->fieldCondition('field_outward_invoices', 'target_id', $redirect_nid, '=');
            $packing_result = $packing_query->execute();
            if (!empty($packing_result)) {
                $redirect_nid = array_shift($packing_result['node'])->nid;
            }
        }

        if($status == 'Dispatched' || $status == 'Delivered'){
            $dispatch_query = new EntityFieldQuery();
            $dispatch_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'dispatch')
                    ->fieldCondition('field_packing', 'target_id', $redirect_nid, '=');
            $dispatch_result = $dispatch_query->execute();
            if (!empty($dispatch_result)) {
                $redirect_nid = array_shift($dispatch_result['node'])->nid;
            }
        }

        if($status == 'Delivered'){
            $delivery_query = new EntityFieldQuery();
            $delivery_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'delivery_confirmation')
                    ->fieldCondition('field_dispatch', 'target_id', $redirect_nid, '=');
            $delivery_result = $delivery_query->execute();
            if (!empty($delivery_result)) {
                $redirect_nid = array_shift($delivery_result['node'])->nid;
            }
        }

        drupal_goto('node/' . $redirect_nid . '/edit' . $arg, array('query' => $q));
}

function dis_ruleaction_set_invoice_reversed($invoice, $reason){

        $nid = $invoice->vid;
        $status = $invoice->field_status['und'][0]['value'];
        $packing_nid = NULL;
        $dispatch_nid = NULL;
        $delivery_nid = NULL;

        if($status == 'Packed' || $status == 'Dispatched' || $status == 'Delivered'){
            $packing_query = new EntityFieldQuery();
            $packing_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'packing')
                    ->fieldCondition('field_outward_invoices', 'target_id', $nid, '=');
            $packing_result = $packing_query->execute();
            if (!empty($packing_result)) {
                $packing_nid = array_shift($packing_result['node'])->nid;
            }
        }

        if($status == 'Dispatched' || $status == 'Delivered'){
            $dispatch_query = new EntityFieldQuery();
            $dispatch_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'dispatch')
                    ->fieldCondition('field_packing', 'target_id', $packing_nid, '=');
            $dispatch_result = $dispatch_query->execute();
            if (!empty($dispatch_result)) {
                $dispatch_nid = array_shift($dispatch_result['node'])->nid;
            }
        }

        if($status == 'Delivered'){
            $delivery_query = new EntityFieldQuery();
            $delivery_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'delivery_confirmation')
                    ->fieldCondition('field_dispatch', 'target_id', $dispatch_nid, '=');
            $delivery_result = $delivery_query->execute();
            if (!empty($delivery_result)) {
                $delivery_nid = array_shift($delivery_result['node'])->nid;
            }
        }

        if($delivery_nid != NULL){
            node_delete($delivery_nid);
        }

        if($dispatch_nid != NULL){
            node_delete($dispatch_nid);
        }

        if($packing_nid != NULL){
            node_delete($packing_nid);
        }

        $invoice->field_status['und'][0]['value'] = 'Reversed';
        $invoice->field_remarks['und'][0]['value'] = $reason;

        node_save($invoice);
}

function dis_ruleaction_get_email_recipients($invoices) {

    $recipients = array();

    $tmp_invoices = $invoices;
    
    //Get customer and company recipients
    $first_invoice = array_shift($tmp_invoices);
    $consignee = node_load($first_invoice->field_consignee['und']['0']['target_id']);
    $division = node_load($first_invoice->field_division['und']['0']['target_id']);
    if (isset($consignee->field_email['und'])) {
        $recipients[] = $consignee->field_email['und']['0']['email'];
    }
    if(isset($division->field_email['und'])) {
        $recipients[] = $division->field_email['und']['0']['email'];
    }
    
    //Get marketing recipients
    foreach($invoices as $invoice){
        $recipients_mkt = dis_get_marketing_recipients($invoice->field_consignee['und']['0']['target_id'], $invoice->field_division['und']['0']['target_id']);
        $recipients = array_merge($recipients, $recipients_mkt);        
    }
    
    $recipients = implode(", ", array_unique($recipients));
    
    return array('recipients' => $recipients);
}

function dis_get_marketing_recipients($associate_id, $division_id){
    $email = array();

    $mapping_query = new EntityFieldQuery();
    $mapping_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'associate_executive_mapping')
                    ->fieldCondition('field_associate', 'target_id', $associate_id, '=')
                    ->fieldCondition('field_division', 'target_id', $division_id, '=');
    $mapping_result = $mapping_query->execute();
    if (!empty($mapping_result)) {
        $mapping_nid = array_shift($mapping_result['node'])->nid;
        $mapping_node = node_load($mapping_nid);
        $executives = $mapping_node->field_executives['und'];
        foreach($executives as $executive){
            $executive_node = node_load($executive['target_id']);
            $email[] = $executive_node->field_email['und'][0]['email'];
        }
    }
    
    return $email;
}

function dis_ruleaction_get_first_node_in_list($node_list){
    return array('first_node' => array_shift($node_list));
}


function dis_ruleaction_redirect_consignment_details_page($invoices){

    $counter = 0;
    $first_invoice_company_tid = 0;
    $first_invoice_consignor_nid = 0;
    $invoices_valid = TRUE;
    $array_ids = array();

    foreach ($invoices as $invoice) {
        if ($counter == 0) {
            $first_invoice_company_nid = $invoice->field_company['und']['0']['target_id'];
            $first_invoice_consignor_nid = $invoice->field_consignor['und']['0']['target_id'];
        } else {
            if ($first_invoice_consignor_nid != $invoice->field_consignor['und']['0']['target_id']) {
                $invoices_valid = FALSE;
            }
        }
        $array_ids[] = $invoice->vid;
        $counter++;
    }

    if ($invoices_valid == FALSE) {
        drupal_set_message('Multiple consignors in selected invoices. Please select invoices pertaining to one consignor only.', 'error');
    } else {
        $inward_invoices = implode(',', $array_ids);
        $q = array();
        $q['field_company'] = $first_invoice_company_nid;
        $q['field_inward_invoices'] = $inward_invoices;

        //For Inward Permit functionality, an invward invoice nid needs to be appended to the URL as argument
        //TO DO
        $argument_permit = '/' . $invoice->nid;

        drupal_goto('node/add/consignment-details' . $argument_permit, array('query' => $q));
    }
}


function dis_ruleaction_redirect_edit_inward_invoice($invoice){
    
    $nid = $invoice->vid;
    $q = array();
    $redirect_nid = $nid;  
    $arg = "";

    $q['field_company'] = $invoice->field_company['und'][0]['target_id'];    
    
    $invoice_cn_query = new EntityFieldQuery();
    $invoice_cn_query->entityCondition('entity_type', 'node')
        ->entityCondition('bundle', 'consignment_details')
        ->fieldCondition('field_inward_invoices', 'target_id', $redirect_nid, '=');
    $invoice_cn_result = $invoice_cn_query->execute();
    if (!empty($invoice_cn_result)) {
        $redirect_nid = array_shift($invoice_cn_result['node'])->nid;

        //For Inward Permit functionality, an invward invoice nid needs to be appended to the URL as argument
        //TO DO
        $arg = '/' . $invoice->nid;
    } else {
        $consignor = node_load($invoice->field_consignor['und'][0]['target_id']);
        $arg = '/' . $invoice->field_company['und'][0]['target_id'] . '/' . $consignor->field_associate_type['und'][0]['value'];
    }

    drupal_goto('node/' . $redirect_nid . '/edit' . $arg, array('query' => $q));
}