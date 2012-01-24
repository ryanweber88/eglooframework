<?php
namespace eGloo\Sessions;
use \eGloo\DataProcessing\Connection;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class SessionDataAccess extends Connection\PostgreSQLDBConnection {
	
	/** @var resource Object */
	protected static $instance = null;
	
	/**
	 * Overwrite $rawConnectionResource setting in connection file
	 * 
	 * @param resource $rawConnectionResource = null
	 * @return void
	 */
	public function __construct() {}
	
	/**
	 * Create an instance of the class
	 * Delegate class to access Database layer
	 * 
	 * @return $this class object
	 */
	public static function fetch () {
		if (static::$instance === null) {
			static::$instance = new self();
		}
		return static::$instance;
	}
	
	public function createSession() {
		$sql = '';
	}
	
	public function loadSessionById($session_id) {
		if ($session_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: session_id is required!!', __METHOD__);
		}
	}
	
	public function loadSessionByName($session_name) {
		if ($session_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: session_name is required!!', __METHOD__);
		}
	}

	public function loadSession($field_name, $field_value) {
		if ($field_name == '' || $field_value == '') {
			throw new Connection\DatabaseErrorException('::Missing argument error', __METHOD__);
		}
		$sql = '';
		return parent::getUnique($sql, array($field_value, 1), function ($row) {
							return $row;
		});
	}
	
	public function deleteSessionById($session_id) {
		if ($session_id == '') {
			throw new \InvalidArgumentException('::Missing argument error: session_id is required!!', __METHOD__);
		}
		
	}
	
	public function deleteSessionByName($session_name) {
		if ($session_name == '') {
			throw new \InvalidArgumentException('::Missing argument error: session_name is required!!', __METHOD__);
		}
		
	}	
}