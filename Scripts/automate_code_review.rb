#!/usr/bin/env ruby
# Attempts to automate code review process by doing the following:
# * Identify within review classes, those classes that inappropriately touch
#   the databse - in those cases, adld @todo label to identify dependency/needed update
# * Identify within review classes, those classes that have hardcoded sql,
#   in those cases, add @todo label to identify dependency/needed update
# * List dependencies for each class and respective method, based on above
# * Create PHPUnit stub classes for those classes that do not have them
# * Create docblox for classes/methods that do not have them
# * Identify multiple returns within the body of method and make note
#   within depependencies list
# * Identify the usage of improper fields/columns (eg. 'eid') within method bodies, 
#   and make note via @todo and dependencies
#   within class definition and add to dependencies list
# * Add/Append @author of reviewer to class definition doc
# * Identify request processors that are no longer used and make note within dependencies
# * Identify templates in request processorsr

# REQUIRES

require 'csv'
require 'find'
require 'erb'
require 'fileutils'
require 'fastercsv'

# CONSTANTS

DirectorySupport        = __FILE__.sub /\.rb/i, ''
DirectoryTierz          = '/home/petflowdeveloper/www/tierzwei'
#DirectoryTierz          = '/home/christian/Develop/tierzwei'
DirectoryAdministration = "#{DirectoryTierz}/Administration.gloo/"
DirectoryClient         = "#{DirectoryTierz}/Client.gloo/"
DirectoryPHP            = "#{DirectoryTierz}/Common/PHP"

FileRequestsClient      = "#{DirectoryTierz}/Client.gloo/XML/Requests.xml"
FileRequestsAdmin       = "#{DirectoryTierz}/Administration.gloo/XML/Requests.xml"


# CLASSES

class String
  def ucfirst
    to_s.sub(/^(\w)/) {|s| s.capitalize}
  end
  
  def space
    to_s.scan(/^\s+/).join
  end
  
end

class Meta 
  def initialize(args)
    args.each do |k,v|
      instance_variable_set("@#{k}", v) unless v.nil?
    end 
  end
  
end


class ReviewMeta < Meta
  
  attr_accessor :has_doc, :dependencies, :notes, :name, :line_start, :line_end
  
  
  def initialize(args)
    super(args)
    
    # initialize dependencies and notes
    @dependencies = [ ]
    @notes        = [ ]
    
    # finally add note if meta instance requires docblock
    unless @has_doc
      add_note :message => 'Requires DocBloc',
               :at      => @line_start.to_i
    end
  end
  
  def method_missing(name, arguments, &block)
    
    if match = /add_(.+)/.match(name)
      item = Object.const_get(match[1].ucfirst).new arguments
      
      @dependencies << item if match[1] == 'dependency'
      @notes        << item if match[1] == 'note'
      
    else
      super
    end
    
  end
end

class ReviewFile < ReviewMeta
  attr_accessor :path, :classes
  
  def review_path
    "#{path}.review!"
  end  
end


class ReviewClass < ReviewMeta
  attr_accessor :path, :owner, :review_methods
  

  
  def initialize(args)
    super args
    
    @review_methods = [ ]      
  end
  
  # lists non dependency related notes
  
  def is_request_processor?
    @path =~ /RequestProcessing/
  end
  
  def is_admin?
    @path =~ /Administration\.gloo/
  end
  
  def base_dir
    return "#{DirectoryTierz}/Common" unless is_request_processor?
    return "#{DirectoryTierz}/" + (is_admin? && "Administration.gloo" || "Client.gloo")
  end
  
  def review_path
    "#{path}.review!"
  end
end

class ReviewMethod < ReviewMeta
  
  def has_doc=(value)
    @has_doc = value == 'true'
  end
  
  def line_start
    @line_start.to_i
  end
  
  def line_end
    @line_end.to_i
  end
  
  def line_range
    @line_start.to_i - 1..@line_end.to_i
  end
 
end

