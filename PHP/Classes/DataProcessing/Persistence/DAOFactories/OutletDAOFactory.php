<?php
/**
 * OutletDAOFactory Class File
 *
 * $file_block_description
 * 
 * Copyright 2011 eGloo, LLC
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *        http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *  
 * @author George Cooper
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category DataProcessing
 * @package Persistence
 * @subpackage DAOFactories
 * @version 1.0
 */

/**
 * OutletDAOFactory
 *
 * $short_description
 *
 * $long_description
 *
 * @category DataProcessing
 * @package Persistence
 * @subpackage DAOFactories
 */
class OutletDAOFactory extends ConcreteDAOFactory {

	/**
	 * @return a OutletSQLSessionDAO
	 */
	public function getSessionDAO() {
		return new OutletSessionDAO( $this->_connection_name ); 
	}

	public function getCubeDAO() {
		return new OutletCubeDAO( $this->_connection_name );
	}

	public function getGenericCubeDAO() {
		return new OutletGenericCubeDAO( $this->_connection_name );
	}

	public function getGenericPLFunctionDAO() {
		return new OutletGenericPLFunctionDAO( $this->_connection_name );
	}

}
