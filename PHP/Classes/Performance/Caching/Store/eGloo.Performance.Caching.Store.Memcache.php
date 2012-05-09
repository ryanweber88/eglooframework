<?php
namespace eGloo\Performance\Caching\Store;

use \eGloo\Performance\Caching;

class Memcache extends Caching\Store {
	
	public function read($name, $__mixed = null) {
		
	}
	
	public function write($key, $value, $__mixed = null);
	public function fetch($key, $lamda);
	public function delete($key, $__mixed = null);
	public function exists($key, $__mixed = null);	
}