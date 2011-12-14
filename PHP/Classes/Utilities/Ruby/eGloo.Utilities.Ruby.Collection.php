<?php
namespace eGloo\Utilities\Ruby;

/**
 * 
 * Extends SPL ArrayObject - provides ruby-like collection methods that
 * are solely used in conjunction with closures
 * @author Christian Calloway
 *
 */
class Collection extends \ArrayObject {
	
	function __construct($array = null) { 
		parent::__construct($array);
	}
	
	public function inject($initial, $lambda) {
		$result = $initial;
		
		foreach($this as $value) {
			$result = $lambda($result, $value);		
		}
		
		return $result;
	}
	
	public function each($lambda) {
		// use reflection to determine parameters - each can
		// either pass element, or name, value pair, given
		// however closure parameters have been specified
		$reflection = new ReflectionFunction($lambda);
		$justValue  = count($reflection->getParameters() === 2);
		
		foreach($this as $key => $value) {
			$justValue
				? $lambda ($value)
				: $lambda ($key, $value);	
		}		
	}
	
	public function any() {
		
	}
	
	/**
	 * 
	 * Same as php array map (uses array_map internally)
	 */
	public function map($lambda) { 
		return array_map($lambda, $this);
	}
}