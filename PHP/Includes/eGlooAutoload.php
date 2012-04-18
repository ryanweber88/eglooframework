<?php
use \eGloo\Utility\Logger     as Logger;
use \eGloo\Dialect\ObjectSafe as Object;

/**
 * Class and Interface Autoloader
 *
 * This file contains the function definition for the __autoload runtime handler.
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
 * @package Runtime Handlers
 * @version 1.0
 */

// namespace context
use eGloo\Utilities\ClassBuilder;

// Bring up the eGlooConfiguration: 12% Hit
if ( !class_exists( 'eGlooConfiguration', false ) ) {
	include( 'PHP/Classes/System/Configuration/Deprecated/eGlooConfiguration.php' );
}

// Load the install configuration: 15% Hit
eGlooConfiguration::loadConfigurationOptions();

// Bring up the eGlooLogger: 6% Hit
if ( !class_exists( 'eGlooLogger', false ) ) {
	include( 'PHP/Classes/System/Utilities/Deprecated/eGlooLogger.php' );
}

// Initialize the eGlooLogger: 1% Hit
eGlooLogger::initialize( eGlooConfiguration::getLoggingLevel(), eGlooConfiguration::getLogFormat() );

// // Bring up the eGloo\Utility\Logger
// if ( !class_exists( '\eGloo\Utility\Logger', false ) ) {
// 	include( 'PHP/Classes/System/Utilities/eGloo.Utility.Logger.php' );
// }
// 
// // Initialize the eGlooLogger: 1% Hit
// Logger::initialize( eGlooConfiguration::getLoggingLevel(), eGlooConfiguration::getLogFormat() );

// Bring up the caching system (needed for the autoloader): 2.5% Hit
if ( !class_exists( 'CacheGateway', false ) ) {
	include( 'PHP/Classes/Performance/Caching/Deprecated/CacheGateway.php' );
}

// Register eGloo Autoloader: 0%
spl_autoload_register('eglooAutoload');

/**
 * These conditional includes are ordered for speed; do not reorganize without benchmarking and serious testing
 */

 
// Load Bella
// @Temporary
//if ( eGlooConfiguration::getUseBella() ) {
if ( true ) { 
	include( eGlooConfiguration::getBellaIncludePath() );
}
 
 
// Load Haanga
if ( eGlooConfiguration::getUseHaanga() ) {
	include( eGlooConfiguration::getHaangaIncludePath() );
}

// Load Smarty: 19.2% Hit
if ( eGlooConfiguration::getUseSmarty() ) {
	include( eGlooConfiguration::getSmartyIncludePath() );
}

// Load Swift: 14% Hit
if ( eGlooConfiguration::getUseSwift() ) {
	include( eGlooConfiguration::getSwiftIncludePath() );
}

// Load Twig: 0% Hit
if ( eGlooConfiguration::getUseTwig() ) {
	include( eGlooConfiguration::getTwigIncludePath() );
	spl_autoload_register(array('Twig_Autoloader', 'autoload'));
}

// Load S3/CloudFront: 0% Hit
if ( eGlooConfiguration::getUseS3() ) {
	include( eGlooConfiguration::getS3IncludePath() );
}

// Load Doctrine: 4% Hit
if ( eGlooConfiguration::getUseDoctrine() ) {
	include( eGlooConfiguration::getDoctrineIncludePath() );
	spl_autoload_register(array('Doctrine', 'autoload'));
}

// Load Pimple DIC
// TODO place into configuration
require_once eGlooConfiguration::getFrameworkRootPath() . '/Library/Pimple/Pimple.php';

// Let's override some built-in functions in profiling mode
if ( extension_loaded('apd') && eGlooConfiguration::getUseAPDProfile() ) {
	apd_set_pprof_trace();
	register_shutdown_function( 'apd_profile_exit' );
}

// Let's override some built-in functions in ADP debug mode
if ( extension_loaded('apd') && eGlooConfiguration::getUseAPDTrace() ) {
	apd_set_pprof_trace();
	register_shutdown_function( 'apd_trace_exit' );
}

