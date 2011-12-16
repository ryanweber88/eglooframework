<?php
namespace eGloo\Primitives;

class String extends \eGloo\Dialect\Object { 
	
	function __construct($string) { 
		$this->string = $string;
	}
	
	public function rnew($string) { 
		return new static($string);
	}
	
	public function splice($offset, $length = null, $splice = '') {
		
		// TODO put here for convenience - will move into string "primitive" class
		$input = (string)$this->string;
		$splice = (string)$splice;
		$count = strlen($input);
	  
		// Offset handling (negative values measure from end of string)
		if ($offset<0) $offset = $count + $offset;
				
		// Length handling (positive values measure from $offset; negative, from end of string; omitted = end of string)
		if (is_null($length)) $length = $count;
		elseif ($length < 0)  $length = $count-$offset+$length;
				
		// Do the splice
		return substr($input, 0, $offset) . $splice . substr($input, $offset+$length);
	}	
		
	protected $string;
}