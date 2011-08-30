<?php
namespace eGloo\System\Server\Action\HTTP;

/**
 * 
 * Represents response object in dispatch cycle; while basic response data will remain,
 * much of photon parent's functionality will be altered to provide for dispatch
 * cycle with egloo framework
 * @author petflowdeveloper
 *
 */
class Response extends \photon\http\Response implements \eGloo\Utilities\Stringable { 
	
	/**
	 * (I don't like the idea of a response "rendering" itself, so a toString is provided
	 * to seamlessly pass along response object)
	 * @see eGloo\Utilities.Stringable::__toString()
	 */
	public function __toString() { 
		return $this->render();
	}
}