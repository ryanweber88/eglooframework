<?php
namespace eGloo\System\Server;

/**
 * 
 * EAS (eGloo Application Server) / Production
 * 
 * Responsible for polling 
 * @author Christian Calloway
 */
use photon\log\Log;

class Server extends \photon\server\Server implements \eGloo\System\Server\Servable { 
	
	/**
	 * Loads eGloo environment into persistent scope and polls for connections
	 * to config specified port
	 * @see photon\server.Server::start()
	 */
	public function start()
	{
		$this->stats['start_time'] = time();
		
		// bootstrap egloo environment
		$application = &\eGloo\System\Server\Application::instance();
		
		$application->bootstrap()
			->bootstrap('egloo')
			->bootstrap('pear');		

		// Get a unique id for the process
		$this->phid = sprintf('%s-%s-%s', gethostname(), posix_getpid(), time());
		$this->registerSignals(); // For SIGTERM handling

		// We create a zeromq context which will be used everywhere
		// within the process. The creation of a context is the
		// equivalent of one "zmq_init" and it should be run only
		// once.
		$this->ctx = new \ZMQContext(); 

		// We need to be able to listen to the control requests and
		// send answers.
		$this->ctl_ans = new \ZMQSocket($this->ctx, \ZMQ::SOCKET_PUSH); 
		$this->ctl_ans->connect($this->ipc_internal_answers);
		$this->ctl_ord = new \ZMQSocket($this->ctx, \ZMQ::SOCKET_SUB); 
		$this->ctl_ord->connect($this->ipc_internal_orders);
		$this->ctl_ord->setSockOpt(\ZMQ::SOCKOPT_SUBSCRIBE, 'ALL');
		$this->ctl_ord->setSockOpt(\ZMQ::SOCKOPT_SUBSCRIBE, $this->phid);
		usleep(200000); 

		// This makes the connection with the Mongrel2 server.		
		$this->conn = new \photon\mongrel2\Connection($this->sender_id,
													  $this->sub_addr,
													  $this->pub_addr,
													  $this->ctx);

		// Now, we push all the zmq sockets waiting for an answer in
		// the poll.
		$this->conn->reqs; // Mongrel2 requests.
		$this->conn->resp; // Mongrel2 answers.
		$this->conn->ctx; // zeromq context.

		$this->poll = new \ZMQPoll();
		$this->poll->add($this->conn->reqs, \ZMQ::POLL_IN);
		$this->poll->add($this->ctl_ord, \ZMQ::POLL_IN);

		$to_write = array(); 
		$to_read = array();

		while (true) {
			$events = 0;
			
			try {
				// We poll and wait a maximum of 200ms. 
				\photon\log\Timer::start('photon.main_poll_time');
				
				$events = $this->poll->poll($to_read, $to_write, 200000);
				$poll_time = \photon\log\Timer::stop('photon.main_poll_time');
				$errors = $this->poll->getLastErrors();
				if (count($errors) > 0) {
					foreach ($errors as $error) {
				
						\photon\log\Log::error('Error polling object: ' . $error);
					}
				}
			} catch (\ZMQPollException $e) {
				//Log::fatal('Poll failed: ' . $e->getMessage());

				return 1;
			}
			if ($events > 0) {
				foreach ($to_read as $r) {
					if ($r === $this->conn->reqs) {
						// We are receiving a request from Mongrel2
						$this->processRequest($this->conn);
						$this->stats['requests']++;
					}
					if ($r === $this->ctl_ord) {
						// We are receiving an order!
						$this->processOrder($this->ctl_ord);
					}
				}
			}
			@$this->updatePollStats($poll_time);
			pcntl_signal_dispatch();
		}
	}
	
    public function processRequest($conn)
    {
    	// unique id for every request; useful for logging, but perhaps should
    	// be abstracted into logger
		$uuid = \photon\server\request_uuid($this->phid);
		//Timer::start('photon.process_request');
		
		// I don't know why the recieved request is being written to temporary; 
		// maybe as a log store??
		$fp = fopen('php://temp/maxmemory:5242880', 'r+');
		fputs($fp, $conn->reqs->recv());
		$stats = fstat($fp);
		rewind($fp);
		$message = $conn->parse($fp);
				
		// instantiate egloo request objectz
		$request = new Action\HTTP\Request($message);
		$request->uuid = $uuid;
		$request->conn = $conn;		
				
		//list($req, $response) = \photon\core\Dispatcher::dispatch($req);
		
		// dispatch request to egloo handler/router
		$response = \eGloo\System\Server\Action\Dispatcher::dispatch($request);
				
		
		// If the response is false, the view is simply not
		// sending an answer, most likely the work was pushed to
		// another backend. Yes, you do not need to reply after a
		// recv().
		if (false !== $response) {
		    $conn->reply($message, $response->render());
		}
		unset($message); // Cleans the memory with the __destruct call.
		
		/*
		Log::perf(array(
			'photon.process_request', $uuid, Timer::stop('photon.process_request'), $stats['size']
		));
		*/
    }
	
	/**
	 * Clean-up configuration from persistent scope and discontinue polling
	 * @see eGloo\Server.Servable::stop()
	 */
	public function stop() { 
		
	}
	
	public function registerSignals()
	{
		if (!pcntl_signal(SIGTERM, array('\eGloo\System\Server\Server', 'signalHandler'))) {
			Log::fatal('Cannot install the SIGTERM signal handler.');
			die(1);
		}
	}

	
}