<?php
namespace eGloo\System\Server\Action\Middleware;

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
class Session extends \photon\session\Session implements MiddlewareInterface, \eGloo\System\Server\Context\ContextInterface, \SplObserver { 
	
	use \eGloo\System\Server\Context\ContextTrait;
	
	function __construct($store = null) {
		// defaults to cookie based storage - this shouldn't change
		parent::__construct(is_null($store) ? 
			new Session\Storage\Cookie() : $store
		); 
		
		// attaches context awareness to session
		$this->initializeContext();
		
		// add a session context observer - the point
		// is to check if session is still viable - if it is not,
		// then expire data from application context; this is done 
		// "in-house" as observing session context really
		// only makes sense within session 
		$this->context()->attach($this);
		
	}	
	
	
	
	public function update(\SplSubject $context) { 
		// handle updates to sessions context if session is no longer viable
		// ie, invalidate session data within application context
		
	}
	
	public function processRequest(\eGloo\System\Server\Action\HTTP\Request  &$request) { 
		// initialize storage, or retrieve cookies from request object
		$this->store->init($request);
		
		// set session id based upon what initialized value store;
		// this will most likely be the request uuid, which is gaurenteed
		// to be unique
		session_id($this->store->iv);
	}
	
	
	public function &processResponse(\eGloo\System\Server\Action\HTTP\Request $request, \eGloo\System\Server\Action\HTTP\Response &$response) { 
		// commits user id value back to response  - parameter is passed by reference,
		// so response value header is changed on method call
		$this->store->commit($response);
		
		return $response;
	}
	
}