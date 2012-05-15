<?php
namespace eGloo\Performance\Caching;

interface CacheKeyInterface {
	/*
	 * Returns an appropriate cache key for a given model instance
	 */
	public function cacheKey();
}
