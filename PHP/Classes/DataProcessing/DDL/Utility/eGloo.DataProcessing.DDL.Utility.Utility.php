<?php
namespace eGloo\DataProcessing\DDL\Utility;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Provides disparate utility methods to ddl package
 * @author Christian Calloway
 *
 */
class Utility extends \eGloo\Dialect\Object { 
	
	
	/**
	 * 
	 * Determines entity path based upon inheritance chain
	 * @param Entity $entity
	 */
	static public function pathEntity(Entity $entity) { 
		$hierarchy = [ $entity->_class->name ];
		
		// TODO build hierarchy based on inheritance chain
		
		return implode('/', $hierarchy);
	}
	
	/**
	 * 
	 * Provides path to 
	 * @param Entity $entity
	 */
	static public function pathDefinitions(Entity $entity) { 
		// TODO replace explicit reference to Entities.xml file - 
		// keeping in mind that there may exist multiple definitions,
		// key by $entity parameter
		return 
			\eGlooConfiguration::getApplicationsPath() . '/' .
			\eGlooConfiguration::getApplicationPath()  . '/XML/Entities.xml';
	}
	
	/**
	 * 
	 * Provide path to statement group, keyed by entity parameter
	 * @param Entity $entity
	 */
	static public function pathStatements(Entity $entity) { 
		// TODO this must be explanded upon to allow for loading
		// statements at different contextual levels
		// applicaiton, common, framework, etc
		$path = "/home/petflowdeveloper/www/tierzwei/Common/Database/DPStatements/MySQLiOOP";
		//\eGlooConfiguration::getApplicationsPath() . '/' .
		//\eGlooConfiguration::getApplicationPath()  . '/Database/Statements/' . 
		
		return "$path/{$entity->_class->name}";		
	}
}