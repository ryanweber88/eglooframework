<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware;

/**
 * Provides stub methods for classes implementing middleware interface 
 */
trait MiddlewareTrait {
	
	/**
	 * Provides stub method for processing arguements 
	 * 
	 * @param  mixed[] $arguments
	 * @return mixed[]
	 */
	public function processArguments(array $arguments) {
		return $arguments;
	}
	
	/**
	 * Provides stub method for processing results
	 * 
	 * 
	 * @param  mixed[] $arguments
	 * @param  mixed   $results
	 * @return mixed
	 */
	public function processResults(array $arguments, array $results) {
		return $results;
	}
}