// Let's override some built-in functions in xdebug mode
if ( extension_loaded('xdebug') && eGlooConfiguration::getUseXdebugTrace() ) {
	register_shutdown_function( 'xdebug_exit' );
}

/**
 * Defines the class and interface autoload runtime handler.
 * 
 * When PHP encounters a class or interface that has not yet been loaded or defined, __autoload 
 * is invoked with the class or interface name as its only parameter.  __autoload searches
 * the defined classpaths for possible matches.	 If a match is found, the file containing the
 * requested definition is included.  If __autoload exits without successfully matching and
 * loading the requested class or interface, the runtime will abort with an error.
 * 
 * The only permitted class or interface filename format is {CLASS_OR_INTERFACE_NAME}.php and is
 * case sensitive.	The only classpath checked is "../PHP/Classes", relative to the project root
 * and inclusive of all subdirectories.
 *
 * @param string $class_name class or interface to load
 */
function eglooAutoload( $class_name ) {
	/* Hack for https://bugs.php.net/bug.php?id=50731 */
	if ( strpos($class_name, '\\') === 0 ) {
		$class_name = substr( $class_name, 1 );
	}
	


	$cacheGateway = CacheGateway::getCacheGateway();

	if ( ( $autoload_hash = $cacheGateway->getObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . 'autoload_hash', 'Runtime', true ) ) != null ) {
		if ( isset( $autoload_hash[$class_name] ) ) {
			// Make sure we didn't just mark this as "not found"
			if ( $autoload_hash[$class_name] !== false ) {
				include_once( $autoload_hash[$class_name] );

				// attempt a construct static; this will be ignored if class
				// does not fall in \eGloo\Dialect\Object class
				// hierarchy
				try {
					__constructStatic($class_name);
					
				} catch ( \Exception $e ) {
					var_export($e);
					$errorMessage = '__constructStatic failed for class "' . $class_name . '".  ';
					$errorMessage .= 'It is likely that the load chain for this class and its children has failed.  ';

					// In case you want to know why we do this, it's because exceptions in a PHP autoloader
					// blow up the stack when thrown.  So instead of throwing, we create it and pass it by hand
					// to the global exception handler, just as if it was thrown.  Voila!
					$errorException = new ErrorException( $errorMessage );
					eGlooLogger::global_exception_handler( $errorException );
				}
			}

			return;
		}
	} else {
		$autoload_hash = array();
	}

	static $possible_path = null;

	// List here whatever formats you use for your file names. Note that, if you autoload
	// a class that implements a non-loaded interface, you will also need to autoload that 
	// interface. Put the &CLASS wherever the $class_name might appear
	static $permitted_formats = array( '&CLASS.php' );

	$sanityCheckClassLoading = eGlooConfiguration::getPerformSanityCheckClassLoading();

	// Set the first time autoload is called
	if ( null === $possible_path ) {
		// These are the default paths for this application
		$framework_classes = eGlooConfiguration::getFrameworkRootPath() . '/PHP';
		$application_classes = eGlooConfiguration::getApplicationsPath() . '/' . 
			eGlooConfiguration::getApplicationPath() . '/PHP';

		$extra_class_path = eGlooConfiguration::getApplicationsPath() . '/' . 
			eGlooConfiguration::getApplicationPath() . '/' . eGlooConfiguration::getExtraClassPath();

		// Customize this yourself, but leave the array_flip alone. We will use this to
		// get rid of duplicate entries from the include_path .ini list.  By default,
		// this is ordered to prefer application classes over framework classes of the same
		// name.
		$possible_path = array_flip( array( $application_classes, $extra_class_path, $framework_classes ) );

		// Merge the flipped arrays to get rid of duplicate "keys" (which are really the
		// valid include paths) then strip out the keys leaving only uniques. This is 
		// marginally faster than using array_combine and array_unique and much more elegant.
		$possible_path = array_keys( array_merge( $possible_path,
			array_flip( explode( ini_get( 'include_path' ), ';' ) ) ) );
	}

	$possibility = str_replace( '&CLASS', $class_name, $permitted_formats );

	// Supporting Namespaces
	$ns_class_name = '';

	if ( strpos($class_name, '\\') !== false ) {
		$ns_class_name = str_replace( '\\', '.', $class_name );
		$ns_possibility = str_replace( '&CLASS', $ns_class_name, $permitted_formats );
		$possibility = array_merge( $possibility, $ns_possibility );
	}

	$realPath = null;

	if ($sanityCheckClassLoading) {
		$instances = array();
	}

	foreach ( $possible_path as $directory ) {
		if ($sanityCheckClassLoading) {
			$instances[$directory] = array();
		}

		if ( file_exists( $directory ) && is_dir( $directory ) ) {
			$it = new RecursiveDirectoryIterator( $directory );

			foreach ( new RecursiveIteratorIterator( $it ) as $currentNode ) {

				if ( strpos( $currentNode->getFileName(), $class_name ) !== false ) {
					// class_name was included, now compare against all permitted file name patterns
					foreach ( $possibility as $compare ) {
						// by using $compare, you will get a qualified file name

						if ( $compare === $currentNode->getFileName() ) {
							$realPath = $currentNode->getPathName();
							if ($sanityCheckClassLoading && !in_array($realPath, $instances[$directory])) {
								$instances[$directory][] = $realPath;
							} else {
								break;
							}
						}
					}
				} else if ( $ns_class_name !== '' && strpos( $currentNode->getFileName(), $ns_class_name ) !== false ) {
					// class_name was included, now compare against all permitted file name patterns
					foreach ( $possibility as $compare ) {
						// by using $compare, you will get a qualified file name

						if ( $compare === $currentNode->getFileName() ) {
							$realPath = $currentNode->getPathName();
							if ($sanityCheckClassLoading && !in_array($realPath, $instances[$directory])) {
								$instances[$directory][] = $realPath;
							} else {
								break;
							}
						}
					}
				}

				// We found a path and if we're not doing sanity checking, let's short-circuit this loop
				if ( $realPath !== null && !$sanityCheckClassLoading) {
					break;
				}

			}

			// Path was found, so let's cache that result for future requests
			if ( $realPath !== null ) {
				if ($sanityCheckClassLoading) {
					foreach( $instances as $directory => $instancePathSet) {
						$noConflicts = true;
				
						if (count($instancePathSet) > 1) {
							$noConflicts = false;
							$errorMessage = 'Duplicate class "' . $class_name . '" found.';
				
							foreach($instances as $classPath => $classPathInstances) {
								foreach($classPathInstances as $instance) {
									$errorMessage .= "\n\tClass Path: " . $classPath . "\n\tInstance: " . $instance . "\n";
								}
							}

							// In case you want to know why we do this, it's because exceptions in a PHP autoloader
							// blow up the stack when thrown.  So instead of throwing, we create it and pass it by hand
							// to the global exception handler, just as if it was thrown.  Voila!
							$errorException = new ErrorException($errorMessage);

							eGlooLogger::global_exception_handler($errorException);
							exit;
						}
					}
				}

				include_once( $realPath );
				
				// attempt a construct static; this will be ignored if class
				// does not fall in \eGloo\Dialect\Object class
				// hierarchy
				//__constructStatic($class_name);

				// attempt a construct static; this will be ignored if class
				// does not fall in \eGloo\Dialect\Object class
				// hierarchy
				try {
					__constructStatic($class_name);
				} catch ( \Exception $e ) {
					var_export($e); exit;
					$errorMessage = '__constructStatic failed for class "' . $class_name . '".  ';
					$errorMessage .= 'It is likely that the load chain for this class and its children has failed.  ';

					// In case you want to know why we do this, it's because exceptions in a PHP autoloader
					// blow up the stack when thrown.  So instead of throwing, we create it and pass it by hand
					// to the global exception handler, just as if it was thrown.  Voila!
					$errorException = new ErrorException( $errorMessage );
					eGlooLogger::global_exception_handler( $errorException );
				}

				$autoload_hash[$class_name] = realpath( $realPath );
				$cacheGateway->storeObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . 'autoload_hash', $autoload_hash, 'Runtime', 0, true );
				break;
			}
		}
	}

	// Path wasn't found, so let's try some fancy, fuzzy logic if we're doing namespaces
	if ( $realPath === null && strpos($class_name, '\\') !== false ) {
		$namespace = preg_replace( '~\\\([a-zA-Z0-9]+)$~', '', $class_name );
		$namespace_regex = str_replace( '\\', '\\\\', $namespace );
		$namespace_regex = '~\n\s*namespace\s+' . $namespace_regex . ';~';

		$base_class = preg_replace( '~([a-zA-Z0-9]+\\\)~', '', $class_name );
		$class_declaration_regex = '~\n\s*class\s+' . $base_class . '\s*([a-zA-Z0-9,]*\s*)*\s*{~';

		// Go through each class path like normal
		foreach ( $possible_path as $directory ) {
			if ( file_exists( $directory ) && is_dir( $directory ) ) {
				// Setup a test path and a marker for iterating
				$next_step = preg_replace( '~^eGloo\\\~', '', $class_name, 1 );
				$next_step = str_replace( '\\', '.', $next_step );
				$next_step = preg_replace( '~\.~', '/', $next_step, 1 );

				$fuzzied_path = '';

				// Start comparing against possible fuzzy names/paths
				while( $next_step !== $fuzzied_path ) {
					$fuzzied_path = $next_step;

					$file_paths = array();
					$file_paths[] = $directory . '/' . $fuzzied_path  . '.php';
					$file_paths[] = $directory . '/Classes/' . $fuzzied_path  . '.php';

					// Let's check some paths
					foreach( $file_paths as $file_path ) {
						// See if this file exists
						if ( file_exists( $file_path ) && is_file( $file_path ) && is_readable( $file_path ) ) {
							// Found a file, let's inspect its contents to see if its what we want
							$file_contents = file_get_contents( $file_path );

							if ( preg_match( $namespace_regex, $file_contents ) !== 0 && preg_match( $class_declaration_regex, $file_contents ) !== 0 ) {
								// Bingo, let's mark this and bail
								$realPath = $file_path;
								break;
							}
						}
					}

					if ( $realPath !== null ) {
						break;
					} else {
						$next_step = preg_replace( '~\.~', '/', $fuzzied_path, 1 );
					}
				}

				// Did we find something?
				if ( $realPath !== null ) {
					// We did.  Let's cache it and leave
					include( $realPath );
					$autoload_hash[$class_name] = realpath( $realPath );
					$cacheGateway->storeObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . 'autoload_hash', $autoload_hash, 'Runtime', 0, true );
					break;
				}
			}
		}
	}

	// No class file was found - let's check for dynamic includes based on namespace
	if ( $realPath === null && strpos($class_name, '\\') !== false ) {

		if ( strpos($class_name, 'eGloo\\') !== false && strpos($class_name, 'eGloo\\') === 0 ) {
			$realPath = getRealPathForDEGNSClass( $class_name );
		} else {
			// Do nothing, for now
		}

		if ( $realPath !== null ) {
			include_once ( $realPath );
			$autoload_hash[$class_name] = realpath( $realPath );
			$cacheGateway->storeObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . 'autoload_hash', $autoload_hash, 'Runtime', 0, true );

			// attempt a construct static; this will be ignored if class
			// does not fall in \eGloo\Dialect\Object class
			// hierarchy
			try {
				__constructStatic( $class_name );
			} catch ( \Exception $e ) {
				$errorMessage = '__constructStatic failed for class "' . $class_name . '".  ';
				$errorMessage .= 'It is likely that the load chain for this class and its children has failed.  ';

				// In case you want to know why we do this, it's because exceptions in a PHP autoloader
				// blow up the stack when thrown.  So instead of throwing, we create it and pass it by hand
				// to the global exception handler, just as if it was thrown.  Voila!
				$errorException = new ErrorException( $errorMessage );
				eGlooLogger::global_exception_handler( $errorException );
			}
		}
	}

	// No class file was found, so let's do ourselves a favor and not bother looking again
	// TODO In the future, we should branch on this depending on deployment type
	if ( $realPath === null ) {
		$autoload_hash[$class_name] = false;
		$cacheGateway->storeObject( eGlooConfiguration::getUniqueInstanceIdentifier() . '::' . 'autoload_hash', $autoload_hash, 'Runtime', 0, true );
	}

}

