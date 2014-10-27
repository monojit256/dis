<?php

/**
 * @file
 * Provides Rules integration for custom actions.
 */
/*
 * Implement hook_rules_action_info()
 */
function dis_pdc_rules_action_info() {
    return array(
    	'dis_pdc_ruleaction_redirect_edit_pdc' => array(
            'label' => t('Redirect Edit PDC'),
            'group' => 'DIS PDC',
            'parameter' => array(
                'pdc' => array(
                    'label' => t('PDC'),
                    'type' => 'node',
                ),
            ),
            'module' => 'dis_pdc',
        ),
        'dis_pdc_ruleaction_get_PDC_invoices_data' => array(
            'label' => t('Get PDC Invoices Data'),
            'group' => 'DIS PDC',
            'parameter' => array(
                'invoices' => array(
                    'label' => t('Invoices'),
                    'type' => 'list<node>',
                ),
            ),
            'provides' => array(
                'html_table' => array(
                    'label' => t('HTML Table'),
                    'type' => 'text_formatted',
                ),
                'total_value' => array(
                    'label' => t('Total Value'),
                    'type' => 'decimal',
                ),
            ),                
            'module' => 'dis_pdc',
        ),
  );       
}


function dis_pdc_ruleaction_redirect_edit_pdc($pdc){
        
        $nid = $pdc->vid;
        $status = $pdc->field_pdc_status['und'][0]['value'];
        $redirect_nid = $nid;
        $arg = "";

        if($status == 'Utilized'){
            $pdc_utilization_query = new EntityFieldQuery();
            $pdc_utilization_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'pdc_utilization')
                    ->fieldCondition('field_pdc', 'target_id', $redirect_nid, '=');
            $pdc_utilization_result = $pdc_utilization_query->execute();
            if (!empty($pdc_utilization_result)) {
                $redirect_nid = array_shift($pdc_utilization_result['node'])->nid;
            }
        } else {
            $arg = '/' . $pdc->field_company['und'][0]['target_id'];
        }

        drupal_goto('node/' . $redirect_nid . '/edit' . $arg);
}


function dis_pdc_ruleaction_get_PDC_invoices_data($invoices){
    

    $html_table = '<table style="width:auto; border:1px solid black; border-collapse:collapse;"><thead>
        <tr>
        <th style="border:1px solid black; background-color: #747474; color: #FFFFFFF; padding: 5px">Division Name</th>
        <th style="border:1px solid black; background-color: #747474; color: #FFFFFFF; padding: 5px">Invoice No</th>
        <th style="border:1px solid black; background-color: #747474; color: #FFFFFFF; padding: 5px">Invoice Date</th>
        <th style="border:1px solid black; background-color: #747474; color: #FFFFFFF; padding: 5px">Invoice Amount (Rs)</th>
        </tr></thead><tbody>';

    $total_value = 0.00;

    
    foreach ($invoices as $invoice){
        
        //Form Invoice HTM Table
        $div_node = node_load($invoice->field_division['und']['0']['target_id']);
        $html_table = $html_table.'<tr>';
        $html_table = $html_table.'<td style="border:1px solid black; background-color: #FFFFFF; color: #000000; padding: 5px">'.$div_node->field_division_name['und']['0']['value'].'</td>';
        $html_table = $html_table.'<td style="border:1px solid black; background-color: #FFFFFF; color: #000000; padding: 5px">'.$invoice->field_invoice_no['und']['0']['value'].'</td>';
        $html_table = $html_table.'<td style="border:1px solid black; background-color: #FFFFFF; color: #000000; padding: 5px">'.date("d-m-Y", strtotime($invoice->field_invoice_date['und']['0']['value'])).'</td>';
        $html_table = $html_table.'<td style="border:1px solid black; background-color: #FFFFFF; color: #000000; padding: 5px">'.$invoice->field_invoice_value['und']['0']['value'].'</td>';
        $html_table = $html_table.'</tr>';

        //Calculate total Invoice Value
        $total_value += $invoice->field_invoice_value['und']['0']['value'];
    }
    
    $html_table = $html_table.'</tbody></table>';

    return array(
            'html_table' => array(
                'value' => $html_table,
                'summary' => $html_table,
                'format' => 'plain_text'),
            'total_value' => $total_value,
        );

}

