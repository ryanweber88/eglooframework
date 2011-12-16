#!/usr/bin/ruby

def check_files (hash)
  
  #check if hash
  
  
  Dir.entries(hash.directory).each do |file|
    if File.directory? file 
      
      # recurse if valid directory
      check_files :directory => file, :base => base unless /\./ =~ file
    else if /.+?\.php/i =~ file
      
    end
  end
end

if File.directory? ARGV[0]
  check_files :directory => ARGV[0], :base => ARGV[0]
else
  raise 'Invalid Directory Fucker'
end