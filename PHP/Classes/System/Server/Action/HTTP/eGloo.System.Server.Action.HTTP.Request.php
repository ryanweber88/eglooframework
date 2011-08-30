<?php 
namespace eGloo\System\Server\Action\HTTP;

/**
 * 
 * Represents an HTTP request as provided by Mongrel2; the guts of this class
 * are defined within photon parent
 * @author Christian Calloway
 * @todo Separate from photon request and message
 *
 */
class Request extends \photon\http\Request { 
	
	
	function __construct($message) { 
		parent::__construct($message);
	}
}