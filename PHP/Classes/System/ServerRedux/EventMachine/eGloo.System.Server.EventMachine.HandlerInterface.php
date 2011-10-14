<?php
namespace eGloo\System\Server\EventMachine;

/**
 * Defines/Imposes basic server behavior so any arbitrary class can act as 
 * server handler
 */
interface HandlerInterface { 
	
	/**
	 * 
	 * Send payload
	 * @param unknown_type $data
	 */
	public function sendData($data);
	
	/**
	 * 
	 * Recieve payload
	 * @param unknown_type $data
	 */
	public function recieveData($data);
	
}