<?php
namespace eGloo\Utilities\HPHP\Target\HTTP;

/**
 * 
 * Provides a callback interface to natively compiled smarty engine
 * @author Christian Calloway
 *
 */
class Smarty extends \eGloo\Utilities\HPHP\Targe\HTTP { 

	const PORT = 95;
	
	function __construct() { 
		// call parent constructor with callback to access smarty native
		parent::__construct();		
		
		// TODO change to configuration
		$this->port = self::PORT;
	}
	
	
	
}