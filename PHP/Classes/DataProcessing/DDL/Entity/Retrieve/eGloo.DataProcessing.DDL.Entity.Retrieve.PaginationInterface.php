<?php
namespace eGloo\DataProcessing\DDL\Entity\Retrieve;

use eGloo\DataProcessing\DDL;

/**
 * 
 * Provides interface for find/select operations on a set of data
 * @author Christian Calloway
 *
 */
interface PaginationInterface { 
	
	/**
	 * 
	 * Flags a limit on data set
	 * @param  integer $amount
	 * @return FindInterface
	 */
	public function limit($amount);
	
	/**
	 * 
	 * Flags an offset return on data set
	 * @param integer $start
	 * @param integer $end
	 * @return Find
	 */
	public function offset($start);
	

}