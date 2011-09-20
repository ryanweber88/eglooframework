<?php
namespace eGloo\System\Server\EventMachine;


/**
 * 
 * Represents a connection within EventMachine run loop; provides communication between
 * mongrel2 and external application
 * @author petflowdeveloper
 *
 */
class Connection extends \eGloo\System\Server\EventMachine\Connection implements \eGloo\System\Server\EventMachine\HandlerInterface { 
	
	
	function __construct($handlerId, $requestAddress, $responseAddress) { 
		
		// handlerId unique identifies the handler (this) to mongrel
        $this->handlerId = $handlerId;

        // setup zmq context using constructor parameters
        $ctx = new \ZMQContext();
        $this->socketRequest = $ctx->getSocket(\ZMQ::SOCKET_UPSTREAM);
        $this->socketRequest->connect($requestAddress);

        $this->socketResponse = $ctx->getSocket(\ZMQ::SOCKET_PUB);
        $this->socketResponse->connect($responseAddress);
        $this->socketResponse->setSockOpt(\ZMQ::SOCKOPT_IDENTITY, $sender_id);		
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
		
	protected $handlerId;
	protected $socketRequest;
	protected $socketResponse;
	
}