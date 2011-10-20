<?php
namespace eGloo\System\Server\Utilities;

/**
 * 
 * Provides a set of static methods to transparently adapt/disguise
 * server environment with underlying eglooframework
 * @author Christian Calloway
 *
 */
class Adapter extends \eGloo\Dialect\Object { 
	
	/**
	 * 
	 * Places request parameters, which are not available (in a traditional sense)
	 * to environment within tradition php superglobals
	 * @param  \eGloo\System\Server\Action\HTTP\Request $request
	 * @return void
	 * @todo   replace with em architecture
	 */
	static public function parameters($request) {
		
		// request parameters
		$superGlobalName  = "_{$request->method}";
		$$superGlobalName = &$request->{$request->method};
		$_REQUEST         = &$request->{$request->method};
		
		// cookies

		// sessions
	}
}