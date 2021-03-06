<?php
/**
 * A frontcontroller, or handler for requests coming into compiled template 
 * engine; avoids OOP paradigms to present most efficient possible execution
 * @author Christian Calloway
 */

// CONSTANTS //////////////////////////////////////////////////////////////////


// INI ////////////////////////////////////////////////////////////////////////

set_include_path(
	'.:./Smarty/libs'
);

// REQUIRES ///////////////////////////////////////////////////////////////////

require_once 'Smarty.class.php';

// PROPERTIES /////////////////////////////////////////////////////////////////

$exclude = array(
	'path',
	'cache_id'
);

// SETUP SMARTY INSTANCE //////////////////////////////////////////////////////

$smarty = new Smarty;
$smarty->caching = false;

// INSPECT/ASSIGN POST PARAMETERS /////////////////////////////////////////////

foreach($_POST as $key => $value) { 
	if (!in_array($key, $exclude)) { 
		$smarty->assign($key, $value);
	}
}

// PUSH TO STDOUT /////////////////////////////////////////////////////////////

// if successful, push rendered template to stdout
if (true) {
	$content = $smarty->fetch('/usr/lib/egloo/applications/Skeleton.gloo/InterfaceBundles/Default/XHTML/ExternalMainPage/ExternalMainPageBaseForm.tpl');
	//$content = $smarty->fetch($_POST['path'], $_POST['cache_id']);
	
	// compress content if post variable sent
	if (isset($_POST['compress'])) { 
		$content = gzencode($content, 1);
	}
	
	// push content to stdout
	echo $content;
}

// otherwise, send 500 response, which is used to indicate
// a general error
else { 
	header('Status: 500');
}
