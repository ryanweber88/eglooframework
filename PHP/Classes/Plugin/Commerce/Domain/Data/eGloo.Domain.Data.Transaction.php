<?php
namespace eGloo\Domain\Data;

use \eGloo\Dialect\ObjectSafe as Object;
use \eGloo\Domain;

/**
 * Loose representation of a transaction; this should really be an abtract class
 * (from which descendant classes will define what the concept of a transaction is),
 * but for the time being, this will provide basic transaction queries to underlying
 * data layer
 * @author Christian Calloway
 */
class Transaction extends Object {
	
	function __construct(Domain\Data $data) {
		$this->data = $data;
	}
	
	public function begin() {
		return $data::statement('BEGIN');
	}
	
	public function commit() {
		return $data::statement('COMMIT');
	}
	
	public function rollback() {
		return $data::statement('ROLLBACK');
	}
	
	protected $data;
}
