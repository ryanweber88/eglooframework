<?php
namespace eGloo\TemplateProcessing\Bridge;

/**
 * 
 * Uses bridge pattern to separate Smarty implementation - this is done to
 * allow for the transparent evocation of natively compiled smarty engine (if 
 * its applicable) 
 * @author Christian Calloway
 *
 */
class TemplateEngine {
	
	function __construct()

	protected $implementor;	
}