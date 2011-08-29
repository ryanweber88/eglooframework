<?php
namespace eGloo\System\Server;

/**
 * 
 * A bit of a misnomer, the ChildServer RUNS the production server (as opposed to
 * being a child instance of the production server) within a daemonized child
 * fork
 * @author Christian Calloway
 *
 */
class ChildServer extends \photon\manager\ChildServer implements \eGloo\Utilities\Runnable {
	
    /**
     * Runs the production server.
     */
    public function run()
    {
		// load configuration
        \photon\config\Container::load($this->getConfig());
        
        // pass server configuration to production server constructor (or empty array as default)
        $server = new \eGloo\System\Server\Server(\photon\config\Container::f('server_conf', array()));
        
        return $server->start();
    }	
    
	public function info($message, $eol = PHP_EOL) { 
		return parent::info(Utilities::rebrand($message), $eol);
	}    
}