<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware\Entity;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for communicating with entity manager (persitence context) to
 * determine what entities need to be queried, and which currently exist
 * @author Christian Calloway
 *
 */
class Find extends DDL\Entity\Middleware {
	
	/**
	 * (non-PHPdoc)
	 * @see MiddlewareInterface::processResults()
	 */
	public function processResults(array $arguments, array $results) { 
		
		if ($results !== false) {
			$this->container->attributes = $results[0];
		}
		
		return true;
	}
	
}