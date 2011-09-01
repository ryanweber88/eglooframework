<?php
namespace eGloo\System\Server;

/**
 * 
 * Runs on master daemon and manages server instances
 * @author Christian Calloway
 *
 */
class Manager extends \photon\manager\ServerManager implements \eGloo\Utilities\Runnable { 
	
	public function info($message, $eol = PHP_EOL) { 
		return parent::info(Utilities::rebrand($message), $eol);
	}
	
}