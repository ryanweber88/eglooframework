<?php
namespace eGloo\System\Server;

/**
 * 
 * Represents the application end or context of the Application Server (similar in model to application
 * context/scope within a servlet container); in reality provides a global context
 * which EAS instances will share - since each instance is forked, we are not sharing
 * the same application object in memory, but simply an imprint of the same object
 * @author petflowdeveloper
 *
 */
class Application extends \eGloo\Dialect\Object implements Context\Contextable { 
	
	/**
	 * 
	 * @TODO change parameters to hash? 
	 * @TODO remove them entirely and get values from environment?
	 */
	function __construct($pathHandler, $pathTarget) { 
		// loads bootstrap and configuration - this is by convention,
		// so must follow ./config.php and ./bootstrap.php
		
		// setup boostrap 
		require_once "$pathHandler/bootstrap.php";
		$this->bootstrap(new \Bootstrap());
		
		// setup config - this following photon model, which i don't
		// really like (requires shouldn't return values, but place
		// them into context
		// TODO : replace return config file
		$this->config(require_once "$pathHandler/config.php");
		
		// set instance to self/this
		static::$instance = &$this;
		
		// set target, which is the target egloo application
		// TODO : Remove this concept, find something more fluid
		$this->target($pathTarget);
		
		// set self as owner of context
		$this->context(new Context($this));
		
		// place session into context
	}
	
	/**
	 * 
	 * Provides singleton access to application instance
	 * @return Application
	 */
	final public static function &instance() { 
		return static::$instance;
	}
	
	/**
	 * 
	 * Will replace; application should not be accessor for session instance
	 */
	public function session() { 
		return $this->context()->retrieve('session');
	}
	
	/**
	 * 
	 * Will replace; application should not be accessor for request instance
	 */
	public function &request() { 
		return $this->context()->retrieve('request');
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
	 * Represents path to egloo application
	 * @var string
	 */
	protected $target;
	
	/**
	 * 
	 * Represents an applications "context" or scope
	 * @var Context
	 */
	protected $context;
	
	/**
	 * 
	 * Singleton access to Application instance (there should never be more than one instance)
	 * @var Application
	 */
	private static $instance;
	
}