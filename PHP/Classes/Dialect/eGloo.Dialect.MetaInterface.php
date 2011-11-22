<?php
namespace eGloo\Dialect;

interface MetaInterface {

	/**
	 * 
	 * Allows a "method" to be dynamically added to meta interface
	 * @param unknown_type $name
	 * @param unknown_type $lambda
	 */
	public function defineMethod($name, callable $lambda);
	
	/**
	 * 
	 * Retrieves method from method store
	 * @param  string $name
	 * @return callable
	 */
	public function retrieveMethod($name);
	
	/**
	 * 
	 * Enter description here ...
	 * @param  string $name
	 * @return boolean 
	 */
	public function respondTo($name);
	
}