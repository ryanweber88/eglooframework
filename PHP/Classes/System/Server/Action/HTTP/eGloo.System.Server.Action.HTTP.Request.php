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
class Request extends \photon\http\Request implements \eGloo\System\Server\Context\Contextable { 
	
	
	function __construct($message) { 
		parent::__construct($message);
		
		// custom headers
		//$this->headers['Accept-Encoding'] = 'gzip,deflate';

		// instantiate context for request lifetime
		$this->context = new \eGloo\System\Server\Context($this);
	}
	
	
	function __destruct() { 
		// clean-up context store
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server.Contextable::context()
	 */
	public function &context() {
		return $this->context;
	}
	
	protected $context;
	
}