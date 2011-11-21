<?php
namespace eGloo\Dialect;

interface MetaInterface {

	/**
	 * 
	 * Allows a "method" to be dynamically added to meta interface
	 * @param unknown_type $name
	 * @param unknown_type $lambda
	 */
	public function defineMethod($name, $lambda);
	
	public function method($name);
}