<?php
namespace eGloo\Domain\Cache;

use \eGloo\Domain;

/**
 * Cache interface to Relation
 * @author Christian Calloway callowaylc@yahoo.com
 * @TODO don't know if this is needed?
 */
class Relation extends Domain\Cache {

	protected function server($__mixed = null) {
		return 'Relation';	
	}
	
}