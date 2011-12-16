<?php
namespace eGloo\System\Server;

use \eGloo\System\Server;
use \Zend\EventManager\EventCollection;
use \Zend\EventManager\EventManager;

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
class Context extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\SubjectTrait;
	
	/** @TODO implement storage interface */
	function __construct(&$owner, Server\Context\Storage\StorageInterface $store = null) { 
		parent::__construct();
		
		// add reference to context's owner: application, request, session, etc
		$this->owner = &$owner;
		
		// TODO add store initialization here
		
		// add zf2 EventManager and attach listeners
		$this->events = new EventManager();
		
		// manages context change events
		$this->events->attachAggregate(new Server\Context\Listener\Change());
		
		// manages context memory allocation
		$this->events->attachAggregate(new Server\Context\Listener\Limit());
	}
	
	public function valid() { 
		// TODO replace with magic call - fires trigger event
		$this->events()->trigger('valid', $this, [ ]);
		
	}
	
	/**
	 * 
	 * Deallocate current store property and reinitialize
	 */
	public function clear() {
		unset($this->store);
		$this->store = [ ];
	}
	
	/**
	 * 
	 * Determines if context is empty
	 */
	public function isEmpty() { 
		return count($this->store) === 0;
	}
	
	/**
	 * 
	 * Enter expiration for a bound value 
	 * @param string  $key
	 * @param integer $expires
	 */
	public function &expire($key, $expires) { 
		if ($this->exists($key)) { 
			
			// attach cache listener to attribute
			$this->store[$key]->events->attachAggregate(new Context\Listener\Attribute\Cache(
				$expires
			));
			
			return $this;
		}
		
		// throw exception if attempting to expire invalid key
		throw \eGloo\Dialect\Exception("Attempted to expire invalid attribute >> $key");
	}
	
	/**
	 * 
	 * Runs lambda in context, as opposed to inline (where run method as been called) -
	 * php5.3 issue
	 * @param \Closure $lambda
	 * @return boolean
	 */
	public function run (\Closure $lambda) { 
		
		// retrieve function signature (ie string) as means of an identifier
		$signature = $this->hashLambda($lambda);
		
		//return $this->retrieve($signature, $lambda);
		// TODO this is oversimplified at the moment; needs cache support and
		// check for boolean true		
		if (!$this->exists($signature) || $this->store[$signature] === false) {
			//echo "i\n";
			if (!is_null($value = $lambda($this, $signature))) { 
				$this->bind($signature, $value);
			}
			
			//echo "\n\n$value";
			
			//return $value;
		}
		
		// otherwise the value (should) exist, return it via a retrieve call
		return $this->retrieve($signature);
		
		
	}
		
	/**
	 * 
	 * Retrieve binded value; a closure is provided to allow for setting
	 * of default value
	 * @param string $key
	 * @return mixed
	 */
	public function retrieve($key, \Closure $lambda = null) { 
		
		// generate unique key based on $key and $lambda toString - 
		// this is done to avoid collisions (the lambda toString is
		// unique to where function is defined, so it guarentees 
		// a great deal of uniqueness
		if (!is_null($lambda) && is_callable($lambda)) { 
			$key = "$key/" . $this->hashLambda($lambda);
		}
		
		if ($this->exists($key)) { 
			return $this->store[$key]->value();
		}
		
		// else we call lambda with $key, and store value into 
		else if (is_callable($lambda)) { 			
			if (!is_null($value = $lambda($this, $key))) { 
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
		throw new \eGloo\Dialect\Exception(
			"Attempted to access invalid storage key w/o providing default closure >> $key\n" . 
			"Please use Context::exists method to ensure value exists"
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
		
		// trigger bind event
		$this->events()->trigger(__FUNCTION__, $this, compact('key', 'value'));
				
		return $this;
	}
	
	/**
	 * Unbinds value from context
	 */
	public function unbind($key) { 
		if (isset($this->store[$key])) { 
			unset($this->store[$key]);			
		}
		
		else {
			// throw exception if attempting to unbind invalid key
			throw \eGloo\Dialect\Exception(
				"Attempted to unbind value that does not exist >>  $key"
			);
		}
		
		// trigger unbind event
		$this->events()->trigger(__FUNCTION__, $this, compact('key'));
		
		return $this;
	}
	
	/**
	 * 
	 * Check if a value, idenified by key, exists within context
	 */
	public function exists($key) { 
						
		// check if context itself is still valid
		$this->events->trigger('valid', $this, [ ]);
				
		if (in_array($key, array_keys($this->store))) { 
			
			// call cache listener on attribute to see if
			$this->store[$key]->events->trigger('valid', $this->store[$key], compact('key'));
			
			// determine if value @ $key index exists/isset - it will be
			// invalidated by call above if attribute has cache listener
			// and cache has expired
			return isset($this->store[$key]);
		}
		
		
		// otherwise return false to caller
		return false;
	}
	
	/**
	 * 
	 * Checks if context is availabe - when running framework outside
	 * of nginx/mongrel instance, context should not available
	 */
	public function available() { 
		// TODO some functionality that actually determines if available
		// this should be statically set as well
		return true;	
	}
	
	
	final private function hashLambda(\Closure &$lambda) { 
		$reflection = new \ReflectionFunction($lambda);
		
		// fileName + startLine should ensure a unique ident (a function can't
		// occupy the same space and time as another - future cop rules)
		return $reflection->getFileName() . '/' . $reflection->getStartLine();
		
		// string comparison functions cause a huge hit in performance, so removing
		// sure fire 
		//return preg_replace('/\s/', null, (string) $reflection);
	}	
	
	
	
	protected $owner;
	protected $store   = array();
	protected $events;
	protected $changed = false;
}