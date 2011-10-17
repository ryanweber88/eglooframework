<?php
namespace eGloo\DataProcessing\DDL\Transaction;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for transactions between entity and corresponding interface sql
 * @author Christian Calloway
 *
 */
class Transaction extends \eGloo\Dialect\Object implements Transaction { 
	
	function __construct(DDL\Entity\Entity $entity, DDL\Statement\Statement $statement) { 
		
	}
	
	public function commit() { }
}