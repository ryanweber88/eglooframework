<?php
namespace eGloo\Utilities\HPHP\Target\HTTP;

/**
 * 
 * Provides a callback interface to natively compiled smarty engine
 * @author Christian Calloway
 *
 */
class Smarty extends \eGloo\Utilities\HPHP\Target\HTTP { 
	
	const PORT = 95;
	const DIR_ROOT = './SmartyStandAloneComplex';
	const DIR_COMPILED = './templates_c';
	
	function __construct() { 
		// call parent constructor with callback to access smarty native
		parent::__construct();		
		
		// TODO change to configuration
		$this->port = self::PORT;
	}


	/**
	 * 
	 * Registers a compiled template and flags re-comiplation
	 * @param string $pathCompiled
	 */
	public function registerCompiled($pathCompiled) { 
		
		// first copy file into binary "context"
		$fileName = array_pop(explode(
			'/', $pathCompiled
		));
		
		$destination = 
			\eGlooConfiguration::getFrameworkRootPath() . '/' . 
			$this->root() .                               '/' . 
			self::DIR_COMPILED .                          '/' .
			$fileName;
		
		echo "$pathCompiled vs $destination"; exit;
		
		if (copy($pathCompiled,  $destination)) { 
			// flags required compilation 
			static::compile();
		}
		
		throw new \eGloo\Dialect\Exception(
			'FAILED copying compiled >> ' . $pathCompiled
		);
	}
	

	protected function root($path = null) { 
		//echo parent::root(self::DIR_ROOT . "/$path");
		return parent::root(self::DIR_ROOT . "/$path"); 
	}
	
}