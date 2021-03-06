<?php
namespace eGloo\Performance\Caching;

use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;
use \Exception as Exception;
use \Memcache as Memcache;
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * eGloo\Performance\Caching\Gateway Class File
 *
 * Contains the class definition for the eGloo\Performance\Caching\Gateway, a wrapper class for
 * tiered caching access and use.
 * 
 * Copyright 2011 eGloo, LLC
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *		  http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *	
 * @author George Cooper
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package Performance
 * @version 1.0
 */

/**
 * Cache Gateway
 * 
 * Provides an interface for common caching functionality such as read, write,
 * lifetime, deletion and statistics.  Is capable of caching by storage tier
 * based on importance of data persistence and data properties.
 * 
 * @package Performance
 * @subpackage Caching
 * @TODO implement tiered storage; currently only supports memcache
 */
class Gateway {

	private   $_active = false;
	private   $_memcache = null;
	private   $_filecache = null;
	private   $_cache_file_path = '';
	private   $_cache_tiers = 0x0;
	protected $keys              = array();
	protected $_memcache_servers = array();
	private   $_piping_hot_cache = array();
	protected static $_singleton;
	protected static $namespaceKeys = array();

	const USE_APCCACHE		= 0x1;		// 0000 0001
	const USE_FILECACHE		= 0x2;		// 0000 0010
	const USE_MEMCACHE		= 0x4;		// 0000 0100
	
	const DFLT_NAMESPACE  = 'Other';
	const MEMCACHED_HOST  = '127.0.0.1';
	const MEMCACHED_PORT  = 11211;

	

	private function loadMemcache() {
		if ($this->_active) {
			try {
				$persist_connection = true;
				$weight = 1;
				$timeout = 1;
				$retry_interval = 15;
				$status = true; // Server is considered online
				$failure_callback = array('\eGloo\Performance\Caching\Gateway', 'serverFailure');

				$i = 0;

				// Runtime
				$newMemcacheServer = new Memcache();
				
				for ($i = 0; $i <= 0; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Runtime'] = $newMemcacheServer;

				// Configuration
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 1; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Configuration'] = $newMemcacheServer;

				// Request Validation / Request Processing
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 2; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['RequestValidation'] = $newMemcacheServer;

				// Dispatching
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 3; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Dispatching'] = $newMemcacheServer;

				// Session
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 4; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Session'] = $newMemcacheServer;

				// Data Processing
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 5; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['DataProcessing'] = $newMemcacheServer;

				// Content
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 6; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Content'] = $newMemcacheServer;

				// Static
				$this->_memcache = new Memcache();

				for ($i = $i; $i <= 7; $i++) {
					$this->_memcache->addServer( 	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				// Templating
				$newMemcacheServer = new Memcache();
				
				for ($i = $i; $i <= 8; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}

				$this->_memcache_servers['Templating'] = $newMemcacheServer;

				// Model
				$newMemcacheServer = new Memcache();

				for ($i = $i; $i <= 9; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				}
				
				$this->_memcache_servers['Model'] = $newMemcacheServer;

				// Relation
				$newMemcacheServer = new Memcache();
				
				//for ($i = $i; $i <= 10; $i++) {
				$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i++,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													function($__mixed) {
														//echo (var_export(func_get_args(), true)); 
													} 
													
				);
				//}

				$this->_memcache_servers['Relation'] = $newMemcacheServer;	
				
								
				
				// Query
				$newMemcacheServer = new Memcache();
				
				//for ($i = $i; $i <= 11; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i++,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				//}

				$this->_memcache_servers['Query'] = $newMemcacheServer;

			
				
				// Other
				$newMemcacheServer = new Memcache();
				
				//for ($i = $i; $i <= 12; $i++) {
					$newMemcacheServer->addServer(	self::MEMCACHED_HOST,
													self::MEMCACHED_PORT + $i++,
													$persist_connection,
													$weight,
													$timeout,
													$retry_interval,
													$status,
													$failure_callback );
				//}
				
				$this->_memcache_servers['Other'] = $newMemcacheServer;
				

			} catch ( Exception $exception ) {
				Logger::writeLog( Logger::ERROR, 
							   'Memcache Server Addition: ' . $exception->getMessage(), 'Memcache' );	 
			}
		} else {
			
		}
	}

	public static function instance($arguments = null) {
		return static::getCacheGateway();
	}
	

	private function loadFileCache() {
		if ($this->_active) {
			$this->_cache_file_path = Configuration::getCachePath() . '/_file.cache';
				if (file_exists($this->_cache_file_path)) {
					$this->_filecache = eval( 'return ' . file_get_contents($this->_cache_file_path) . ';' );
				} else {
					// Logger::writeLog( Logger::NOTICE, 
					// 	'eGloo cache file not found: ' . $cache_file_path , 'Cache' );	 
					// Logger::writeLog( Logger::NOTICE, 
					// 	'Creating eGloo cache file...', 'Cache' );
					$this->_filecache = array();
				}
		} else {
			
		}
	}

	private function loadAPCCache() {
		// Do nothing
	}

	public function active() {
		return $this->_active;
	}

	public function deleteObject( $id, $namespace = null, $kept_hot = false ) {
		$retVal = null;

		if ( !$namespace ) {
			$namespace = 'egDefault';
		}

		$id = $namespace . '::' . $id;

		if ( $kept_hot && isset($this->_piping_hot_cache[$id]) ) {
			unset($this->_piping_hot_cache[$id]);
		}

		if ($this->_active) {
			if ($this->_cache_tiers & self::USE_APCCACHE) {
				try {
					apc_delete($id);
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'APC Cache Lookup for id \'' . $id . '\': ' . $exception->getMessage(), 'APC' );
				}
			} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
				try {
					$memcacheServer = null;

					if (isset($this->_memcache_servers[$namespace])) {
						$memcacheServer = $this->_memcache_servers[$namespace];
					} else {
						$memcacheServer = $this->_memcache_servers['Other'];
					}

					$retVal = $memcacheServer->delete( $id );
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'Memcache Cache Lookup for id \'' . $id . '\': ' . $exception->getMessage(), 'Memcache' );
				}
			} else if ($this->_cache_tiers & self::USE_FILECACHE) {
				$retVal = $this->_filecache[$id];
				unset($this->_filecache[$id]);
			}
		}
		
