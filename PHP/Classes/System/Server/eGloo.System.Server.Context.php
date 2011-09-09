<?php
namespace eGloo\System\Server;

/**
 * 
 * Represents 'context' within stateful application : Request, Application, Server, Session etc;
 * used to store attribute values to that context; this was fully inspired by java servlet handling
 * of context state
 * 
 * Implements oberservable pattern s
 * @author Christian Calloway
 *
 */
class Context extends \eGloo\Dialect\Object { 
	
	function __construct(&$owner) { 
		//$this->owner = &$owner;
	}
	
	/**
	 * 
	 * Retrieve binded value; a closure is provided to allow for setting
	 * of default value
	 * @param string $key
	 */
	public function &retrieve($key, \Closure $lambda = null) { 
		if ($this->exists($key)) { 
			return $this->store[$key];
		}
		
		// else we call lambda with $key, and store value into 
		else if (is_callable($lambda)) { 
			return $this->bind($key, $lambda($this));			
		}
		
		// throw exception if attempting to retrieve value that does not exist and
		// a default "setter" closure is not provided; the reason this is done is
		// to enforce the usage of 'exists' method and if retrieve is called, then
		// a default closure must be provided
		throw \eGloo\Dialect\Exception("Attempted to access invalid storage key w/o providing default closure >> $key");
	}
	
	/**
	 * 
	 * Binds value to context 
	 * @param string $key
	 * @param mixed  $value
	 */
	public function &bind($key, $value) {
		$this->store[$key] = &$attribute;		
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
			return isset($this->store[$key]);
		}
		
		return false;
	}
	
	/** SplSubject (Observable) interface methods */
	
	/*
	 * Attaches observer 
	 */
	public function attach(\SplObserver $observer) {
		$this->observers[get_class($observer)] = $observer;
	}
	
	/**
	 * Detaches observer
	 */
	public function detach(\SplObserver $observer) { 
		unset($this->observers[get_class($observer)]);
	}
	
	/**
	 * Notifies observers that an event has occured
	 */
	public function notify() { 
		foreach($this->observers as $observer) { 
			$observer->update($this);
		}
	}
	
	
	
	protected $owner;
	protected $store = array();
	protected $observers = array();
}