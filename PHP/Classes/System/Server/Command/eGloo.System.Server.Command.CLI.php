<?php
namespace eGloo\System\Server\Command;

/**
 * 
 * Provides base-functionality for CLI commands
 * @author Christian Calloway
 *
 */
abstract class CLI extends \eGloo\System\Server\Command { 
	
	const COMMAND_SERVER = 'server';
	const COMMAND_TASK   = 'taskstart';
	
	/**
	 * 
	 * Factory method to provide correct instantiate of command object type
	 * @param string $name
	 */
	final public static function factory($name) {
		$commandClass = ucfirst($name);
		//return new CLI\$commandClass($name);
		 
		switch ($name) { 
			case self::COMMAND_SERVER : 
				return new CLI\Server($name);
				
			case self::COMMAND_TASK : 
				return new CLI\Task($name);
		}
	}	
	
	public function execute() { 
		// capture output of parent (or really child invoking 
		// parent method and scrub 'Photon' for 'EAS'
		// TODO: This is a cheap method to accomplish this 
		// task; a more well thought out narative is in order
		ob_start();
		parent::execute();

		return preg_replace (
			'/photon/i', 'EAS', ob_get_clean()
		);
	}
	
	/**
	 * 
	 * Stores legacy parameters to provide to underlying photon objects
	 * @var string*
	 */
	protected $legacy;
}