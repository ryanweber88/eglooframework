<?php
namespace eGloo\Domain\Model;

use \eGloo\Domain,
    \eGloo\Dialect;

/**
 * Acts as primary interface to model instance, or as lightweight 
 * "representative" of that instance
 */
class Proxy extends Dialect\Proxy implements Domain\ModelInterface {
	

}