function getRealPathForDEGNSClass( $class_name ) {
	$retVal = null;
	$matches = array();

	$egloo_class_name = preg_replace( '~eGloo~', '', $class_name );

	if ( preg_match_all( '~ *([^\\\]+)[\\\]?~', $egloo_class_name, $matches ) !== 0 ) {
		$package = $matches[1][0];

		$subpackage_and_class_name_tokens = array_slice( $matches[1], 1 );

		switch( $package ) {
			case 'DP' :
				$retVal = getRealPathForDDPNSClassFromTokens( $class_name, $package, $subpackage_and_class_name_tokens );
				break;
			default :
				break;
		}
	}

	return $retVal;
}

function getRealPathForDDPNSClassFromTokens( $class_name, $package, $subpackage_and_class_name_tokens ) {
	$retVal = null;

	$base_class_name = end($subpackage_and_class_name_tokens);
	reset($subpackage_and_class_name_tokens);

	$ns_class_name = implode( $subpackage_and_class_name_tokens, '.' ) . '.php';

	$dpClassIncludePath = eGlooConfiguration::getRuntimeConfigurationCachePath() . 'ddpns/';
	$dpClassFilePath = $dpClassIncludePath . $ns_class_name;

	if ( file_exists($dpClassFilePath) && is_file($dpClassFilePath) && is_readable($dpClassFilePath) ) {
		// Do stuff
		$retVal = $dpClassFilePath;
	} else {
		if ( !is_writable( $dpClassIncludePath ) ) {
			$old_umask = umask(0);
			mkdir( $dpClassIncludePath, 0775 );
			umask($old_umask);
		}

		// TODO build bridge between dynamic object definition and class builder; remove
		// build process entirely from autoload
		
		$eglooDPDirector = eGlooDPDirector::getInstance();
		$dynamic_object_definition = $eglooDPDirector->getDPDynamicObjectDefinition( $base_class_name );

		$rclass = ClassBuilder::create()
			->name($base_class_name)
			->extends('DynamicObject') // fix to constant determined in config
			->namespace('eGloo\DP');   // same
		
		foreach( $dynamic_object_definition['constants'] as $constantID => $constant ) {
			// TODO handle more cases than this, obviously
			
			$rclass
				->constant($constantID)
				->value($constant['defaultValue']);
		}
		
		foreach( $dynamic_object_definition['staticMembers'] as $staticMemberID => $staticMember ) {
			// TODO handle more cases than this, obviously
			
			$rclass
				->property($staticMemberID)
				->value($staticMember['defaultValue'])
				->visibility($staticMember['scope'])
				->static(true);
		}
		
		foreach( $dynamic_object_definition['members'] as $memberID => $member ) {
			// TODO handle more cases than this, obviously
			$defaultValue = $member['defaultValue'];
			$scope = $member['scope'];
			$managed = $member['managed'];
			
			
			$rclass
				->property($memberID)
				->visibility($scope)
				->value($defaultValue)	
				->managed($managed);				
		}

				

		foreach( $dynamic_object_definition['staticMethods'] as $staticMethodID => $staticMethod ) {
			$rmethod = $rclass
				->method($staticMethodID)
				->static(true);
				
								
			foreach( $staticMethod['arguments'] as $argumentID => $argument ) {
				$rmethod->argument($argumentID);
			}


			foreach( $staticMethod['executionStatements'] as $statementOrder => $statement ) {

				if ( isset($statement['dpStatements']) ) {
					foreach( $statement['dpStatements'] as $dpStatement ) {
						
						// why is this here?
						$statement_definition = $eglooDPDirector->getDPStatementDefinition( $dpStatement['class'], $dpStatement['statementID'] );

						$rmethod->statement(
							'$statement = new \eGlooDPStatement( \'' . $dpStatement['class'] . '\' )'
						);

						foreach( $dpStatement['argumentMaps'] as $argumentMap ) {
							$rmethod->statement(
								'$statement->bind( \'' . $argumentMap['to'] . '\', $' . $argumentMap['from'] . ' )'
							);
						}
						
							

						// Caching?  In the future
						// if ( $result = $statement->execute( 'getByProductID', $id ) ) {
						// 	self::$cachedProducts[$id] = new self($result[0]);
						// 	// store.
						// 	$cacheGateway->storeObject($cacheID, self::$cachedProducts[$id], 'foo', 3600);
						// } else {
						// 	return null;
						// }

						if ( !empty($dpStatement['returnMaps']) ) {
							foreach( $dpStatement['returnMaps'] as $returnMaps ) {
								// This should always be @return... for now
								$returnFrom = $returnMaps['from'];

								// Any local variable or @return
								$returnTo = $returnMaps['to'];

								if ( $returnTo === '@return' ) {
									$returnTo = 'retVal';
								}

								//$class_definition .= '$' . $returnTo . ' = $statement->execute( \'' . $dpStatement['statementID'] . '\' );' . "\n\t\t";
								$rmethod->statement(
									'$' . $returnTo . ' = $statement->execute( \'' . $dpStatement['statementID'] . '\' )'
								);
							}
						} else {
							$rmethod->statement(
								'$' . $returnTo . ' = $statement->execute( \'' . $dpStatement['statementID'] . '\' )'
							);
						}


			
					}
				}
			}

	
			$rmethod->statement('return $retVal');
		}
		

		foreach( $dynamic_object_definition['methods'] as $methodID => $method ) {
			$rmethod = $rclass
				->method($methodID)
				->visibility($rclass::V_PUBLIC);
				

			foreach( $method['arguments'] as $argumentID => $argument ) {
				$rmethod->argument($argumentID);
				

			}

		
		}

		// write class definition to path specified in parameter
		$rclass->write($dpClassFilePath);	

		// Do stuff
		$retVal = $dpClassFilePath;
	}

	return $retVal;
}

