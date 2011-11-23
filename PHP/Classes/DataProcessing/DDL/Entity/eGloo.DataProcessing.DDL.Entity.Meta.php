<?php
namespace eGloo\DataProcessing\DDL\Entity;

/**
 * 
 * Provides meta information on an Entity, such as last updated,
 * fields changed, etc
 * @author Christian Calloway
 *
 */
class Meta extends \eGloo\Dialect\Object {
	
	protected $lastUpdated;
	protected $fieldsChanged;
}