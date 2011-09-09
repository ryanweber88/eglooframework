<?php
namespace eGloo\System\Server;

/**
 * 
 * Represents 'context' within stateful application : Request, Application, Server, Session etc;
 * used to store attribute values to that context; this was fully inspired by java servlet handling
 * of context state
 * 
 * Wraps Context/Attribute* and breaks law of demeter a bit, but couldn't find a more elegant solution
 * outside of writing a lot of wrapper methods
 * @author Christian Calloway
 *
 */
use eGloo\System\Server\Context\Attribute;

use eGloo\System\Server\Context\Observer\Cache;

class Context extends \eGloo\Dialect\Object { 
	
	function __construct(&$owner) { 
		// add reference to context's owner: application, request, session, etc
		//$this->owner = &$owner;
		
	}
	
	/**
	 * 
	 * Enter expiration for a bound value 
	 * @param string  $key
	 * @param integer $expires
	 */
	public function &expire($key, $expires) { 
		if ($this->exists($key)) { 
			$this->store[$key]->attach(new Context\Observer\AttributeCache(
				$expires
			));
		
			return $this;
		}
		
		// throw exception if attempting to expire invalid key
		throw \eGloo\Dialect\Exception("Attempted to expire invalid attribute >> $key");
	}
	
	/**
	 * 
	 * Retrieve binded value; a closure is provided to allow for setting
	 * of default value
	 * @param string $key
	 * @return mixed
	 */
	public function retrieve($key, \Closure $lambda = null) { 
		if ($this->exists($key)) { 
			return $this->store[$key]->value();
		}
		
		// else we call lambda with $key, and store value into 
		else if (is_callable($lambda)) { 
			if (!is_null($value = $lambda($this))) { 
				$this->bind($key, $value);
			}

			// retrieve value as it has been either implicitly bound 
			// (within lambda) or explicitly (by return value of lambda)
			return $this->retrieve($key);
		}
		
		// throw exception if attempting to retrieve value that does not exist and
		// a default "setter" closure is not provided; the reason this is done is
		// to enforce the usage of 'exists' method and if retrieve is called, then
		// a default closure must be provided
		throw \eGloo\Dialect\Exception(
			"Attempted to access invalid storage key w/o providing default closure >> $key"
		);
	}
	
	/**
	 * 
	 * Binds value to context 
	 * @param string $key
	 * @param mixed  $value
	 */
	public function &bind($key, $value, $expires = null) {
		$this->store[$key] = new Context\Attribute(
			$key, $value, $this
		);
		
		if (!is_null($expires)) { 
			$this->expire($key, $expires);	
		}
				
		return $this;
	}
	
	/**
	 * Unbinds value from context
	 */
	public function &unbind($key) { 
		if ($this->exists($key)) { 
			unset($this->store[$key]);			
		}
		
		return $this;
	}
	
	/**
	 * 
	 * Check if a value, idenified by key, exists within context
	 */
	public function exists($key) { 
				
		if (in_array($key, array_keys($this->store))) { 
			// call notify on attributes observers, should they exist
			$this->store[$key]->notify();
			
			// determine if value @ $key index exists/isset
			return isset($this->store[$key]);
		}
		
		
		// otherwise return false to caller
		return false;
	}
	
	
	
	
	protected $owner;
	protected $store = array();
}