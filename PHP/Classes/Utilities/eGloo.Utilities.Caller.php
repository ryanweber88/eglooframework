<?php
namespace eGloo\Utilities;

// @TODO replace_object_safe
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * Not completely thought out yet - provides simplified interface
 * to backtrace; represents a caller on a method 
 */
class Caller extends Object {
	
	const CALLER_INDEX = 2;
	
	function __construct(array $hash) {
		if (count($hash) >= self::CALLER_INDEX) {
			$this->trace = $hash;

		} else { 
			throw new \Exception(
				'Cannot identify a caller from current position'		
			);
		}
	}
	
	/**
	 * Determines if caller intended to make static call - this
	 * hugely inefficient, and will be replaced with php 5.4; the only
	 * way to determine this is check backtrace, open file, check line
	 * and pattern ::|->callingMethod; the reason this is needed is 
	 * because fucking dimwit mcfuck php thinks that static calls made from
	 * instance context are instance calls, and if attempting
	 * to call a dynamic method, will forward to __call, as opposed
	 * to __callstatic
	 * example public function test() {
	 * 	static::methodDoesntExist()
	 * }
	 * 
	 *  --> this will forward to FUCKING __call
	 */
	public function isReceivedStatically() {
		
		// @TODO need a simple and quick caching
		// mechanism, that can be blown away by 
		// clearcache - for the time being, do
		// a static cache so we don't have to
		// open a file on every single fucking
		// method call

		$trace = $this->trace[self::CALLER_INDEX];
		
		if ($trace['function'] == '__call') {
			return false;
		}
		
		
		if (isset($trace['file'])) {		
		
			// first check file against cache; we only want to read from
			// file once - this cache is going to work, but its going
			// be done sloppily, because this is NOT a permanent solution
			if (!isset(static::$cache[$file = $trace['file']])) {
				// read contents of file and split by newline
				static::$cache[$file]['tokens'] = preg_split('/\n/', file_get_contents(
					$file		
				));
			}
			
			// now check line against cache; if it is not available, then match against
			// pattern ::I->methodName to determine INTENDED context of method call
			if (!isset(static::$cache[$file][$method = $trace['function']])) {
				
				$cache = &static::$cache[$file];
				
				foreach(array_reverse(array_slice($cache['tokens'], 0, $trace['line'])) as $line) {		
					if (preg_match("/(::|\-\>)$method/", $line, $match)) {
						$cache[$method]['static'] = $match[1] == '::';
						break;
					}
					
				}
				
			
				// the only case where we should throw an exception is methodcall is seperate from
				// reciever context operator (eg reciever :: method)
				if (!isset($cache[$method]['static'])) { 
					throw new \Exception(
						"Failed to locate call to '$method' in {$trace['file']} @ #{$trace['line']}"
					);
				}
			}
			
		
				
			return static::$cache[$file][$method]['static'];
		}
		
		return false;
	}
	

	
	public function __toString() {
		return $this->trace[self::CALLER_INDEX]['function'];
	}
	

	
	protected      $trace;
	private static $cache = array();
}
