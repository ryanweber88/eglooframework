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
class Request extends \photon\http\Request implements \eGloo\System\Server\Context\ContextInterface { 
	
	const NAME_REQUEST_CLASS = 'eg_requestClass';
	const NAME_REQUEST_ID    = 'eg_requestID';
	
	function __construct($message) { 
		parent::__construct($message);
		
		// custom headers
		//$this->headers['Accept-Encoding'] = 'gzip,deflate';

		// instantiate context for request lifetime
		$this->context = new \eGloo\System\Server\Context($this);
		
		
		// add requestInfoBean to request context
		$requestInfoBean = &\eGloo\DataProcessing\Persistence\DataTransferObjects\Security\RequestInfoBean\Stateful::instance(
			true
		);
		
		$this->context->bind('requestInfoBean', $requestInfoBean);
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
	
	/**
	 * 
	 * Determines if request is NOT for xcss, xjavascript, media, etc
	 * @todo this is a hack as request for resource should be uniform, and
	 * this can be easily hacked via uri
	 */
	public function isHTML() { 
		$notHtml = [
			'xcss',
			'xjavascript',
			'xcss'
		];
		
		return !in_array($this->GET[static::NAME_REQUEST_CLASS], $notHtml);
	}
	
	protected $context;
	
}
