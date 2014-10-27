<?php

/*
 * Function to attach existing CCK fields into custom forms
 */

function my_field_attach_form($field_name, $entity_type, $bundle, $entity, &$form, &$form_state, $langcode = NULL) {

    // Set #parents to 'top-level' if it doesn't exist.
    $form += array('#parents' => array());

    // If no language is provided use the default site language.
    $options = array(
        'language' => field_valid_language($langcode),
        'default' => TRUE,
    );

    // Append to the form
    ctools_include('fields');
    $field_instance = field_info_instance($entity_type, $field_name, $bundle);
    $form += (array) ctools_field_invoke_field($field_instance, 'form', $entity_type, $entity, $form, $form_state, $options);
}

/*
 * Menu Callback form for Add Associate Executive Mapping
 */
function add_associate_executive_mapping_form($form, &$form_state) {
    $form = array();
    $node = new stdClass();

    $node->type = 'business_associate';
    my_field_attach_form('field_company', 'node', 'business_associate', $node, $form, $form_state, LANGUAGE_NONE);
    my_field_attach_form('field_associate_type', 'node', 'business_associate', $node, $form, $form_state, LANGUAGE_NONE);

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#weight' => 10
    );
    return $form;
}

function add_associate_executive_mapping_form_submit($form, &$form_state) {

    $form_state['redirect'] = array(
        'node/add/associate-executive-mapping/'.$form_state['input']['field_company']['und'].'/'.$form_state['input']['field_associate_type']['und'],
        array(
            'query' => array(
                'field_company' => $form_state['input']['field_company']['und']
            )
        )
    );
}



/*
 * Menu Callback form for Add Outward Invoice
 */
function add_outward_invoice_form($form, &$form_state) {
    $form = array();
    $node = new stdClass();

    $node->type = 'outward_invoice';
    my_field_attach_form('field_company', 'node', 'outward_invoice', $node, $form, $form_state, LANGUAGE_NONE);
    my_field_attach_form('field_outward_type', 'node', 'outward_invoice', $node, $form, $form_state, LANGUAGE_NONE);

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#weight' => 50
    );
    return $form;
}

function add_outward_invoice_form_submit($form, &$form_state) {

    $company_nid = $form_state['input']['field_company']['und'];
    $outward_type = $form_state['input']['field_outward_type']['und'];

    if($outward_type == 'Sales Invoice') {
        $associate_type = 'Customer';
    } elseif($outward_type == 'Purchase Return') {
        $associate_type = 'Supplier';
    } elseif($outward_type == 'Stock Transfer Out') {
        $associate_type = 'Branch';
    }

    $form_state['redirect'] = array(
        'node/add/outward-invoice/'.$form_state['input']['field_company']['und'].'/'.$associate_type,
        array(
            'query' => array(
                'field_company' => $form_state['input']['field_company']['und'],
                'field_outward_type' => $form_state['input']['field_outward_type']['und']
            )
        )
    );
}


/*
 * Menu Callback form for Add Inward Invoice
 */
function add_inward_invoice_form($form, &$form_state) {
    $form = array();
    $node = new stdClass();

    $node->type = 'inward_invoice';
    my_field_attach_form('field_company', 'node', 'inward_invoice', $node, $form, $form_state, LANGUAGE_NONE);
    my_field_attach_form('field_inward_type', 'node', 'inward_invoice', $node, $form, $form_state, LANGUAGE_NONE);

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#weight' => 50
    );
    return $form;
}

function add_inward_invoice_form_submit($form, &$form_state) {

    $company_nid = $form_state['input']['field_company']['und'];
    $inward_type = $form_state['input']['field_inward_type']['und'];
    
    if($inward_type == 'Sales Return') {
        $associate_type = 'Customer';
    } elseif($inward_type == 'Purchase') {
        $associate_type = 'Supplier';
    } elseif($inward_type == 'Stock Transfer In') {
        $associate_type = 'Branch';
    }

    $form_state['redirect'] = array(
        'node/add/inward-invoice/'.$form_state['input']['field_company']['und'].'/'.$associate_type,
        array(
            'query' => array(
                'field_company' => $form_state['input']['field_company']['und'],
                'field_inward_type' => $form_state['input']['field_inward_type']['und'],
            )
        )
    );
}