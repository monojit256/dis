<?php
/**
 * @file
 * dis_core_features.rules_defaults.inc
 */

/**
 * Implements hook_default_rules_configuration().
 */
function dis_core_features_default_rules_configuration() {
  $items = array();
  $items['rules_add_consignment_details'] = entity_import('rules_config', '{ "rules_add_consignment_details" : {
      "LABEL" : "Add Consignment Details",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "USES VARIABLES" : { "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" } },
      "ACTION SET" : [
        { "dis_ruleaction_redirect_consignment_details_page" : { "invoices" : [ "invoices" ] } }
      ]
    }
  }');
  $items['rules_associate_inward_permit_utilization_rule'] = entity_import('rules_config', '{ "rules_associate_inward_permit_utilization_rule" : {
      "LABEL" : "Associate Inward Permit Utilization Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_update--dispatch" : { "bundle" : "dispatch" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node-unchanged:field-associate-inward-permit" ],
            "value" : [ "node:field-associate-inward-permit" ]
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : {
                  "entity" : [ "node-unchanged:field-associate-inward-permit" ],
                  "field" : "field_permit_status"
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node-unchanged:field-associate-inward-permit:field-permit-status" ],
                    "value" : "Unutilized"
                  }
                }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : {
                  "entity" : [ "node:field-associate-inward-permit" ],
                  "field" : "field_permit_status"
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node:field-associate-inward-permit:field-permit-status" ],
                    "value" : "Utilized"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_invoice_status_rule_node_creation'] = entity_import('rules_config', '{ "rules_invoice_status_rule_node_creation" : {
      "LABEL" : "Invoice Status Rule - Node Creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_insert--packing" : { "bundle" : "packing" },
        "node_insert--dispatch" : { "bundle" : "dispatch" },
        "node_insert--delivery_confirmation" : { "bundle" : "delivery_confirmation" }
      },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode\\u003E" },
            "PROVIDE" : { "variable_added" : { "invoices_list" : "List of invoices" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "new_status" : "New Status" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "packing" : "packing" } } } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "invoices-list" ],
                    "value" : [ "node:field-outward-invoices" ]
                  }
                },
                { "data_set" : { "data" : [ "new-status" ], "value" : "Packed" } }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "dispatch" : "dispatch" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : {
                          "entity" : [ "node:field-packing" ],
                          "field" : "field_outward_invoices"
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "invoices-list" ],
                            "value" : [ "node:field-packing:field-outward-invoices" ]
                          }
                        },
                        { "data_set" : { "data" : [ "new-status" ], "value" : "Dispatched" } }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "delivery_confirmation" : "delivery_confirmation" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : { "entity" : [ "node:field-dispatch" ], "field" : "field_packing" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "entity_has_field" : {
                                  "entity" : [ "node:field-dispatch:field-packing" ],
                                  "field" : "field_outward_invoices"
                                }
                              },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "invoices-list" ],
                                    "value" : [ "node:field-dispatch:field-packing:field-outward-invoices" ]
                                  }
                                },
                                { "data_set" : { "data" : [ "new-status" ], "value" : "Delivered" } }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "LOOP" : {
            "USING" : { "list" : [ "invoices-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "list-item" ], "field" : "field_status" } },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-status" ], "value" : [ "new-status" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_invoice_status_rule_node_deletion'] = entity_import('rules_config', '{ "rules_invoice_status_rule_node_deletion" : {
      "LABEL" : "Invoice Status Rule - Node Deletion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : {
        "node_delete--packing" : { "bundle" : "packing" },
        "node_delete--dispatch" : { "bundle" : "dispatch" },
        "node_delete--delivery_confirmation" : { "bundle" : "delivery_confirmation" }
      },
      "DO" : [
        { "variable_add" : {
            "USING" : { "type" : "list\\u003Cnode\\u003E" },
            "PROVIDE" : { "variable_added" : { "invoices_list" : "List of invoices" } }
          }
        },
        { "variable_add" : {
            "USING" : { "type" : "text" },
            "PROVIDE" : { "variable_added" : { "new_status" : "New Status" } }
          }
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "node_is_of_type" : { "node" : [ "node" ], "type" : { "value" : { "packing" : "packing" } } } },
              "DO" : [
                { "data_set" : {
                    "data" : [ "invoices-list" ],
                    "value" : [ "node:field-outward-invoices" ]
                  }
                },
                { "data_set" : { "data" : [ "new-status" ], "value" : "Created" } }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "dispatch" : "dispatch" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : {
                          "entity" : [ "node:field-packing" ],
                          "field" : "field_outward_invoices"
                        }
                      },
                      "DO" : [
                        { "data_set" : {
                            "data" : [ "invoices-list" ],
                            "value" : [ "node:field-packing:field-outward-invoices" ]
                          }
                        },
                        { "data_set" : { "data" : [ "new-status" ], "value" : "Packed" } }
                      ]
                    }
                  ]
                }
              ]
            },
            {
              "ELSE IF" : { "node_is_of_type" : {
                  "node" : [ "node" ],
                  "type" : { "value" : { "delivery_confirmation" : "delivery_confirmation" } }
                }
              },
              "DO" : [
                { "CONDITIONAL" : [
                    {
                      "IF" : { "entity_has_field" : { "entity" : [ "node:field-dispatch" ], "field" : "field_packing" } },
                      "DO" : [
                        { "CONDITIONAL" : [
                            {
                              "IF" : { "entity_has_field" : {
                                  "entity" : [ "node:field-dispatch:field-packing" ],
                                  "field" : "field_outward_invoices"
                                }
                              },
                              "DO" : [
                                { "data_set" : {
                                    "data" : [ "invoices-list" ],
                                    "value" : [ "node:field-dispatch:field-packing:field-outward-invoices" ]
                                  }
                                },
                                { "data_set" : { "data" : [ "new-status" ], "value" : "Dispatched" } }
                              ]
                            }
                          ]
                        }
                      ]
                    }
                  ]
                }
              ]
            }
          ]
        },
        { "LOOP" : {
            "USING" : { "list" : [ "invoices-list" ] },
            "ITEM" : { "list_item" : "Current list item" },
            "DO" : [
              { "CONDITIONAL" : [
                  {
                    "IF" : { "entity_has_field" : { "entity" : [ "list-item" ], "field" : "field_status" } },
                    "DO" : [
                      { "data_set" : { "data" : [ "list-item:field-status" ], "value" : [ "new-status" ] } }
                    ]
                  }
                ]
              }
            ]
          }
        }
      ]
    }
  }');
  $items['rules_inward_permit_utilization_rule'] = entity_import('rules_config', '{ "rules_inward_permit_utilization_rule" : {
      "LABEL" : "Inward Permit Utilization Rule",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--consignment_details" : { "bundle" : "consignment_details" } },
      "IF" : [
        { "entity_has_field" : {
            "entity" : [ "node:field-inward-permit" ],
            "field" : "field_permit_status"
          }
        }
      ],
      "DO" : [
        { "data_set" : {
            "data" : [ "node:field-inward-permit:field-permit-status" ],
            "value" : "Utilized"
          }
        }
      ]
    }
  }');
  $items['rules_inward_permit_utilization_rule_2'] = entity_import('rules_config', '{ "rules_inward_permit_utilization_rule_2" : {
      "LABEL" : "Inward Permit Utilization Rule 2",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "rules_conditional" ],
      "ON" : { "node_update--consignment_details" : { "bundle" : "consignment_details" } },
      "IF" : [
        { "NOT data_is" : {
            "data" : [ "node:field-inward-permit" ],
            "value" : [ "node-unchanged:field-inward-permit" ]
          }
        }
      ],
      "DO" : [
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : {
                  "entity" : [ "node-unchanged:field-inward-permit" ],
                  "field" : "field_permit_status"
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node-unchanged:field-inward-permit:field-permit-status" ],
                    "value" : "Unutilized"
                  }
                }
              ]
            }
          ]
        },
        { "CONDITIONAL" : [
            {
              "IF" : { "entity_has_field" : {
                  "entity" : [ "node:field-inward-permit" ],
                  "field" : "field_permit_status"
                }
              },
              "DO" : [
                { "data_set" : {
                    "data" : [ "node:field-inward-permit:field-permit-status" ],
                    "value" : "Utilized"
                  }
                }
              ]
            }
          ]
        }
      ]
    }
  }');
  $items['rules_pdc_deposit_email'] = entity_import('rules_config', '{ "rules_pdc_deposit_email" : {
      "LABEL" : "PDC Deposit Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis", "dis_pdc", "rules", "mimemail" ],
      "ON" : { "node_insert--pdc_utilization" : { "bundle" : "pdc_utilization" } },
      "DO" : [
        { "dis_ruleaction_get_email_recipients" : {
            "USING" : { "packing" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : { "recipients" : { "recipients" : "Recipients" } }
          }
        },
        { "dis_ruleaction_get_first_node_in_list" : {
            "USING" : { "node_list" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : { "first_node" : { "first_node" : "First Node" } }
          }
        },
        { "dis_pdc_ruleaction_get_PDC_invoices_data" : {
            "USING" : { "invoices" : [ "node:field-pdc-invoices" ] },
            "PROVIDE" : {
              "html_table" : { "html_table" : "HTML Table" },
              "total_value" : { "total_value" : "Total Value" }
            }
          }
        },
        { "mimemail" : {
            "key" : "pdc-deposit-email",
            "to" : [ "recipients" ],
            "subject" : "[first-node:field-consignee]: Deposit of Cheque No [node:field-pdc:field-cheque-no] of Rs. [node:field-cheque-amount]",
            "body" : "We will be depositing your Cheque No [node:field-pdc:field-cheque-no] dated [node:field-cheque-date] of Rs. [node:field-cheque-amount] on [node:field-deposit-date] against the following invoices:\\r\\n\\r\\n[html-table:value]\\r\\n\\r\\nTotal value of Invoices: \\u003Cb\\u003ERs. [total_value:value]\\u003C\\/b\\u003E\\r\\n\\r\\nRemarks: \\u003Cb\\u003E[node:field-remarks]\\u003C\\/b\\u003E\\r\\n\\r\\n\\u003Ci\\u003EThis is a system generated email. Please do not reply to this email.\\u003C\\/i\\u003E",
            "language" : [ "" ]
          }
        },
        { "drupal_message" : { "message" : "PDC Deposit Mail sent to: [recipients:value]" } }
      ]
    }
  }');
  $items['rules_pdc_status_rule_utilization_creation'] = entity_import('rules_config', '{ "rules_pdc_status_rule_utilization_creation" : {
      "LABEL" : "PDC Status Rule - Utilization Creation",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_insert--pdc_utilization" : { "bundle" : "pdc_utilization" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-pdc" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-pdc:field-pdc-status" ], "value" : "Utilized" } }
      ]
    }
  }');
  $items['rules_pdc_status_rule_utilization_deletion'] = entity_import('rules_config', '{ "rules_pdc_status_rule_utilization_deletion" : {
      "LABEL" : "PDC Status Rule - Utilization Deletion",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ON" : { "node_delete--pdc_utilization" : { "bundle" : "pdc_utilization" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-pdc" ], "field" : "field_pdc_status" } }
      ],
      "DO" : [
        { "data_set" : { "data" : [ "node:field-pdc:field-pdc-status" ], "value" : "Unused" } }
      ]
    }
  }');
  $items['rules_redirect_edit_invoice'] = entity_import('rules_config', '{ "rules_redirect_edit_invoice" : {
      "LABEL" : "Redirect Edit Invoice",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "invoice" : { "label" : "Invoice", "type" : "node" } },
      "ACTION SET" : [ { "dis_ruleaction_redirect_edit_invoice" : [] } ]
    }
  }');
  $items['rules_redirect_edit_inward_invoice'] = entity_import('rules_config', '{ "rules_redirect_edit_inward_invoice" : {
      "LABEL" : "Redirect Edit Inward Invoice",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "USES VARIABLES" : { "invoice" : { "label" : "Invoice", "type" : "node" } },
      "ACTION SET" : [
        { "dis_ruleaction_redirect_edit_inward_invoice" : { "invoice" : [ "invoice" ] } }
      ]
    }
  }');
  $items['rules_redirect_edit_pdc'] = entity_import('rules_config', '{ "rules_redirect_edit_pdc" : {
      "LABEL" : "Redirect Edit PDC",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis_pdc" ],
      "USES VARIABLES" : { "pdc" : { "label" : "PDC", "type" : "node" } },
      "ACTION SET" : [ { "dis_pdc_ruleaction_redirect_edit_pdc" : { "pdc" : [ "pdc" ] } } ]
    }
  }');
  $items['rules_send_lr_email'] = entity_import('rules_config', '{ "rules_send_lr_email" : {
      "LABEL" : "Send LR Email",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules", "dis", "mimemail" ],
      "ON" : { "node_update--dispatch" : { "bundle" : "dispatch" } },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "node:field-packing" ], "field" : "field_cases" } },
        { "entity_has_field" : { "entity" : [ "node:field-packing" ], "field" : "field_transporter" } },
        { "entity_has_field" : {
            "entity" : [ "node:field-packing" ],
            "field" : "field_outward_invoices"
          }
        },
        { "entity_has_field" : {
            "entity" : [ "node:field-packing:field-outward-invoices:0" ],
            "field" : "field_consignee"
          }
        },
        { "OR" : [
            { "data_is_empty" : { "data" : [ "node-unchanged:field-lr-date" ] } },
            { "data_is_empty" : { "data" : [ "node-unchanged:field-lr-no" ] } }
          ]
        },
        { "NOT data_is_empty" : { "data" : [ "node:field-lr-no" ] } },
        { "NOT data_is_empty" : { "data" : [ "node:field-lr-date" ] } }
      ],
      "DO" : [
        { "dis_ruleaction_get_email_recipients" : {
            "USING" : { "packing" : [ "node:field-packing:field-outward-invoices" ] },
            "PROVIDE" : { "recipients" : { "recipients" : "Recipients" } }
          }
        },
        { "drupal_message" : { "message" : "Mail Sent to [recipients:value]" } },
        { "mimemail" : {
            "key" : "lr_email",
            "to" : [ "recipients" ],
            "subject" : "[node:field-packing:field-outward-invoices:0:field-consignee:field-name]: [node:field-packing:field-cases] c\\/s dispatched through [node:field-packing:field-transporter] LR No [node:field-lr-no] dt: [node:field-lr-date]",
            "body" : "The above consignment has been dispatched. \\r\\n\\r\\nPlease acknowledge its receipt. In case of any issues, please contact us.\\r\\n\\r\\nThanks\\r\\nApollo Medi-Services Pvt Ltd\\r\\n\\r\\n\\u003Ci\\u003EThis is a system generated email. Please do not reply to this email.\\u003C\\/i\\u003E",
            "language" : [ "" ]
          }
        }
      ]
    }
  }');
  $items['rules_set_invoice_reversed'] = entity_import('rules_config', '{ "rules_set_invoice_reversed" : {
      "LABEL" : "Set Invoice Reversed",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "invoice" : { "label" : "Invoice", "type" : "node" },
        "reason" : { "label" : "Reason for reversal", "type" : "text" }
      },
      "ACTION SET" : [
        { "dis_ruleaction_set_invoice_reversed" : { "invoice" : [ "invoice" ], "reason" : [ "reason" ] } }
      ]
    }
  }');
  $items['rules_set_quarter_and_financial_year'] = entity_import('rules_config', '{ "rules_set_quarter_and_financial_year" : {
      "LABEL" : "Set Quarter and Financial Year",
      "PLUGIN" : "reaction rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis", "rules" ],
      "ON" : {
        "node_insert--outward_invoice" : { "bundle" : "outward_invoice" },
        "node_update--outward_invoice" : { "bundle" : "outward_invoice" },
        "node_insert--inward_invoice" : { "bundle" : "inward_invoice" },
        "node_update--inward_invoice" : { "bundle" : "inward_invoice" }
      },
      "DO" : [
        { "dis_ruleaction_get_quarter_fy" : {
            "USING" : { "invoice_date" : [ "node:field-invoice-date" ] },
            "PROVIDE" : {
              "quarter" : { "quarter" : "Quarter" },
              "financial_year" : { "financial_year" : "Financial Year" }
            }
          }
        },
        { "data_set" : { "data" : [ "node:field-quarter" ], "value" : [ "quarter" ] } },
        { "entity_fetch" : {
            "USING" : { "type" : "taxonomy_term", "id" : [ "financial-year" ] },
            "PROVIDE" : { "entity_fetched" : { "entity_fetched" : "Fetched entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "node:field-financial-year" ],
            "value" : [ "entity-fetched" ]
          }
        },
        { "entity_save" : { "data" : [ "node" ] } }
      ]
    }
  }');
  $items['rules_update_dispatch'] = entity_import('rules_config', '{ "rules_update_dispatch" : {
      "LABEL" : "Update Dispatch",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "packings" : { "label" : "Packings", "type" : "list\\u003Cnode\\u003E" },
        "dispatch_date" : { "label" : "Dispatch Date", "type" : "date" },
        "dispatch_mode" : { "label" : "Dispatch Mode", "type" : "list\\u003Ctext\\u003E" },
        "vehicle_no" : { "label" : "Vehicle No \\/ Delivery Person", "type" : "text" }
      },
      "ACTION SET" : [
        { "dis_ruleaction_update_dispatch" : {
            "packings" : [ "packings" ],
            "dispatch_date" : [ "dispatch_date" ],
            "dispatch_mode" : [ "dispatch_mode" ],
            "vehicle_no" : [ "vehicle_no" ]
          }
        }
      ]
    }
  }');
  $items['rules_update_packing'] = entity_import('rules_config', '{ "rules_update_packing" : {
      "LABEL" : "Update Packing",
      "PLUGIN" : "action set",
      "OWNER" : "rules",
      "REQUIRES" : [ "dis" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : { "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" } },
      "ACTION SET" : [
        { "dis_ruleaction_redirect_packing_page" : { "invoices" : [ "invoices" ] } }
      ]
    }
  }');
  $items['rules_utilize_pdc'] = entity_import('rules_config', '{ "rules_utilize_pdc" : {
      "LABEL" : "Utilize PDC",
      "PLUGIN" : "rule",
      "OWNER" : "rules",
      "REQUIRES" : [ "rules" ],
      "ACCESS_EXPOSED" : "1",
      "USES VARIABLES" : {
        "invoices" : { "label" : "Invoices", "type" : "list\\u003Cnode\\u003E" },
        "pdc" : { "label" : "PDC", "type" : "node" },
        "cheque_date" : { "label" : "Cheque Date", "type" : "date" },
        "cheque_amount" : { "label" : "Cheque Amount", "type" : "decimal" },
        "deposit_date" : { "label" : "Deposit Date", "type" : "date" },
        "remarks" : { "label" : "Remarks", "type" : "text" }
      },
      "IF" : [
        { "entity_has_field" : { "entity" : [ "pdc" ], "field" : "field_company" } }
      ],
      "DO" : [
        { "entity_create" : {
            "USING" : {
              "type" : "node",
              "param_type" : "pdc_utilization",
              "param_title" : "PDC Utilization",
              "param_author" : [ "site:current-user" ]
            },
            "PROVIDE" : { "entity_created" : { "entity_created" : "Created entity" } }
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-company" ],
            "value" : [ "pdc:field-company" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-cheque-amount" ],
            "value" : [ "cheque-amount" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-cheque-date" ],
            "value" : [ "cheque-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-deposit-date" ],
            "value" : [ "deposit-date" ]
          }
        },
        { "data_set" : {
            "data" : [ "entity-created:field-pdc-invoices" ],
            "value" : [ "invoices" ]
          }
        },
        { "data_set" : { "data" : [ "entity-created:field-pdc" ], "value" : [ "pdc" ] } },
        { "data_set" : { "data" : [ "entity-created:field-remarks" ], "value" : [ "remarks" ] } },
        { "entity_save" : { "data" : [ "entity-created" ] } }
      ]
    }
  }');
  return $items;
}
