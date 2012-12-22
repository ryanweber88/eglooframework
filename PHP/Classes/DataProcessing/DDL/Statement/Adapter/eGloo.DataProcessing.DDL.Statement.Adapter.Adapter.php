<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement\Adapter;

/**
 *
 * Represents an adapter to a specific statement type; responsible for
 * mending arguments, so that
 * @author Christian Calloway
 *
 */
abstract class Adapter extends \eGloo\Dialect\Object implements AdapterInterface{

	/**
	 *
	 * Processes field data in accordance to engine/adapter type
	 */
	abstract public static function processFields(array $fields = [ ]);

	abstract public static function processOrderBy($orderBy);
}
