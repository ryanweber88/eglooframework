<?php
namespace eGloo\Performance\Caching;


/**
 * An abstract cache store class
 * @TODO change to interface?
 */
interface StoreInterface {

	public function write ($name, $value, array $options = null);
	public function read  ($name, array $options = null);
	public function find  ($name, array $options = null, $lambda);
	public function delete($name, array $options = null);
	public function exists($name, array $options = null);
	
}