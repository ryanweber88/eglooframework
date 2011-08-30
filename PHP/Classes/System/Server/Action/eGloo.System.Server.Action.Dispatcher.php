<?php
namespace eGloo\System\Server\Action;

/**
 * 
 * Responsible for dispatch cycle - recieves mongrel2 request, routes to appropriate handler,
 * returns response to mongrel2
 * @author petflowdeveloper
 *
 */
class Dispatcher extends \photon\core\Dispatcher { 
	
	/**
	 * 
	 * Dispatches request to appropriate eGloo handler 
	 * @param HTTP\Request $request
	 */
	static public function dispatch(HTTP\Request $request) { 
		
	}
}