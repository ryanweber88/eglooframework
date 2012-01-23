<?php
namespace eGloo\Utilities;
/*
 * To change this template, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 * Description of eGloo
 *
 * @author gilbert
 */
class Utilities {
	public static function createSlug($string) {
		$slug = preg_replace('/[^A-Za-z0-9+]/', "-", strtolower($string));
		return substr($slug, 0, 127);
	}
	
	public function slug($string) {
		setlocale(LC_ALL, 'en_US.UTF8');
		$slug = iconv('UTF-8', 'ASCII//TRANSLIT', strtolower(trim($string)));	
		$slug =	strip_tags($slug);
		$slug = preg_replace("/[^a-zA-Z0-9\/_|+ -]/", '', $slug);
		$slug = preg_replace("/[\/_|+ -]+/", '-', $slug);
		return substr($slug, 0, 127);
	}
}
