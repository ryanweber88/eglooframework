<?php
namespace eGloo\System\Server\Action\Middleware;

use \eGloo\System\Server;
use \eGloo\System\Server\Action\HTTP\Request;
use \eGloo\System\Server\Action\HTTP\Response;

/**
 * 
 * Acts a test bed for injecting new functionality into underlying framework
 * @author Christian Calloway
 *
 */
class Test extends Middleware { 

	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processRequest()
	 */
	public function processRequest(Request &$request) { 

		$start = time();
		$counter = 0;
		$logger  = Server\Application::instance()->context()->retrieve('logger.test');
		
		$user = \eGloo\DataProcessing\DDL\Entity\Test\User::find(1);
		echo $user->mail; exit;
		//$user->mail = 'superperrito@sucks.com';
		//$user->save();
		exit ('Test::processRequest');
		//$user->mail = 'super@perritosucks.com';
		//$user->save();
		
		//$set = \eGloo\DataProcessing\DDL\Entity\Test\User::all();
		//exit;
		//$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find_by_name('ian_1', 'ian_2', 'ian_3')->orderBy('-name');
		//$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find(1,47, 53)->orderBy('-name')->limit(1);
		//echo \eGloo\DataProcessing\DDL\Entity\Test\User::all()->limit(10)->count(); exit;
		//exit ('adsf');
		
		/*
		foreach (\eGloo\DataProcessing\DDL\Entity\Test\User::all() as $user) {
			
		}
		*/
	
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::all();
		//$set->limit(5);
		//$set->offset(0)->orderBy('name');
		exit ('fuck');
		
		foreach($set as $user) {
			echo "$user\n";
		}
		exit;
		
		foreach(\eGloo\DataProcessing\DDL\Entity\Test\User::all()->limit(10)->orderBy('+name') as $user) {
			echo "$user\n";
		}
		exit;
		
		
		//echo $set->count(); exit;
		$users = \eGloo\DataProcessing\DDL\Entity\Test\User::find (1, 47);
		
		echo "user is {$users[0]}\n";
		//echo "fifth user product is " . $users[0]->Products->orderBy('title')->limit(5)->offset(5)[0];exit;
		
		//echo $user->Products->limit(1)[0]->nid;exit;
		
		foreach ($users[0]->Products->orderBy('title')->limit(5)->offset(5) as $ambiguous) {
			echo "$ambiguous\n";
		} 
		
		exit;
		
		echo $set[0]->Users[0]; exit;
		echo "suck = " . $user->Products->limit(5)->count(); 
		exit;
		
		//echo "hash on user is " . spl_object_hash($user->Products) . "\n";
		foreach($user->Products->limit(2) as $product) {
			echo "$product\n";
		}
		
		exit;
		

		//echo $set->count();
		//$set->orderBy(
			//'-uid', 'name'
		//);
		
		//$set->count();
		$set2->count();
		
		//$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find_by_name('ian_1', 'ian_2', 'ian_3');
		//echo $set->count();	

		exit;
		
		//echo $user->name . "\n"; exit;
		echo $user->Products->count() . "\n";
		
		echo "\ntime elapsed : " . (time() - $start) . "\n";
		
		$logger->log(ob_get_clean());
		
		//exit ('Middleware\\Test::processRequest');
		// return empty response, which will be basis for post processing
		// of middleware components will begin
		return new Response();
	}
	
	/**
	 * (non-PHPdoc)
	 * @see eGloo\System\Server\Action\Middleware.MiddlewareInterface::processResponse()
	 */
	public function &processResponse(Request $request, Response &$response) { 

		
		
		return $response;
	}	
}