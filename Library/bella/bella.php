<?php
namespace Bella;

require_once 'treemanager.php';
require_once 'selectmanager.php';
require_once 'table.php';
require_once 'nodes.php';
require_once 'visitors.php';

/**
 * Strips fucking namespace off of class
 */
function get_class($instance) {
	$tokens = explode('\\', \get_class($instance));
	return $tokens[count($tokens)-1];
}