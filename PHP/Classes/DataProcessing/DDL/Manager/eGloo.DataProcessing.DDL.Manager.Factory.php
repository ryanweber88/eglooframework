<?php
namespace eGloo\DataProcessing\DDL\Manager;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Responsible for retrieving entity manager from correct context
 * @author Christian Calloway
 *
 */
class Factory extends \eGloo\Dialect\Object { 
	
	const KEY = 'entity.manager';
	
	public static function &factory(\eGloo\System\Server\Context &$context = null) { 
		if (is_null($context)) { 
			$context = \eGloo\System\Server\Application::instance()->context();
		}
		
		if (!$context->exists(self::KEY)) { 
			$context->bind(
				self::KEY, new Manager()
			);
		}
		
		return $context->retrieve(self::KEY);
	}
}