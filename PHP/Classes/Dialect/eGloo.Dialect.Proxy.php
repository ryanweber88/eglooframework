<?php
namespace eGloo\Dialect;

use \eGloo\Dialect\_ClassSafe as _Class;


/**
 * Acts as a proxy, or pass through, to underlying delegated member property
 * (which itself, must be an object)
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Proxy {
	
	function __construct($mixed, $__mixed = null) {
		$arguments = array_slice(func_get_args(), 1);
		
		// first, lets determine class type, which can either be
		// a string, representing a fully qualified class name, or
		// an instance of type _Class, or callback returning
		// an instance
		if (is_string($mixed)) {
			if (class_exists($mixed)) {
				$r = new \ReflectionClass($mixed);
				$this->delegated = $r->newInstanceArgs(
					$arguments
				);
			}
			
			else {
				throw new \Exception(
					"Failed to construct {$this->ident()} because class '$mixed' does not exist"
				);
			}
		}
		
		else if ($mixed instanceof _Class) {
			$this->delegated = $mixed->instantiate(
				$arguments
			);
		}
		
		else if (is_callable($lambda = $mixed)) {
			if (is_object($o = $lambda())) {
				$this->delegated = $o;
			}
			
			else {
				throw new \Exception(
					"Failed to construct {$this->ident()} because lambda argument must return an(y) instance"
				);
			}
		}
		
		else {
			throw new \Exception(
				"Failed to construct {$this->ident()} because property '$mixed' is invalid; " .
				"it must be a string, an instance of _Class or lambda returning an instance." 
			);
		}
		
		
	}
	
	protected function evaluate($lambda) {
		// calls lambda with delegated member property as 
		// argument
		return $lambda($this->delegated);
	}
	
	public function __call($name, $arguments) {
		return $this->evaluate(function($delegated) use ($name, $arguments) {
			call_user_func_array(
				array($delegated, $name), $arguments
			);
		});
	}	
	
	public static function __callstatic($name, $arguments) {
		return $this->evaluate(function($delegated) use ($name, $arguments) {
			call_user_func_array(
				array($delegated, $name), $arguments
			);
		});	
	}	
	
	public function __get($name) {
		return $this->evaluate(function($delegated) use ($name) {
			return $delegated->$name;
		});		
	}
	
	public function __set($name, $value) {
		return $this->evaluate(function($delegated) use ($name, $value) {
			$delegated->$name = $value;
		});	
	}
	
	protected $delegated;
}