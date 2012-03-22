<?php
namespace eGloo\Commerce\Coupon;


use \eGloo\Commerce,
	  \eGloo\Utility,
    \eGloo\Domain;

/**
 * Coupon Class File
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
 * @author Gilbert Sewovoe-Ekoue
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package package
 * @subpackage subpackage
 * @version 1.0
 */

/**
 * Description of Coupon
 * 
 * Representation of Coupon Entity
 * Hold CRUD functionalities and Coupon related method
 *
 * @package Plugins
 * @subpackage Commerce
 */

class Coupon extends Domain\Model {
	
	const COUPON_TYPE_SHIPPING = 1,
        COUPON_TYPE_PRODUCT  = 2,
        COUPON_TYPE_ORDER    = 3;
	
	const DISCOUNT_TYPE_AMOUNT    = 1,
        DISCOUNT_TYPE_PERCENT	  = 2,
        DISCOUNT_TYPE_FLAT_RATE = 3;
	
	
}