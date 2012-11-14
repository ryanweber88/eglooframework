#!/usr/bin/python
"""This script will insert a single datapoint into the graphite db using
the args passed. The format is:

python graphite-insert.py metric_name metric_val metric_time

where metric_time is a unix timestamp

"""

import sys
from socket import socket

CARBON_SERVER = '127.0.0.1'
CARBON_PORT = 2003

if len(sys.argv) > 3:
  metric_name = sys.argv[1]
  metric_val = sys.argv[2]
  metric_time = sys.argv[3]
else:
  print "Error: too few args"
  sys.exit(1)

sock = socket()
try:
  sock.connect( (CARBON_SERVER,CARBON_PORT) )
except:
  print "Couldn't connect to %(server)s on port %(port)d, is carbon-agent.py running?" % { 'server':CARBON_SERVER, 'port':CARBON_PORT }
  sys.exit(1)

message = metric_name + ' ' + metric_val + ' ' + metric_time
message += '\n' #all lines must end in a newline
sock.sendall(message)
