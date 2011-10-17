<?php
namespace eGloo\DataProcessing\DDL\Manager;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * The default entity manager; responsible for persistence context
 * and interfacing between entity calls and their associated statements
 * @author Christian Calloway
 *
 */
class Manager extends \eGloo\Dialect\Object implements ManagerInterface { 
	
	function __construct() { 

		// initialize pool
		$this->pool = new Pool();
	}
	
	
	protected $pool;
}