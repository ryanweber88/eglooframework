<?php
/**
 * Contains trait definition for 'DelayedJobTrait'
 * @author Christian Calloway christian@petflow callowaylc@gmail
 */
namespace eGloo\Utilities;

/**
 * Provides convenience methods for automagically passing
 * method calls to DelayedJob handler
 * @TODO this needs to be attached to actual background processor
 * as opposed to running a fork, which is incredibly costly in regards
 * to memory consumption
 */
trait DelayedJobTrait {
	
	/**
	 * Returns an instance of DelayedJob\Proxy that will in turn
	 * call method of this instance; this is done so we can delay
	 * jobs doing $this->delay()->someDefinedMethod()
	 */
	public function delay(callable $lambda = null)	{
		if (is_null($lambda)) {
			return new DelayedJob\Proxy($this);
		}
		
		// otherwise we throw lambda into fork process
		static::fork($lambda);
		
	}
	
	/**
	 * Same as Object#send, but enqueus job
	 */
	public function sendLater($method, $__mixed = null) {
		$arguments = array_slice(func_get_args(), 1);
		
		$this->delay(function() use ($method, $arguments) {
			call_user_func_array(
				array($this, $method), $arguments
			);
		});
	}
	

	
}
