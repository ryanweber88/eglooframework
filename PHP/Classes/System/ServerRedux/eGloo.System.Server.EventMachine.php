<?php
namespace eGloo\System\Server;

/**
 * 
 * This is a take on Ruby's EventMachine architecture, or Python's Twisted - the caveat though, is that a server and associated
 * socket connections are not created/handled (the mechanism for that is handled by mongrel2 + 0MQ); requires php 5.4, as
 * mixins/traits and true closures (object-context aware) are needed as syntax tries to parrallel ruby as close as possible - 
 * because blocks are not available, lambda's of type Closure are required within method signature params. Since blocks
 * are optional, all closure params will be defined default null 
 * 
 * I prefer camelCase to underscore, so there will be a slight syntactical difference between the implementations (aside
 * from the obvious explicit differences)
 * 
 * Because we are programming to Ruby standard, there will be no usage of abstracts or interfaces, as much as it
 * pains the inner java enthusiast
 * 
 * @author Christian Calloway
 *
 */
class EventMachine extends \eGloo\Dialect\Object { 
	
	const LOCALHOST = '127.0.0.1';
	
	/**
	 * 
	 * Runs the EventMachine (ie an continuous loop) 
	 * @param Closure $lambda
	 */
	static public function run(\Closure $lambda = null) { 
		
		// start continuous loop; loop can be controlled (exited) via run property within closure
		// static::$run = true;
		
		while (static::$run) {
			if (is_callable($lambda)) { 
				$lambda();
			}
		}
	}
		
	/**
	 * 
	 * Stops the event machine
	 */
	static public function stop() {
		
	}
	
	/**
	 * 
	 * Starts EM server, listens on specified port
	 * @param integer $port
	 * @param mixed $mixed
	 * @throws EventMachine\Exception
	 * @return EventMachine\Server
	 */
	static public function startServer(EventMachine\Connection $connection, \Closure $handlerConnection = null) { 
		// starts listening on specified port, throw exception if not available
		// @todo check port availability
					
		// instantiate connection 
		$connection = new \eGloo\System\Server\EventMachine\Connection();
		
		if (!is_null($handlerConnection)) { 
			$connection = $handlerConnection($connection);
		}
		
		static::$connection = $connection;
	}
	
	/** @var boolean */
	private static $run = true;
	
	/** @var EventMachine\Connection */
	private static $connection;
	

}