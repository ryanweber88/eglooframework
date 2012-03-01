<?php
namespace eGloo\Primitives;

/**
 * 
 * An abstraction of regular expression (which probably deserves the conceptual idea of primitive)
 * @author Christian Calloway
 *
 */
class RegExp extends \eGloo\Dialect\ObjectSafe { 
	// pass	
	
	function __construct($expression) { 
		$this->expression = $expression;
	}
	
	/**
	 * Determines if string a regular expression - isn't the recursive
	 * concept of that fucking amazing; a regular expression to check if
	 * a regular expression
	 */
	public static function valid($string) {
		// run the string against a match on null and check if
		// we have a resulting error
		// @TODO doesn't work, not capturing error
		//@preg_match($string, null);
		//preg_last_error();
		
		// for right now, just match that string beings with '/' and ends with '/[a-z]'
		return preg_match('/^\/.+\/[a-z]*/', $string);
	}
	
	protected $expression;
}