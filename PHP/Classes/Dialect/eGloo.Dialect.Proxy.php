<?php
namespace eGloo\Dialect;

use \eGloo\Dialect\_ClassSafe as _Class;


/**
 * Acts as a proxy, or pass through, to underlying delegated member property 'delegated';
 * essentially provides a no-thrills bridge pattern
 * @author Christian Calloway callowaylc@gmail.com
 */
abstract class Proxy {

	function __construct($mixed, $__mixed = null) {
		$arguments = array_slice(func_get_args(), 1);

		// first, lets determine class type, which can either be
		// a string (representing a fully qualified class name), an object
		// or an instance of type _Class, or callback returning an object
		if (is_string($mixed)) {
			if (class_exists($mixed)) {
				$r = new \ReflectionClass($mixed);
				$this->delegated = $r->newInstanceArgs(
					$arguments
				);
			}

			else {
				throw new \Exception(
					"Failed to construct {$this->ident()} because class '$mixed' does not exist"
				);
			}
		}

		else if (is_object($object = $mixed) ) {
			$this->delegated = is_callable($lambda = $mixed)
				? $lambda()
				: $object;


			// throw an exception in the case that lambda doesn't return an object
			is_object($this->delegated) or throws(
				"Failed to construct {$this->ident()} because lambda argument must return an(y) instance"
			);
		}

		else if ($mixed instanceof _Class) {
			$this->delegated = $mixed->instantiate(
				$arguments
			);
		}


		else {
			throw new \Exception(
				"Failed to construct {$this->ident()} because property '$mixed' is invalid; " .
				"it must be a string, an instance of _Class or lambda returning an instance."
			);
		}


	}

	protected function evaluate($lambda) {
		// calls lambda with delegated member property as
		// argument
		return $lambda($this->delegated);
	}

	// "Pass-through" methods; since proxy is essentially an empty container; all property/method
	// messages sent to receiver instance will forward to delegated receiver

	public function __call($name, $arguments) {
		return $this->evaluate(function($delegated) use ($name, $arguments) {
			try {
				call_user_func_array(
					array($delegated, $name), $arguments
				);
			}

			catch(\Exception $pass) {
				throw $pass;
			}
		});
	}

	public static function __callstatic($name, $arguments) {
		$proxy = new static();

		return $proxy->evaluate(function($delegated) use ($name, $arguments) {
			try {
				call_user_func_array(
					array($delegated, $name), $arguments
				);
			}

			catch(\Exception $pass) {
				throw $pass;
			}

		});
	}

	// $goods = $po->Goods->collect(function($good) {
	// 	return $good->good_id = 'replaceWithValue';
	// });

	// $goods->delete();

	public function __get($name) {
		return $this->evaluate(function($delegated) use ($name) {
			try {
				return $delegated->$name;
			}

			catch (\Exception $pass) {
				throw $pass;
			}
		});
	}

	public function __set($name, $value) {
		return $this->evaluate(function($delegated) use ($name, $value) {
			try {
				$delegated->$name = $value;
			}

			catch(\Exception $pass) {
				throw $pass;
			}
		});
	}

	protected $delegated;
}
