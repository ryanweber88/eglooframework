<?php
namespace eGloo\DataProcessing\DDL\Entity;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Extends ZF2 framework callback handler; acts as adapter
 * in a way to parent class, by dropping notion of
 * event and options, or renaming them
 * @author Christian Calloway
 *
 */
class MethodCallback extends DDL\Utility\Callback { 
	
	use \eGloo\Utilities\AttributeTrait;
	
	public function call(array $arguments = [ ]) {
		
		if (parent::call($arguments) === false) { 				
			$this->method->call($arguments);
		}
	}
	
	
	/** @todo change protected */
	public $method;
}