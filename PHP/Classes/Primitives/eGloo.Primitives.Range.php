<?php
/**
 * 
 * Enter description here ...
 * @author Christian Calloway
 *
 */
namespace eGloo\Primitives;

/**
 * 
 * An abstraction of regular expression (which probably deserves the conceptual idea of primitive)
 * @author Christian Calloway
 * @todo   method_missing
 *
 */
class Range extends \eGloo\Dialect\Object { 
	
	function __construct($range) {
		if (static::valid($range)) {
			if (preg_match('/([0-9]+)\s*?..\s*?([0-9]+)/', $range, $match)) {
				$this->start = (int)$match[1];
				$this->end   = (int)$match[2];	
			}
		}
		
		else {
			throw \Exception(
				"Invalid range $range"
			);
		}
	}
		
	
	/**
	 * 
	 * Determines if string passed as range is valid
	 * @param string $range
	 */
	public static function valid($range) {
		if (preg_match('/([0-9]+)\s*?..\s*?([0-9]+)/', $range, $match)) {
			$start = (int)$match[1];
			$end   = (int)$match[2];
			
			return is_numeric($match[1]) && is_numeric($match[2]);
		}
		
		return false;
	}
	
	public function __call($name, $arguments) {
		
		if ($name == 'toArray') {
			return range($this->start, $this->end);	
		}
		
		
		parent::__call($name, $arguments);
	}
	
	public function __callstatic($name, $arguments) {
		
		// handle toArray for static
		if ($name == 'toArray') {
			$range = new Range($arguments[0]);
			return $range->toArray();
		}
		
	}
	
	protected $start;
	protected $end;
}