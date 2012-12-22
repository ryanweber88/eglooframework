<?php
namespace eGloo\DataProcessing\DDL\Entity\Statement\Adapter;

/**
 *
 * Represents an adapter to a specific statement type; responsible for
 * mending arguments, so that
 * @author Christian Calloway
 *
 */
abstract class SQL extends Adapter {

	/**
	 *
	 * Processes field data in accordance to engine/adapter type
	 */
	abstract public static function processFields(array $fields = [ ]);
}
