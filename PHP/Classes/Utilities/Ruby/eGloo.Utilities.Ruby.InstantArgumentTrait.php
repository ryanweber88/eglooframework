<?php
namespace eGloo\Utilities\Ruby;

/**
 * Provides convenience methods to turn 
 * @author Christian Calloway
 */
trait InstantArgumentTrait { 
	
	private static function instantArray(array $arguments = [ ]) {
		// responsible for turning array of arguments to singular
		// or leaving as array should 
		return count($arguments) === 1 
			? $arguments[0]
			: $arguments;
		
	}
	
	private static function instantHash(array $arguments = [ ])  {
		
	}
	
}