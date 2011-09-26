<?php
namespace eGloo\System\Server\Context;

/**
 * Provides factory method to simplify access to different contexts;
 * @author Christian Calloway
 */
trait ContextTrait { 

	
	final private function &factoryContext($type) { 
		// traits cannot have contexts.. apparently
		/*
		switch ($type) { 
			case CONTEXT_NETWORK:
				break;
				
			case CONTEXT_APPLICATON:
				return \eGloo\System\Server\Application::instance();
				
			case CONTEXT_SERVER:
				break;

			case CONTEXT_SESSION:
				break;

			case CONTEXT_REQUEST:
				break;
								
		}
		*/
	}
	
	final private function contextApplication() { 
		return \eGloo\System\Server\Application::instance()->context();
	}
}