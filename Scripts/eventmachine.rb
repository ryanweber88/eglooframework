#!/usr/bin/env ruby

# Unbinds apache from service port, waits for graceful restart and rebinds;
# during unbind period, requests to service port are forwarded to an open
# port, where http requests are queued and subsequently forwarded to 
# apache once rebound
# @author Christian Calloway callowaylc@gmail.com


###  REQUIRES
require 'eventmachine'


module EchoServer  
  def receive_data(data)
    send_data(data)
  end
end

EventMachine::run do
  host = '0.0.0.0'
  port = 6767
  EventMachine::start_server host, port, EchoServer
  puts "Started EchoServer on #{host}:#{port}"
end