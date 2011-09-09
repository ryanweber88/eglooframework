<?php
namespace eGloo\System\Server\Action\Middleware;

/**
 * 
 * Represents a user session within stateful application
 * @author Christian Calloway
 *
 */
abstract class Session extends \photon\session\Session implements \eGloo\System\Server\Contextable { 
	
	function __construct() { 
		// instantiate context for session lifetime
		$this->context = new \eGloo\System\Server\Context($this);
	}
	
	function __construct() { 
		// clean-up context store
	}	
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server.Contextable::context()
	 */
	public function &context() { 
		return $context;
	}
	
	protected $context;
}