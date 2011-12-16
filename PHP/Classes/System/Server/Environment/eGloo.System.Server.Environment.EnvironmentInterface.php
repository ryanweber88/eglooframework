<?php
namespace \eGloo\System\Server\Environment;

interface EnvironmentInterface {

	/**
	 * 
	 * Setup environment
	 */
	public function setup();
	
	/**
	 * 
	 * Teardown environment
	 */
	public function teardown();
	
	
	/**
	 * 
	 * Load environment
	 */
	public function load();
}