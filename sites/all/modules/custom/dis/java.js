//alert('hvhvhv');

function get_division(company_value)
{
	//alert('jbjbjbj');
	//var a = jQuery("#edit-associate-type").val();
	//alert(a);
	//var company_value = "jbjb";
	//alert(company_value);
	jQuery.ajax({
			url: Drupal.settings.basePath + 'get-division',
			data:{
				company: company_value,
			},
			success:function(data){
				//alert(data);
				var con=eval("(" + data + ")");
				var x = document.getElementById("edit-field-division-und");
				x.options.length = 0;
				for (var k in con) {
					    
					x.options[x.options.length] = new Option(con[k],k);
				}

			}

		});

}
function get_company(th)
{
	var company_value = jQuery("#edit-field-company-und").val();
	var associate_type = jQuery("#edit-associate-type").val();
	get_division(company_value);
	//alert(company_value);
	//alert(th.id);
	jQuery.ajax({
			url: Drupal.settings.basePath + 'get-company-value',
			data:{
				company: company_value,
				a_t: associate_type,
			},
			success:function(data){
				//var obj = JSON.parse(data);
				//alert(obj.b);
				//alert(data);
				var con=eval("(" + data + ")");
				//var myJsonObj = jsonParse(data);
				//alert(myJsonObj);  // alerts Hello, World!
				var x = document.getElementById("edit-field-associate-und");
				x.options.length = 0;
				//var option = document.createElement("option");
				//var i=0;
				for (var k in con) {
					    //option.text = con[k];
					    //option.value = k;
					  //  var sel = x.options[x.selectedIndex];
					  	//x.options.length = i; 
					    //x.appendChild(option);
					    x.options[x.options.length] = new Option(con[k],k);

				  //alert(k + '=' + con[k]);
				  //i++;
				}
				//jQuery("#testdiv").html(data);

			}

		});
}