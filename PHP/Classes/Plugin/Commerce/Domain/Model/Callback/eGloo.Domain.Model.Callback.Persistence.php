<?php
namespace eGloo\Domain\Model\Callback;

use \eGloo\Dialect\ObjectSafe as Object;
use \eGloo\Domain\Model;

/**
 * Provides generic crud operations, wrapped with model callback
 * handlers
 */
class Persistence extends Object {
	
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