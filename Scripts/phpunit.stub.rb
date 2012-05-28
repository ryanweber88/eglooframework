#!/usr/bin/env ruby

# Creates a phpunit stub; (will) require(s) 'reflection' script
# @author Christian Calloway callowaylc@gmail.com

# REQUIRES 

require 'erb'
require 'fileutils'

# CONSTANTS


# PATCHES

# DEFINES 



# TESTS

# GO

# test for argument
raise 'Specify file' if ARGV.empty?

# test file's validity
raise 'Invalid file' unless File.file?(file = ARGV[0])


# create file instance in block context
File.open(file) do | file |
  
  # read to buffer
  content = file.read

  # get namepsace if available
  namespace = content.match(/^namespace\s+(\S+)/i)[1]

  # get class name if available
  unless class_name = content.match(/^class\s+(\S+)/i)[1]
    raise 'File does not contain valid class definition'
  end
  
  # get stub path based on location and within what context it exists (framework, client, admin, etc)
  stub_directory  = File.dirname(File.absolute_path(file).match(/(^.+?)(Common|eglooframework|Administration.gloo|Client.gloo)/i)[0] + 
                    "/Test/PHPUnit/" +
                    File.absolute_path(file).match(/(Common|eglooframework|Administration.gloo|Client.gloo)\/(.+)/i)[2])
  
  # create path to directory if it does not exist
  FileUtils.mkdir_p(stub_directory)
    
  # finally write stub template to directory
  IO.write("#{stub_directory}/#{class_name}Test.php", ERB.new(IO.read('./phpunit.stub/stub.erb')).result(binding))
  
  puts "Rote #{stub_directory}/#{class_name}Test.php"
end