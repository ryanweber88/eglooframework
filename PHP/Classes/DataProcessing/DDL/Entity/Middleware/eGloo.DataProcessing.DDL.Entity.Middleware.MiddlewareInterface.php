<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware;

/**
 * 
 * Provides interface for middleware plugin architecture
 * @author Christian Calloway
 *
 */
interface MiddlewareInterface {
	
	/**
	 * 
	 * Perform argument processing before passing to results
	 * @param  mixed[] $arguments
	 * @return boolean 
	 */
	public function processArguments(array $arguments);
	
	/**
	 * 
	 * Enter description here ...
	 * @param array $arguments
	 * @param unknown_type $results
	 */
	public function processResults(array $arguments, $results);
}