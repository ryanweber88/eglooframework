<?php
// Provides Ruby concepts in PHP
namespace eGloo\Utilities\Ruby;

class Iterator extends \eGloo\Dialect\Object {
	
	function __construct(array $array = array()) { 
		
	}
	
	/**
	 * 
	 * A copy of ruby's each iterator
	 * @param unknown_type $block
	 */
	public function each(\Closure $block) { 
		foreach($this->array as $key => $value) { 
			// we don't specifically have to specify a yield here
			$block($key, $value);
		}
	}
	
	private $array = array();
}