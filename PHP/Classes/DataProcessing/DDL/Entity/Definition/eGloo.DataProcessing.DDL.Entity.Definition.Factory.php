<?php
namespace eGloo\DataProcessing\DDL\Entity\Definition;

use \eGloo\DataProcessing\DDL;

/**
 *
 * Provides factory method for entity definitions
 * @author Christian Calloway
 * @deprecated Unless factory complexity increases, I don't see a reason
 * to house within its own class
 *
 */
class Factory extends \eGloo\Dialect\Object {

	static public function &factory(Entity $entity) {

		$key = $entity->_class->name;

		if (!isset(static::$definitions[$key])) {
			$builder = new Builder($entity);

			static::$definitions[$key] = $builder->build();
		}

		return static::$definitions[$key];
	}

	private static $definitions = [ ];
}
