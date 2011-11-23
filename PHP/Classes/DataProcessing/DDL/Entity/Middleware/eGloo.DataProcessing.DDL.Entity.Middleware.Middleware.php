<?php
namespace eGloo\DataProcessing\DDL\Entity\Middleware;

use \eGloo\DataProcessing\DDL;

/**
 * 
 * Responsible for communicating with entity manager (persitence context) to
 * determine what entities need to be queried, and which currently exist
 * @author Christian Calloway
 *
 */
abstract class Middleware extends \eGloo\Dialect\Object implements MiddlewareInterface {
	
	use MiddlewareTrait;
	
	function __construct($container) { 
		$this->container = $container;	
		$this->entity    = $container instanceof DDL\Entity\Entity
			? $container 
			: $container->entity;
	}
	
	protected $container;
	protected $entity;
}