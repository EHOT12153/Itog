Action()
{
	lr_start_transaction("UC_SearchProduct");

	web_set_sockets_option("SSL_VERSION", "AUTO");

	web_add_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Sec-Fetch-Dest", 
		"empty");

	web_add_header("A-IM", 
		"x-bm,gzip");

	web_add_auto_header("Sec-Fetch-Site", 
		"none");

	web_url("seed", 
		"URL=https://clientservices.googleapis.com/chrome-variations/seed?osname=win&channel=stable&milestone=113", 
		"TargetFrame=", 
		"Resource=0", 
		"Referer=", 
		"Snapshot=t88.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Mode", 
		"navigate");

	web_add_auto_header("Sec-Fetch-Dest", 
		"document");

	web_add_header("Sec-Fetch-User", 
		"?1");

	web_add_header("Upgrade-Insecure-Requests", 
		"1");

	web_add_auto_header("sec-ch-ua", 
		"\"Google Chrome\";v=\"113\", \"Chromium\";v=\"113\", \"Not-A.Brand\";v=\"24\"");

	web_add_auto_header("sec-ch-ua-mobile", 
		"?0");

	web_add_auto_header("sec-ch-ua-platform", 
		"\"Windows\"");

	web_add_cookie("_ga=GA1.1.597887473.1685924478; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_ga_TBPYED8WSW=GS1.1.1685924478.1.0.1685924478.0.0.0; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	web_url("www.advantageonlineshopping.com", 
		"URL=https://www.advantageonlineshopping.com/", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=", 
		"Snapshot=t89.inf", 
		"Mode=HTML", 
		EXTRARES, 
		"Url=/main.min.js", ENDITEM, 
		"Url=https://www.google-analytics.com/analytics.js", ENDITEM, 
		"Url=/services.properties", ENDITEM, 
		"Url=/css/images/logo.png", ENDITEM, 
		"Url=/css/images/closeDark.png", ENDITEM, 
		"Url=/css/fonts/roboto_regular_macroman/Roboto-Regular-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_light_macroman/Roboto-Light-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_medium_macroman/Roboto-Medium-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/arrow_right.png", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=speakers", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=mice", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=tablets", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=laptops", ENDITEM, 
		"Url=/css/images/Special-offer.jpg", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=headphones", ENDITEM, 
		"Url=/css/fonts/roboto_bold_macroman/Roboto-Bold-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/fonts/roboto_thin_macroman/Roboto-Thin-webfont.woff", "Referer=https://www.advantageonlineshopping.com/css/main.min.css", ENDITEM, 
		"Url=/css/images/facebook.png", ENDITEM, 
		"Url=/css/images/GoUp.png", ENDITEM, 
		"Url=/css/images/twitter.png", ENDITEM, 
		"Url=/css/images/linkedin.png", ENDITEM, 
		"Url=/css/images/Banner1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item3.jpg", ENDITEM, 
		"Url=/css/images/Banner2.jpg", ENDITEM, 
		"Url=/css/images/Popular-item1.jpg", ENDITEM, 
		"Url=/css/images/Popular-item2.jpg", ENDITEM, 
		"Url=/css/images/Banner3.jpg", ENDITEM, 
		"Url=/css/images/category_banner_3.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3100", ENDITEM, 
		"Url=/css/images/Filter.png", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3300", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3200", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3201", ENDITEM, 
		"Url=/catalog/fetchImage?image_id=3202", ENDITEM, 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Sec-Fetch-Mode", 
		"no-cors");

	web_add_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_add_auto_header("Sec-Fetch-Dest", 
		"empty");

	web_custom_request("collect", 
		"URL=https://www.google-analytics.com/g/collect?v=2&tid=G-TBPYED8WSW&gtm=45je35v0&_p=1401734458&cid=597887473.1685924478&ul=ru-ru&sr=1600x900&uaa=x86&uab=64&uafvl=Google%2520Chrome%3B113.0.5672.129%7CChromium%3B113.0.5672.129%7CNot-A.Brand%3B24.0.0.0&uamb=0&uam=&uap=Windows&uapv=10.0.0&uaw=0&ngs=1&_s=1&sid=1685924478&sct=1&seg=0&dl=https%3A%2F%2Fwww.advantageonlineshopping.com%2F&dt=%C2%A0Advantage%20Shopping&en=page_view&_fv=1&_nsi=1&_ss=1&_ee=1", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t90.inf", 
		"Mode=HTML", 
		"EncType=", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_auto_header("Sec-Fetch-Mode", 
		"cors");

	web_url("ALL", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/DemoAppConfig/parameters/by_tool/ALL", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t91.inf", 
		"Mode=HTML", 
		LAST);

	web_add_auto_header("Sec-Fetch-Site", 
		"cross-site");

	web_add_auto_header("Origin", 
		"https://www.advantageonlineshopping.com");

	web_custom_request("collect_2", 
		"URL=https://www.google-analytics.com/j/collect?v=1&_v=j100&a=1401734458&t=pageview&_s=1&dl=https%3A%2F%2Fwww.advantageonlineshopping.com%2F&dp=%2F&ul=ru-ru&de=UTF-8&dt=%C2%A0Advantage%20Shopping&sd=24-bit&sr=1600x900&vp=1600x789&je=0&_u=IADAAEABAAAAACAAI~&jid=1205036648&gjid=1625254589&cid=597887473.1685924478&tid=UA-81334227-1&_gid=1979521519.1685924484&_r=1&_slc=1&z=1521800794", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/plain", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t92.inf", 
		"Mode=HTML", 
		"EncType=text/plain", 
		LAST);

	web_add_cookie("_ga=GA1.2.597887473.1685924478; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gid=GA1.2.1979521519.1685924484; DOMAIN=www.advantageonlineshopping.com");

	web_add_cookie("_gat=1; DOMAIN=www.advantageonlineshopping.com");

	web_add_header("SOAPAction", 
		"com.advantage.online.store.accountserviceGetAccountConfigurationRequest");

	web_add_auto_header("Sec-Fetch-Site", 
		"same-origin");

	web_add_header("X-Requested-With", 
		"XMLHttpRequest");

	web_custom_request("GetAccountConfigurationRequest", 
		"URL=https://www.advantageonlineshopping.com/accountservice/ws/GetAccountConfigurationRequest", 
		"Method=POST", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/xml", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t93.inf", 
		"Mode=HTML", 
		"EncType=text/xml; charset=UTF-8", 
		"Body=<?xml version=\"1.0\" encoding=\"UTF-8\"?><soap:Envelope xmlns:soap=\"http://schemas.xmlsoap.org/soap/envelope/\" xmlns:xsi=\"http://www.w3.org/2001/XMLSchema-instance\" xmlns:xsd=\"http://www.w3.org/2001/XMLSchema\"><soap:Body><GetAccountConfigurationRequest xmlns=\"com.advantage.online.store.accountservice\"></GetAccountConfigurationRequest></soap:Body></soap:Envelope>", 
		EXTRARES, 
		"Url=https://content-autofill.googleapis.com/v1/pages/ChVDaHJvbWUvMTEzLjAuNTY3Mi4xMjkSJQlHItGD0Q1lLhIFDeeNQA4SBQ3OQUx6EgUNeG8SGRIFDQ8Wvis=?alt=proto", "Referer=", ENDITEM, 
		LAST);

	web_revert_auto_header("Origin");

	web_url("categories", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t94.inf", 
		"Mode=HTML", 
		LAST);

	web_url("search", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/deals/search?dealOfTheDay=true", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t95.inf", 
		"Mode=HTML", 
		LAST);

	web_url("popularProducts.json", 
		"URL=https://www.advantageonlineshopping.com/app/tempFiles/popularProducts.json", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t96.inf", 
		"Mode=HTML", 
		LAST);

	web_url("home-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/home-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t97.inf", 
		"Mode=HTML", 
		LAST);

	web_url("products", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t98.inf", 
		"Mode=HTML", 
		LAST);
	
	
	
	web_url("attributes", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/attributes", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t99.inf", 
		"Mode=HTML", 
		LAST);

	web_url("category-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/category-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t100.inf", 
		"Mode=HTML", 
		LAST);
	
	

	web_url("17", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/products/17", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t101.inf", 
		"Mode=HTML", 
		LAST);
	
	

	web_url("products_2", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/3/products", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t102.inf", 
		"Mode=HTML", 
		LAST);

	web_url("all_data", 
		"URL=https://www.advantageonlineshopping.com/catalog/api/v1/categories/all_data", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=application/json", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t103.inf", 
		"Mode=HTML", 
		LAST);

	web_url("product-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/product-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t104.inf", 
		"Mode=HTML", 
		LAST);

	lr_start_transaction("gotoCart");

	web_add_cookie("userCart=%7B%22userId%22%3A-1%2C%22productsInCart%22%3A%5B%7B%22productId%22%3A17%2C%22imageUrl%22%3A%223200%22%2C%22productName%22%3A%22HP%20Elite%20x2%201011%20G1%20Tablet%22%2C%22color%22%3A%7B%22code%22%3A%22414141%22%2C%22name%22%3A%22BLACK%22%2C%22inStock%22%3A10%2C%22%24%24hashKey%22%3A%22object%3A238%22%7D%2C%22quantity%22%3A1%2C%22price%22%3A1279%2C%22hasWarranty%22%3Afalse%7D%5D%7D; DOMAIN=www.advantageonlineshopping.com");

	lr_think_time(13);

	web_url("shoppingCart.html", 
		"URL=https://www.advantageonlineshopping.com/app/views/shoppingCart.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t105.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("gotoCart",LR_AUTO);

	lr_think_time(24);

	lr_start_transaction("gotoCheckout");
	


	web_url("user-not-login-page.html", 
		"URL=https://www.advantageonlineshopping.com/app/order/views/user-not-login-page.html", 
		"TargetFrame=", 
		"Resource=0", 
		"RecContentType=text/html", 
		"Referer=https://www.advantageonlineshopping.com/", 
		"Snapshot=t106.inf", 
		"Mode=HTML", 
		LAST);

	lr_end_transaction("gotoCheckout",LR_AUTO);
	
	lr_end_transaction("UC_SearchProduct", LR_AUTO);

	return 0;
}