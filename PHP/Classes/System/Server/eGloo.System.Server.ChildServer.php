<?php
namespace eGloo\System\Server;

/**
 * 
 * A bit of a misnomer, the ChildServer RUNS the production server (as opposed to
 * being a child instance of the production server) within a daemonized child
 * proxy
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
}