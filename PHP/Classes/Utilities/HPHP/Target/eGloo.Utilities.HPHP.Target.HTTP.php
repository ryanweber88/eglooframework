<?php
namespace eGloo\Utilities\HPHP\Target;

/**
 * 
 * Provides a callback interface to natively compiled smarty engine
 * @author Christian Calloway
 *
 */
abstract class HTTP extends \eGloo\Utilities\HPHP\Target { 
	
	const HOST = 'localhost';
	const CONTROLLER = 'index.php';
	const PORT = 80;
	
	/** 
	 * @param \Closure $closure
	 * @throws \eGloo\Dialect\Exception
	 */
	function __construct() { 
		
		// call parent constructor with callback to access smarty native
		parent::__construct();
		
		// using native curl methods to keep execution
		// as efficient as possible
		$this->curl = curl_init (
			'http://' . self::HOST . ':' . self::PORT . '/' . self::CONTROLLER
		);
		
		// set curl headers - check if persistent connections are default
		if ($this->curl) { 
			
		}

		// throw exception if connection failed
		else { 
			throw new \eGloo\Dialect\Exception('FAILED connection using >> ' . get_class($this));
		}
		
	}
	
	function __destruct() { 
		// close curl connection (if still open)
		curl_close($this->curl);		
	}
	
	
	/**
	 * 
	 * Override parent method to assign parameters to curl post parameters
	 */
	protected function preCall() { 
		curl_setopt($this->curl, CURLOPT_POSTFIELDS, $this->parameters);
	}
	
	/**
	 * 
	 * Provide concrete implementation of parent method - runs curl exec
	 * on address
	 */
	protected function call() { 
		return curl_exec($this->curl);
	}
	
	protected $curl;
	protected $port = self::PORT;
}