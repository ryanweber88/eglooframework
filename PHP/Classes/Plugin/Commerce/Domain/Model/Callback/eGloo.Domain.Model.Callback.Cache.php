<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain,
		\eGloo\Domain\Model,
    \eGloo\Performance\Caching;
    
/**
 * Provides callback interface 
 */
class Cache extends Model\Callback {
	
	public function afterSave(Domain\Model $model) {
		$gateway = Caching\Gateway::getCacheGateway();

		// invalidate/clear cache
		// @TODO fit indexed values into cache callback
		// @TODO use \eGloo cache
		$gateway->deleteObject($model->id);
		
		// save cache
		$gateway->storeObject($model->id, $model, $model->class->namespace);
		
	}
	
	public function afterDelete(Domain\Model $model) {
		$gateway->deleteObject($model->id);
	}
	
}