class Dependency < Meta
  attr_accessor :name, :at, :line, :file
  
  def to_s
    "Dependency >> #{@name} @ #{@file.sub(/^.+?tierzwei\//, '')}"
  end
end

class Note < Meta
  attr_accessor :message, :at
  
  def to_s
    @message
  end
end

class Reflection
  # interfaces with reflection script to provide
  # reflection details about class
  ReflectionScript = "./reflection.php"
  
  class << self
    def command(reflection_on, name, reduce)
      # get command interface
      fragment = File.absolute_path "#{DirectorySupport}/reflection_fragment_#{name}.php"
     
      
      # iterate through result set - using csv as "adapter" language      
      csv     = CSV.parse(`#{ReflectionScript} #{reflection_on} "#{fragment}"`)
      headers = csv.shift
      data    = [ ]
      
      csv.each do | row |
        record = { }
        
        headers.each_with_index do | header, index |
          row[index] = true  if row[index] == 'true'
          row[index] = false if row[index] == 'false'
           
          record[header] = row[index]        
        end
        
        data << record  
      end 
     
      
      # if returning one record, return single dimension array - 
      # plays nicer
      data = data.shift if data.length == 1 && reduce.nil?
      
      
      data
    end
  end
  
  def initialize(file)
    @file = file
  end
  
  def method_missing(name, *args, &block)  
    self.class.command @file, name, args[0]
  end
end

class Template 
  
  class << self
    def render(template_name = nil, render) 

      if render[:a]
        reciever = render[:a][:reciever]
        meta     = render[:a][:meta]
        
        
        if meta.to_s =~ /DocBloc/
          template_name = reciever.instance_of?(ReviewClass) && 'docbloc_class' || 'docbloc_method'
          space = render[:a][:space]
        else
          template_name = 'todo'
          message       = meta
        end
        
        
                
        # local binding
        render[:with] = binding
      end
      
      erb = ERB.new(IO.read(
        "#{DirectorySupport}/#{template_name}.erb" 
      ))
      
      result = erb.result(render[:with])
     
      return result unless render[:to]
      
      IO.write render[:to], result

       
    end
  end
end



# TESTING

# PRODUCTION

# Get requests contents
@content_requests_client = IO.read FileRequestsClient
@content_requests_admin  = IO.read FileRequestsAdmin

# Get list of all dependencies

model_dependencies = [ ]
dirs               = [
  "#{DirectoryPHP}/Models",
  "#{DirectoryPHP}/Persistence"
]

dirs.each do | directory |
  Dir.glob("#{directory}/**/*.php").each do | file |
    model_dependencies << file
  end
end



