<?php
namespace eGloo\DataProcessing\DDL\Entity\Transaction;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Transactional interface 
 *
 */
interface TransactionInterface {
	
	public function begin();
	public function commit();
	public function isActive();
	
}