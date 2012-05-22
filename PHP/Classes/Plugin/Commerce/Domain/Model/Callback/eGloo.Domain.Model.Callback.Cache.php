<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain,
		\eGloo\Domain\Model,
		// this is unfortunately causing a collision
		// with class name, so aliasing to _Cache
		\eGloo\Domain\Cache as _Cache,
    \eGloo\Performance\Caching;
    


/**
 * Provides callback interface for cache concerns
 * @author Christian Calloway callowaylc@gmail.com
 */
class Cache extends Model\Callback {
	
	
	public function afterSave(Domain\Model $model) {
		$cache = _Cache\Model::instance();

		// invalidate cache object
		$cache->delete($model);
		
		// save to cache
		$cache->write($model);
		
	}
	
	/**
	 * Invalidate cache after deletion from backend
	 */
	public function afterDelete(Domain\Model $model) {
		$cache = _Cache\Model::instance();
		$cache->delete($model);
	}
	
	/**
	 * Store to cache after find
	 */
	public function afterFind(Domain\Model $model) {
		$cache = _Cache\Model::instance();
		
		// @TODO removed exists here as its a slight hit on performance
		if (!$cache->exists($model)) {
			$cache->write($model);
		}
	}


}