function getArrayDefinitionString( $array_to_define ) {
	$retVal = 'array(';

	foreach( $array_to_define as $key => $value ) {
		if ( is_string($value) ) {
			$retVal .= '\'' . $key . '\' => \'' . $value . '\', ';
		} else if ( is_numeric($value) ) {
			$retVal .= '\'' . $key . '\' => ' . $value . ', ';
		} else if ( is_bool($value) ) {
			$retVal .= '\'' . $key . '\' => ';

			switch( strtolower($value) ) {
				case true :
					$value = 'true';
					break;
				case false :
					$value = 'false';
					break;
				default :
					break;
			}

			$retVal .= $value . ', ';
		} else if ( is_array($value) ) {
			$retVal .= '\'' . $key . '\' => ' . getArrayDefinitionString( $value ) . ', ';
		}
	}

	$retVal .= ')';

	return $retVal;
}

/**
 * Allows for a similar paradigm to ruby raise 'Exception' if condition
 * expression; in php: condition or throws()
 */
function throws( $mixed ) {
	
	// determine our exception; this can be passed explicitly, or
	// will default to global namespaced exception
	$exception = $mixed instanceof \Exception 
		// if mixed is already an instance of exception, we 
		// assign to exception
		? $mixed
		
		// it is assumed that mixed is our message and we instantiate
		// base exception with message
		: new \Exception($mixed);	
		
	// now throw our exception	
	throw $exception;
}

