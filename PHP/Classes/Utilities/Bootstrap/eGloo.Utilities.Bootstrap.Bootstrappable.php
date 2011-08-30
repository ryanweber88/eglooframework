<?php
namespace eGloo\Utilities\Bootstrap;

interface Bootstrappable {
	/**
	 * 
	 * Bootstrap a single resource or many on null
	 * @param string $resource
	 */
	public function &bootstrap($resource = null);
	
	/**
	 * 
	 * Convenience method to bootstrap all resources
	 */
	public function run();
}