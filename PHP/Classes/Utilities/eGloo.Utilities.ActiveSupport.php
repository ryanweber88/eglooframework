<?php
/**
 * Contains class definition for ActiveSupport
 * @author Christian Calloway callowaylc@gmail christian@petflow
**/ 
namespace eGloo\Utilities;
use       \eGloo\Dialect\ObjectSafe as Object;


/**
 * Provides base functionality for active support classes
 *
 */
abstract class ActiveSupport extends Object {

	function __construct($value) {
		$this->value = $value;
	}

	protected $value;
}