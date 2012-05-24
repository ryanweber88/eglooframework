<?php
namespace eGloo\Performance\Caching;

/**
 * Interface is used as a marker to determine if instances are
 * cacheable to Caching\Store classes
 * @author Christian Calloway callowaylc@gmail.com
 */
interface CacheableInterface {
	/**
	 * Returns boolean indicating whether instance is cacheable
	 * @return boolean
	 */
	public function cacheable();
}
