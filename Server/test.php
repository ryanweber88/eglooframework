<?php
namespace eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine;

class Test { 
	
	const EXTENSION = 'blitz';
	
	function __construct() { 

		// build mock implementor instance
		$this->implementor = new stdClass;
		$this->implementor->right_delimiter = '<!--{';
		$this->implementor->left_delimiter  = '}-->';
		$this->implementor->template_dir = [
			'/home/christian/Develop/www/tierzwei/Client.gloo/InterfaceBundles/Default/XHTML'
		];
	}
	
	protected function translate($content) { 
		// translates smarty templates (as well as its includes - recursively)
		// to blitz compatible template 
		$rightDelimiter = preg_quote(
			$this->implementor->left_delimiter
		);

		$leftDelimiter = preg_quote(
			$this->implementor->right_delimiter
		);
		
		// match include statements, and recursively replace content
		preg_replace(
			"/{$rightDelimiter}include.+?file=('|\")(.+?)('|\"){$leftDelimiter}/", 
			
			$this->translate(file_get_contents($this->tplPath('$2'))),
			
			$content
		);
		
	}
	
	private function tplPath($fileName) { 
		
		
	}

	
	final private function isBlitzAvailable() { 
		// checks for the existence of blitz module
		// TODO check overhead of extension_loaded fnuction
		return extension_loaded(self::EXTENSION);
	}

	
	private $paths;
	private $implementor;
	
}