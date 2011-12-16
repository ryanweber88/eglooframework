<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/StartTest.tpl" */ ?>
<?php /*%%SmartyHeaderCode:15115574964e84aa9faeeb97-25162842%%*/if(!defined('SMARTY_DIR')) exit('no direct access allowed');
$_smarty_tpl->decodeProperties(array (
  'file_dependency' => 
  array (
    'aa4c1df37173fa133641e1fa9c6e008f83554f47' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/StartTest.tpl',
      1 => 1317317208,
      2 => 'file',
    ),
    'cf0209070fa243ba9f8ae69541a0f81d065a19b9' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Header.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    '9bce0d9fbe5b1ebb091e833742da867658d68423' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Nav.tpl',
      1 => 1317316742,
      2 => 'file',
    ),
    '4aa30f94c9ab007f7cdc78f623b311bf8bbbcf06' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginPanel.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    'ee4c2817d8abb65d25a9f579c9b13af36fb1e05a' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginBar.tpl',
      1 => 1317316814,
      2 => 'file',
    ),
    '9e191f3176c8a77ecc680ded91561ad46b6b83f6' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/FilterBar.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    'beeea2149ea5df8715c0a7c97fbbd9a1658288b0' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/../Common/Templates/Alerts.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    '99549b357ddbd1c42d9c038f8f7c9e83bfe951b8' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/BrandSplash/Brands.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    'b68f89e5eb1dbf7cae9da118976170a597971a48' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/QuickSelect.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
    '3d0c4620f8276e1a02fafe5c1ea14f75b0aff77e' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Footer.tpl',
      1 => 1317316764,
      2 => 'file',
    ),
  ),
  'nocache_hash' => '15115574964e84aa9faeeb97-25162842',
  'function' => 
  array (
  ),
  'has_nocache_code' => false,
)); /*/%%SmartyHeaderCode%%*/?>
<?php if (!is_callable('smarty_modifier_escape')) include '/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php';
?>

<?php $_template = new Smarty_Internal_Template('Header.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->assign('title','PetFlow | Get Started');$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Header.tpl" */ ?>
<?php if (!is_callable('smarty_modifier_escape')) include '/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php';
?><!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html lang="en-US" xml:lang="en-US" xmlns="http://www.w3.org/1999/xhtml">
<head>
<meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>
<meta property="og:title" content="<?php echo $_smarty_tpl->getVariable('product')->value->title;?>
" />
<meta property="og:type" content="product" />
<meta property="og:url" content="http://www.petflow.com/<?php echo $_smarty_tpl->getVariable('product')->value->slug;?>
" />
<meta property="og:image" content="<?php echo $_smarty_tpl->getVariable('product')->value->img_thumb;?>
" />
<meta property="og:site_name" content="PetFlow" />
<meta property="og:description" content="<?php echo smarty_modifier_escape($_smarty_tpl->getVariable('product')->value->description);?>
" />
<?php }?>
<title><?php echo (($tmp = @$_smarty_tpl->getVariable('title')->value)===null||$tmp==='' ? "PetFlow" : $tmp);?>
</title>
<meta name="title" content="PetFlow Food For Life!" />
<link rel="shortcut icon" href="/sites/all/themes/petflow/favicon.ico" type="image/x-icon" />
<meta name="description" content="<?php echo (($tmp = @$_smarty_tpl->getVariable('meta_description')->value)===null||$tmp==='' ? "PetFlow is a new hassle free way to shop for pet food! We make it easy for you to set a delivery schedule, so you never have to shop for pet food again!" : $tmp);?>
" />
<?php if ($_smarty_tpl->getVariable('page')->value=='start'){?>
<meta name="google-site-verification" content="GXjS7Emt38wkIdyYArJYiR9O8RifIc0svJ-eicZ1YPI" />
<?php }?>
<?php if ($_smarty_tpl->getVariable('page')->value=='brands'||$_smarty_tpl->getVariable('page')->value=='start'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/brandsForm.js" type="text/javascript"></script>
<?php }?>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/global.css"/>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
xcss/page:<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>products<?php }else{ ?><?php echo $_smarty_tpl->getVariable('page')->value;?>
<?php }?>/styles.css"/>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/nav.css"/>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
xcss/page:<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>products<?php }else{ ?><?php echo $_smarty_tpl->getVariable('page')->value;?>
<?php }?>/sidebar.css"/>
<!--[if IE 7]>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/ie7.css"/>
<![endif]-->
<!--[if IE 8]>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/ie8.css"/>
<![endif]-->
<?php if ($_smarty_tpl->getVariable('section')->value=='checkout'||$_smarty_tpl->getVariable('section')->value=='user'){?>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/jqueryUI.css"/>
<?php }?>
<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>
<link rel="stylesheet" type="text/css" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
css/colorbox.css"/>
<?php }?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/jquery.js" type="text/javascript"></script>
<?php if (in_array($_smarty_tpl->getVariable('page')->value,array('home','about','howitworks','brands','faq','shipping','ambassador'))){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/imghover.js" type="text/javascript"></script>
<?php }?>
<?php if (!$_smarty_tpl->getVariable('loggedin')->value||$_smarty_tpl->getVariable('page')->value=='explorer'||$_smarty_tpl->getVariable('section')->value=='product'||$_smarty_tpl->getVariable('page')->value=='testimonials'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/typewatch.js" type="text/javascript"></script>
<?php }?>
<?php if ($_smarty_tpl->getVariable('section')->value=='checkout'||$_smarty_tpl->getVariable('section')->value=='user'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/jqueryUI.js" type="text/javascript"></script>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/jquery-select.js" type="text/javascript"></script>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/jquery-cycle.js" type="text/javascript"></script>
<?php }?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/jquery.hints.js" type="text/javascript"></script>
<?php if ($_smarty_tpl->getVariable('page')->value=='userAmbassador'||$_smarty_tpl->getVariable('page')->value=='user-ambassador'||$_smarty_tpl->getVariable('page')->value=='page-user-ambassador'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/ZeroClipboard.js" type="text/javascript"></script>
<link type="text/css" rel="stylesheet" media="all" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
media/ZeroClipboard10.swf" />
<?php }?>
<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/bezoom.js" type="text/javascript"></script>
<?php }?>
<?php if ($_smarty_tpl->getVariable('page')->value=='contact'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/textarea.js" type="text/javascript"></script>
<?php }?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
xjs/page:<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>products<?php }else{ ?><?php echo $_smarty_tpl->getVariable('page')->value;?>
<?php }?>/pf-init.js" type="text/javascript"></script>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-global.js" type="text/javascript"></script>
<?php if ($_smarty_tpl->getVariable('section')->value=='checkout'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/checkout.js" type="text/javascript"></script>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-forms.js" type="text/javascript"></script>
<?php }elseif($_smarty_tpl->getVariable('page')->value=='start'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-start.js" type="text/javascript"></script>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-explorer.js" type="text/javascript"></script>
<?php }?>
<?php if ($_smarty_tpl->getVariable('section')->value=='user'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-user.js" type="text/javascript"></script>
<?php }elseif($_smarty_tpl->getVariable('section')->value=='explorer'||$_smarty_tpl->getVariable('section')->value=='product'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/pf-explorer.js" type="text/javascript"></script>
<?php }?>
<?php if ($_smarty_tpl->getVariable('section')->value=='product'){?>
<script src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
js/colorbox-min.js" type="text/javascript"></script>
<?php }?>

