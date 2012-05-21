<?php
namespace eGloo\Domain\Cache;

use \eGloo\Domain;
use \eGloo\Performance\Caching;

/**
 * Domain\Cache interface to Relation cache; is inteded to use Model\Relation
 * instances as keys
 * @author Christian Calloway callowaylc@gmail.com
 */
class Relation extends Domain\Cache {

	protected function server() {
		return 'Relation';	
	}
	

		
	
}