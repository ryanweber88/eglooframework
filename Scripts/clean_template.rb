#!/usr/bin/env ruby

# Removes property messages to object receiver - ie, converts to associative array

# REQUIRES 

require 'erb'
require 'fileutils'

# GO

# raise exceptions if an argument does not exist, or if it is not valid file
raise 'You must pass a valid file argument'                    if ARGV.empty? 
raise 'File argument is invalid'                               unless File.file? (file = ARGV[0])
raise 'You\'ve already cleaned this template or remove backup' if File.file? ("#{File.dirname(file)}/#{File.basename(file)}.backup")




# open file and look for php instance patterns
content = nil

File.open(file) do | file |
  content = file.read.gsub(/\$([a-zA-Z_0-9]+)\-\>([a-zA-Z_0-9]+)(\(.*?\))?(\-\>([A-Za-z0-9_]+))?/) do | match |
    object, key, multi = $1, $2, $5

    replace =  "$#{object}.#{key.sub /^get/, ''}"
    replace += ".#{multi}" unless multi.nil?

  
    replace  
  end
end


# make a copy/backup of file
path = File.dirname file

FileUtils.copy file, "#{path}/#{File.basename(file)}.backup"

# overwrite target
IO.write file, content