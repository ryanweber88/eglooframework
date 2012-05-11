<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain,
		\eGloo\Domain\Model,
    \eGloo\Performance\Caching;
    
/**
 * Provides callback interface 
 */
class Cache extends Model\Callback {
	
	const GATEWAY_NAMESPACE = 'Model';
	
	public function afterSave(Domain\Model $model) {
		$gateway = Caching\Gateway::getCacheGateway();

		// invalidate cache object
		$this->invalidate($model);
		
		// save to cache
		$gateway->storeObject(
			$this->key($model), $model, self::GATEWAY_NAMESPACE
		);
		
	}
	
	/**
	 * Invalidate cache after deletion from backend
	 */
	public function afterDelete(Domain\Model $model) {
		$this->invalidate($model);
	}
	
	/**
	 * Store to cache after find
	 */
	public function afterFind(Domain\Model $model) {
		$gateway = Caching\Gateway::getCacheGateway();
		$gateway->storeObject($this->key($model), $model, self::GATEWAY_NAMESPACE);
	}
	
	public function beforeFind(Domain\Model $model) {
		//$gateway = Caching\Gateway::getCacheGateway();
		
		//if (is_array($gateway->getObject($model->id))){ }
	}
	

	protected function invalidate(Domain\Model $model) {
		// responsible for invalidating all memcache records attached to
		$gateway = Caching\Gateway::getCacheGateway();
		$manager = Caching\Manager::instance();

		// invalidate/clear cache
		// @TODO fit indexed values into cache callback
		// @TODO use \eGloo cache
		//$gateway->deleteObject($model->id);			
	}
	
	protected static function key(Domain\Model $model) {
		return $model->cacheKey();
	}
	
	
}