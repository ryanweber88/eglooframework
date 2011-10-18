<?php
namespace eGloo\Dialect;

class _Class extends Object { 
	
	function __construct(Object $object) { 
		// get class name
		$parts = explode('\\', get_class($object));
		$this->name = $parts[count($parts)-1];
	}
	
	protected $name;
}