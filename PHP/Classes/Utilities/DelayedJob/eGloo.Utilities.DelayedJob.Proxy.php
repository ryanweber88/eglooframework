<?php
/**
 * Contains Proxy class definition
 * @author Christian Calloway callowaylc@gmail christian@petflow
 */
namespace eGloo\Utilities\DelayedJob;
use       \eGloo\Utilities;

/**
 * Provides proxying/delegation of single method 
 * to instance passed in constructor; uses __call
 * to provide arguments to DelayedJob::enqueue
 * 
 */
class Proxy extends Utilities\Delegator  {
	
	
	function __call($name, $arguments) {
		
		// fork call to proxied instance
		static::fork(function() use ($name, $arguments) {
			call_user_func_array(
				array($this, $name), $arguments
			);
		});
		

	}
	
}