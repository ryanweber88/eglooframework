<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Represents a statement, or interface to underlying data layer; responsible
 * for executing a static SQL statement and returning the results it produces.
 * @author Christian Calloway
 * @todo   Entirely SQL oriented; an adapter layer must be build in order to 
 *         to deal with disparate data sources
 */
class Statement extends \eGloo\Dialect\Object { 
	
	public $_class;
	public $_id;
	public $_connection_name;
	public $_engine_mode;
	
	public function __construct( $class = null, $id = null, $connection_name = 'egPrimary', $engine_mode = null ) {
		
		$this->_class = $class;
		$this->_id = $id;

		$this->_connection_name = $connection_name;

		if ( $engine_mode !== null ) {
			$this->_engine_mode = \eGlooConfiguration::getEngineModeFromString( $engine_mode );
		} else {
			$connection_info = \eGlooConfiguration::getDatabaseConnectionInfo( $connection_name );
			$this->_engine_mode = $connection_info['engine'];
		}
	}
		
	/**
	 * (non-PHPdoc)
	 * @see eGlooDPPrimitive::execute()
	 * @return mixed[][]
	 * @todo   refactor statement call-chain to replace any uneeded steps
	 */	
	public function execute($statement) { 
		
		//if (strpos($statement, 'dr_content_type_product') !== false) {
			//echo "\n\n$statement\n\n"; exit;
		//}
		
		$preparedStatement = new \QueryTransaction($statement);
		$preparedStatement->setQueryDialect(\DBConnectionManager::getConnection( $this->_connection_name )->getConnectionDialect());
		
		$connection = \DBConnectionManager::getConnection($this->_connection_name, $this->_engine_mode);
		$queryExecutionRoutine = \QueryExecutionRoutineManager::getQueryExecutionRoutine($preparedStatement);
		
		\QueryPopulationManager::populateQueryTransaction($preparedStatement, [ ]);
						
		return
			$queryExecutionRoutine
				->executeTransactionWithConnection($preparedStatement, $connection)
				->getDataPackage();
	}

}