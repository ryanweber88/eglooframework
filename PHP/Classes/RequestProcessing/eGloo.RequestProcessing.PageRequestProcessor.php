<?php

namespace eGloo\RequestProcessing;

use \RequestProcessor;
use \eGloo\HTTP\Request;

use \eGloo\Configuration as Configuration;
use \eGloo\Utility\Logger as Logger;

if (!defined('DS')) {
	define('DS', DIRECTORY_SEPARATOR);
}

if (!defined('ENV_ENGLISH')) {
	define('ENV_ENGLISH', $_SERVER['EG_ENV']);
}

/**
 * PageRequestProcessor Class File
 *
 * Contains the class definition for the PageRequestProcessor, a
 * subclass of the RequestProcessor abstract class.
 *
 * Copyright 2012 eGloo, LLC
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
 * @copyright 2012 eGloo, LLC
 * @license http://www.apache.org/licenses/LICENSE-2.0
 * @package RequestProcessing
 * @version 1.0
 */

/**
 *
 * Handles HTTP $method requests; also as a FRONT controller of sorts to
 * e.g. www.egloo.com).
 *
 * @package RequestProcessing
 * @subpackage RequestProcessors
 */
class PageRequestProcessor extends RequestProcessor {

	protected $routes = array(
		'index' => [
			'methods' => ['GET'],
		]
	);

	protected $_templateVariables = array();
	protected $action = 'index';

	/**
	 * Concrete implementation of the abstract RequestProcessor method
	 * processRequest().
	 *
	 * This methods responsibility is to determine HTTP method type
	 * and call appropriate method
	 *
	 * @access public
	 */
	public function processRequest() {
		$retVal = null;

		$this->drawRoutes();

		// determine http method, request parameters, and call appropriate method
		$method = strtoupper( $this->bean->requestMethod() );
		$request_class = $this->bean->getRequestClass();
		$action = $this->bean->getRequestID();

		if ( Configuration::getRewriteBase() !== '/' ) {
			$uri = str_replace( Configuration::getRewriteBase(), '', Request::getRequestURI() );
		} else {
			$uri = Request::getRequestURI();
		}

		$invoke_action = false;

		// If this RP has a route for this action on this request method, invoke
		if ( in_array($action, array_keys($this->routes)) &&
			 in_array($method, $this->routes[$action]['methods']) ) {

			$invoke_action = true;
		} else if ( $this->bean->issetGET('eg_slug') || $this->bean->issetUnvalidatedGET('eg_slug') ) {
			$slug = $this->bean->issetGET('eg_slug') ?
						$this->bean->GET['eg_slug'] :
						$this->bean->getUnvalidatedGET('eg_slug');

			if ( in_array($slug, array_keys($this->routes)) &&
			 	 in_array($method, $this->routes[$slug]['methods']) ) {

				$action = $slug;
				$invoke_action = true;
			}

		}

		// If that whole slug thing didn't pan out...
		if ( !$invoke_action && in_array('egDefault', array_keys($this->routes)) &&
			 in_array($method, $this->routes['egDefault']['methods']) ) {

			$action = 'egDefault';
			$invoke_action = true;
		}

		if ( $invoke_action ) {
			$uri_args = preg_replace('~/?' . $request_class . '/~', '/', $uri);
			$uri_args = preg_replace('~/' . $action . '/?~', '/', $uri_args);
			$uri_args = preg_replace('~^/~', '', $uri_args);
			$uri_args = preg_replace('~/$~', '', $uri_args);

			$uri_args_to_parse = explode('/', trim($uri_args));
			$uri_args = [];

			$named_pairs = $uri_args = [];

			foreach( $uri_args_to_parse as $key => $uri_arg_to_parse ) {
				if ( strpos($uri_arg_to_parse, ':' ) !== false ) {
					$pair_set = explode(':', $uri_arg_to_parse);

					if ( isset($named_pairs[$pair_set[0]]) ) {
						if ( !is_array($named_pairs[$pair_set[0]]) ) {
							$named_pairs[$pair_set[0]] = [$named_pairs[$pair_set[0]]];
						}

						$named_pairs[$pair_set[0]][] = $pair_set[1];
					} else {
						$named_pairs[$pair_set[0]] = $pair_set[1];
					}
				} else {
					$uri_args[] = $uri_arg_to_parse;
				}
			}

			if ( !empty($named_pairs ) ) {
				if ( ($validator_class = $this->bean->getRequestValidator()) !== null ) {
					foreach( $named_pairs as $key => $value ) {
						$this->bean->setUnvalidatedGET( $key, $value );
					}
				} else {
					foreach( $named_pairs as $key => $value ) {
						$this->bean->setGET( $key, $value );
					}
				}
			}

			$uri_pairs = $matches = [];

			if ( isset($this->routes[$action]['matches']) ) {
				$matches = $this->routes[$action]['matches'];
			}

			foreach( $matches as $match ) {
				if ( is_array($match) ) {
					$match_string = array_keys($match)[0];
					$final_action = $match[array_keys($match)[0]];
				} else {
					$match_string = $match;
					$final_action = $action;
				}

				$match_regex = preg_replace('~:[a-zA-Z0-9_ -]+~', '[a-zA-Z0-9_ -]+', $match_string);
				$match_regex = str_replace( '@controller', $request_class, $match_regex );

				if ( preg_match( '~' . $match_regex . '~', $uri) ) {
					$match_list = [];
					preg_match_all('~:[a-zA-Z0-9_ -]+~', $match_string, $match_list);

					foreach( $match_list[0] as $match_var ) {
						$var_name = str_replace(':', '', $match_var);
						$uri_pairs[$var_name] = array_shift($uri_args);

						if ( ($validator_class = $this->bean->getRequestValidator()) !== null ) {
							$this->bean->setUnvalidatedGET( $var_name, $uri_pairs[$var_name] );
						} else {
							$this->bean->setGET( $var_name, $uri_pairs[$var_name] );
						}
					}

					$action = $final_action;
					$action_matches = [];

					preg_match('~#([a-zA-Z0-9_]+)~', $action, $action_matches);

					if ( !empty($action_matches) ) {
						$action = $action_matches[1];
					}

					break;
				}
			}

			if ( ($validator_class = $this->bean->getRequestValidator()) !== null ) {
				$validation_result = $validator_class::validate( $this->bean, $action, $uri_pairs, $this );

				$action = isset($validation_result['action']) ? $validation_result['action'] : $action;
			} else {
				$validation_result = null;
			}

			$this->action = $action;
			$retVal = $this->$action( $validation_result );
		}

		return $retVal;
	}

