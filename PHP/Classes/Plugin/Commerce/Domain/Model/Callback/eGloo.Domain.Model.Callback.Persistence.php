<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Domain,
		\eGloo\Domain\Model,
		\eGloo\Domain\Cache,
    \eGloo\Performance\Caching;

/**
 * Provides generic crud operations, wrapped with model callback
 * handlers
 */
class Persistence extends Model\Callback {
	
	public function afterCreate($model) {
		$manager = Model\Manager::instance();
		$manager->persist($model);
	}
	
	public function afterUpdate($model) {
		$manager = Model\Manager::instance();
		$manager->merge($model);		
	}

	public function afterDelete($model) {
		$manager = Model\Manager::instance();
		$manager->remove($model);
	}	
}	