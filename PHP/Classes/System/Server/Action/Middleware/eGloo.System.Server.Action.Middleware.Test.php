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

		return ;

		$start = time();
		$counter = 0;
		$logger  = Server\Application::instance()->context()->retrieve('logger.test');


		// INITIALIZERS
		$user = new \eGloo\DataProcessing\DDL\Entity\Test\User();
		$user->name = 'Christian';
		$user->mail = 'callowaylc@gmail.com';

		// create a user with following initilization fields as hash
		$user = new \eGloo\DataProcessing\DDL\Entity\Test\User([
			'name' => 'Christian',
			'mail' => 'callowaylc@gmail.com'
		]);

		// initialize a user with a block as opposed to hash - this
		// will be convenient for callbacks, or simply capturing scope
		// from some period of program execution
		\eGloo\DataProcessing\DDL\Entity\Test\User(function($user) {
			$user->name = 'Christian';
			$user->mail = 'asdf@adf.com';
		});


		// FINDERS

		// all users from database (not recommended)
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::all();

		// all users in batch from database in batches (not implemented yet) - in later versions
		// a batch size can be left to a default which will be implicitly determined by entity
		// at runtime by inspecting # of records in table
		$set = \eGloo\DataProcessing\DDL\Entity\Test::findEach(["size" => 500, "start" => 100]);

		// range find - this will find all users in the given primary key range and return a result set object
		\eGloo\DataProcessing\DDL\Entity\Test\User::find('1..100');


		// find by primary/natural key, which is determined implicitly
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1);
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1,47, 53);
		\eGloo\DataProcessing\DDL\Entity\Test\User::find([1,47, 53])->orderBy('-name')->limit(1);


		// DYNAMIC FINDERS - these are routed through __call method and in reality are simply calling a statement
		// file of the same name (find_by_name.sql)
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find_by_name('ian_1', 'ian_2', 'ian_3')->orderBy('+id');
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find_by_mail(['callowaylc@gmail.com', 'fuck@it.com']);


		// ASSOCIATIONS - these are mapped to sql files as well; a Product association to User would be found in
		// a file named 'find_product'; ALL relationships are accessed via ucfirst(entity name) and all "has_many"
		// relationships will pluralize the Entity name

		// make note that its "Products" and not "Product"
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1)->Products[0]->title;
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1, 2, 3)[0]->Products[1]->title;
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1)->Products[0]->User[0]->name == \eGloo\DataProcessing\DDL\Entity\Test\User::find(1)->name;

		// SETS - any finder "asking" for more than 1 result, will always return a QuerySet object, regardless
		// of whether the query itself returns 0 or 1 records

		// returns a User object because we are only asking for 1 possible record
		\eGloo\DataProcessing\DDL\Entity\Test\User::find(1);

		// returns QuerySet object
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find('1..20')['10..15'];
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find(1,2,3);
		$set = \eGloo\DataProcessing\DDL\Entity\Test\User::find_by_name('christian', 'gilbert'); // all dynamic finders return sets

		// set implement array access as well as "ranges" for allowing limits/offsets
		$set[0]; // A User instance
		$set['1..5'] == $set->limit(5)->offset(1);
		$set->orderBy('+field'); // ascending order
		$set->orderBy('-field'); // descending order

		// LAZY LOAD EVALUATION - evaluation (a database hit) will not occur until we have "officially" asked
		// for data (see below)

		$users = \eGloo\DataProcessing\DDL\Entity\Test\User::find('1..100');
		$users->orderBy('-name');
		$users->limit(20)->offset(10) || $users['10..20'];

		// database hit
		$users->count() || $users[0]->title || $users[0]->Products[0]->title;



		/*


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
		*/
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
