<?php
namespace eGloo\System\Server\Context;

use \eGloo\System\Server;

/**
 * 
 * Provides interface by which all context-oriented objects
 * must adhere too
 * @author Christian Calloway
 *
 */
interface ContextInterface { 
	
	/**
	 * 
	 * Retrieve or set a context value
	 */
	public function &context(Server\Context $context = null);
	
}