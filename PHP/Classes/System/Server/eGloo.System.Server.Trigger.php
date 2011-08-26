<?php
namespace eGloo\Server;

/**
 * 
 * Triggers new eGloo Application Server instances 
 * @author Christian Calloway
 *
 */
class Trigger implements \eGloo\Utilities\Runnable { 
	
	function __construct() { 

	
	}
	
	public function run() { 
		$m = new \photon\manager\ServerManager($params);
        exit($m->run());	
	}
}