function print_backtrace_header( $backtrace ) {
	$app_name_index = strpos( $backtrace[0]['file'], eGlooConfiguration::getApplicationName() );

	if ( $app_name_index !== false ) {
		$pretty_path = substr( $backtrace[0]['file'], $app_name_index );
	} else {
		$pretty_path = $backtrace[0]['file'];
	}

	if ( $backtrace[1]['function'] !== 'global_exception_handler' && isset($backtrace[1]) && isset($backtrace[1]['class']) ) {
		$header = $backtrace[0]['function'] . ' invoked in "' . $backtrace[1]['function'] . '" on class "' . $backtrace[1]['class'];
		$header .= '" on line ' . '<a href="txmt://open/?url=file://' . $backtrace[0]['file'] . '&line=' . $backtrace[0]['line'] . '">' . $backtrace[0]['line'] . '</a>' . "<br />\n<br />\n";
		$header .= 'File location: ' . '<a href="txmt://open/?url=file://' . $backtrace[0]['file'] . '&line=' . $backtrace[0]['line'] . '">' . $pretty_path . '</a>' . "<br />\n";
	} else if ( $backtrace[1]['function'] !== 'global_exception_handler' ) {
		$header = $backtrace[0]['function'] . ' invoked on line ' .
			'<a href="txmt://open/?url=file://' . $backtrace[0]['file'] . '&line=' . $backtrace[0]['line'] . '">' .$backtrace[0]['file'] . '</a>' . "<br />\n<br />\n";
		$header .= 'File location: ' . '<a href="txmt://open/?url=file://' . $backtrace[0]['file'] . '&line=' . $backtrace[0]['line'] . '">' . $pretty_path . '</a>' . "<br />\n";
	}

	echo $header;
}

