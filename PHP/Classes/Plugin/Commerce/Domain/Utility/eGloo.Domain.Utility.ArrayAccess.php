<?php
namespace eGloo\Domain\Utility;

/**
 * ArrayAccess allows Domain\Model to be accessed as array
 * @TODO namespace is fine, but location needs to changed as it isn't reflective
 * at all
 */
class ArrayAccess extends \eGloo\Utilities\ArrayAccess {
	
	// this is here only for idiomatic reasons
	const EMPTY_STRING = "";
	
	/**
	 * Overrides utility arrayaccess to return empty string - this
	 * is done because the primary use of this class is to be used 
	 * in smarty templates - the absence of value will simply return
	 * an empty string as opposed to throwing exception if value
	 * does not exist
	 */
	public function offsetGet($offset) {
		try {
			$result = parent::offsetGet($offset);
		}
		
		// the only point of catching exception is to ensure that
		// result is absolute false
		catch(\Exception $ignore) {
			//echo $ignore->getMessage();exit;
			
			$result = null;
		}
		
		// if our result is null, we return an ArrayAccess instance, which
		// delegates to a Nil class instance - we do this because there
		// are many instances where simply returning null will cause
		// an exception to be thrown - in this case, we are returning
		// an object that will produce an empty result when stringified
		return is_null($result) 
			? new static(new \eGloo\Dialect\Nil)
			: $result;
	}
	
	/**
	 * This is our catch/exit to the idea of recursion through continuously
	 * rewrapping in ArrayAccess
	 */
	public function __toString() {
		if (method_exists($this->delegated, '__toString')) {
			return $this->delegated->__toString();
		}
		
		throw new \Exception(
			'Failed to stringify ArrayAccess representation of model ' . get_class($this->delegated)		
		);
	}
	
	public function offsetExists($offset) {
		return true;
	}
}