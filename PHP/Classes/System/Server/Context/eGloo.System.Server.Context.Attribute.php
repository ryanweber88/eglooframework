<?php
namespace eGloo\System\Server\Context;

class Attribute extends \eGloo\Dialect\Object implements \SplSubject, \eGloo\Utilities\Stringable { 
	
	function __construct($name, $value) { 
		$this->name = $name;
		$this->value = $value;
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
}