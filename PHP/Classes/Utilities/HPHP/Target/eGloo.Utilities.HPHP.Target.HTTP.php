<?php
namespace eGloo\Utilities\HPHP\Target;

/**
 * 
 * Provides a callback interface to natively compiled smarty engine
 * @author Christian Calloway
 *
 */
abstract class HTTP extends \eGloo\Utilities\HPHP\Target { 
	
	const HOST = '127.0.0.1';
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
		//$application = &\eGloo\System\Server\Application::instance();
		
		$this->curl =  curl_init ($this->uri());
				
		// set curl headers - check if persistent connections are default
		if ($this->curl) { 
			curl_setopt($this->curl, CURLOPT_RETURNTRANSFER, true);
			curl_setopt($this->curl, CURLOPT_POST, true);
			curl_setopt($this->curl, CURLOPT_SSL_VERIFYPEER, false);
    		curl_setopt($this->curl, CURLOPT_SSL_VERIFYHOST, false);
    		curl_setopt($this->curl, CURLOPT_HEADER, false);
    		//curl_setopt($this->curl, CURLOPT_VERBOSE, true); 
    		//curl_setopt($this->curl, CURLOPT_IPRESOLVE, CURL_IPRESOLVE_V4);
    		curl_setopt($this->curl, CURLOPT_HTTPHEADER, array(
    			'Expect:',
    			//'User-Agent: curl/7.19.7 (x86_64-pc-linux-gnu) libcurl/7.19.7 OpenSSL/0.9.8k zlib/1.2.3.3 libidn/1.15'    		
    		));
			
		}

		// throw zasexception if connection failed
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
		// TODO calling static to constant?
		return 'http://' . self::HOST . ':' . static::PORT . '/' . self::CONTROLLER;
		
		//return 'http://localhost:95/index.php?path=' . $this->parameters['path'];
	}
	
	
	/**
	 * 
	 * Override parent method to assign parameters to curl post parameters
	 */
	protected function preCall() { 
		// sets post fields; for whatever reason, passing as array
		// sends data as multi-part/formdata, which is sig slower 
		// than form urlenceded
		curl_setopt($this->curl, CURLOPT_POSTFIELDS, $this->buildPostQuery());
	}
	
	/**
	 * 
	 * Provide concrete implementation of parent method - runs curl exec
	 * on address
	 */
	protected function call() { 
		$content = curl_exec($this->curl);
		
		// check if an error was generated on curl request
		if (curl_errno($this->curl)) { 
			return false;
		}
				
		return $content;
	}
	
	protected function buildPostQuery($queryString = null) { 
		// TODO turn this into recursive function
		// builds post query string, taking into account
		// urlencoding, arrays and objects
		
		$pieces = array();
		
		foreach ($this->parameters as $key => $value) { 
			// handling string value is straight forward
			if (!is_object($value) && !is_array($value)) { 
				$pieces[] = "$key=" . urlencode($value);
			}	
			
			// if value is array 
			/*
			else if (is_array($value)) { 
				$key    = $key . '[]';
				$values = &$value;
				
				foreach ($values as $value) { 
					
				}
			}
			
			// check if object implement tostring method; otherwise
			// fail this value
			else { 
				if 
			}
			*/
			
		}
		
		return implode('&', $pieces);
	}
	
	protected $curl;
	protected $port = self::PORT;
}