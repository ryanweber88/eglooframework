<?php
namespace eGloo\TemplateProcessing\Engines\Bridge;

/**
 * 
 * Uses bridge pattern to separate Smarty implementation - this is done to
 * allow for the transparent evocation of natively compiled smarty engine (if 
 * its applicable) 
 * @author Christian Calloway
 *
 */
class TemplateEngine extends \eGloo\Dialect\Object {
	
	use \eGloo\Utilities\BridgeTrait;
	
	function __construct(\TemplateEngineInterface $implementor) { 
		$this->bridge($implementor);
	}

	
}