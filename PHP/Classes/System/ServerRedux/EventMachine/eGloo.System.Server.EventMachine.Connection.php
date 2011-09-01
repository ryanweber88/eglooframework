<?php
namespace eGloo\System\Server\EventMachine;

/**
 * 
 * Represents a socket connection - is responsible for encapsulating zmq communication
 * with mongrel2 server
 * @author petflowdeveloper
 *
 */
class Connection extends \eGloo\Dialect\Object {
	
	function __construct() { 
		
	}
	
	/**
	 * 
	 * Sends payload to mongrel2 via zmq
	 * @param unknown_type $data
	 */
	public function sendData($data) { }
	
	/**
	 * 
	 * Recieves payload from mongrel2 via zmq
	 * @param unknown_type $data
	 */
	public function recieveData($data) { }
}