function vprint_r( $mixed, $arg_count ) {
	if ( $arg_count > 1 ) {
		foreach( $mixed as $name => $value ) {
			echo '<pre>';
			print_r( '<b>Argument #' . $name . '</b>' );
			echo '</pre>';

			echo '<pre>';
			print_r( $value );
			echo '</pre>';
		}
	} else {
		echo '<pre>';
		print_r($mixed);
		echo '</pre>';
	}
}

function vvar_dump( $mixed ) {
	if ( func_num_args() > 1 ) {
		foreach( func_get_args() as $name => $value ) {
			echo '<pre>';
			var_dump( '<b>Argument #' . $name . '</b>' );
			echo '</pre>';

			echo '<pre>';
			var_dump( $value );
			echo '</pre>';
		}
	} else {
		echo '<pre>';
		var_dump($mixed);
		echo '</pre>';
	}
}

/**
 * Convenience method
 */
function echo_r( $mixed ) {
	print_backtrace_header( debug_backtrace() );
	vprint_r( func_get_args(), func_num_args() );
}

function echo_d( $mixed ) {
	print_backtrace_header( debug_backtrace() );
	vvar_dump( func_get_args(), func_num_args() );
}

/**
 * Convenience method
 */
function die_r( $mixed ) {
	// workaround for http://pecl.php.net/bugs/bug.php?id=16721
	// Credit: popthestack
	if ( isset($_SESSION) ) {
		session_write_close();
	}

	print_backtrace_header( debug_backtrace() );
	vprint_r( func_get_args(), func_num_args() );

	die;
}

