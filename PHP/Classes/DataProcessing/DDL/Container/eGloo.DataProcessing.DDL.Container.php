<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * The top level dynamic data object, an entity represents any particular noun
 * or thing within the database; is responsible for providing base crud
 * methods and the means by-which sql is processed
 * @author Christian Calloway
 *
 */
use eGloo\Utilities\EventManager\__call;

abstract class Entity extends \eGloo\Dialect\Object { 
	
}