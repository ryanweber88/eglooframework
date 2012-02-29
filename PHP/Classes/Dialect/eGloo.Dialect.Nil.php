<?php
namespace eGloo\Dialect;

/**
 * Represents nil/null value - I promise I am not trying to obfuscase, but the point
 * is to have an object that can thrown into a context where an explicit 'null' value
 * will cause shit to blow up (like in a smarty template); this is achieved by using
 * a __toString returning an empty string
 * @author Christian Calloway
 */
class Nil extends ObjectSafe {
	
	public function __toString() {
		return '';
		//return false;
	}
}