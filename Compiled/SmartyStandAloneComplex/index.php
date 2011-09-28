<?php
/**
 * A frontcontroller, or handler for requests coming into compiled template 
 * engine; avoids OOP paradigms to present most efficient possible execution
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////

const VARIABLE_PAYLOAD = 'payload';

// INI ////////////////////////////////////////////////////////////////////////

set_include_path(
	'.:./Smarty/libs'
);

// REQUIRES ///////////////////////////////////////////////////////////////////

require_once 'Smarty.class.php';

// PROPERTIES /////////////////////////////////////////////////////////////////

$smarty = new Smarty;

// SETUP SMARTY INSTANCE //////////////////////////////////////////////////////

$smarty->caching = false;
$smarty->left_delimiter  = '{';
$smarty->right_delimiter = '}';
$smarty->merge_compiled_includes = true;


// PUSH TO STDOUT /////////////////////////////////////////////////////////////

// if successful, push rendered template to stdout
if (isset($_POST[VARIABLE_PAYLOAD])) {
	
	// decode payload and assign to smarty
	$parameters = json_decode($_POST[VARIABLE_PAYLOAD]);
	$smarty->assign($parameters);
	
	//$smarty->display('/usr/lib/egloo/applications/Skeleton.gloo/InterfaceBundles/Default/XHTML/ExternalMainPage/ExternalMainPageBaseForm.tpl');
	$content = $smarty->fetch($parameters['path']);
	
	// compress content if post variable sent
	// TODO replace this with header Accept:
	//if (isset($_POST['compress'])) { 
		//$content = gzencode($content, 1);
	//}
	
	// push content to stdout
	echo $content;
}

// otherwise, send 500 response, which is used to indicate
// a general error
else { 
	header('Status: 500');
}