		// remove from in-memory lookup
		unset($this->keys[$namespace][$id]);
		
		return $retVal;
	}

	public function getObject( $id, $namespace = null, $keep_hot = false ) {
		// TODO extensive error checking and input validation
		$retVal = null;

		if ($this->_active) {
			if ( !$namespace ) {
				$namespace = 'egDefault';
			}

			$id = $namespace . '::' . $id;

			if ( $keep_hot && isset($this->_piping_hot_cache[$id]) ) {
				$retVal = $this->_piping_hot_cache[$id];
			} else {
				if ($this->_cache_tiers & self::USE_APCCACHE) {
					try {
						$retVal = apc_fetch($id);

						$this->_piping_hot_cache[$id] = $retVal;
					} catch ( Exception $exception ) {
						Logger::writeLog( Logger::ERROR, 
							'APC Cache Lookup for id \'' . $id . '\': ' . $exception->getMessage(), 'APC' );				 
					}
				} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
					try {
						$memcacheServer = null;

						if (isset($this->_memcache_servers[$namespace])) {
							$memcacheServer = $this->_memcache_servers[$namespace];
						} else {
							$memcacheServer = $this->_memcache_servers['Other'];
						}


						
						$retVal = $memcacheServer->get( $id );
						
						

						$this->_piping_hot_cache[$id] = $retVal;
					} catch ( Exception $exception ) {
						Logger::writeLog( Logger::ERROR, 
							'Memcache Cache Lookup for id \'' . $id . '\': ' . $exception->getMessage(), 'Memcache' );
					}
				} else if ($this->_cache_tiers & self::USE_FILECACHE) {
					if (isset($this->_filecache[$id])) {
						$cache_pack = $this->_filecache[$id];
						$blob = $cache_pack['blob'];

						if ($cache_pack['base64']) {
							$blob = base64_decode($blob);
						}

						if ($cache_pack['serialized']) {
							$blob = unserialize($blob);
						}

						if ( (time() - $cache_pack['pack_time']) > $cache_pack['ttl'] ) {
							unset($this->_filecache[$id]);
						}

						$retVal = $blob;

						$this->_piping_hot_cache[$id] = $retVal;
					}
				}
			}
		}

		return $retVal;
	} 

	public function getStats() {
		$retVal = null;

		if ($this->_cache_tiers & self::USE_MEMCACHE) {
			$retVal = $this->_memcache->getStats();
		} else if ($this->_cache_tiers & self::USE_FILECACHE) {
			
		}

		return $retVal;
	}
	
	/**
	 * Retrieves list of memcache keys
	 */
	public function keys($namespace = null) {

		// @TODO remove hardcode for default namespace
		if (is_null($namespace)) {
			$namespace = 'Other';
		}
		
		// here we are going to statically cache memcache keys,
		// based on namespace; this is mostly done for performance
		// reasons and works in conjunction with Gateway::exists method
		$key  = __FUNCTION__ . "/$namespace";
		$self = $this;
		

		// @TODO Query for keys fails intermittently, so we have wrapped with a do/while
		// loop - this is inherently dangerous, so this will serve only as a temporary
		// measure
		
		do {
			
			// @TODO querying memcache keys seems to be broken, or it only works once,
			// so we will need to set as instance property
			
			//$keys = static::cache($key, function() use ($self, $namespace) {
			$keys = null;
			
			if (!isset(static::$namespaceKeys[$namespace])) {
		    $list     = array();
				//$servers  = &$self->reference('_memcache_servers');
				$servers  = $this->_memcache_servers;
				$memcache = $servers[$namespace];
		    $allSlabs = $memcache->getExtendedStats('slabs');
		    $items    = $memcache->getExtendedStats('items');
	
		    foreach($allSlabs as $server => $slabs) {
		    			
						if (is_array($slabs)) {
								
		        	foreach($slabs as $slabId => $slabMeta) {
		        		
							 	
								if (is_numeric($slabId)) {
				        	 try {
				           	$cdump = $memcache->getExtendedStats('cachedump',(int)$slabId, 1000);								
									 }
									 catch(\Exception $ignore) {
									 	
									 }
									 
									 
				            foreach($cdump as $keys => $arrVal) {
											
				                if (!is_array($arrVal)) continue;
				                foreach($arrVal as $k => $v) {                   
				                   $list[] = $k; 
				                }
				            }
								}
		        }			
					}
					
		    } 
				
				$keys = $list;
			}
			//});
		} while (is_null($keys));
		
		
					
		// set our namespace ids on instance property keys
		// @TODO this will be replaced entirely
		if (!isset($this->keys[$namespace])) {
			$this->keys[$namespace] = array();
		}
		
		foreach($keys as $key) {
			$this->keys[$namespace][$key] = true;
		}
		
		return $this->keys[$namespace];

	}

	/**
	 * Determines if object exists without the hit of retrieving
	 * object from memcache stores (checks for existence of object id/key)
	 * @return boolean
	 */
	public function exists ($id, $namespace = 'Other') {
			
		// retrieve cached keys for namespace
		$keys = $this->keys($namespace);
			
		// reset id to use namespace as leading part of key
		$id = "$namespace::$id";		
		
		// ask if id is part of namespace domain
		return isset($keys[$id]); 
		       
	}

	public function storeObject( $id, $obj, $namespace = null, $ttl = 0, $keep_hot = false ) {
		// TODO extensive error checking and input validation
		$retVal = null;
		
		//if (is_object($obj) && $obj instanceof CacheKeyInterface) {
		//	$id = $obj->cacheKey();
		//}

		if ($this->_active) {
			if ( !$namespace ) {
				$namespace = 'egDefault';
			}

			$id = $namespace . '::' . $id;

			if ( $keep_hot ) {
				$retVal = $this->_piping_hot_cache[$id] = $obj;
			}

			if ($this->_cache_tiers & self::USE_APCCACHE) {
				try {
					$retVal = apc_store( $id, $obj, $ttl );
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'APC Cache Lookup for id \'' . $id . '\': ' . $exception->getMessage(), 'APC' );
				}
			} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
				try {
					$memcacheServer = null;

					if (isset($this->_memcache_servers[$namespace])) {
						$memcacheServer = $this->_memcache_servers[$namespace];
					} else {
						$memcacheServer = $this->_memcache_servers['Other'];
					}

					
					$retVal = $memcacheServer->set( $id, $obj, false, $ttl );
					

				} catch ( Exception $exception ) {
					echo $exception;
					Logger::writeLog( Logger::ERROR, 
							'Memcache Cache Write for id \'' . $id . '\': ' . $exception->getMessage(), 'Memcache' );
				}
			} else if ($this->_cache_tiers & self::USE_FILECACHE) {
				$cache_pack = array();

				$blob = $obj;

				if (is_array($obj) || is_object($obj)) {
					$cache_pack['serialized'] = true;
					$cache_pack['base64'] = false;
					$blob = serialize($obj);
				} else {
					$cache_pack['serialized'] = false;
					$cache_pack['base64'] = false;
				}

				// $cache_pack['base64'] = false; // TODO use this

				$cache_pack['pack_time'] = time();
				$cache_pack['ttl'] = $ttl;
				$cache_pack['blob'] = $blob;

				$this->_filecache[$id] = $cache_pack;
			}
		}

		// reset cache that holds keys
		//echo "saving/resetting $id\n";
		//echo "keys/$namespace\n";
		//static::clear_cache("keys/$namespace");
		//if (!in_array($id, $this->keys[$namespace])) {
		//	$this->keys[$namespace][] = ;
		//}
		
		// flag that id has been made available to cache
		if ($retVal !== false) {
			$this->keys[$namespace][$id] = true;
		}

		return $retVal; 
	}

	public function flushAllCache() {
		$retVal = null;

		$systemInfoBean = SystemInfoBean::getInstance();
		$systemActions = $systemInfoBean->appendValue('SystemActions', 'Preparing to flush Gateway Cache');

		if ($this->_active) {
			if ($this->_cache_tiers & self::USE_APCCACHE) {
				try {
					$retVal = apc_clear_cache();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'APC Cache Flush: ' . $exception->getMessage(), 'APC' );
				}
			} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
				try {
					$retVal = $this->_memcache->flush();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'Memcache Cache Flush: ' . $exception->getMessage(), 'Memcache' );
				}
			} else if ($this->_cache_tiers & self::USE_FILECACHE) {
				$this->_filecache = array();
			}
		}

		$systemActions = $systemInfoBean->appendValue('SystemActions', 'Gateway Cache flushed');

		return $retVal; 
	}

	public function flushApplicationCache() {
		// TODO Invalidate application level cache
		// For now, just flush all

		$retVal = null;

		if ($this->_active) {
			if ($this->_cache_tiers & self::USE_APCCACHE) {
				try {
					$retVal = apc_clear_cache();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'APC Cache Flush: ' . $exception->getMessage(), 'APC' );
				}
			} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
				try {
					$retVal = $this->_memcache->flush();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'Memcache Cache Flush: ' . $exception->getMessage(), 'Memcache' );
				}
			} else if ($this->_cache_tiers & self::USE_FILECACHE) {
				$this->_filecache = array();
			}
		}

		return $retVal; 
	}

	public function flushUIBundleCache() {
		// TODO Invalidate bundle level cache
		// For now, just flush all

		$retVal = null;

		if ($this->_active) {
			if ($this->_cache_tiers & self::USE_APCCACHE) {
				try {
					$retVal = apc_clear_cache();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'APC Cache Flush: ' . $exception->getMessage(), 'APC' );
				}
			} else if ($this->_cache_tiers & self::USE_MEMCACHE) {
				try {
					$retVal = $this->_memcache->flush();
				} catch ( Exception $exception ) {
					Logger::writeLog( Logger::ERROR, 
						'Memcache Cache Flush: ' . $exception->getMessage(), 'Memcache' );
				}
			} else if ($this->_cache_tiers & self::USE_FILECACHE) {
				$this->_filecache = array();
			}
		}

		return $retVal; 
	}

	public static function serverFailure( $host, $port ) {
		Logger::writeLog( Logger::EMERGENCY, 
			'Memcache daemon on host ' . $host . ' and port ' . $port . ' has failed',
			'Memcache' );
		Logger::writeLog( Logger::EMERGENCY, 'Attempting server failover... ', 'Memcache' );
	}

	/**
	 *
	 *
	 */
	public static function initialize() {
		$cacheGateway = self::getCacheGateway();

		if ($cacheGateway->active()) {
			Logger::writeLog( Logger::DEBUG, 'Initializing Caching System ', 'Cache' );

			// TODO Add a check for this.  It's unlikely that someone will be switching
			// applications or bundles and not want to invalidate application/bundle level
			// caches, but who knows.
			$egLastApplication = $cacheGateway->getObject( Configuration::getUniqueInstanceIdentifier() . '::' . 'egLastApplication', 'Runtime');
			$egLastUIBundle = $cacheGateway->getObject( Configuration::getUniqueInstanceIdentifier() . '::' . 'egLastUIBundle', 'Runtime');
			
			$currentApplication = Configuration::getApplicationName();
			$currentBundle = Configuration::getUIBundleName();
			
			if ($currentApplication !== $egLastApplication) {
				// Invalidate application level cache
				$cacheGateway->flushApplicationCache();
			}

			if ($currentBundle !== $egLastUIBundle) {
				// Invalidate bundle level cache
				$cacheGateway->flushUIBundleCache();
			}

			$egLastApplication = $cacheGateway->storeObject( Configuration::getUniqueInstanceIdentifier() . '::' . 'egLastApplication', $currentApplication, 'Runtime');
			$egLastUIBundle = $cacheGateway->storeObject( Configuration::getUniqueInstanceIdentifier() . '::' . 'egLastUIBundle', $currentBundle, 'Runtime');
		}
	}


	public static function getCacheGateway() {
		if ( !isset(self::$_singleton) ) {
			self::$_singleton = new self();

			if ( isset($_SERVER['EG_CACHE']) && $_SERVER['EG_CACHE'] === 'ON' ) {
				self::$_singleton->_active = true;
			} else if ( Configuration::getUseCache() ) {
				self::$_singleton->_active = true;
			} else {
				self::$_singleton->_active = false;
			}

			if ( isset($_SERVER['EG_CACHE_APC']) && $_SERVER['EG_CACHE_APC'] === 'ON' ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_APCCACHE;
				self::$_singleton->loadAPCCache();
			} else if ( Configuration::getUseAPCCache() ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_APCCACHE;
				self::$_singleton->loadAPCCache();
			} else {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | !self::USE_APCCACHE;
			}

			if ( isset($_SERVER['EG_CACHE_FILE']) && $_SERVER['EG_CACHE_FILE'] === 'ON' ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_FILECACHE;
				self::$_singleton->loadFileCache();
			} else if ( Configuration::getUseFileCache() ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_FILECACHE;
				self::$_singleton->loadFileCache();
			} else {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | !self::USE_FILECACHE;
			}

			if ( isset($_SERVER['EG_CACHE_MEMCACHE']) && $_SERVER['EG_CACHE_MEMCACHE'] === 'ON' ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_MEMCACHE;
				self::$_singleton->loadMemcache();
			} else if ( Configuration::getUseMemcache() ) {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | self::USE_MEMCACHE;
				self::$_singleton->loadMemcache();
			} else {
				self::$_singleton->_cache_tiers = self::$_singleton->_cache_tiers | !self::USE_MEMCACHE;
			}

		}


		return self::$_singleton; 
	}

	public function __destruct() {
		if ($this->_cache_tiers & self::USE_FILECACHE) {
			$cache_dump = var_export($this->_filecache, true);
			file_put_contents($this->_cache_file_path, $cache_dump);
		}
	}

}

