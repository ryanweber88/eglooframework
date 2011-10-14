<?php
namespace eGloo\Utilities\ClassBuilder\Group;


/**
 * 
 * Provides group functionality for method arguments
 * @author christian@petflow.com
 *
 */
class CSV extends \eGloo\Utilities\ClassBuilder\Group { 
	
	const DELIMITER = ',';
	
	function __construct() { 
		parent::__construct();
		
		$this->delimiter = self::DELIMITER;
	}
}