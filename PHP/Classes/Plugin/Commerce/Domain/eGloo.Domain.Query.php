<?php
namespace \eGloo\Domain;

use \eGloo\Dialect\Object,
    \eGloo\Performance\Caching;
		
/**
 * Query's only purpose is to serve as abstraction that implements the CacheKeyInterface
 * so as to fit into the Cache\XXX
 * @TODO I don't particularly like this idea, so this may be deprecated shortly
 */
class Query extends Object 
	implements Caching\CacheKeyInterface {
	
	function __construct($query, array $arguments = null) {
		parent::__construct();
		
		$this->attr_writer('query', 'arguments');
	}

	/** CacheKeyInterface ******************************************************/
	
	public function cacheKey() {
		$tokens = array_reverse(explode('\\', $this->model));
		
		// ensure that we have sql so as to create unique key
		if (strlen($sql = $this->to_sql()) > 0) {
			$encryptedQuery     = md5($this->to_sql());
			$encryptedArguments = md5(serialize($this->arguments));  
			
			return "<$encryptedQuery::$encryptedArguments>" . implode ('\\', $tokens);	
		}
		
		// otherwise throw an exception, because we cannot create a unique key
		throw new \Exception(
			"Failed to create unique key for receiver '{$this->ident()}' because query is invalid"
		);		
	}
	
	protected $query;
	protected $arguments;
}
