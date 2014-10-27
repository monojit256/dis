<?php

/*
 * Function to attach existing CCK fields into custom forms
 */

function dis_pdc_attach_form($field_name, $entity_type, $bundle, $entity, &$form, &$form_state, $langcode = NULL) {

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
function add_pdc_form($form, &$form_state) {
    $form = array();
    $node = new stdClass();

    $node->type = 'business_associate';
    dis_pdc_attach_form('field_company', 'node', 'business_associate', $node, $form, $form_state, LANGUAGE_NONE);

    $form['submit'] = array(
        '#type' => 'submit',
        '#value' => t('Continue'),
        '#weight' => 10
    );
    return $form;
}

function add_pdc_form_submit($form, &$form_state) {

    $form_state['redirect'] = array(
        'node/add/pdc/'.$form_state['input']['field_company']['und'],
        array(
            'query' => array(
                'field_company' => $form_state['input']['field_company']['und']
            )
        )
    );
}