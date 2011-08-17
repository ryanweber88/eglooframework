<?php
namespace eGloo\Utilities\ClassBuilder;

/**
 * 
 * Provides array interface to grouped aspects
 * @author petflowdeveloper
 *
 */
class Group extends \ArrayObject implements \eGloo\Utilities\Stringable, \IteratorAggregate { 
	
	function __construct(array $array = array()) { 
		//parent::__construct($array, ArrayObject::ARRAY_AS_PROPS);	
	}
	
	/**
	 * Responsible for stringifying group of aspects
	 * @see eGloo\Utilities.Stringable::__toString()
	 */
	public function __toString() { 
		$tokens = array();
		
		foreach($this->aspects as $aspect) { 
			$tokens[] = (string) $aspect;
		}
		
		return implode($this->delimiter, $tokens);
	}
	
	/**
	 * 
	 * Fill-in stub method; gets aspect at index
	 * @param unknown_type $index
	 */
	public function offsetGet($index) { 
		return $this->aspects[$index];
	}

	/**
	 * 
	 * Fill-in stub method; sets aspect at index
	 * @param unknown_type $index
	 */	
	public function offsetSet($index, $value) { 
		if (is_null($index)) { 
			$index = $this->count();
		}
		
		$this->aspects[$index] = $value;
	}
	
	/**
	 * 
	 * Fill-in stub method; gets aspect count
	 */
	public function count() {
		return count($this->aspects);
	}
	
	/**
	 * 
	 * Required by IteratorAggregate interface; allows for convenient foreach iteration of aspects
	 */
	public function getIterator() { 
		return new \ArrayIterator($this->aspects);
	}
  
  
	
	protected $aspects = array();
	protected $delimiter = '';
}