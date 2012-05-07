<?php
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * Interface/access to system level resources.. 
 * @author Christian Calloway
 */
class eGloo extends Object 
	implements \ArrayAccess {
	
	/** ArrayAccess interface methods *****************/
	// ArrayAccess interface methods are used as a DIC
	// for loading instances and performing a bit of transparent
	// magic - normally we should delegate this functionality
	// to its own class, but we would be unable to use array
	// notation
	
	public function offsetGet($offset) {
		
	}
	
	public function offsetSet($offset, $value) {
		
	}
	
	public function 
	
}
