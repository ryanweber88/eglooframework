<?php
namespace eGloo\System\Server;

/**
 * 
 * Extends base photon functionality; by-and-large, this class should remain empty
 * as eventually underlying photon components will be stripped away
 * @author Christian Calloway
 *
 */
class Base extends \photon\manager\Base { 
	
	public function info($message, $eol = PHP_EOL) { 
		return parent::info(Utilities::rebrand($message), $eol);
	}	
	
}