<?php
namespace eGloo\Plugin\Service;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class CurlService {
	
	const HTTP		= 'http';
	const HTTPS		= 'https';
	const POST		= 'POST';
	const GET		= 'GET';
	const DELETE	= 'DELETE';

	protected $config = array(
			'host'		=> null,
			'username'	=> null,
			'password'	=> null,
			'protocol'	=> 'GET'
		);
	
	protected $options = array(
			
		);

	protected  $agents = array(
		'Mozilla/5.0 (Macintosh; Intel Mac OS X 10.7; rv:7.0.1) Gecko/20100101 Firefox/7.0.1',
		'Mozilla/5.0 (X11; U; Linux i686; en-US; rv:1.9.1.9) Gecko/20100508 SeaMonkey/2.0.4',
		'Mozilla/5.0 (Windows; U; MSIE 7.0; Windows NT 6.0; en-US)',
		'Mozilla/5.0 (Macintosh; U; Intel Mac OS X 10_6_7; da-dk) AppleWebKit/533.21.1 (KHTML, like Gecko) Version/5.0.5 Safari/533.21.1'
			);
	
	//curl_setopt($ch,CURLOPT_USERAGENT,$agents[array_rand($agents)]);
	
	protected	$resource;
	protected	$multi_connection = false;
	protected	$headers = array();
	public		$requests = array();


	protected function __construct( array $conf ) {
		foreach ( $conf as $key => $value ) {
			$this->config[$key] = $value;
		}
	}
	
	public static function connect( array $args ) {
		return new self($args );
	}
	
	public function setHeaders ( $headers ) {
		$this->headers = $headers;
		return $this;
	}
	
	public function response ( $raw_str ) {
		//attempt to parse response as xml
		$xml = simplexml_load_string( $raw_str );
		if ($xml !== false ) {
			return $xml;
		} else {
			//attempt to parse response as xml
			$json = json_decode($raw_str);
			if( !is_null( $json ) && $json ) {
				return $json;
			}
		}
		// Either unkwon or text
		return $raw_str;
	}


	public function getError(){
		return curl_error($this->resource);
	}


	public function close(){
		curl_close($this->resource);
		$this->requests = null;
		return $this;
	}
}
