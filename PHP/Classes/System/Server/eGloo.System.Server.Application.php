<?php
namespace \eGloo\System\Server;

/**
 * 
 * Represents the application end of the server; in reality provides a global context
 * which EAS instances will share - since each instance is forked, we are not sharing
 * the same application object in memory, but simply an imprint of the same object
 * @author petflowdeveloper
 *
 */
class Application extends \eGloo\Dialect\Object { 
	
	function __construct($path) { 
		// loads bootstrap and configuration - this is by convention,
		// so must follow ./config.php and ./bootstrap.php
		
		// setup boostrap 
		require_once "$path/bootstrap.php";
		$this->bootstrap(new Bootstrap());
		
		// setup config - this following photon model, which i don't
		// really like (requires shouldn't return values, but place
		// them into context
		// TODO : replace return config file
		$this->config(require_once "$path/config.php");
		
		// set instance to self/this
		static::$instance = &$this;
	}
	
	/**
	 * 
	 * Provides singleton access to application instance
	 * @return Application
	 */
	final public static function &instance() { 
		return static::$instance;
	}
	
	/** @var \eGloo\Utilities\Bootstrap\BootstrapAbstract */
	protected $bootstrap;
	
	/**
	 * 
	 * @var mixed*
	 * @todo change to config object
	 */
	protected $config;
	
	/**
	 * 
	 * Singleton access to Application instance (there should never be more than one instance)
	 * @var Application
	 */
	private $instance;
	
}