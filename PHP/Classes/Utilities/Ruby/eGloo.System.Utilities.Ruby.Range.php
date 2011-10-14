<?php
namespace \eGloo\Utilities\Ruby;

/*
 * An "approximation" of ruby's "primitive" range type
 */
class Range extends \eGloo\Dialect\Object { 
	
	function __construct($start, $end, $inclusive = false) { 
		
	}
	
	/**
	 * 
	 * Create a range object based upon $sequence string; $sequence strings
	 * follow ruby format: n..[.]N
	 * @param string $sequence
	 */
	static public function factory($sequence) { 
		
		// match start, end
		preg_match('/^[0-9]+/', $sequence, $match);
		$start = (int)$match[0];
		
		preg_match('/[0-9]+$/', $sequence, $match);
		$end = (int)$match[0];
		
		// match number of dot characters
		$inclusive = (
			substr_count($sequence, '.') === 3
		);
		
		// throw invalid sequence exception if invalid
		$valid = 
			(is_integer($start) && is_integer($end)) &&
			($end >= $start);
			
		if ($valid) { 
			return new static($start, $end, $inclusive);	
		}
		
		throw new \eGloo\Dialect\Exception('Invalid Sequences >> ' . $sequence);
		
	}
	
	public function step($by = 1, \Closure $lambda) { 
		// iterate through range steps
		for ($counter = $this->start; $counter < $this->end(); $counter++) { 
			$lambda($counter);
		}
	}
	
	/**
	 * 
	 * Override default getter to take 'inclusive' into account - which
	 * includes end range value
	 */
	public function end() { 
		return ($this->inclusive) 
			? $this->end + 1
			: $this->end;
	}
	
	protected $start;
	protected $end;
	protected $inclusive = false;
}