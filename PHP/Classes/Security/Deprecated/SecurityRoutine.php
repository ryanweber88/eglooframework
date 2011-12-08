<?php
/**
 * SecurityRoutine Class File
 *
 * Contains the class definition for the SecurityRoutine
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
 * SecurityRoutine
 *
 * $short_description
 *
 * $long_description
 *
 * @category $category
 * @package $package
 * @subpackage $subpackage
 */
class SecurityRoutine {

	public static function checkRole() {
		return function ( $params ) {
			$access_permitted = false;

			if ( isset($params['roles']) && isset($params['permitted_roles']) ) {
				$roles = $params['roles'];
				$permitted_roles = $params['permitted_roles'];
			}

			foreach( $permitted_roles as $permitted_role ) {
				if ( in_array($permitted_role, $roles) ) {
					$access_permitted = true;
					break;
				}
			}

			return $access_permitted;
		};
	}

}

