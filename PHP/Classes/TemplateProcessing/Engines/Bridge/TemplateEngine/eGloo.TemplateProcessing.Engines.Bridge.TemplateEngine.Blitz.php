<?php
namespace eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine;

/**
 * 
 * Provides a bridge to Smarty implementor interface, while providing
 * native execution speed via blitz plugin
 * @author Christian Calloway
 *
 */
class Blitz extends \eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine {

	use \eGloo\System\Server\Context\ContextTrait;
	
}