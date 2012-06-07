#!/usr/bin/env ruby
# CLTool to provide information about requests file

# gems/requires
require 'nokogiri'
require 'optparse'
require 'pathname'

# determine name of script being ran which will
# determine the xml file we parsing
look_for = Pathname.new(__FILE__).basename.to_s.sub(/^(\w)/) do |s| 
  s.capitalize
end 


# First lets find our Requests.xml file
file = Dir['**/XHTML/' + look_for + '.xml'].pop

# Raise exceptions based on found file
unless file.nil?
  
  # lets parse our options for which request 
  # class we are looking for
  options = {
    class: nil,
    id:    nil
  }
  
  OptionParser.new do |opts|
    opts.banner = 'Usage: example.rb [options]'
      
    options.each do | word, value |
      opts.on "-#{word[0]} [VALUE]", "--#{word}" do | value |
        options[:"#{word}"] = value || nil
      end    
    end  
  end.parse!  
  
  unless ARGV[0].nil? 
    if ARGV[0] =~ /[a-z]\:[a-z]/i
      options[:class], options[:id] = ARGV[0].split ':'
    end  
  end
    
  
  unless options[:class].nil?
    
    xpath =  "//Requests/RequestClass[@id='" + options[:class]  + "']"
    xpath += "/Request[@id='" + options[:id] + "']" unless options[:id].nil?
    
    # now lets open our xml document and use
    # xpath to find the correct request class 
    File.open file do | file |
      doc = Nokogiri::XML(file)
      doc.remove_namespaces!
      
      puts doc.xpath(xpath)    
      
    end
    
  else
    raise "You must provide a RequestClass id"
  end
  
  

else
  raise "Cannot find file '" + look_for + ".xml' from #{Dir.pwd}" 
end