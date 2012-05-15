<?php
namespace \eGloo\Domain\Cache;

use \eGloo\Domain;

/**
 * Cache interface to Model cache
 * @author Christian Calloway callowaylc@yahoo.com
 */
class Model extends Domain\Cache {

	
	protected function server($__mixed = null) {
		return 'Model';	
	}
	
}
