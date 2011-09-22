<?php
/**
 * XHTMLBuilder Class File
 *
 * Contains the class definition for the XHTMLBuilder, a concrete subclass 
 * that inherits from the TemplateBuilder class.
 * 
 * Copyright 2011 eGloo, LLC
 * 
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 * 
 *		  http://www.apache.org/licenses/LICENSE-2.0
 * 
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 *	
 * @author George Cooper
 * @copyright 2011 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package Template
 * @version 1.0
 */

/**
 * XHTMLBuilder
 * 
 * Provides a definition for a XHTMLBuilder subclass of the TemplateBuilder
 * abstract class.
 *
 * @package Template
 * @subpackage Template Building
 */
class XHTMLBuilder extends TemplateBuilder {

	protected $cacheID = null;
	protected $hardCacheID = null;
	protected $contentProcessors = null;
	protected $deployment = null;
	protected $requestInfoBean = null;
	protected $templateVariables = null;
	protected $output = null;
	protected $isHardCached = false;

	public function setRequestInfoBean( $requestInfoBean ) {
		$this->requestInfoBean = $requestInfoBean;
	}

	public function setTemplateVariables( $templateVariables ) {
		$this->templateVariables = $templateVariables;
		//$this->templateEngine->set($templateVariables);
		//foreach( $templateVariables as $key => $value) $this->templateEngine->set( $key, $value );		 
	}

	public function setContentProcessors( $contentProcessors ) {
		$this->contentProcessors = $contentProcessors;
		
		foreach( $this->contentProcessors as $contentProcessor ) {
			$contentProcessor->setTemplateEngine( $this->templateEngine );
			$contentProcessor->prepareConZtent();
		}
	}

	public function setCacheID( $cacheID, $ttl = 3600 ) {
		// $this->templateEngine->cache_handler_func = 'smarty_cache_memcache';
		$this->templateEngine->caching = 2; // lifetime is per cache
		
		$this->templateEngine->cache_lifetime = $ttl;
		
		$this->cacheID = $cacheID;
	}

	public function setHardCacheID( $requestClass, $requestID, $cacheID, $ttl = 3600 ) {
		$this->hardCacheID = '|' . $requestClass . '|' . $requestID . '|' . $cacheID . '|';
		$this->ttl;
	}

	public function isCached() {
		return $this->templateEngine->is_cached( $this->dispatchPath, $this->cacheID );
	}

	public function isHardCached( $requestClass, $requestID, $cacheID ) {
		$retVal = false;

		if ($this->isHardCached && $this->output != null) {
			$retVal = true;
		} else {
			$cacheGateway = CacheGateway::getCacheGateway();

			$retVal = $cacheGateway->getObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . $this->hardCacheID, 'HardCache');

			if ( $retVal != null ) {
				$this->output = $retVal;
				$this->isHardCached = true;

				$retVal = $this->isHardCached;
			} else {
				$this->output = null;
				$retVal = false;
				$this->isHardCached = false;
			}
		}

		return $retVal;
	}
	
	public function setDispatchPath() {
		// cache dispatch path set based upon request bean signature + 20 t/s improvement
		$application = &\eGloo\System\Server\Application::instance();
		$requestInfoBean = &$this->requestInfoBean;
		$userRequestID = &$this->userRequestID;
		$userRequestClass = &$this->userRequestClass;

		$this->dispatchPath = $application->context()->retrieve($requestInfoBean->signature(), function() use ($requestInfoBean, $userRequestID, $userRequestClass) { 

			return XHTMLXML2ArrayDispatcher::getInstance( 
				$requestInfoBean->getApplication(), $requestInfoBean->getInterfaceBundle() 
			)
			->dispatch($requestInfoBean, $userRequestID, $userRequestClass);

		});

		//$templateDispatcher =
		//	XHTMLXML2ArrayDispatcher::getInstance( $this->requestInfoBean->getApplication(), $this->requestInfoBean->getInterfaceBundle() );


		//$this->dispatchPath = $templateDispatcher->dispatch( $this->requestInfoBean, $this->userRequestID, $this->userRequestClass );
	}

	public function setTemplateEngine() {
		// huge -100 t/s hit with invocation of smarty engine
		// TODO shallow copy/clone of instance; beware of reference issues
		// TODO replace with dependency injection concept

		$application = &\eGloo\System\Server\Application::instance();

		//$this->templateEngine = new XHTMLDefaultTemplateEngine( $this->requestInfoBean->getInterfaceBundle(), 'US', 'en' );
		
		// TODO replace with DI framework
		//$this->templateEngine = &$application->component(
		//	'XHTMLDefaultTemplateEngine', $this->requestInfoBean->getInterfaceBundle(), 'US', 'en' 
		//);

		
		//$requestInfoBean = &$this->requestInfoBean;
				
		//new \eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine\Smarty(); exit;
		
		$implementor = $application->context()->run(function() { 
			return new XHTMLDefaultTemplateEngine( 
				$this->requestInfoBean->getInterfaceBundle(), 'US', 'en'
			);
		});
				
		$this->templateEngine = new \eGloo\TemplateProcessing\Engines\Bridge\TemplateEngine\Native(
			$implementor
		);
		
		
		return ;

		// TODO base context cache upon requestInfoBean signature - done, but make implicit
		// Instead of instantiating new Smarty engine (expensive) we are cloning a preinstantiated one, which
		// profiling has determined to be far more cpu efficient
		//$this->templateEngine = //clone $application->context()->retrieve($requestInfoBean->signature(), function() use ($requestInfoBean) {
			//echo 'closure';
			//return new XHTMLDefaultTemplateEngine( $requestInfoBean->getInterfaceBundle(), 'US', 'en' );
		//});    
	}

	public function run() {

		if (isset($this->hardCacheID) && $this->isHardCached) {
			$retVal = $this->output;
		} else if (isset($this->hardCacheID) && !$this->isHardCached) {
			$retVal = $this->__fetch( $this->dispatchPath, $this->cacheID );
			$cacheGateway = CacheGateway::getCacheGateway();
			$cacheGateway->storeObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . $this->hardCacheID, $retVal, 'HardCache', $this->ttl);
		} else {
			$retVal = $this->__fetch( $this->dispatchPath, $this->cacheID );
		}

		return $retVal;
	}

	protected function __fetch($dispatchPath, $cacheID) {
		$retVal = null;


		try {
			// this fetch call is sent directly to Smarty recieve 
			$retVal = $this->templateEngine->fetch( $dispatchPath, $cacheID );

			//return file_get_contents('/tmp/static');
			//echo $GLOBALS['payload'];

		} catch (Exception $e) {
			$retVal = $this->processEngineFetchException( $e, $dispatchPath, $cacheID );
		}

		return $retVal;
	}

}

