<?php
namespace eGloo\System\Server;

/**
 * 
 * EAS (eGloo Application Server) / Production
 * 
 * Responsible for polling 
 * @author Christian Calloway
 */
class Server extends \photon\server\Server implements \eGloo\System\Server\Servable { 
	
	/**
	 * Loads eGloo environment into persistent scope and polls for connections
	 * to config specified port
	 * @see photon\server.Server::start()
	 */
	public function start() { 
		
		// TODO : load egloo configuration into persistent scope 
		// (? should it be done here, pre or post)
		
		// run parent method to poll for connections
		parent::start();
	}
	
	/**
	 * Clean-up configuration from persistent scope and discontinue polling
	 * @see eGloo\Server.Servable::stop()
	 */
	public function stop() { 
		
	}
	
    public function registerSignals()
    {
        if (!pcntl_signal(SIGTERM, array('\eGloo\System\Server\Server', 'signalHandler'))) {
            Log::fatal('Cannot install the SIGTERM signal handler.');
            die(1);
        }
    }	
}