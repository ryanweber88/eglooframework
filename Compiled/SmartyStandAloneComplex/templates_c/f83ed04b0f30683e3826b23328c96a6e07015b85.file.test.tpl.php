<?php /* Smarty version Smarty-3.0.9, created on 2011-09-28 13:02:48
         compiled from "/tmp/test.tpl" */ ?>
<?php /*%%SmartyHeaderCode:14839286154e8353388eb394-29493254%%*/if(!defined('SMARTY_DIR')) exit('no direct access allowed');
$_smarty_tpl->decodeProperties(array (
  'file_dependency' => 
  array (
    'f83ed04b0f30683e3826b23328c96a6e07015b85' => 
    array (
      0 => '/tmp/test.tpl',
      1 => 1317160848,
      2 => 'file',
    ),
    '3c62ad5131b3a7b591a71b6c1aaac9e93e157278' => 
    array (
      0 => '/tmp/test2.tpl',
      1 => 1317160874,
      2 => 'file',
    ),
  ),
  'nocache_hash' => '14839286154e8353388eb394-29493254',
  'function' => 
  array (
  ),
  'has_nocache_code' => false,
)); /*/%%SmartyHeaderCode%%*/?>
<!---->     

<!DOCTYPE html PUBLIC "-//W3C//DTD XHTML 1.0 Transitional//EN" 
    "http://www.w3.org/TR/xhtml1/DTD/xhtml1-transitional.dtd">
<html xmlns="http://www.w3.org/1999/xhtml">
	<head>
	    <meta http-equiv="Content-Type" content="text/html; charset=utf-8" />
	    <title>eGloo | Skeleton Application</title>
	</head>
    <body>
		<h1><?php echo $_smarty_tpl->getVariable('name')->value;?>
</h1>
		<h1>eGloo Skeleton Application!</h1>

		<!--<?php $_template = new Smarty_Internal_Template('/tmp/test2.tpl', $_smarty_tpl->smarty, $_smarty_tpl, $_smarty_tpl->cache_id, $_smarty_tpl->compile_id, null, null);
$_template->properties['nocache_hash']  = '14839286154e8353388eb394-29493254';
$_tpl_stack[] = $_smarty_tpl; $_smarty_tpl = $_template;?>
<?php /* Smarty version Smarty-3.0.9, created on 2011-09-28 13:02:48
         compiled from "/tmp/test2.tpl" */ ?>

included template <?php echo $_smarty_tpl->getVariable('name')->value;?>


<?php $_smarty_tpl->updateParentVariables(0);?>
<?php /*  End of included template "/tmp/test2.tpl" */ ?>
<?php $_smarty_tpl = array_pop($_tpl_stack);?><?php unset($_template);?>-->
    </body>
</html>
