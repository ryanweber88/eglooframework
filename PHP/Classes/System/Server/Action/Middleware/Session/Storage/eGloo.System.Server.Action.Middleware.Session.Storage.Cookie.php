<?php
namespace eGloo\System\Server\Action\Middleware\Session\Storage;

/**
 * 
 * Represents cookie-based storage in stateful application
 * @author Christian Calloway
 *
 */
class Cookie extends \photon\session\storage\Cookies { 
	
	use \eGloo\Utilities\FallbackTrait;
	
	/** used as namespace qualifier for session cookie */
	const NS_COOKIE  = 'scsiv';
	
	/** used as namespace qualifier for session key */
	const NS_SESSION = 'scs-';
	
	/**
	 * Overrides base method, which is just fundamentally wrong, thus our
	 * $ignore parameter (can't not be passed and override)
	 * @see photon\session\storage.Cookies::init()
	 */
	public function init($request, $ignore = null) { 

		$this->cookie = &$request->COOKIE;
		
		if (isset($this->cookie[self::NS_COOKIE])) { 
        	\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
        		"Cookie::init cookie found in response:{$this->cookie[self::NS_COOKIE]}" //. print_r($request->headers, true) 
        	);	
		}
		
		else { 
			
        	\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log(
        		"Cookie::init cookie not found " //. print_r($request->headers, true) 
        	);			
		}
		
		// cookie sciv, a photon convention, does not exist, then use
		// request uuid, which is gaurenteed* to be unique as the current
		// session id
		$this->iv = isset($this->cookie[self::NS_COOKIE])
			? $this->cookie[self::NS_COOKIE]
			: $request->uuid;
			
	}
	
	public function commit($response) { 

		//echo "commiting\n"; 
	
		// if session id has not yet been set, which actually should be impossible (if underlying framework has been evoked)
		// then commit to response header
        if (!isset($this->cookie[self::NS_COOKIE])) {
        	\eGloo\System\Server\Application::instance()->context()->retrieve('logger.test')->log("committing session cookie: {$this->iv}");
	        // setting cookie here will expire at browser close - its up to underlying
	        // framework to determine cookie lifetime
	        $response->COOKIE->setCookie(self::NS_COOKIE, $this->iv);  	        
        }
        
        if (0 === strlen($this->iv)) {
        	exit ('should never be here');
            //$this->iv = Crypt::getiv();
            $response->COOKIE->setCookie('scsiv', $this->iv, $timeout);
        }
        
        // these shouldn't be called - we're not using session to actually store values
        foreach ($this->cache as $name => $val) {
            //$val = Crypt::encrypt($val, Conf::f('secret_key'), $this->iv);
            $response->COOKIE->setCookie('scs-' . $name, $val);
        }
        foreach ($this->deleted as $name => $val) {
            $response->COOKIE->delCookie('scs-' . $name);
        }
        
        
        return $this->getNewKey(json_encode($response->headers));		
	}
	
    public function get($offset) {
        if (isset($this->deleted[$offset])) {
            return null;
        }
        
        if (isset($this->cache[$offset])) {
            return $this->cache[$offset];
        }
        
        if (strlen($this->iv) &&  isset($this->cookie['scs-' . $offset])) {
            //return Crypt::decrypt($this->cookie['scs-' . $offset], 
            //                     Conf::f('secret_key'), $this->iv);
            
        	return $this->cookie["scs-$offset"];
        }

        return null;
    }	
}