function die_d( $mixed ) {
	// workaround for http://pecl.php.net/bugs/bug.php?id=16721
	// Credit: popthestack
	if ( isset($_SESSION) ) {
		session_write_close();
	}

	print_backtrace_header( debug_backtrace() );
	vvar_dump( func_get_args(), func_num_args() );

	die;
}

/**
 * Convenience method
 */
function big( $mixed ) {
	echo '<h1>';
	print_r($mixed);
	echo '</h1>';
}

function apd_profile_exit() {
	echo "\n\n" . '<!-- BEGIN APD PROFILE' . "\n\n";

	$process_id = getmypid();
	$apd_dump_dir = ini_get('apd.dumpdir');
	$profile_location = $apd_dump_dir . '/' . 'pprof.' . $process_id;

	$profile_files = array();

	foreach( glob($profile_location . '.*') as $filename ) {
		$profile_files[fileatime($filename)] = $filename;
	}

	ksort( $profile_files );
	$profile_file = array_pop( $profile_files );

	echo $profile_file;

	$profile_output = shell_exec( '/usr/local/bin/pprofp -u ' . $profile_file );

	echo $profile_output;

	echo "\n\n" . 'END APD PROFILE -->';
}

function apd_trace_exit() {
	echo "\n\n" . '<!-- BEGIN APD TRACE' . "\n\n";

	echo "\n\n" . 'END APD TRACE -->';
}

