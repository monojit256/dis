<?php

/**
 * @file
 * Integration with the Feeds module.
 */

/*
 * Implement hook_feeds_after_parse()
 */
function dis_feeds_after_parse($source, $result) {
    $items = array();
    $items_new = array();
    $items = $result->items;
    $id = $source->id;

    if ($id == "associate_executive_mapping_importer") {
        
        foreach ($items as $key => $item) {

            //Prefix part of every status message pertaining to each Feeds item
            $message = $item['company'] . '-' . $item['division'] . '-' . $item['associate'] . '-' . $item['executives'];

            //Fetch Entity ID of Company
            $company_query = new EntityFieldQuery();
            $company_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'company')
                    ->fieldCondition('field_company_name', 'value', $item['company'], '=');
            $company_result = $company_query->execute();
            if (empty($company_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Company', $type = "status");
                continue;
            } else {
                $company_id = array_shift($company_result['node'])->nid;
            }

            //Fetch Entity ID of Division        
            $division_query = new EntityFieldQuery();
            $division_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'division')
                    ->fieldCondition('field_company', 'target_id', $company_id, '=')
                    ->fieldCondition('field_division_name', 'value', $item['division'], '=');
            $division_result = $division_query->execute();
            if (empty($division_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Division', $type = "status");
                continue;
            } else {
                $division_id = array_shift($division_result['node'])->nid;
            }

                        
            //Fetch Entity ID of the Associate 
            $customer_query = new EntityFieldQuery();
            $customer_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'business_associate')
                    ->propertyCondition('status', 1)
                    ->fieldCondition('field_company', 'target_id', $company_id, '=')
                    ->fieldCondition('field_associate_type', 'value', 'Customer', '=')
                    ->fieldCondition('field_name', 'value', $item['associate'], '=');
            $customer_result = $customer_query->execute();
            if (empty($customer_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Customer', $type = "status");
                continue;
            } else {
                $customer_id = array_shift(array_shift($customer_result))->nid;
            }

            //Fetch Entity IDs of the Executives
            $executives = explode(',', $item['executives']);
            $executive_ids = array();
            foreach ($executives as $executive){
                $executive_query = new EntityFieldQuery();
                $executive_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'company_executive')
                    ->propertyCondition('status', 1)
                    ->fieldCondition('field_company', 'target_id', $company_id, '=')
                    ->fieldCondition('field_name', 'value', $executive, '=');
                $executive_result = $executive_query->execute();
                if (empty($executive_result)) {
                    drupal_set_message($message . ': Importing failed - Invalid Customer', $type = "status");
                    continue;
                } else {
                    $executive_ids[] = array_shift(array_shift($executive_result))->nid;
                }
            }           

            //Update Entity IDs in each Feed item  
            $item['division'] = $division_id;
            $item['associate'] = $customer_id;
            $item['executives'] = $executive_ids;

            $items_new[] = $item;
        }

        $result->items = $items_new;
    }
    
    elseif ($id == "outward_invoice_importer") {

        foreach ($items as $key => $item) {

            //Prefix part of every status message pertaining to each Feeds item
            $message = $item['company'] . '-' . $item['division'] . '-' . $item['consignee'] . '-' . $item['invoice no'];

            //Check if the Company code provided in Feeds item exists
            //If so, fetch Entity ID of the Company            
            $company_query = new EntityFieldQuery();
            $company_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'company')
                    ->propertyCondition('title', $item['company']);
            $company_result = $company_query->execute();
            if (empty($company_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Company Code', $type = "error");
                continue;
            } else {
                $company_id = array_shift($company_result['node'])->nid;
            }

            //Check if the Division code provided in Feeds item exists and belongs to
            //the same Company provided above
            //If so, fetch Entity ID of the Division            
            $division_query = new EntityFieldQuery();
            $division_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'division')
                    ->fieldCondition('field_company', 'target_id', $company_id, '=')
                    ->propertyCondition('title', $item['division']);
            $division_result = $division_query->execute();
            if (empty($division_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Division Code', $type = "error");
                continue;
            } else {
                $division_id = array_shift($division_result['node'])->nid;
            }

            //Determine Associate Type from Outward Type
            //If invalid Ouwtad type, throw error
            if($item['outward type'] == "Sales Invoice"){
                $associate_type = "Customer";
            } elseif ($item['outward type'] == "Purchase Return"){
                $associate_type = "Supplier";
            } elseif ($item['outward type'] == "Stock Transfer Out"){
                $associate_type = "Branch";
            } else {
                drupal_set_message($message . ': Importing failed - Invalid Outward Type', $type = "error");
                continue;
            }

            //Check if the Consignee provided in Feeds item exists and belongs to
            //the same Company provided above and have Associate Type corresponding to
            //the Outward Type provided in feed
            //If so, fetch Entity ID of the Consignee 
            $customer_query = new EntityFieldQuery();
            $customer_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'business_associate')
                    ->propertyCondition('status', 1)
                    ->propertyCondition('title', $item['consignee'])
                    ->fieldCondition('field_associate_type', 'value', $associate_type, '=')
                    ->fieldCondition('field_company', 'target_id', $company_id, '=');
            $customer_result = $customer_query->execute();
            if (empty($customer_result)) {
                drupal_set_message($message . ': Importing failed - Invalid Customer', $type = "error");
                continue;
            } else {
                $customer_id = array_shift(array_shift($customer_result))->nid;
            }

            //Check if any of Invoice No, Invoice Date or Invoice Value is empty
            if (empty($item['invoice no']) || empty($item['invoice date']) || !is_numeric($item['invoice value'])) {
                drupal_set_message($message . ': Importing failed - One or more of Invoice No, Invoice Date or Invoice Value is missing', $type = "status");
                continue;
            }

            //Check if Invoice Date is valid
            $date = date_parse($item['invoice date']);
            if (!checkdate($date["month"], $date["day"], $date["year"])) {
                drupal_set_message($message . ': Importing failed - Invoice Date is invalid', $type = "error");
                continue;
            }

            //Check if Invoice No already exists for this Company in this Financial Year
            $quarter_fy = dis_get_quarter_financialyear($item['invoice date']);
            $fy_id = $quarter_fy['financial_year'];
            $invoice_query = new EntityFieldQuery();
            $invoice_query->entityCondition('entity_type', 'node')
                    ->entityCondition('bundle', 'outward_invoice')
                    ->propertyCondition('status', 1)
                    ->fieldCondition('field_outward_type', 'value', $item['outward type'], '=')
                    ->fieldCondition('field_company', 'target_id', $company_id, '=')
                    ->fieldCondition('field_financial_year', 'target_id', $fy_id, '=')
                    ->fieldCondition('field_invoice_no', 'value', $item['invoice no'], '=');
            $invoice_result = $invoice_query->execute();
            if (!empty($invoice_result)) {
                drupal_set_message($message . ': Importing failed - Invoice No already exists', $type = "error");
                continue;
            }

            //Update Entity IDs in each Feed item            
            $item['company'] = $company_id;
            $item['division'] = $division_id;
            $item['consignee'] = $customer_id;


            //Check if there are duplicate entries in the imported file
            $duplicate = FALSE;
            foreach ($items_new as $item_new) {
                if ($item['company'] == $item_new['company'] &&
                        $item['invoice no'] == $item_new['invoice no'] &&
                        $item['invoice date'] == $item_new['invoice date']) {
                    $duplicate = TRUE;
                }
            }

            //Add feed item to new feeds list if not duplicate
            if ($duplicate == FALSE) {
                $items_new[] = $item;
                drupal_set_message($message . ': Importing successful', $type = "status");
            } else {
                drupal_set_message($message . ': Importing failed: Duplicate Entry in Import file', $type = "error");
            }
        }

        $result->items = $items_new;
    }
}