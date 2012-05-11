<?php
namespace eGloo\Performance\Caching;


/**
 * An abstract cache store class
 * @TODO change to interface?
 */
interface StoreInterface {

	abstract public function read($__mixed);
	abstract public function write($__mixed);
	abstract public function fetch($key, $lamda);
	abstract public function delete($key, $__mixed = null);
	abstract public function exists($key, $__mixed = null);
	
}