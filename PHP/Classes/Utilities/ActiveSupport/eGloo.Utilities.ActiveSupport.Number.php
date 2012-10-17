<?php
/**
 * Contains class definition for Number
 * @author Christian Calloway callowaylc@gmail christian@petflow
**/ 
namespace eGloo\Utilities\ActiveSupport;
use       \eGloo\Utilities;


class Number extends Utilities\ActiveSupport {
	
	public function __get($name) { 
		foreach (static::symbols as $symbol => $seconds) {
			if (preg_match("/^$symbol/i", $name)) {
				return (int) $this->value * $seconds;
			}
		}
	}

	public function __call($name, $arguments) {

	}

	protected static $symbols = array(
		'second' => 1,
		'minute' => 60,
		'hour'   => 60 * 60,
		'day'    => 60 * 60 * 24,

		// month and year will have to be measured in relation
		// to current time
		'month'  => 60 * 60 * 24 * 30, 
		'year'   => 60 * 60 * 24 * 30
	);
}