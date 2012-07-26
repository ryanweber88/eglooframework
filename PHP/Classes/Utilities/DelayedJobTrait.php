<?php
namespace eGloo\Utilities;

/**
 * Provides convenience methods for automagically passing
 * method calls to DelayedJob handler
 */
trait DelayedJobTrait {
	
	/**
	 * Returns an instance of DelayedJob\Proxy that will in turn
	 * call method of this instance; this is done so we can delay
	 * jobs doing $this->delay()->someDefinedMethod()
	 */
	public function delay($lambda = null)	{
		if (is_null($lambda)) {
			return new DelayedJob\Proxy($this);
		}
		
		// @TODO determine how to pass lambda to delayed job
		// since it can be serialized 
	}
	
	/**
	 * Same as Object#send, but enqueus job
	 */
	public function sendLater($method, $__mixed = null) {
		$arguments = array_slice(func_get_args(), 1);
		
		call_user_func_array(
			array($this->delay(), $method), $arguments
		);
	}
	
}
