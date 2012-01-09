<?php
namespace eGloo\Reporting\ReportingRoutine;

use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;

use \eGloo\Performance\Caching\Gateway as CacheGateway;

use \Closure as Closure;

use \ErrorException as ErrorException;
use \Exception as Exception;

/**
 * eGloo\Reporting\ReportingRoutine\MultiQueryTableReportingRoutine Class File
 *
 * Contains the class definition for the eGloo\Reporting\ReportingRoutine\MultiQueryTableReportingRoutine
 * 
 * Copyright 2011 eGloo LLC
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
 * @copyright 2011 eGloo LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @category $category
 * @package $package
 * @subpackage $subpackage
 * @version 1.0
 */

/**
 * eGloo\Reporting\ReportingRoutine\MultiQueryTableReportingRoutine
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class MultiQueryTableReportingRoutine extends ReportingRoutine {

	public function getBasicCallable() {
		return function ( $params = null ) {
			$retVal = null;

			$retVal = 'duck';

			return $retVal;
		};
	}

}
