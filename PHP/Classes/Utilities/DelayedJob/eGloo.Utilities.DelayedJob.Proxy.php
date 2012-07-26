<?php
namespace eGloo\Utilities\DelayedJob;

/**
 * Provides proxying/delegation of single method 
 * to instance passed in constructor; uses __call
 * to provide arguments to DelayedJob::enqueue
 * 
 */
class Proxy {
	
	function __construct($object) {
		if (is_object($object)) { 
			$this->delegated = $object;
		}
		
		else {			
			throw new \Exception (
				"Failed delaying call on object argument because it is not an object"
			);
		}
	}
	
	function __call($name, $arguments) {
		// @TODO queue on delayed job
		
	}
	
	protected $delegated;
}
