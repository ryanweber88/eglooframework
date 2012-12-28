<?php
namespace eGloo\DataProcessing\DDL\Transaction;

use \eGloo\DataProcessing\DDL;

/**
 *
 * Responsible for transactions between entity and corresponding interface sql
 * @author Christian Calloway
 *
 */
class Transaction extends \eGloo\Dialect\Object {

// implements Transaction { <--- pdepend breaks on this

	function __construct(DDL\Entity\Entity $entity, DDL\Statement\Statement $statement) {
		$this->entity = $entity;
		$this->statement = $statement;
	}

	public function commit() { }

	protected $entity;
	protected $statement;
}