<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Header.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
</head>
<body class="<?php echo $_smarty_tpl->getVariable('body_classes')->value;?>
">
	<?php $_template = new Smarty_Internal_Template('Nav.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Nav.tpl" */ ?>


<?php if (in_array($_smarty_tpl->getVariable('selected_nav')->value,array('home','about','howitworks','brands','faq','shipping','ambassador'))){?>
<div id="header">
	<?php $_template = new Smarty_Internal_Template('LoginPanel.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '11056466664e84aa9fcb21e5-21026617';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginPanel.tpl" */ ?>
	<div id="login-wrapper" class="right">
		<div id="login-tabs">
			<?php if (!$_smarty_tpl->getVariable('loggedin')->value){?>
				<a class="login" id="login-open" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
user/login" target="_self"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_existing_member_login.png" alt="Existing Members Login." /></a>
			<?php }?>
			<a class="login" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
" target="_self"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_shop_petflow_now.png" alt="Shop PetFlow Now!"></a>
		</div>

		<div class="clear"></div>
	</div>
<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginPanel.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
	<div class="logo">
		<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
"><img alt="PetFlow Food For Life! - logo" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/logo.png" /></a>
	</div>

<div id="navigation-links" class="navigation"><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
site">
<img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_home<?php echo 'home'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="74" height="33" alt="Home" class="<?php echo 'home'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
aboutus"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_about<?php echo 'about'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="103" height="33"  alt="About Us" class="<?php echo 'about'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
howitworks"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_howitworks<?php echo 'howitworks'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="134" height="33" alt="How It Works" class="<?php echo 'howitworks'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
brands"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_brands<?php echo 'brands'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="86" height="33" alt="Brands" class="<?php echo 'brands'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
faq"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_faq<?php echo 'faq'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="76" height="33" alt="FAQ" class="<?php echo 'faq'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
shipping"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_shipping<?php echo 'shipping'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="136" height="33" alt="Shipping" class="<?php echo 'shipping'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
ambassador"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/nav/nav_ambassador<?php echo 'ambassador'==$_smarty_tpl->getVariable('selected_nav')->value ? '_on' : '';?>
.png" width="130" height="33" alt="Ambassador" class="<?php echo 'ambassador'==$_smarty_tpl->getVariable('selected_nav')->value ? '' : 'navhover';?>
" /></a></div>
<div class="clear"></div>
</div>

<?php }else{ ?>

<div align="center">
	<?php $_template = new Smarty_Internal_Template('LoginBar.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '11056466664e84aa9fcb21e5-21026617';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginBar.tpl" */ ?>
<div id="loginBar-wrapper">
	<div align="center">
	<div id="loginBar">
		<div class="left">
			<?php if ($_smarty_tpl->getVariable('is_chat_available')->value){?>
				<?php echo Petflow::getChatLink('Questions? Click here for live chat');?>
 or<strong style="font-size:12px"> call 1-888-316-7297</strong>
			<?php }else{ ?>
				<a href="#">Live chat is currently unavailable.</a>
			<?php }?>
		</div>
		<div class="right">
			<?php if ($_smarty_tpl->getVariable('loggedin')->value){?>
	    		<a class="cart" href="<?php echo $_smarty_tpl->getVariable('client_url_ssl')->value;?>
checkout">My Cart (<?php echo $_smarty_tpl->getVariable('cart')->value['item_count'];?>
 item<?php if ($_smarty_tpl->getVariable('cart')->value['item_count']!=1){?>s<?php }?>)</a> 
				&nbsp;<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
">Home</a>
				| <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
user/<?php echo $_smarty_tpl->getVariable('user')->value->id;?>
/programs">My Orders</a> 
				| <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
user/<?php echo $_smarty_tpl->getVariable('user')->value->id;?>
/edit">Account Info</a> 
				| <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
logout">Log out</a>
			<?php }else{ ?>
	    		<a class="cart" href="<?php echo $_smarty_tpl->getVariable('client_url_ssl')->value;?>
checkout">View Shopping Cart</a>
					| <a id="login-open" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
user/login">Existing Member</a>
					<a id="login-close" href="#" class="hide" >X Close Login Panel</a>
			<?php }?>
		</div>
	</div>
	<div class="clear"></div>
	</div>
</div>
	<div id="page-wrapper">
	<div id="page">

	<div id="header">
		<div id="login-wrapper" class="right">
		</div>
<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/LoginBar.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
	<div class="logo">
		<a target="_self" href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
"><img height="86" alt="PetFlow Food For Life! - logo" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/headerLogo.jpg" /></a>
	</div>

<div class="navigation">
	<div id="search-wrapper">
		<form id="search-form" action="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer" method="get">
			<input type="image" value="submit" class="right search-btn" alt="Search and picture of a magnifying glass" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/search.gif" />&nbsp;
			<input type="text" class="input right" id="search" name="search" title="Type here and search Food &amp; treats" value="<?php echo $_smarty_tpl->getVariable('search_string')->value;?>
"/>
			<h1 class="white right" id="search-title">SEARCH FOOD &amp; TREATS</h1>
		</form>
	</div>
	<div class="clear"></div>
	
	<div class="right taf">
		<?php if (!in_array($_smarty_tpl->getVariable('page')->value,array('taf','tellafriend'))){?>
		<span class="smred">New:</span> 
		<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
tellafriend"><span class="blue-link">Tell a friend about PetFlow!</span></a>
		<?php }?>
	</div>
</div>
<div class="clear"></div>
</div><div><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/headerdropshadow.jpg" height="4" alt="dropshadow" border="0"/></div>
<?php }?>

<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Nav.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
	<div id="content-wrapper">
		<div style="height:580px;" class="page-explorer">
		<div style="height:580px;" id="block-views--exp-Explorer-page_1" class="block block-views region-odd odd region-count-1 count-3 with-block-editing">
 		<div style="height:580px;" class="block-inner">
		<div id="content">
            <form action="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer" accept-charset="UTF-8" method="get" id="views-exposed-form-Explorer-page-1" style="margin-top:-1px;">
                <div>
              		<?php $_template = new Smarty_Internal_Template('FilterBar.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/FilterBar.tpl" */ ?>
<?php if (!is_callable('smarty_modifier_escape')) include '/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php';
?><div class="views-exposed-form">
	<div class="views-exposed-widgets clear-block">
		<?php if (is_array($_smarty_tpl->getVariable('attributes')->value)&&!empty($_smarty_tpl->getVariable('attributes',null,true,false)->value)){?>
		<ul class="topnav">
		<?php  $_smarty_tpl->tpl_vars['label'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['name'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('drop_downs')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['label']->key => $_smarty_tpl->tpl_vars['label']->value){
 $_smarty_tpl->tpl_vars['name']->value = $_smarty_tpl->tpl_vars['label']->key;
?>
			<li class="views-exposed-widget" id="drop_container_<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
">
				<label>
					<?php echo $_smarty_tpl->tpl_vars['label']->value;?>
: <span><?php echo smarty_modifier_escape($_smarty_tpl->getVariable('sel_attrs')->value[$_smarty_tpl->tpl_vars['name']->value],'html');?>
</span>
				</label>
				<ul class="views-widget subnav">
				<?php  $_smarty_tpl->tpl_vars['nid'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['title'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('attributes')->value[$_smarty_tpl->tpl_vars['name']->value]; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['nid']->key => $_smarty_tpl->tpl_vars['nid']->value){
 $_smarty_tpl->tpl_vars['title']->value = $_smarty_tpl->tpl_vars['nid']->key;
?>
					<li<?php if (!empty($_smarty_tpl->getVariable('_get',null,true,false)->value[$_smarty_tpl->tpl_vars['name']->value])&&in_array($_smarty_tpl->tpl_vars['nid']->value,$_smarty_tpl->getVariable('_get')->value[$_smarty_tpl->tpl_vars['name']->value])){?> class="selected"<?php }?>>
						<input type="checkbox" name="<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
[]" value="<?php echo $_smarty_tpl->tpl_vars['nid']->value;?>
" id="<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
-<?php echo $_smarty_tpl->tpl_vars['nid']->value;?>
" <?php if (!empty($_smarty_tpl->getVariable('_get',null,true,false)->value[$_smarty_tpl->tpl_vars['name']->value])&&in_array($_smarty_tpl->tpl_vars['nid']->value,$_smarty_tpl->getVariable('_get')->value[$_smarty_tpl->tpl_vars['name']->value])){?> checked="checked"<?php }?> />
						<label for="<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
-<?php echo $_smarty_tpl->tpl_vars['nid']->value;?>
">
							<span class="raquo">&raquo;</span> <?php echo smarty_modifier_escape($_smarty_tpl->tpl_vars['title']->value,'html');?>

						</label>
					</li>
				<?php }} ?>
				</ul>
			</li>
		<?php }} ?>
			<li class="apply" style="width:0 !important;"><input class="explorer-update" type="image" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/explorer/update-dark.png" name="update" id="search_value" value="Update" /></li>
		</ul>
		<input type="hidden" name="search" id="attribute_form_search" value="" />
		<?php }else{ ?>no widgets<?php }?>
	</div>
</div>

<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/FilterBar.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
                </div>
                <?php $_template = new Smarty_Internal_Template('Alerts.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/../Common/Templates/Alerts.tpl" */ ?>
<?php if ($_smarty_tpl->getVariable('messages')->value){?>
<div id="alerts" class="messages">
<img class="left" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/alerts/message.png" height="22" width="25" alt="message icon" border="0"/>
<ul id="alert-list">
<?php  $_smarty_tpl->tpl_vars['alert'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('messages')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['alert']->key => $_smarty_tpl->tpl_vars['alert']->value){
?>
<li class="messages-item"><?php echo $_smarty_tpl->tpl_vars['alert']->value;?>
</li>
<?php }} ?>
</ul>
<div class="clear"></div>
</div>
<?php }?>

<?php if ($_smarty_tpl->getVariable('warnings')->value){?>
<div id="alerts" class="warnings">
<img class="left" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/alerts/warning.png" height="22" width="21" alt="message icon" border="0"/>
<ul id="alert-list">
<?php  $_smarty_tpl->tpl_vars['alert'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('warnings')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['alert']->key => $_smarty_tpl->tpl_vars['alert']->value){
?>
<li class="warnings-item"><?php echo $_smarty_tpl->tpl_vars['alert']->value;?>
</li>
<?php }} ?>
</ul>
<div class="clear"></div>
</div>
<?php }?>

<?php if ($_smarty_tpl->getVariable('errors')->value){?>
<div id="alerts" class="errors">
<img class="left" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/alerts/error.png" height="20" width="24" alt="message icon" border="0"/>
<ul id="alert-list">
<?php  $_smarty_tpl->tpl_vars['alert'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('errors')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['alert']->key => $_smarty_tpl->tpl_vars['alert']->value){
?>
<li class="errors-item"><?php echo $_smarty_tpl->tpl_vars['alert']->value;?>
</li>
<?php }} ?>
</ul>
<div class="clear"></div>
</div>
<?php }?>
<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/../Common/Templates/Alerts.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
                <div id="welcome-wrapper">
                
                    <div class="welcome-outer">
                        <div class="welcome-inner">
                            <div class="left" style="width:570px;">
                                <?php if ($_smarty_tpl->getVariable('utm_source')->value!==''&&is_array($_smarty_tpl->getVariable('utm_source')->value)){?>
                                    <?php if (isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['pages'])&&isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['pages'][$_smarty_tpl->getVariable('egCMSCurrentPage',null,true,false)->value])&&isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['pages'][$_smarty_tpl->getVariable('egCMSCurrentPage',null,true,false)->value]['content_zone_overrides']['welcome_inner_left'])){?>
                                        <?php echo $_smarty_tpl->getVariable('utm_source')->value['pages'][$_smarty_tpl->getVariable('egCMSCurrentPage')->value]['content_zone_overrides']['welcome_inner_left'];?>

                                    <?php }else{ ?>
                                        <span class="dog-lft"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/dog2.gif" alt="dog" /></span><h1 id="start-title">Welcome to PetFlow!</h1>
                                        <div class="newh2">Your trips to the store are over!</div>
                                    <?php }?>
                                <?php }else{ ?>
                                    <span class="dog-lft"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/dog2.gif" alt="dog" /></span><h1 id="start-title">Welcome to PetFlow!</h1>
                                    <div class="newh2">Your trips to the store are over!</div>
                                <?php }?>
                                <p style="font-family: Verdana,Arial,Helvetica,sans-serif; color: rgb(0, 0, 0); font-size: 15px;padding-top:15px;line-height: 22px">
                                    <div class="order-from-petflow">Order from PetFlow in 3 easy steps!</div>
                                    <span class="onetwothreestyles"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/1.gif" alt="1" /> Browse by brand below</span><br />
                                    <span class="onetwothreestyles"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/2.gif" alt="2" /> Find the items you need</span><br />
                                    <span class="onetwothreestyles"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/3.gif" alt="3" /> Setup a delivery schedule &amp; checkout</span>
                                </p>
                            </div>
                            <div id="movie-placeholder" class="right"><object style="height: 273px; width: 330px"><param name="movie" value="http://www.youtube.com/v/MTXTO_XzBnE"><param name="allowFullScreen" value="true"><param name="wmode" value="transparent"><embed src="http://www.youtube.com/v/MTXTO_XzBnE" type="application/x-shockwave-flash" wmode="transparent" allowfullscreen="true" width="330" height="273"></object></div>
                            <div class="clear"></div>
                        </div>   
                    </div> 
                    
                    <div class="browse-the-brands-outer corner-8 left">
                        <div class="browse-the-brands corner-8">
                            <div class="in-browse-the-brands txt-center">
                            PetFlow's recommended &amp; featured brands:
                            </div>
                            <div class="icons-in-browse-the-brands txt-center corner-8">
                                <?php  $_smarty_tpl->tpl_vars['brand'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('featured_brands')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['brand']->key => $_smarty_tpl->tpl_vars['brand']->value){
?>
                                    <div class="outer-image-icons-in-browse-the-brands corner-8">
                                        <span style="z-index:1000;" class="image-icons-in-browse-the-brands corner-8">
                                            <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer/<?php echo $_smarty_tpl->getVariable('brand')->value->slug;?>
">
                                                <img id="img-brand-<?php echo $_smarty_tpl->getVariable('brand')->value->nid;?>
" alt="<?php echo smarty_modifier_escape($_smarty_tpl->getVariable('brand')->value->title,'html');?>
" width="75" height="75" src="<?php echo $_smarty_tpl->getVariable('brand')->value->img_thumb;?>
" />
                                            </a>
                                        </span>
                                    </div>
                                <?php }} ?>
                            </div>
                            <div class="spacer in-browse-the-brands txt-center">
                            <a href="#brand-select" class="start-brand-select"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/showmorebrands_btn_noshadow2.gif" alt="Show More Brands" /></a>
                            </div>
                        </div>
                    </div>
                    
                    <span class="catImg"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/cat3.gif" alt="cat" /></span>
                    <div class="clear"></div>
                    
                    <div class="start-rght">
                        <div class="z5">
                            <img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/yellowscroll.gif" alt="" />
                        </div>
                        <div class="yell-banner txt-center">
                            <?php if ($_smarty_tpl->getVariable('utm_source')->value!==''&&is_array($_smarty_tpl->getVariable('utm_source')->value)){?>
                                <?php if (isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['variables'])&&isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['variables']['coupon_code'])&&isset($_smarty_tpl->getVariable('utm_source',null,true,false)->value['variables']['coupon_min_threshold'])){?>
                                    <span class="z10000">
                                        <span class="redBold">TODAY ONLY:</span> Free Shipping on <?php echo $_smarty_tpl->getVariable('utm_source')->value['variables']['coupon_min_threshold'];?>
 
                                            scheduled deliveries. Use code: <?php echo $_smarty_tpl->getVariable('utm_source')->value['variables']['coupon_code'];?>

                                    </span>
                                <?php }else{ ?>
                                    <span class="z10000">
                                        <span class="redBold">TODAY ONLY:</span> Free Shipping on $49+ scheduled deliveries. Use code: PFLW49
                                    </span>
                                <?php }?>
                            <?php }else{ ?>
                                <span class="z10000">
                                    <span class="redBold">TODAY ONLY:</span> Free Shipping on $49+ scheduled deliveries. Use code: PFLW49
                                </span>
                            <?php }?>
                        </div>
                        
                        <div class="under-yell-banner txt-center">
                            All other orders ship for just $4.95
                        </div>
                        <div class="new-skip">
                            <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer" class="skip">Skip, just show me products!</a>
                        </div>
                        <div class="clear"></div>
                    </div>
                    
                </div>
            </form>
            <div class="the-spacer"></div>
            <div class="clear"></div>
        </div>
        </div>
    	</div>
		</div>
        <div class="clear"></div>
        <div id="start-options">
            <?php $_template = new Smarty_Internal_Template('BrandSplash/Brands.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/BrandSplash/Brands.tpl" */ ?>
<?php if (!is_callable('smarty_modifier_escape')) include '/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php';
?><a name="brand-select" href=""></a>
<?php if ($_smarty_tpl->getVariable('selected_nav')->value=='brands'||$_smarty_tpl->getVariable('selected_nav')->value=='newsletter'){?>
<div id="brands-wrapper" class="blue corner-8 <?php if ($_smarty_tpl->getVariable('selected_nav')->value=='newsletter'){?>shadow<?php }?>">
<?php }else{ ?>
<div id="brands-wrapper" class="hide blue corner-8 ">
	<div id="brands-title" class="corner-8800 blue-light">
		<h1 id="browse-brands" class="text-shadow">Browse Brands (Option 2 Selected)</h1>
	</div>
<?php }?>
	<form method="get" action="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer" id="brand-select-form">
		<div class="right" id="brands-select">
			<input type="image" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/go.png" class="right" value="Go" style="margin-top: 8px; margin-right: 15px;" />

			<!-- input type="submit" class="right quicksrch_btn" value="Go" onclick='brandsForm()' style="margin-top: 8px; margin-right: 15px;" /-->

	 		<select style="float: right; margin-top: 13px; margin-right: 10px;" id="edit-brand" class="form-select" name="brands[]">
					<option selected="selected" value="">-Choose Brand-</option>
				<?php  $_smarty_tpl->tpl_vars['row'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('brands')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['row']->key => $_smarty_tpl->tpl_vars['row']->value){
?>
				<?php  $_smarty_tpl->tpl_vars['brand'] = new Smarty_Variable;
 $_from = $_smarty_tpl->tpl_vars['row']->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['brand']->key => $_smarty_tpl->tpl_vars['brand']->value){
?>
					<option value="<?php echo $_smarty_tpl->tpl_vars['brand']->value['slug'];?>
" > <?php echo $_smarty_tpl->tpl_vars['brand']->value['title'];?>
</option>
				<?php }} ?>
				<?php }} ?>
			</select><!-- end drop down for brands -->
		</div>
		<div class="clear-right"></div>

		<table id="brand-select-list">
		<tbody>
		<?php  $_smarty_tpl->tpl_vars['row'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('brands')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
 $_smarty_tpl->tpl_vars['row']->total= $_smarty_tpl->_count($_from);
 $_smarty_tpl->tpl_vars['row']->iteration=0;
if ($_smarty_tpl->tpl_vars['row']->total > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['row']->key => $_smarty_tpl->tpl_vars['row']->value){
 $_smarty_tpl->tpl_vars['row']->iteration++;
 $_smarty_tpl->tpl_vars['row']->last = $_smarty_tpl->tpl_vars['row']->iteration === $_smarty_tpl->tpl_vars['row']->total;
 $_smarty_tpl->tpl_vars['smarty']->value['foreach']['brand_loop']['last'] = $_smarty_tpl->tpl_vars['row']->last;
?>
			<tr valign="top">
			<?php  $_smarty_tpl->tpl_vars['brand'] = new Smarty_Variable;
 $_from = $_smarty_tpl->tpl_vars['row']->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['brand']->key => $_smarty_tpl->tpl_vars['brand']->value){
?>
				<td width="13%" style="v-align:center;text-align:center">
					<label for="brand-<?php echo $_smarty_tpl->tpl_vars['brand']->value['nid'];?>
">
						<img alt="<?php echo smarty_modifier_escape($_smarty_tpl->tpl_vars['brand']->value['title'],'html');?>
" src="<?php echo $_smarty_tpl->tpl_vars['brand']->value['img_thumb'];?>
" width="70" height="70" id="img-brand-<?php echo $_smarty_tpl->tpl_vars['brand']->value['nid'];?>
" />
						<br />
						<input type="checkbox" value="<?php echo $_smarty_tpl->tpl_vars['brand']->value['title'];?>
" class="brand-check" id="brand-<?php echo $_smarty_tpl->tpl_vars['brand']->value['nid'];?>
" name="brands[]"/>
					</label>
					<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer/<?php echo $_smarty_tpl->tpl_vars['brand']->value['slug'];?>
"><?php echo $_smarty_tpl->tpl_vars['brand']->value['title'];?>
</a>
				</td>
			<?php }} ?>
			</tr>
			<?php if (!$_smarty_tpl->getVariable('smarty')->value['foreach']['brand_loop']['last']){?>
				<tr><td><br /></td></tr>
			<?php }?>
		<?php }} ?>
		</tbody>
		</table>

		<div class="right start-buttons">
 			<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer"><img alt="skip" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/skip.png" /></a>
	 		<input type="image" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/show_products.png" value="Show Products" class="quicksrch" />
		</div>

		<div class="clear"></div>
	</form>

