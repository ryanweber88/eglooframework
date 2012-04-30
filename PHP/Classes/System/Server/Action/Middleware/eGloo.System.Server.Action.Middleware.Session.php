<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server;
use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Represents a user session within stateful application; it doesn't manage session
 * data, persay, but transparently manages the session_id, which is based on
 * request uuid, manages session "context" data, which is data that has been placed
 * into the application context, but becomes invalidated if session_id can no
 * longer be identified
 * @author Christian Calloway
 *
 */
class Session extends \photon\session\Session implements MiddlewareInterface, Server\Context\ContextInterface { 
	
	use Server\Context\ContextTrait;
	
	/** used as namespace qualifier for session cookie */
	const NS_COOKIE  = 'scsiv';
	
	/** used as namespace qualifier for session key */
	const NS_SESSION = 'scs-';
		
	function __construct($store = null) {
		// defaults to cookie based storage - this shouldn't change
		parent::__construct(is_null($store) ? 
			new Session\Storage\Cookie() : $store
		); 

						
		// add a session context observer - the point
		// is to check if session is still viable - if it is not,
		// then expire data from application context; this is done 
		// "in-house" as observing session context really
		// only makes sense within session 
		//$this->context()->attach($this);
		
		// TODO application and sessin should not be coupled
		// in this manner
		$application = &Server\Application::instance();
		$application->context()->bind('session', $this);
	}
	

	
	public function processRequest(Request  &$request) { 
		// initialize storage, or retrieve cookies from request object
		if ($request->isHTML()) { 
			$this->store->init($request);
			
			// set session id based upon what initialized value store;
			// this will most likely be the request uuid, which is gaurenteed
			// to be unique
			session_id($this->store->iv);
			
			//\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
			
			// initialize session and feed values back into session global
			// from this object, so that $_SESSION transparently contains
			// values retrieved from request
			$GLOBALS['_SESSION'] = [ ];

			// store should save to data, but unfortunately, saves to cookie hash, which suggest that
			// storage must be cookie based - very bad design mf'er
			$data = &$this->store->cookie;
			
			foreach ($data as $key => $value) {
				if (strpos($key, self::NS_SESSION) !== false) {  
					if (is_object($value)) { 
						$value = 'object:' . get_class($value);
					}		
		
					\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log("Session::processRequest retrieving:$key is $value");
					$GLOBALS['_SESSION'][$key] = $value; 
				}
			}
			
			// check if session has registered itself to application context - 
			// if that is the case, then copy from 
			// TODO copying parts of context between each other should be
			// managed externally and moreso gracefully
			$application = &Server\Application::instance();
			
			// if context currently exists in application scope, then attach reference
			// of that context to session, otherwise create a new context in callback
			
			if ($application->context()->exists($this->store->iv)) { 
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"-----Session::processRequest CONTEXT EXISTS--------" . get_class($application->context()->retrieve($this->store->iv))
				);
			}
			
			// retrieve session context, from either application's context or 
			// instantiate new instance as set as current context
			$sessionContext = $application->context()->retrieve($this->store->iv, function() { 
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"-----Session::processRequest NEW SESSION CONTEXT-------"
				);	
				
				return new Server\Context\Session($this);
			});
			
			// TODO changed should be explicitly set here - needs to placed transparenly
			// during retrieval process
			$sessionContext->changed(false);
			$this->context($sessionContext);
		}
		
		// TODO fire-event to determine if context is still valid?
		// $this->context()->valid()
		
		
	}
	
	
	public function &processResponse(Request $request, Response &$response) {
		
		// retrieve values placed into $_SESSION superglobal, which has no meaningd
		// in a cli environment, and place into requests session, so values
		// can be commited to response cookie
		if ($request->isHTML()) { 
			foreach($_SESSION as $key => $value) { 
				if (is_object($value)) { 
					$value = get_class($value);
				}
				
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"Session::processResponse saving:$key is $value for request {$request->GET['eg_requestClass']}"
				);
				$this[$key] = $value;
			}
			
			
			// commits user id value back to response  - parameter is passed by reference,
			// so response value header is changed on method call
			// TODO replace condition with more elegant solution - asynchronous 
			// nature of 2+ application servers, means cookie data, as identified
			// by session_id may be overwritten by an asynchronous request that
			// is completed before primary request
			$this->store->commit($response);
			
			// checked if session context has been application bound - if it
			// hasn't or if context has changed, then (re)bind to application
			// context
			$application = &Server\Application::instance();
			
			/*
			if ($this->context()->changed) { 
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"------Session::processResponse CONTEXT CHANGED---------"
				);				
			}
			
			if (!$application->context()->exists($this->store->iv)) {
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"------Session::processResponse CONTEXT DOESNT EXIST---------"
				);
			}
			*/
			
			if ($this->context()->changed() || !$application->context()->exists($this->store->iv)) { 
				
				\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
					"------Session::processResponse BINDING NEW SESSION CONTEXT---------"
				);
				
				$application->context()->bind(
					$this->store->iv, $this->context()
				);
			}	
		}
		
		
		return $response;
	}
	
	/**
	 * 
	 * Retrieves session variables from store
	 * @todo replace and use iterator interface (?) - the only reason not to
	 * is that this class shouldn't be used outside of middleware aspects,
	 * essentially rendering it entirely transparent
	 */
	public function toArray() {
		$data = [ ];
		 
		array_walk($this->store->getAll(), function($key, $value) use (&$data) { 
			if (strpos($key, self::NS_SESSION) !== false) { 
				$data[str_replace(self::NS_SESSION, null, $key)] = $value;
			}
		});
		
		return $data;
	} 
	
}