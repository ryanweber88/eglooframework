<?php
namespace eGloo\System\Server\Context;

use \Zend\EventManager\EventCollection;
use \Zend\EventManager\EventManager;

/**
 * 
 * Represents a bound values to a context
 * @author Christian Calloway
 *
 */
class Attribute extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\SubjectTrait;
	
	function __construct($name, $value, &$owner) { 
		$this->name     = $name;
		$this->value    = $value;
		$this->accessed = time();
		$this->owner    = &$owner;
		
		// attach zf2 event manager
		$this->events = new EventManager();
	}
	
	public function __toString() { 
		return $this->value();
	}
	
	/**
	 * 
	 * Overrides object magic setters, to take into account last access time
	 * @param mixed $value
	 */
	public function value($value = null) { 
		
		// update access time
		$this->accessed = time();
		
		// return value if null parameter
		if (is_null($value)) { 
			return $this->value;
		}
		
		// set value otherwise and return reference to self for chain-ability
		$this->value = $value;
		return $this;
	}
	
	protected $name;
	protected $value;
	protected $owner;
	protected $accessed;
	protected $events;
}