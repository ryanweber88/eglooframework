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

		// get "compiled" filename from filepath				
		$destination = 
			\eGlooConfiguration::getFrameworkRootPath() . '/' . 
			$this->root() .                               '/' . 
			self::DIR_COMPILED .                          '/' .
			\eGloo\IO\File::basename($pathCompiled);
				
		if (copy($pathCompiled,  $destination)) { 
			// flags required compilation 
			return $this->compile();
		}
		
		throw new \eGloo\Dialect\Exception(
			'FAILED copying compiled >> ' . $pathCompiled
		);
	}
	

	protected function root($path = null) { 
		return parent::root(self::DIR_ROOT . $path); 
	}
	
}