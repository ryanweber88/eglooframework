#!/usr/bin/env ruby
# CLTool to provide information about requests file

# gems/requires
require 'nokogiri'
require 'optparse'


# First lets find our Requests.xml file
file = Dir['**/XHTML/Dispatch.xml'].pop

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
  raise "Cannot find file 'Dispatch.xml' from #{Dir.pwd}" 
end