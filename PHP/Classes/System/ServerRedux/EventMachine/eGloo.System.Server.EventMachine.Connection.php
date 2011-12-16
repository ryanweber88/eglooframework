<?php
namespace eGloo\System\Server\EventMachine;

<<<<<<< HEAD
/**
 * 
 * Responsible for encapsulating zmq communication (both ways) between 
 * handler and mongrel2 server
 * @author Christian Calloway
 *
 */
class Connection extends \eGloo\Dialect\Object implements HandlerInterface {
	
	function __construct() {
		
		// TODO remove and place into centralized configuration - 
		// this is convenient for now
		$configuration = &\eGloo\System\Server\Configuration::instance();
		
		// instantiate zmq request/response handlers
        $this->sender_id = $configuration->handlerId;

        $ctx = new \ZMQContext();
        $this->request = $ctx->getSocket(\ZMQ::SOCKET_UPSTREAM);
        $this->request->connect($configuration->subAddress);

        $this->response = $ctx->getSocket(\ZMQ::SOCKET_PUB);
        $this->response->connect($configuration->pubAddress);
        $this->response->setSockOpt(\ZMQ::SOCKOPT_IDENTITY, $configuration->handlerId);
	}
	
	public function sendData($data, $uuid, $conn_id, $msg) {
        $header = sprintf('%s %d:%s,', $uuid, strlen($conn_id), $conn_id);
        $this->resp->send($header . " " . $msg);		
	}
	
	public function recieveData($data) { 
		return $this->request->recvmsg();
	}
	
	
	private $request;
	private $response;
=======

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
	
>>>>>>> feature/Server
}