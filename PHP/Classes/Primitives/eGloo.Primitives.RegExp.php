<?php
namespace eGloo\Primitives;

/**
 * 
 * An abstraction of regular expression (which probably deserves the conceptual idea of primitive)
 * @author Christian Calloway
 *
 */
class RegExp extends \eGloo\Dialect\Object { 
	// pass	
	
	function __construct($expression) { 
		$this->expression = $expression;
	}
	
	protected $expression;
}