<?php
namespace eGloo\System\Server\Context\Observer;

/**
 * 
 * Responsible for observing the amount of memory being consumed by
 * a context, performing appropriate action when bounds have been
 * met
 * @author Christian Calloway
 *
 */
class Limit extends \eGloo\Dialect\Object implements\SplObserver { 
	
	function __construct() {
		
	}
	
	public function update(\SplSubject $context) { 
		
		// check memory alloc currently used by $context 
		
		// if exceeding memory alloc size, perform a sort based 
		// on last accessed
		
		// now remove data least recently used
	}
	
	private function sort($a, $b) { 
		// sorts attributes based on last accessed
		return $a->accessed - $b->accessed;		
	}
	
	protected $handler;
	protected $sizeof = 0;
}