#!/usr/bin/env ruby
# CLTool to provide information about requests file

# gems
require 'xmlsimple'
require 'optparse'


# First lets find our Requests.xml file
request_file = Dir['**/Requests.xml'].pop

# Raise exceptions based on found file
unless request_file.nil?
  
  puts XmlSimple.xml_in request_file

else
  raise "Cannot find file 'Requests.xml' from #{Dir.pwd}" 
end

