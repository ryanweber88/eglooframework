<?php
namespace eGloo\System\Server;

/**
 * 
 * Again, a bit of a misnomer - CommandServer is responsible for sending commands to the
 * server manager, which in turn relays those commands to the production server instances
 * @author Christian Calloway
 *
 */
class CommandServer extends \photon\manager\CommandServer { 
	
	
	/**
	 * Overrides base functionality to correctly brand
	 * @see photon\manager.Base::info()
	 */
	public function info($message, $eol = PHP_EOL) { 
		return parent::info(Utilities::rebrand($message), $eol);
	}
	

}