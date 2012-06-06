#!/usr/bin/env ruby
# CLTool to provide information about requests file

# gems/requires
require 'nokogiri'
require 'optparse'


# First lets find our Requests.xml file
request_file = Dir['**/Requests.xml'].pop

# Raise exceptions based on found file
unless request_file.nil?
  
  # lets parse our options for which request 
  # class we are looking for
  options = {
    request_class: false,
  }
  
  OptionParser.new do |opts|
    opts.banner = 'Usage: example.rb [options]'
      
    %w(remote user password mount).each do | word |
      opts.on "-#{word[0]} [VALUE]", "--#{word}" do | value |
        options[:"#{word}"] = value || true
      end    
    end  
  end.parse!  
  
  # now lets open our xml document and use
  # xpath to find the correct request class 
  File.open request_file do |file|
    doc = Nokogiri::XML(file)
    p doc.xpath("/Requests/RequestClass[@id='#{options[:request_class]}']")    
  end

  
  

else
  raise "Cannot find file 'Requests.xml' from #{Dir.pwd}" 
end