	// index /controller/ action GET
	protected function index( $validation_result = null ) {}

	protected function render( $action = null ) {

		if ( $action == null ) {
			$action = $this->action;
		}

		$app_path = Configuration::getApplicationsPath() . DS . Configuration::getApplicationPath();

		// Get view paths
		$view_path            = $app_path . DS . 'InterfaceBundles' . DS . Configuration::getUIBundleName() . DS . 'XHTML';
		$controller_name      = explode('RequestProcessor', get_called_class())[0];
		$controller_view_path = $view_path . DS . $controller_name;

		// Set up default layout
		$this->setTemplateVariable('layout', 'application');

		// Setup Twig and set directories to look for views
		$loader = new \Twig_Loader_Filesystem([$view_path, $controller_view_path]);
		$twig   = new \Twig_Environment($loader, ['debug' => true, 'autoescape' => false]);
		$twig->addExtension(new \Twig_Extension_Debug());

		Configuration::loadConfig('AssetManager');
		$twig->addGlobal('asset', new \ViewHelpers\AssetHelper(Configuration::get('Asset')));
		$twig->addGlobal('html', new \ViewHelpers\HtmlHelper());
		$twig->addGlobal('text', new \ViewHelpers\TextHelper());
	    $twig->addGlobal('rwbase', Configuration::getRewriteBase());

		$rendered_layout = $twig->loadTemplate('Layouts' . DS . $this->getTemplateVariable('layout') . '.html.twig');

		// Send rendered layout as variable to view
		$this->setTemplateVariable('rendered_layout', $rendered_layout);

		$output = $twig->render( $action . '.html.twig', $this->getTemplateVariables() );

		// Display the output from the view
		if ($this->decoratorInfoBean->issetNamespace('ManagedOutput')) {
			$this->decoratorInfoBean->setValue('Output', $output, 'ManagedOutput');
		} else {
			$this->setOutputHeaders();
			echo $output;
		}
	}

	// invoked in the event someone wants to draw routes rather than define on member variable
	protected function drawRoutes() {}

	protected function route( $mixed ) {
		$retVal = null;

		if ( is_array($mixed) ) {
			$route = array_keys($mixed)[0];
			$this->routes[$route] = $mixed[$route];
			$retVal = &$this->routes[$route];
		} else if ( is_string($mixed) ) {
			$this->routes[$mixed] = [];
			$retVal = &$this->routes[$mixed];
		}

		return $retVal;
	}

	protected function unroute( $route ) {
		unset($this->routes[$route]);
	}

	protected function match( $route, $match ) {
		$this->routes[$route]['matches'][] = $match;
		$this->routes[$route]['matches'] = array_unique($this->routes[$route]['matches']);
	}

	public static function getRequestType() {
		return 'page';
	}

	protected function getTemplateVariable( $key ) {
		return $this->_templateVariables[$key];
	}


	protected function getTemplateVariables() {
		return $this->_templateVariables;
	}

	protected function setTemplateVariable( $key, $value ) {
		$this->_templateVariables[$key] = $value instanceof \eGloo\Utilities\ToArrayInterface
			? $value->__toArray()
			: $value;
	}

	protected function setTemplateVariables( $templateVariables ) {
		$this->_templateVariables = $templateVariables;
	}

	protected function setTemplateVariablesByMerge( $templateVariables ) {
		$this->_templateVariables = array_merge($this->_templateVariables, $templateVariables);
	}

	protected function useSystemVariables() {
		return $this->_useSystemVariables;
	}

}
