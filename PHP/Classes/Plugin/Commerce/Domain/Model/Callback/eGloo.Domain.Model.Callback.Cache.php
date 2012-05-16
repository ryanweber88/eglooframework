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
		$cache = new _Cache\Model;

		// invalidate cache object
		$this->invalidates($model);
		
		// save to cache
		$cache->write($model);
		
	}
	
	/**
	 * Invalidate cache after deletion from backend
	 */
	public function afterDelete(Domain\Model $model) {
		$this->invalidates($model);
	}
	
	/**
	 * Store to cache after find
	 */
	public function afterFind(Domain\Model $model) {
		$cache = new _Cache\Model;
		$cache->write($model);
	}
	

	protected function invalidates(Domain\Model $model) {
		
		// iterate through model/query cache and delete any
		// saved references
		foreach(array(new _Cache\Model, new _Cache\Relation) as $cache) {
			$cache->delete($model);
		}
		
	}
	

}