<?php
namespace eGloo\Performance\Caching;

use \eGloo\Dialect\Object as ObjectSafe;

/**
 * An abstract cache store class
 * @TODO change to interface?
 */
abstract class Store extends ObjectSafe {

	abstract public function read($__mixed);
	abstract public function write($__mixed);
	abstract public function fetch($key, $lamda);
	abstract public function delete($key, $__mixed = null);
	abstract public function exists($key, $__mixed = null);
	
}