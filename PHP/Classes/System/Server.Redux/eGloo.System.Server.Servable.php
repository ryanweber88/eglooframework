<?php
namespace eGloo\System\Server;

/**
 * 
 * Provides interface to  any server implementation
 * @author Christian Calloway
 *
 */
interface Servable { 
	/**
	 * 
	 * Start server instance and associated build-up tasks
	 */
	public function start();
	
	/**
	 * 
	 * Stop server instance and associated 
	 */
	public function stop();
}