<?php
namespace eGloo\System\Server\Action\Middleware\Session\Storage;

/**
 * 
 * Represents cookie-based storage in stateful application
 * @author Christian Calloway
 *
 */
class Cookie extends \photon\session\storage\Cookies { 
	
	/**
	 * Overrides base method, which is just fundamentally wrong, thus our
	 * $ignore parameter (can't not be passed and override)
	 * @see photon\session\storage.Cookies::init()
	 */
	public function init($request, $ignore = null) { 

		$this->cookie = &$request->COOKIE;
		
		$this->iv = isset($this->cookie['scsiv']) 
			? $this->cookie['scsiv']
			: $request->uuid;
			
	}
	
	public function commit($response) { 
		// TODO figure timeout - maybe not time based, but vigilantly monitiored
        $timeout = time() + 365 * 24 * 3600;
        
        if (0 === strlen($this->iv)) {
        	exit ('should never be here');
            $this->iv = Crypt::getiv();
            $response->COOKIE->setCookie('scsiv', $this->iv, $timeout);
        }
        
        // these shouldn't be called - we're not using session to actually store values
        foreach ($this->cache as $name => $val) {
            //$val = Crypt::encrypt($val, Conf::f('secret_key'), $this->iv);
            
            $response->COOKIE->setCookie('scs-' . $name, $val, $timeout);
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