<?php
namespace eGloo\System\Server\EventMachine;

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
}