<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain,
		\eGloo\Domain\Model,
		\eGloo\Domain\Cache,
    \eGloo\Performance\Caching;
    
/**
 * Provides callback interface 
 */
class Cache extends Model\Callback {
	
	const GATEWAY_NAMESPACE = 'Model';
	
	public function afterSave(Domain\Model $model) {
		$cache = new Cache\Model;

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
		$cache = new Cache\Model;
		$cache->write($model);
	}
	

	protected function invalidates(Domain\Model $model) {
		
		// iterate through model/query cache and delete any
		// saved references
		foreach(array(new Cache\Model, new Cache\Query) as $cache) {
			$cache->delete($model);
		}
		
	}
	

}