function xdebug_exit() {
	$xdebug_stack = xdebug_get_function_stack();
	echo "\n\n" . '<!-- BEGIN XDEBUG TRACE' . "\n\n";
	print_r($xdebug_stack);
	echo "\n\n" . 'END XDEBUG TRACE -->';
}

/**
 * Helpful alerts to note when deprecated functions are being used
 */
function deprecate( $deprecated, $replacement = null ) {
	$class_name = '\\' . str_replace( '.', '\\', basename($deprecated, '.php') );

	$alert_string = 'Warning: Class ' . $class_name . ' is deprecated.';

	if ( $replacement !== null ) {
		$alert_string .= '  Please use "' . $replacement . '" instead.';
	}

	if ( class_exists('\eGloo\Utility\Logger', false) ) {
		Logger::writeLog( Logger::DEBUG, $alert_string, 'Deprecated' );
	} else {
		eGlooLogger::writeLog( eGlooLogger::DEBUG, $alert_string, 'Deprecated' );
	}
}

/**
 * almost_empty function.
 *
 * Like empty(), returns true if input evaluates to 0, '', an empty array, or null.
 * In addition, almost_empty will return true if input is an n-deep array or object with
 * only 'empty' values.
 *
 * Optionally, pass a second $trim param. If this param is true, almost_empty will trim
 * any strings it finds, returning true if $in contains only white space.
 *
 * This function (almost_empty) is from the Zoop framework. http://zoopframework.com/
 *
 * This function (almost_empty) is covered under the Zoop Framework License:
 * 2006 Supernerd LLC and Contributors. All Rights Reserved.
 * This software is subject to the provisions of the Zope Public License, Version 2.1 (ZPL)
 *
 * @copyright 2006 Supernerd LLC and Contributors. All Rights Reserved.
 * @license Documentation/Packaged Software Licenses/Zoop (http://zoopframework.com/license)
 * @see empty
 * @access public
 * @param mixed $in
 * @param bool $trim
 * @return bool
 */
function almost_empty($in, $trim = false) {
	if ($trim && is_string($in)) {
		$in = trim($in);
	}

	if ( empty( $in ) ) {
		return true;
	} else if (is_array($in) || is_object($in)) {
		foreach ((array)$in as $_val) {
			if (!almost_empty($_val)) return false;
		}
		return true;
	} else {
		return false;
	}
}

/**
 *  Attempts to fire object::__constructStatic - the object parameter
 *  or argument must be in instance of global object; the purpose is
 *  to provide static constructor functionality on class load
 */
function __constructStatic($name) {
		
	// make sure object is instanceof of global Object 
	// - if the case, then we are assured that we have
	// a __statuc method, whether a stubb or
	// actualy definition - since we are checking
	// on a string, we need to call methodExists
	// over 
	if ( method_exists($name, '__static') ) {
		// because method exists will return true for inherited methods that
		// are NOT explicitly defined in class - we need to determine that
		// __static is in fact defined in loaded classes, otherwise we will
		// constantly call the Object::__static for all of its descendants;
		// to do this, we use reflection and check the declaring class against
		// our passed name parameter
		$reflection = new \ReflectionMethod($name, '__static');

		// since our static constructors do share the same concept of inheritence
		// as do regular constructors, we use the 'Polymorphic' annotation to
		// describe any static constructor that should be called in the 
		// children of 
		if (strpos($reflection->getDocComment(), '@Polymorphic') !== false || 

				// check if __static is in declaring class, as opposed to simply available
				// through inheritence
				$reflection->getDeclaringClass()->getName() == $name) {
					 
			$name::__static();
		}
	}
}

