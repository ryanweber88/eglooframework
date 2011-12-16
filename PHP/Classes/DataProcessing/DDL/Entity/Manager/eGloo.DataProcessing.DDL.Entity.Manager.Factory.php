<?php
namespace eGloo\DataProcessing\DDL\Entity\Manager;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Responsible for retrieving entity manager from correct context
 * @author Christian Calloway
 *
 */
class Factory extends \eGloo\Dialect\Object { 
	
	// TODO key should be hex for faster lookup
	const KEY = 'entity.manager';
	
	/**
	 * 
	 * Retrieves an entity manager from assigned context, or application by default
	 * @param \eGloo\System\Server\Context $context
	 * @todo  Don't think entity managers should be stored by context
	 */
	public static function factory(\eGloo\System\Server\Context $context = null) { 
		if (is_null($context)) { 
			$context = \eGloo\System\Server\Application::instance()->context();
		}
		
		if ($context->available()) { 
			if (!$context->exists(self::KEY)) { 
				$context->bind(
					self::KEY, new DDL\Entity\Manager
				);
			}
		}
		
		return $context->retrieve(self::KEY);
	}
}