<?php
namespace eGloo\System\Server\Rewrite;

/**
 * 
 * Represents a rewrite engine directive
 * @author Christian Calloway
 *
 */
class Directive extends \eGloo\Dialect\Object { 
	
	function __construct($name) { 
		$this->name($name);
	}
	
	public static function &factory($name) { 
		if (strstr('/Rule/', $name) !== false) { 
			return new Directive\Rule($name);
		}
		
		else { 
			return new Directive\Condition($name);
		}
	}
	
	protected $name;
	protected $value;
}