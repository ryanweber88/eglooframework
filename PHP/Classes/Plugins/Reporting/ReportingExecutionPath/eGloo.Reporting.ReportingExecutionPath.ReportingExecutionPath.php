<?php
namespace eGloo\Reporting\ReportingExecutionPath;

use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;

use \eGloo\Performance\Caching\Gateway as CacheGateway;

use \eGloo\Reporting\ReportingRoutine as ReportingRoutine;

use \ErrorException as ErrorException;
use \Exception as Exception;

/**
 * eGloo\Reporting\ReportingExecutionPath\ReportingExecutionPath Class File
 *
 * Contains the class definition for the eGloo\Reporting\ReportingExecutionPath\ReportingExecutionPath
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
 * eGloo\Reporting\ReportingExecutionPath\ReportingExecutionPath
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class ReportingExecutionPath {

	public function __invoke( $reporting_routine ) {
		$retVal = null;
		$callable_routine = null;

		if ( is_object($reporting_routine) && is_callable($reporting_routine) ) {
			$callable_routine = $reporting_routine;
		} else if ( is_object($reporting_routine) && $reporting_routine instanceof \eGloo\Reporting\ReportingRoutine\ReportingRoutine ) {
			$callable_routine = $reporting_routine->getBasicCallable();
		}

		$retVal = $callable_routine();

		return $retVal;
	}

}

