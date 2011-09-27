<?php /* Smarty version Smarty-3.0.6, created on 2011-09-26 19:26:25
         compiled from "/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/StartTest.tpl" */ ?>
<?php /*%%SmartyHeaderCode:14749896164e810a2117d708-26839698%%*/if(!defined('SMARTY_DIR')) exit('no direct access allowed');
$_smarty_tpl->decodeProperties(array (
  'file_dependency' => 
  array (
    'aa4c1df37173fa133641e1fa9c6e008f83554f47' => 
    array (
      0 => '/usr/lib/egloo/applications/Client.gloo/InterfaceBundles/Default/XHTML/Start/StartTest.tpl',
      1 => 1314118029,
      2 => 'file',
    ),
  ),
  'nocache_hash' => '14749896164e810a2117d708-26839698',
  'function' => 
  array (
  ),
  'has_nocache_code' => false,
)); /*/%%SmartyHeaderCode%%*/?>
<?php if (!is_callable('smarty_modifier_escape')) include '/home/petflowdeveloper/Develop/eglooframework/Library/Smarty3/libs/plugins/modifier.escape.php';
?>

<?php $_template = new Smarty_Internal_Template('Header.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->assign('title','PetFlow | Get Started'); echo $_template->getRenderedTemplate();?><?php $_template->updateParentVariables(0);?><?php unset($_template);?>
</head>
<body class="<?php echo $_smarty_tpl->getVariable('body_classes')->value;?>
">
	<?php $_template = new Smarty_Internal_Template('Nav.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
 echo $_template->getRenderedTemplate();?><?php $_template->updateParentVariables(0);?><?php unset($_template);?>
