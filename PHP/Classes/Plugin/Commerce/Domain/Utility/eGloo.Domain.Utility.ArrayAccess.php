<?php
namespace eGloo\Domain\Utility;

/**
 * ArrayAccess allows Domain\Model to be accessed as array
 * @TODO namespace is fine, but location needs to changed as it isn't reflective
 * at all
 */
class ArrayAccess extends \eGloo\Utilities\ArrayAccess {
	
	// this is here only for idiomatic reasons
	const EMPTY_STRING = '';
	
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
			$result = null;
		}
		
		return is_null($result) 
			? self::EMPTY_STRING
			: $result;
	}
	
	public function offsetExists($offset) {
		return true;
	}
}