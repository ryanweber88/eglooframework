<?php
namespace eGloo\Performance\Caching;

use \eGloo\Utilities;

class Cache extends Utilities\Delegator {
	
	function __construct($delegated) {
		// here we override our constructor to ensure type is correct
		if ($delegated instanceof Caching\StoreInterface) {
			parent::__construct($delegated);
		}	
		
		else {
			throw new \Exception(
				"Failed to instantiate {$this->ident()} because delegated " .
				"property does not implement Caching.StoreInterface"
			);
		}
		
	}
}