</div>

<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/BrandSplash/Brands.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
            <?php $_template = new Smarty_Internal_Template('Start/QuickSelect.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/QuickSelect.tpl" */ ?>
<a name="quick-select" href=""></a><a name="special-conditions" href=""></a>
<div id="quick-wrapper" class="hide yellow corner-8 ">
	<div id="quick-title" class="corner-8800 yellow-dark">
		<h1 id="quick-select" class="text-shadow">Quick Select (Option 1 Selected)</h1>
	</div>
    <form id="quick-select-form" action="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer" method="get">
	    <div id="pet-age" class="left">
	    	<h4>Pet Age:</h4>

			<div id="pet-age-wrapper">
			<?php  $_smarty_tpl->tpl_vars['pet'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('pets')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['pet']->key => $_smarty_tpl->tpl_vars['pet']->value){
?>
				<div class="<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
 <?php if ($_smarty_tpl->tpl_vars['pet']->value['type']=='dog'){?>left<?php }else{ ?>right<?php }?>">
					<img class="left" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/quick/<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
.png" alt="<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
" height="" width=""/>
        		    <div class="left">
						<input type="hidden" name="pet[]" id="pet-<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
-hidden" class="hidden-pet" value="<?php echo $_smarty_tpl->tpl_vars['pet']->value['id'];?>
" disabled="disabled" />
					<?php  $_smarty_tpl->tpl_vars['age_id'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['display'] = new Smarty_Variable;
 $_from = $_smarty_tpl->tpl_vars['pet']->value['ages']; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['age_id']->key => $_smarty_tpl->tpl_vars['age_id']->value){
 $_smarty_tpl->tpl_vars['display']->value = $_smarty_tpl->tpl_vars['age_id']->key;
?>
						<input type="checkbox" name="age[]" id="field-age-<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
-<?php echo $_smarty_tpl->tpl_vars['age_id']->value;?>
" value="<?php echo $_smarty_tpl->tpl_vars['age_id']->value;?>
"<?php if ($_smarty_tpl->tpl_vars['pet']->value['checked']){?> checked="checked"<?php }?> />
						<label for="field-age-<?php echo $_smarty_tpl->tpl_vars['pet']->value['type'];?>
-<?php echo $_smarty_tpl->tpl_vars['age_id']->value;?>
"><?php echo $_smarty_tpl->tpl_vars['display']->value;?>
</label>
						<div class="clr"></div>
					<?php }} ?>
					</div>
				</div>
			<?php }} ?>
			</div>
		</div>
		<div id="food-form" class="right">
	    	<h4>Choose:</h4>
			<div id="food-form-wrapper">
				<table>
					<tbody>
                	   	<?php  $_smarty_tpl->tpl_vars['row'] = new Smarty_Variable;
 $_from = $_smarty_tpl->getVariable('categories')->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['row']->key => $_smarty_tpl->tpl_vars['row']->value){
?>
            			<tr>
                	    	<?php  $_smarty_tpl->tpl_vars['cat'] = new Smarty_Variable;
 $_from = $_smarty_tpl->tpl_vars['row']->value; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
if ($_smarty_tpl->_count($_from) > 0){
    foreach ($_from as $_smarty_tpl->tpl_vars['cat']->key => $_smarty_tpl->tpl_vars['cat']->value){
?>
							<td>
								<label for="wcategory_<?php echo $_smarty_tpl->tpl_vars['cat']->value['id'];?>
"><img id="food-form-image-<?php echo $_smarty_tpl->tpl_vars['cat']->value['id'];?>
" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/start/quick/<?php echo $_smarty_tpl->tpl_vars['cat']->value['image'];?>
.png" alt="<?php echo $_smarty_tpl->tpl_vars['cat']->value['display'];?>
" border="0" /></label>
							</td>
							<td style="width:140px; height: 30px;font-size:11px">
								<input type="checkbox" name="category[]" id="wcategory_<?php echo $_smarty_tpl->tpl_vars['cat']->value['id'];?>
" value="<?php echo $_smarty_tpl->tpl_vars['cat']->value['id'];?>
"/><br />
								<label for="wcategory_<?php echo $_smarty_tpl->tpl_vars['cat']->value['id'];?>
"><?php echo $_smarty_tpl->tpl_vars['cat']->value['display'];?>
</label>
							</td>
   		            		<?php }} ?>
   	        	    	</tr>
   		            	<?php }} ?>
					</tbody>
				</table>
			</div>
			<div class="clr"></div>
		</div>
		<div class="clear"></div>
    	<div class="right start-buttons">
    		<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
