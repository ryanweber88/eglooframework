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
	
	/**
	 * 
	 * Factory method to provide correct instantiate of command object type
	 * @param string $name
	 */
	final public static function factory($name) { 
		switch ($name) { 
			case self::COMMAND_SERVER : 
				return new CLI\Server($name);
		}
	}	
	
	/**
	 * 
	 * Stores legacy parameters to provide to underlying photon objects
	 * @var string*
	 */
	protected $legacy;
}