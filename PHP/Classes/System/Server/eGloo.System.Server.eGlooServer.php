<?php
namespace eGloo\System\Server;

/**
 * 
 * EAS (eGloo Application Server) / Production
 * 
 * Responsible for polling 
 * @author Christian Calloway
 */
class eGlooServer extends \photon\server\Server implements \eGloo\Server\Servable { 
	
	/**
	 * Loads eGloo environment into persistent scope and polls for connections
	 * to config specified port
	 * @see photon\server.Server::start()
	 */
	public function start() { 
		
		// TODO : load egloo configuration into persistent scope
		
		// run parent method to poll for connections
		parent::start();
	}
	
	/**
	 * Clean-up configuration from persistent scope and discontinue polling
	 * @see eGloo\Server.Servable::stop()
	 */
	public function stop() { 
		
	}
}