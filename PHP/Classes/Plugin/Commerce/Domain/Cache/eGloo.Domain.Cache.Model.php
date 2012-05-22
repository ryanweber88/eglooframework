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
	
	/**
	 * Delete cache object across cache server instances
	 */
	public function delete(Caching\CacheKeyInterface $obj) {
				
		// first we delete the model cache, should it exist	
		parent::delete($obj);
	
		// second we look through relation for any queried caches
		// that use model type
		// @TODO right now, an entire collection/set is dumped; we
		// need to do this at granular level
		$cache = Caching\Gateway::instance();
		
		// get cache keys for relation and remove all
		// that match
		// @TODO I don't like deleting items on Relation
		// server from Cache\Model 
		$partialKey = \eGlooString::reverseTokens(
			'\\', $obj->class->qualified_name
		);
		
		foreach($cache->keys('Relation') as $key => $ignore) {
			if (strpos($key, $partialKey) !== false) {
				
				// @TODO this is messy at the moment - we need to remove 
				// 'Relation::' from $key as it will be added back when
				// passed to deleteObject method 
				$cache->deleteObject(	
					str_replace('Relation::', null, $key), 'Relation'
				);
			}
		}
	}	
	
}
