<?php
namespace eGloo\System\Server;

/**
 * 
 * A configuration class for the EventMachine server; this will be replaced with a more elegant,
 * centralized configuration model
 * @author Christian Calloway
 *
 */
class Configuration extends \eGloo\Dialect\Object { 
	
	use \eGloo\Utilities\SingletonTrait;
	
	protected $handlerId  = '82209006-86FF-4982-B5EA-D1E29E55D481';
	protected $subAddress = 'tcp://127.0.0.1:9997';
	protected $pubAddress = 'tcp://127.0.0.1:9996';
	protected $children   =  4;
	
}