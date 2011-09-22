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
		//$application = \eGloo\Dialect\
		$this->curl = curl_init ($this->uri());
				
		// set curl headers - check if persistent connections are default
		if ($this->curl) { 
			curl_setopt($this->curl, CURLOPT_RETURNTRANSFER, true);
		}

		// throw exception if connection failed
		else { 
			throw new \eGloo\Dialect\Exception('FAILED connection using >> ' . get_class($this));
		}
		
	}
	
	function __destruct() { 
		// close curl connection (if still open)
		//curl_close($this->curl);		
	}
	
	/**
	 * 
	 * Enter description here ...
	 */
	protected function uri() { 
		//return 'http://' . self::HOST . ':' . static::PORT . '/' . self::CONTROLLER;
		
		return 'http://localhost:95/index.php';
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
		//$content = curl_exec($this->curl);
		return file_get_contents($this->uri());
		//return $GLOBALS['payload'];
		
		
		// check if an error was generated on curl request
		if (curl_errno($this->curl)) { 
			return false;
		}
				
		return $content;
	}
	
	protected $curl;
	protected $port = self::PORT;
}