explorer"><img alt="skip" height="" width="" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/skip.png" /></a>
	        <input type="image" id="quick-submit" name="quicksrch" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/buttons/show_products.png" />
		</div>
		<div class="clear"></div>
	</form>
	</div>
</div>
<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/QuickSelect.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
        </div>
    </div>

	<?php if ($_smarty_tpl->getVariable('utm_source')->value=='gen4'){?>
		<script src='http://www.adreadytractions.com/rt/294491?p=16752'></script>
	<?php }elseif($_smarty_tpl->getVariable('utm_source')->value=='gen3'){?>
		<script src='http://www.adreadytractions.com/rt/294491?p=16701'></script>
	<?php }elseif($_smarty_tpl->getVariable('utm_source')->value=='gen2'){?>
		<script src='http://www.adreadytractions.com/rt/294491?p=16691'></script>
	<?php }?>
<?php $_template = new Smarty_Internal_Template('Footer.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '15115574964e84aa9faeeb97-25162842';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.6, created on 2011-09-29 13:27:59
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Footer.tpl" */ ?>

		</div><!--end 'content-wrapper'-->
	</div><!--end 'page'-->
</div><!--end 'page-wrapper'-->
<div align="center">
	<p class="footer-shadow-up"><img src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/footer/shadow.png" alt="Footer Shadow" /></p>
	<div id="footer-wrapper">
		<div id="foot">
        	<a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
shipping">Shipping &amp; Returns Policy</a> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
privacy">Privacy Policy</a> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
terms-of-service">Terms of Service</a> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
contact">Contact Us</a> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
content/suggest-product">Suggest a Product</a> | <?php if ($_smarty_tpl->getVariable('loggedin')->value==true){?><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
user/<?php echo $_smarty_tpl->getVariable('user')->value->uid;?>
/ambassador">Ambassador</a><?php }else{ ?><a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
ambassador">Ambassador</a><?php }?> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
press">Press</a> | <a href="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
testimonials">Testimonials</a> | <a href="http://blog.petflow.com">Blog</a>
    	    <br />
            <br />
            <div class="footer-pics-wrapper corner-8">
            	<p class="footer-icon-text">Follow Us!</p>
            	<a target="_blank" href="http://www.facebook.com/petflow"><img class="in-footer-pic" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/sidebar/contact/icon_facebook.png" /></a>
                <a target="_blank" href="http://twitter.com/#!/petflow"><img class="in-footer-pic" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/sidebar/contact/icon_twitter.png" /></a>
                <a target="_blank" href="http://blog.petflow.com/?feed=rss2"><img class="in-footer-pic" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/sidebar/contact/icon_rss.png" /></a>
                <a target="_blank" href="mailto:help@petflow.com"><img class="in-footer-pic" src="<?php echo $_smarty_tpl->getVariable('rewriteBase')->value;?>
images/sidebar/contact/icon_email2.png" /></a>
            </div>
            <div class="clear"></div>
            <br />
			&copy; Copyright 2011 PetFlow.com, All Rights Reserved
		</div>
	</div>
</div>

<!-- Google Analytics -->
<script type="text/javascript">
  var _gaq = _gaq || [];
  _gaq.push(['_setAccount', 'UA-11683782-1']);
  _gaq.push(['_trackPageview']);

  (function() {
    var ga = document.createElement('script'); ga.type = 'text/javascript'; ga.async = true;
    ga.src = ('https:' == document.location.protocol ? 'https://ssl' : 'http://www') + '.google-analytics.com/ga.js';
    var s = document.getElementsByTagName('script')[0]; s.parentNode.insertBefore(ga, s);
  })();
</script>
<!-- BEGIN LivePerson Monitor. -->
	<script language="javascript"> var lpMTagConfig = {"lpServer" : "server.iad.liveperson.net","lpNumber" : "81464111","lpProtocol" : (document.location.toString().indexOf("https:")==0) ? "https" : "http"}; function lpAddMonitorTag(src){if(typeof(src)=="undefined"||typeof(src)=="object"){src=lpMTagConfig.lpMTagSrc?lpMTagConfig.lpMTagSrc:"/hcp/html/mTag.js";}if(src.indexOf("http")!=0){src=lpMTagConfig.lpProtocol+"://"+lpMTagConfig.lpServer+src+"?site="+lpMTagConfig.lpNumber;}else{if(src.indexOf("site=")<0){if(src.indexOf("?")<0)src=src+"?";else src=src+"&";src=src+"site="+lpMTagConfig.lpNumber;}};var s=document.createElement("script");s.setAttribute("type","text/javascript");s.setAttribute("charset","iso-8859-1");s.setAttribute("src",src);document.getElementsByTagName("head").item(0).appendChild(s);} if (window.attachEvent) window.attachEvent("onload",lpAddMonitorTag); else window.addEventListener("load",lpAddMonitorTag,false);</script>
<!-- END LivePerson Monitor. -->
<div id="hover-container"></div>

<?php if ($_smarty_tpl->getVariable('page')->value=='start'&&$_smarty_tpl->getVariable('utm_medium')->value=='fbpix'){?>
<script src='http://www.adreadytractions.com/rt/294491?p=16691'></script>
<?php }elseif($_smarty_tpl->getVariable('page')->value!='confirmation'&&$_smarty_tpl->getVariable('page')->value!='confirmation_one'){?>
<script src='https://www.adreadytractions.com/rt/294491?p=14471'></script>
<?php }?>
<?php if ($_smarty_tpl->getVariable('loggedin')->value==true){?>
<img height="1" width="1" src="http://a.triggit.com/px?u=68eccb251c29685d&rtv=petflow,pfsite,pfmember">
<?php }else{ ?>
<img height="1" width="1" src="http://a.triggit.com/px?u=68eccb251c29685d&rtv=petflow,pfsite,pfvisitor">
<?php }?>

<?php if ($_smarty_tpl->getVariable('is_monetate_enabled')->value){?>
<!-- Begin Monetate tag, place before end of document body. DO NOT ALTER. -->
<script type="text/javascript">
var monetateT = new Date().getTime();
if (document.location.protocol == "http:" || document.location.protocol == "https:") { document.write(unescape("%3Cscript type='text/javascript' src='" + (document.location.protocol == "https:" ? "https://s" : "http://") + "b.monetate.net/js/1/a-8c85895a/p/petflow.com/" + Math.floor(monetateT / 3600000) + "'%3E%3C/script%3E")); }
</script>
<script type="text/javascript">
if (this.monetate) { monetate.a(); }
</script>
<!-- End Monetate tag. -->
<?php }?>
<!-- Alertra Check -->
</body>
</html>
<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Footer.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>
