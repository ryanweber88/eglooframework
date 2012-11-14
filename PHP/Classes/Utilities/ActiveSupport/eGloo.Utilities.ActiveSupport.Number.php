<?php
/**
 * Contains class definition for Number
 * @author Christian Calloway callowaylc@gmail christian@petflow
**/ 
namespace eGloo\Utilities\ActiveSupport;
use       \eGloo\Utilities;


class Number extends Utilities\ActiveSupport {
	
	public function __get($name) { 
		foreach (static::$symbols as $symbol => $seconds) {
			if (preg_match("/^$symbol/i", $name)) {
				return (int) $this->value * $seconds;
			}
		}
	}

	public function __call($name, $arguments) {
		foreach (static::$symbols as $symbol => $seconds) {
			if (preg_match("/^$symbol/i", $name)) {
				$this->current = (int) $this->value * $seconds;
				return $this;
			}
		}
	}

	protected static $symbols = array(
		'second' => 1,
		'minute' => 60,
		'hour'   => 3600,
		'day'    => 86400,

		// month and year are based on average
		'month'  => 2.63e+6,
		'year'   => 3.156e+7
	);

	protected $current;
}