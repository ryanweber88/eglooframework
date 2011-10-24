<?php
namespace eGloo\DataProcessing\DDL\Statement;

use eGloo\DataProcessing\DDL;
use eGloo\DataProcessing\DDL\Entity\Entity;

/**
 * 
 * Represents a statement, or interface to underlying data layer; responsible
 * for executing statement on underlying data layer
 * @author Christian Calloway
 *
 */
class Statement extends \eGlooDPStatement { 
	
	
	function __construct($content) { 
		$this->content = $content;
	}
		
	
	
	// TODO should execute be overriden and passed entity + calling method?
	public function execute($id = null, $parameters = null) { 
		$retVal = null;

		if ( $this->_class === null ) {
			throw new Exception( 'No statement class provided for execution' );
		}

		if ( $id === null ) {
			if ( $this->_id !== null ) {
				$id = $this->_id;
			} else {
				throw new Exception( 'No statement ID provided for execution' );
			}
		}

		$eglooDPDirector = eGlooDPDirector::getInstance();

		$statement_definition = $eglooDPDirector->getDPStatementDefinition( $this->_class, $id );

		$statement_variant = null;

		if ( isset( $statement_definition['statementVariants'][$this->_connection_name]['engineModes'][$this->_engine_mode] ) ) {
			$statement_variant = $statement_definition['statementVariants'][$this->_connection_name]['engineModes'][$this->_engine_mode];
		}

		$application_database_path = eGlooConfiguration::getApplicationsPath() . '/' . eGlooConfiguration::getApplicationPath() . '/Database/';
		$extra_database_path = eGlooConfiguration::getApplicationsPath() . '/' . eGlooConfiguration::getApplicationPath() . '/' . eGlooConfiguration::getExtraDatabasePath() . '/';

		$framework_local_database_path = eGlooConfiguration::getFrameworkRootPath() . '/Database/Frameworks/Local/';
		$framework_common_database_path = eGlooConfiguration::getFrameworkRootPath() . '/Database/Frameworks/Common/';
		$framework_core_database_path = eGlooConfiguration::getFrameworkRootPath() . '/Database/Frameworks/Core/';
		
		$database_include_paths = array(
			'Application' => $application_database_path,
			'ExtraTemplatePath' => $extra_database_path,
			'FrameworkLocal' => $framework_local_database_path,
			'FrameworkCommon' => $framework_common_database_path,
			'FrameworkCore' => $framework_core_database_path
		);

		$dbStatementContent = null;
		$dbStatementParameters = array();

		if ( is_array($parameters) ) {
			$parameters = array_merge( $this->_bound_parameters, $parameters );
		} else if ( $parameters === null ) {
			$parameters = $this->_bound_parameters;
		}

		if ( $statement_variant !== null ) {
			foreach( $statement_variant['includePaths'] as $includePathInfo ) {
				$argumentListName = $includePathInfo['argumentList'];
				$includePath = $includePathInfo['includePath'];

				foreach( $statement_definition['argumentLists'][$argumentListName]['arguments'] as $argumentID => $argumentInfo ) {
					if ( is_array( $parameters ) ) {
						if ( isset($parameters[$argumentID]) ) {
							$parameter_value = $parameters[$argumentID];
						} else {
							throw new ErrorException( 'Parameter "' . $argumentID . '" required but not bound for DPStatement "' . $this->_class . '::' . $id . '"' );
						}
					} else {
						$parameter_value = $parameters;
					}

					$dbStatementParameters[] = array( 'type' => $argumentInfo['argumentType'], 'value' => $parameter_value );
				}

				foreach( $database_include_paths as $database_include_path ) {
					$statement_file_path = $database_include_path . 'DPStatements/' . $statement_variant['modeName'] . '/' . $this->_class . '/' .
						$includePathInfo['includePath'];

					if ( file_exists( $statement_file_path ) && is_readable( $statement_file_path ) ) {
						$dbStatementContent = file_get_contents( $statement_file_path );
						break;
					}
				}
			}
		}

		$preparedStatement = new QueryTransaction($dbStatementContent);

		$preparedStatement->setQueryDialect(DBConnectionManager::getConnection( $this->_connection_name )->getConnectionDialect());

		$populatedStatement = clone $preparedStatement;

		QueryPopulationManager::populateQueryTransaction($populatedStatement, $dbStatementParameters);

		$dataPackage = $populatedStatement->getDataPackage();

		if (is_array($dataPackage) && isset($dataPackage['preparedQueryString'])) {
			$dataPackageString = $dataPackage['preparedQueryString'];
		} else if (is_string($dataPackage)) {
			$dataPackageString = $dataPackage;
		} else {
			$dataPackageString = null;
		}

		$dataProcessingCacheRegionHandler = CacheManagementDirector::getCacheRegionHandler('DataProcessing');



		$rawDataReport = $executedQueryResponseTransaction->getDataPackage();

		$retVal = $rawDataReport;

		return $retVal;
		// $this->structureRawDataReport();
		// $this->setTemplateVariablesByMerge($this->getStructuredDataReport());		
	}
	
	protected $content;
}