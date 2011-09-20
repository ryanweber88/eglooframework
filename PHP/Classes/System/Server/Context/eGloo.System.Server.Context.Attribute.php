<?php
namespace eGloo\System\Server\Context;

/**
 * 
 * Represents a bound values to a context
 * @author Christian Calloway
 *
 */
class Attribute extends \eGloo\Dialect\Object implements \SplSubject, \eGloo\Utilities\Stringable { 
	
	use \eGloo\Utilities\SubjectTrait;
	
	function __construct($name, $value, &$owner) { 
		$this->name  = $name;
		$this->value = $value;
		$this->owner = &$owner;
	}
	
	function __toString() { 
		return $this->value;
	}
	
	protected $name;
	protected $value;
	protected $owner;
}