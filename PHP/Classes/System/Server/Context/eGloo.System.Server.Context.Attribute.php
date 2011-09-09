<?php
namespace eGloo\System\Server\Context;

/**
 * 
 * Represents a bound values to a context
 * @author Christian Calloway
 *
 */
class Attribute extends \eGloo\Dialect\Object implements \SplSubject, \eGloo\Utilities\Stringable { 
	
	function __construct($name, $value, &$owner) { 
		$this->name  = $name;
		$this->value = $value;
		$this->owner = &$owner;
	}
	
	function __toString() { 
		return $this->value;
	}
	
	/** Implement SplSubject (Observer) interface */
	
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
	
	protected $name;
	protected $value;
	protected $owner;
	protected $observers = array();
}