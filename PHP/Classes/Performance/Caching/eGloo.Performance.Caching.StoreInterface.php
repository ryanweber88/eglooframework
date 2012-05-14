<?php
namespace eGloo\Performance\Caching;


/**
 * An abstract cache store class
 * @TODO change to interface?
 */
interface StoreInterface {

	abstract public function read  ($name, array $options = null);
	abstract public function write ($name, array $options = null);
	abstract public function find  ($name, array $options = null, $lambda = null);
	abstract public function delete($name, array $options = null);
	abstract public function exists($name, array $options = null);
	
}