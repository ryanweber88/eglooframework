<?php
namespace eGloo\Utilities\HPHP\Target;

/**
 * 
 * Provides a callback interface to natively compiled smarty engine
 * @author Christian Calloway
 *
 */
abstract class HTTP extends \eGloo\Utilities\HPHP\Target { 
	
	use \eGloo\System\Server\Context\ContextTrait;
	
	const HOST = '127.0.0.1';
	const CONTROLLER = 'index.php';
	const PORT = 80;
	const VARIABLE_PAYLOAD = 'payload';
	
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
	
	protected function buildPostQuery() { 
		// TODO log instances that objects are passed to template
	
		// log instances where objects are passed directly to template 
		$logger = static::contextApplication()->retrieve('logger.smarty.object');

		if (\eGlooConfiguration::STAGING || \eGlooConfiguration::DEVELOPMENT) { 
			$template  = $this->parameters['path'];
			$offenders = implode(',', $this->objectOffenders(
				$this->parameters
			));
			
						
			$logger->log(
				"OBJECT offender found @ $template >>> $offenders"
			);
		}
		
		// encode parameters and set payload
		return self::VARIABLE_PAYLOAD . '=' . json_encode($this->parameters);
	}
	
	
	final private function objectOffenders($whatIsIt, array &$objects = array()) { 
		// recursively search for object within parameters
		if (is_object($whatIsIt)) { 
			$objects[] = get_class($whatIsIt);
		}
		
		else if (is_array($whatIsIt)) { 
			foreach ($whatIsIt as $value) { 
				$this->objectOffenders($value, $objects);
			}
		}
		
		 
		return $objects;
		
	}
	
	
	
	protected $curl;
	protected $port = self::PORT;
}