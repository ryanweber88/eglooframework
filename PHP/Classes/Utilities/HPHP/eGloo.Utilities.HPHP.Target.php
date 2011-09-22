<?php
namespace eGloo\Utilities\HPHP;

/**
 * 
 * A wrapper to interface hiphop compiled programs
 * @author Christian Calloway
 *
 */
abstract class Target extends \eGloo\Dialect\Object { 

	use \eGloo\Utilities\ParametersTrait;
	
	const DIR_ROOT = './Compiled';
	const FILE_BINARY = './bin/program';
	const FILE_COMPILE = './compile';
	
		

	/**
	 * 
	 * Flags compilation process
	 */
	public static function compile() { 
		// TODO place this into a fork? memory concerns? if flag process is suitably in 
		// a different context, we shouldn't have to worry about forking here
		exec (
			\eGlooConfiguration::getFrameworkRootPath() . '/' . $this->root() . '/' . self::FILE_COMPILE
		);
	}
	
	/**
	 * 
	 * Performs interface with compiled program; provides closure
	 * to allow for specific handling of; method allows for callbacks
	 * for different conditions: passed as array of closure, for a fail/pass
	 * condition, and passed as closure, run regardless of pass/fail
	 * @param mixed $handlers
	 */
	public function execute($handler = null) {
		// perform pre-execute routines before calling target directly
		$this->preCall();
		
		// call handler with instance of self and retrieve
		// value, if any, from callback
		$result = $this->postCall($this->call());
		$status = ($result !== false);
				
		// check handlers to determine if callback is required
		if (!is_null($handler)) { 
			if (is_array($handler)) { 
				if (isset($handler[$status]) && $handler[$status] instanceof \Closure) { 
					return $handler[$status]($result, $this);
				}

			}
			
			else if ($handler instanceof \Closure) { 
				return $handler($result, $this);
			}
		}
		
		return $result;
		
	}
	

	
	/**
	 * 
	 * Perform any steps required before callback; since this is optional
	 * a stub method is provided for inheriting classes
	 */
	protected function preCall() { }
	
	protected function postCall($mixed) {
		return $mixed;
	}
	
	/**
	 * 
	 * Make specific call to target
	 */
	abstract protected function call();
	
	/**
	 * 
	 * Returns relative path to binary root directory
	 * @param  string $path
	 * @return string
	 */
	protected function root($path = null) {
		return self::DIR_ROOT . "/$path";
	}
	
	/**
	 * 
	 * Returns relative path to binary executable
	 */
	protected function binary() { 
		return $this->root() . '/' . self::BINARY;
	}		
	
	
	
	protected $handler;
}