# Now iterate across 
Dir["#{DirectorySupport}/*.csv"].each do | file |
  
  csv_file = file
  rows     = [ ]
  
  # iterate through individual support file rows
  csv = CSV.read(file)
  csv.shift
  csv.each do | row |

    classes  = [ ]
    row_size = row.length 
    row[row_size] = ""
        
    # determine support type, based on file name, if request_processor
    # we will have to look for file 
    unless row.empty?
      
      if file =~ /request_processor/      
        # get path to file 
        directory = file =~ /Administration.gloo/ && DirectoryAdministration || DirectoryClient + 
                    "/PHP/RequestProcessing"
        file      = "#{directory}/#{row[3].strip}.php"
      
      # otherwise file can be determine simply from tierzwei root     
      else
        file = "#{DirectoryTierz}/#{row[2].strip}"
      end
      
      
      # raise exception if file cannot be found
      raise "Cannot find file @ #{file}" unless File.file? file
      #next unless File.file? file
      
      # create reflection interface to ease access to class/method definitions
      reflection = Reflection.new(file)
      
      # get file information from reflection and instantiate ReviewFile
      review_file = ReviewFile.new(reflection.file_info)
      
      # create new review class instance from correct file path
      review_class = ReviewClass.new(reflection.class_info.merge({ 
          :path  => file,
          :owner => file =~ /RequestProcessing/ && row[3] || row[4] 
      }))
      
      # check if review class can be found in 
      if review_class.is_request_processor?
        check_against = review_class.is_admin? && @content_request_admin || @content_request_client

        unless check_against =~ /processorID=.#{review_class.name}./
          review_class.add_note :message => 'RequestProcessor Not Used'
        end
        
      end
      
       
      # now check for dependencies in each method of class
      reflection.class_methods(:do_not_reduce).each do | method |
                
        review_method = ReviewMethod.new (method)
        
        # get method body as array of lines/statements
        method_lines = File.readlines(file)[review_method.line_range]
        
        
        # iterate through method lines - we need to iterate across method
        # lines since we need a line number
        method_lines.each_with_index do | line, index |
          
          absolute_line_number = review_method.line_start + index
          
          # check if we have hardcoded sql, which can be identified by the use of MysqlConnector 
          if line =~ /MysqlConnector/ 
            review_method.add_note :message => "Hardcoded SQL", 
                                   :at      => absolute_line_number
            
          # check body against dependency list
          else      

            model_dependencies.each do | file |
              
              class_name = File.basename(file, '.php')
                        
              if line.include? class_name
                
                # add content 
                review_method.add_dependency :name => class_name, 
                                             :at   => absolute_line_number, 
                                             :line => line,
                                             :file => file
                
              end
            end
          end
        end
        

        # check against multiple returns - join our lines into a single body,
        # strip comments
        if method_lines.join.gsub(/\/\/.+$/, '').gsub(/\/\*\*.+?\*\//im, '').scan('return').length >= 2
          review_method.add_note :message => '2+ returns'
        end  
        
        review_class.review_methods << review_method
        
      
      end
      
      # add phpunit stub
     
      path = "#{review_class.base_dir}/Test/Common/" +
             "#{File.dirname(review_class.path.sub(/^.+?PHP\//, ''))}/" +
             "#{review_class.name}Test.php"
       
      # if unit test does not exist, then draw it bitch      
      unless File.file? path
        
        # create directory if it does not exist
        FileUtils.mkdir_p File.dirname(path) unless File.directory? File.dirname(path)
        
        # render template to directory/path
        Template.render 'unit_test', :to => path, :with => binding
      end
      
      # now we throw edits back into file
      file_as_array_of_lines = File.readlines(file)
      
      # now add todo's to this bitch
      todos     = [ ]
      recievers = [ review_class ] + review_class.review_methods
      
        
      # first figure out which have line numbers, which is all we are
      # interested in
      # this is fucking sloppy
      recievers.each do | reciever |
        [reciever.dependencies, reciever.notes].each do | container |
          container.each do | meta |
            unless meta.at.nil?
              todos << { :meta => meta, :reciever => reciever }
            end
            
            # add rows to row
            row[row_size] += "* #{meta.to_s} IN #{reciever.name}"
            
            unless meta.at.nil?
              row[row_size] += " @ \##{meta.at}"
            end
            
            row[row_size] += "\n";
            
          end
        end
      end
  
                
      # second sort by :at iterate through to make changes
      todos.sort { | a, b | b[:meta].at <=> a[:meta].at }.each do | todo |
        
        if todo[:meta].to_s =~ /DocBloc/
          todo[:space] = file_as_array_of_lines[todo[:meta].at - 1].space 
        end

        file_as_array_of_lines.insert(
          todo[:meta].at-1, 
          # -1 because file starts at index 1, while array at index 0
          "\n" + file_as_array_of_lines[todo[:meta].at - 1].space + Template.render(:a => todo) 
        )
     end
            
     # write file to filePath.review
     IO.write review_file.review_path, file_as_array_of_lines.join
     rows << row 
    end
    
    # append dependency information to row for csv
    CSV.open("#{csv_file}.review!", "w") do |csv|
      csv << rows
    end
        
  end
  
  exit
end

puts SupportDirectory
