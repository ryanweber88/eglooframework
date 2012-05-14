<?php
namespace eGloo\Performance\Caching;

use \eGloo\Dialect\ObjectSafe as Object,
    \eGloo\Utilities\Collection;

abstract class Store extends Object
	implements StoreInterface {
	
	protected function server ($__mixed = null) {
		$arguments = Collection::flatten(func_get_args());
		
		return isset($arguments['server'])
			? $arguments['server']
			: null;
	}
}