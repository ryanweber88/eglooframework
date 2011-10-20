<?php 
namespace eGloo\System\Server\Action\HTTP;

use \eGloo\System\Server;

/**
 * 
 * Represents an HTTP request as provided by Mongrel2; the guts of this class
 * are defined within photon parent
 * @author Christian Calloway
 * @todo Separate from photon request and message
 *
 */
class Request extends \photon\http\Request implements Server\Context\ContextInterface { 
	
	use Server\Context\ContextTrait;
	
	const NAME_REQUEST_CLASS = 'eg_requestClass';
	const NAME_REQUEST_ID    = 'eg_requestID';
	
	function __construct($message) { 
		parent::__construct($message);
		
		// custom headers
		//$this->headers['Accept-Encoding'] = 'gzip,deflate';

		// instantiate context for request lifetime
		$this->initializeContext();
		
		
		// add requestInfoBean to request context
		// TODO check if this is used - if so, remove it - horrible
		$requestInfoBean = &\eGloo\DataProcessing\Persistence\DataTransferObjects\Security\RequestInfoBean\Stateful::instance(
			true
		);
		
		$this->context->bind('requestInfoBean', $requestInfoBean);
		
		// TODO temporarily add request to application instance until something
		// more elegant presents itself
		$application = &Server\Application::instance();
		$application->context()->bind('request', $this);
	}
	
	
	function __destruct() { 
		// clean-up context store
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
			'xjs',
			'xcss',
			'file',
			'image',
			'media'
		];
		
		return !in_array($this->GET[static::NAME_REQUEST_CLASS], $notHtml);
	}
	
	
}
