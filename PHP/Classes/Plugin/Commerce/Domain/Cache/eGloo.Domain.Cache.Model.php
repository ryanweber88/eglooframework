<?php
namespace eGloo\Domain\Cache;

use \eGloo\Domain,
    \eGloo\Performance\Caching;

/**
 * Domain\Cache interface to Model cache; is intended to use Model instances
 * as keys and values
 * @author Christian Calloway callowaylc@gmail.com
 */
class Model extends Domain\Cache {
	
	protected function server() {
		return 'Model';	
	}
	
	public function delete(Caching\CacheKeyInterface $obj) {
		
		//echo "deleting " . get_class($obj);
		
		// first we delete the model cache, should it exist	
		parent::delete($obj);
	
		// second we look through relation for any queried caches
		// that use model type
		// @TODO right now, an entire collection/set is dumped; we
		// need to do this at granular level
		$cache = Caching\Gateway::instance();
		
		// @TODO don't hardcode namespace here
		// var_export($cache->keys('Relation'));
	}	
	
}
