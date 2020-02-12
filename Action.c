Action()
{

	web_add_auto_header("DNT", 
		"1");

	web_add_auto_header("Upgrade-Insecure-Requests", 
		"1");

	web_url("ilp-et.s3-website.ap-south-1.amazonaws.com", 
		"URL=http://ilp-et.s3-website.ap-south-1.amazonaws.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t4.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=https://kit-free.fontawesome.com/releases/latest/css/free-v4-font-face.min.css", ENDITEM, 
		"Url=https://kit-free.fontawesome.com/releases/latest/css/free-v4-shims.min.css", ENDITEM, 
		"Url=https://kit-free.fontawesome.com/releases/latest/css/free.min.css", ENDITEM, 
		LAST);

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_revert_auto_header("Upgrade-Insecure-Requests");

	lr_think_time(20);

	web_url("ilp-et.s3-website.ap-south-1.amazonaws.com_2", 
		"URL=http://ilp-et.s3-website.ap-south-1.amazonaws.com/", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t5.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/static/js/2.10613d27.chunk.js", ENDITEM, 
		"Url=/static/media/home.efcbcdcc.png", ENDITEM, 
		"Url=https://kit-free.fontawesome.com/releases/latest/webfonts/free-fa-solid-900.woff2", ENDITEM, 
		"Url=/static/media/notification.651771e1.woff", ENDITEM, 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_add_auto_header("Origin", 
		"http://ilp-et.s3-website.ap-south-1.amazonaws.com");

	lr_think_time(11);

	web_custom_request("login", 
		"URL=http://52.73.154.245/login", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/", 
		"Snapshot=t6.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("login_2", 
		"URL=http://52.73.154.245/login", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/", 
		"Snapshot=t7.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"userName\":\"admin\",\"userPassword\":\"password\"}", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"accesstoken");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_custom_request("getProjectsByUser", 
		"URL=http://52.73.154.245/getProjectsByUser", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t8.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("accessToken", 
		"eyJhbGciOiJIUzUxMiIsImlhdCI6MTU4MTQxMzgwMywiZXhwIjoxNTg0MDA1ODAzfQ.eyJ1c2VyTmFtZSI6ImFkbWluIiwicm9sZUlkIjoxfQ.A92htL6aE6egIpcxwoXpbOQa8a7nUgEghWBfJEw0EkIVZwPhtx-e2I9xWRe02eUnE2LO1KcuQdRZUj_y4Uuyrw");

	web_url("getProjectsByUser_2", 
		"URL=http://52.73.154.245/getProjectsByUser", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t9.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"accesstoken,content-type");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	web_custom_request("getDashboardDataByProject", 
		"URL=http://52.73.154.245/getDashboardDataByProject", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t10.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("Access-Control-Request-Headers", 
		"accesstoken");

	web_add_header("Access-Control-Request-Method", 
		"GET");

	web_custom_request("getUsers", 
		"URL=http://52.73.154.245/getUsers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t11.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("accessToken", 
		"eyJhbGciOiJIUzUxMiIsImlhdCI6MTU4MTQxMzgwMywiZXhwIjoxNTg0MDA1ODAzfQ.eyJ1c2VyTmFtZSI6ImFkbWluIiwicm9sZUlkIjoxfQ.A92htL6aE6egIpcxwoXpbOQa8a7nUgEghWBfJEw0EkIVZwPhtx-e2I9xWRe02eUnE2LO1KcuQdRZUj_y4Uuyrw");

	web_url("getUsers_2", 
		"URL=http://52.73.154.245/getUsers", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t12.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("getDashboardDataByProject_2", 
		"URL=http://52.73.154.245/getDashboardDataByProject", 
		"Method=POST", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/dashboard", 
		"Snapshot=t13.inf", 
		"Mode=HTML", 
		"EncType=application/json;charset=utf-8", 
		"Body={\"projectId\":2,\"startDate\":\"01-01-2020\",\"endDate\":\"11-02-2020\"}", 
		LAST);

	web_revert_auto_header("accessToken");

	web_add_auto_header("Access-Control-Request-Headers", 
		"accesstoken");

	web_add_auto_header("Access-Control-Request-Method", 
		"GET");

	lr_think_time(4);

	web_custom_request("getUsers_3", 
		"URL=http://52.73.154.245/getUsers", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t14.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("2", 
		"URL=http://52.73.154.245/getExpenseHeadByProject/2", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t15.inf", 
		"Mode=HTML", 
		LAST);

	web_custom_request("2_2", 
		"URL=http://52.73.154.245/getExpensesByProject/2", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t16.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("Access-Control-Request-Headers");

	web_revert_auto_header("Access-Control-Request-Method");

	web_add_auto_header("accessToken", 
		"eyJhbGciOiJIUzUxMiIsImlhdCI6MTU4MTQxMzgwNCwiZXhwIjoxNTg0MDA1ODA0fQ.eyJ1c2VyTmFtZSI6ImFkbWluIiwicm9sZUlkIjoxfQ.g-bXqFgV0b54Vk5YJxdzlRPjoDHlAR-5IctgS4bShbL-6xhDH0oPhNfPeWK9kU156AhzvfHIv0tvk3AquNy4LA");

	web_url("getUsers_4", 
		"URL=http://52.73.154.245/getUsers", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t17.inf", 
		"Mode=HTML", 
		LAST);

	web_url("2_3", 
		"URL=http://52.73.154.245/getExpenseHeadByProject/2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t18.inf", 
		"Mode=HTML", 
		LAST);

	web_url("2_4", 
		"URL=http://52.73.154.245/getExpensesByProject/2", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t19.inf", 
		"Mode=HTML", 
		LAST);

	web_revert_auto_header("accessToken");

	web_add_header("Access-Control-Request-Headers", 
		"accesstoken");

	web_add_header("Access-Control-Request-Method", 
		"POST");

	lr_think_time(45);

	web_custom_request("reportExpense", 
		"URL=http://52.73.154.245/reportExpense", 
		"Method=OPTIONS", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t20.inf", 
		"Mode=HTML", 
		LAST);

	web_add_header("accessToken", 
		"eyJhbGciOiJIUzUxMiIsImlhdCI6MTU4MTQxMzgwNCwiZXhwIjoxNTg0MDA1ODA0fQ.eyJ1c2VyTmFtZSI6ImFkbWluIiwicm9sZUlkIjoxfQ.g-bXqFgV0b54Vk5YJxdzlRPjoDHlAR-5IctgS4bShbL-6xhDH0oPhNfPeWK9kU156AhzvfHIv0tvk3AquNy4LA");

	web_submit_data("reportExpense_2", 
		"Action=http://52.73.154.245/reportExpense", 
		"Method=POST", 
		"EncType=multipart/form-data", 
		"RecContentType=application/json", 
		"Referer=http://ilp-et.s3-website.ap-south-1.amazonaws.com/cashExpense", 
		"Snapshot=t21.inf", 
		"Mode=HTML", 
		ITEMDATA, 
		"Name=expenseId", "Value=", ENDITEM, 
		"Name=expenseType", "Value=cash", ENDITEM, 
		"Name=projectId", "Value=2", ENDITEM, 
		"Name=paidBy", "Value=4", ENDITEM, 
		"Name=billNumber", "Value=522", ENDITEM, 
		"Name=expenseHead", "Value=nutrition", ENDITEM, 
		"Name=issuedDate", "Value=11-02-2020", ENDITEM, 
		"Name=amount", "Value=2000", ENDITEM, 
		"Name=paidTo", "Value=sneha", ENDITEM, 
		"Name=receiptType", "Value=1", ENDITEM, 
		"Name=towards", "Value=food", ENDITEM, 
		"Name=comments", "Value=", ENDITEM, 
		"Name=forCA", "Value=1", ENDITEM, 
		"Name=receipts", "Value=null", ENDITEM, 
		"Name=transactionId", "Value=null", ENDITEM, 
		"Name=transactionDate", "Value=null", ENDITEM, 
		LAST);

	return 0;
}