<?php
namespace eGloo\System\Server\Context\Observer;

/**
 * 
 * Responsible for monitoring session viability (does a session user id exist) 
 * and expiring data, should that data no longer exist
 * @author Christian Calloway
 *
 */
class Session extends \eGloo\Dialect\Object implements\SplObserver { 
	
	function __construct() {
		// pass
	}
	
	public function update(\SplSubject $attribute) { 
		// pass
		
	}
	
}