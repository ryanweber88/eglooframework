<?php /* Smarty version Smarty 3.1.0, created on 2011-09-21 18:16:50
         compiled from "/usr/lib/egloo/applications/Administration.gloo/InterfaceBundles/Default/XHTML/Admin/CustomerService/CouponEdit.tpl" */ ?>
<?php /*%%SmartyHeaderCode:16234868894e7a6252ab5cb3-51314835%%*/if(!defined('SMARTY_DIR')) exit('no direct access allowed');
$_valid = $_smarty_tpl->decodeProperties(array (
  'file_dependency' => 
  array (
    '5540d258c378af5e2dc4562d9683f703e85eb175' => 
    array (
      0 => '/usr/lib/egloo/applications/Administration.gloo/InterfaceBundles/Default/XHTML/Admin/CustomerService/CouponEdit.tpl',
      1 => 1314118028,
      2 => 'file',
    ),
  ),
  'nocache_hash' => '16234868894e7a6252ab5cb3-51314835',
  'function' => 
  array (
  ),
  'variables' => 
  array (
    'coupon' => 0,
    'coupon_data' => 0,
    'key' => 0,
    'name' => 0,
  ),
  'has_nocache_code' => false,
  'version' => 'Smarty 3.1.0',
  'unifunc' => 'content_4e7a6252b528e',
),false); /*/%%SmartyHeaderCode%%*/?>
<?php if ($_valid && !is_callable('content_4e7a6252b528e')) {function content_4e7a6252b528e($_smarty_tpl) {?><form action="" method="post" />
	<div class="coupon-edit-left left">
    	<div class="coupon-edit-info-wrapper corner-8">
            <div class="coupon-edit-header">Info</div>
            <!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->
                <div class="left">Id</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['cid'];?>
--></div><br /><br />
            <!--<?php }?>-->
            <div class="left">Code</div><div class="right"><input type="text" name="coupon[code]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['code'];?>
-->" /></div><br /><br />
            <div class="left">Customer Description</div><div class="right"><input type="text" name="coupon[description]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['description'];?>
-->" /></div><br /><br />
            <div class="left">Admin-only description</div><div class="right"><input type="text" name="coupon[description_long]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['description_long'];?>
-->" /></div><br />
            <!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->
                <br /><div class="left">Entity (not used)</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getLevelEntityString();?>
--></div><br /><br />
                <div class="left">Line item</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getLevelLineItemString();?>
--></div>
                <div class="clear"></div>
            <!--<?php }else{ ?>-->
                <br /><div class="left">For Entity</div>
                <div class="right">
                    <select name="coupon[level_entity]">
                        <!--<?php  $_smarty_tpl->tpl_vars['name'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['key'] = new Smarty_Variable;
 $_from = PetflowCoupon::$levelEntityEnum; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
$_loop = false;
foreach ($_from as $_smarty_tpl->tpl_vars['name']->key => $_smarty_tpl->tpl_vars['name']->value){
$_loop = true;
 $_smarty_tpl->tpl_vars['key']->value = $_smarty_tpl->tpl_vars['name']->key;
?>--><option value="<!--<?php echo $_smarty_tpl->tpl_vars['key']->value;?>
-->"><!--<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
--></option><!--<?php } ?>-->
                    </select>
                </div><br /><br />
                <div class="left">For line item</div>
                <div class="right">
                    <select name="coupon[level_line_item]">
                        <!--<?php  $_smarty_tpl->tpl_vars['name'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['key'] = new Smarty_Variable;
 $_from = PetflowCoupon::$levelLineItemEnum; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
$_loop = false;
foreach ($_from as $_smarty_tpl->tpl_vars['name']->key => $_smarty_tpl->tpl_vars['name']->value){
$_loop = true;
 $_smarty_tpl->tpl_vars['key']->value = $_smarty_tpl->tpl_vars['name']->key;
?>--><option value="<!--<?php echo $_smarty_tpl->tpl_vars['key']->value;?>
-->"><!--<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
--></option><!--<?php } ?>-->
                    </select>
                </div>
                <div class="clear"></div>
            <!--<?php }?>-->
        </div> <!-- Info Wrapper -->
        
        <div class="clear"></div>
        
        <div class="coupon-edit-interval-wrapper corner-8">
            <div class="coupon-edit-header">Interval</div> 
            <div class="left">Start date</div>
            <div class="right"><input type="text" name="coupon[start_date]" id="start_date" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['start_date'];?>
-->" /></div><br /><br />
            <div class="clear"></div>
            <div class="left">Expiration date</div>
            <div class="right"><input type="text" name="coupon[expiration_date]" id="end_date" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['expiration_date'];?>
-->" /></div>
            <div class="clear"></div>
        </div> <!-- Interval Wrapper -->
        
		<div class="clear"></div>
		<!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->
        <div class="coupon-edit-statistics-wrapper corner-8">
            <div class="coupon-edit-header">Statistics</div>
            <div class="left">Users total</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getTotalUserCount();?>
--></div><br /><br />
            <div class="left">Programs total</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getTotalProgramCount();?>
--></div><br /><br />
            <div class="left">Recurring programs</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getRecurringProgramCount();?>
--></div><br /><br />
            <div class="left">Non recurring programs</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getNonRecurringProgramCount();?>
--></div><br /><br />
            <div class="left">Orders total</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getTotalUseCount();?>
--></div><br /><br />
            <div class="left">Order average</div><div class="right">$<!--<?php echo number_format($_smarty_tpl->tpl_vars['coupon']->value->getAverageOrderPrice(),2);?>
--></div><br /><br />
            <div class="left">Attachments with orders</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getCheckedOutProgramCount();?>
--></div><br /><br />
            <div class="left">Attachments total</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getAssociationCount();?>
--></div><br /><br />
            <div class="left">Stacks with (not used)</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getStackableWith();?>
--></div>
            <div class="clear"></div>
        </div> <!-- Statistics Wrapper -->
		<!--<?php }else{ ?>-->
		<!--<?php }?>-->
	</div><!-- Left -->
    
	<div class="coupon-edit-right right">
		<div class="clear"></div>
		<div class="coupon-edit-constraints-wrapper corner-8">
        	<div class="coupon-edit-header">Constraints</div>
            <div class="left">Max uses</div><div class="right"><input type="text" name="coupon[max_count]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['max_count'];?>
-->" /></div><br /><br />
            <div class="left">Max distinct users</div><div class="right"><input type="text" name="coupon[max_user_count]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['max_user_count'];?>
-->"/></div><br /><br />
            <div class="left">Max programs per user</div><div class="right"><input type="text" name="coupon[max_program_count]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['max_program_count'];?>
-->"/></div><br /><br />
            <div class="left">Max orders per program</div><div class="right"><input type="text" name="coupon[max_order_count]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['max_order_count'];?>
-->"/></div><br /><br />
            <div class="left">Weight (lower weight wins)</div><div class="right"><input name="coupon[weight]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['weight'];?>
-->" /></div>
            <div class="clear"></div>
		</div><!-- Constraints Wrapper -->
        
		<div class="clear"></div>
        
		<div class="coupon-edit-coupon-value-wrapper corner-8">
        	<div class="coupon-edit-header">Coupon Value</div>
            <!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->
                <div class="left">Discount Type</div><div class="right"><!--<?php echo $_smarty_tpl->tpl_vars['coupon']->value->getDiscountTypeString();?>
--></div><br /><br />
            <!--<?php }else{ ?>-->
                <div class="left">Discount Type</div>
                <div class="right">
                    <select name="coupon[discount_type]">
                        <!--<?php  $_smarty_tpl->tpl_vars['name'] = new Smarty_Variable;
 $_smarty_tpl->tpl_vars['key'] = new Smarty_Variable;
 $_from = PetflowCoupon::$discountTypeEnum; if (!is_array($_from) && !is_object($_from)) { settype($_from, 'array');}
$_loop = false;
foreach ($_from as $_smarty_tpl->tpl_vars['name']->key => $_smarty_tpl->tpl_vars['name']->value){
$_loop = true;
 $_smarty_tpl->tpl_vars['key']->value = $_smarty_tpl->tpl_vars['name']->key;
?>--><option value="<!--<?php echo $_smarty_tpl->tpl_vars['key']->value;?>
-->"><!--<?php echo $_smarty_tpl->tpl_vars['name']->value;?>
--></option><!--<?php } ?>-->
                    </select>
                </div><br /><br />
            <!--<?php }?>-->

            <div class="left">Discount Value</div><div class="right"><input type="text" name="coupon[discount_value]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['discount_value'];?>
-->"/></div><br /><br />
            <div class="left">Minimum amount</div><div class="right"><input type="text" name="coupon[min_threshold]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['min_threshold'];?>
-->"/></div><br />
			<input type="hidden" name="coupon[cid]" value="<!--<?php echo $_smarty_tpl->tpl_vars['coupon_data']->value['cid'];?>
-->" />
			<div class="coupon-edit-submit"><input type="submit" name="coupon[submit]" class="submit" value="<!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->Edit coupon<!--<?php }else{ ?>-->Create Coupon<!--<?php }?>-->" /></div>
			<!--<?php if ($_smarty_tpl->tpl_vars['coupon']->value){?>-->
				<input type="submit" name="coupon[duplicate]" class="submit" value="Duplicate Coupon" />
			<!--<?php }?>-->
		</div><!-- Coupon Value Wrapper -->
	</div><!-- Right -->
</form><?php }} ?>