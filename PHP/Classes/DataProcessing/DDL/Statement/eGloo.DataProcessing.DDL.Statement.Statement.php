<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Represents a statement, or interface to underlying data layer; responsible
 * for executing statement on underlying data layer
 * @author Christian Calloway
 * @todo   Entirely SQL oriented; an adapter layer must be build in order to 
 *         to deal with disparate data sources
 */
class Statement extends \eGlooDPPrimitive { 
	
	
	/**
	 * (non-PHPdoc)
	 * @see eGlooDPPrimitive::execute()
	 * @return mixed[][]
	 */	
	public function execute($statement) { 

		$preparedStatement = new QueryTransaction($statement);
		$preparedStatement->setQueryDialect(DBConnectionManager::getConnection( $this->_connection_name )->getConnectionDialect());
		
		$connection = DBConnectionManager::getConnection($this->_connection_name, $this->_engine_mode);
		$queryExecutionRoutine = QueryExecutionRoutineManager::getQueryExecutionRoutine($preparedStatement);

		
		return
			$queryExecutionRoutine
				->executeTransactionWithConnection($populatedStatement, $connection)
				->getDataPackage();
	}

}