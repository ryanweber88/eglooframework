<?php
/**
 * A frontcontroller, or handler for requests coming into compiled template engine
 */

set_include_path(
	'.:./Smarty/libs'
);

require_once 'Smarty.class.php';

$smarty = new Smarty;
$smarty->caching = false;
//$smarty->force_compile = true;
//$smarty->compile_dir = '.';

$smarty->assign('name', 'fucker');
$smarty->display('/tmp/test.tpl');