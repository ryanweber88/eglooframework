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

# CONSTANTS

DirectorySupport        = __FILE__.sub /\.rb/i, ''
#DirectoryTierz          = '/home/petflowdeveloper/www/tierzwei'
DirectoryTierz          = '/home/christian/Develop/tierzwei'
DirectoryAdministration = "#{DirectoryTierz}/Administration.gloo/"
DirectoryClient         = "#{DirectoryTierz}/Client.gloo/"
DirectoryPHP            = "#{DirectoryTierz}/Common/PHP"

FileRequestsClient      = "/home/christian/Develop/tierzwei/Client.gloo/XML/Requests.xml"
FileRequestsAdmin       = "/home/christian/Develop/tierzwei/Administration.gloo/XML/Requests.xml"
# CLASSES

class String
  def ucfirst
    to_s.sub(/^(\w)/) {|s| s.capitalize}
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
               :at      => @line_start
    end
  end
  
  def method_missing(name, arguments, &block)
    if match = /add_(.+)/.match(name)
      item = Object.const_get(match[1].ucfirst).new arguments
      
      @dependencies << item if match[1] == 'dependency'
      @notes        << item if match[1] == 'note'
      
    end
  end
end

class ReviewFile < ReviewMeta
  attr_accessor :path, :classes
end


class ReviewClass < ReviewMeta
  attr_accessor :path, :owner, :methods
  

  
  def initialize(args)
    super args
    
    @methods = [ ]      
  end
  
  # lists non dependency related notes
  def notes
    notes = [ ]
  end
  
  def is_request_processor?
    @path =~ /RequestProcessing/
  end
  
  def is_admin?
    @path =~ /Administration\.gloo/
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
end

class Note < Meta
  attr_accessor :message, :at
end

class Reflection
  # interfaces with reflection script to provide
  # reflection details about class
  ReflectionScript = "./reflection.php"
  
  class << self
    def command(reflection_on, name)
      # get command interface
      fragment = File.absolute_path "#{DirectorySupport}/reflection_fragment_#{name}.php"
      
      puts `#{ReflectionScript} #{reflection_on} "#{fragment}"`
      exit
      
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
      data = data[0] if data.length == 1

      data
    end
  end
  
  def initialize(file)
    @file = file
  end
  
  def method_missing(name, *args, &block)  
    self.class.command @file, name
  end
end

def todo(line, message)
  
  # get the number of tabs on line
  /(\t)+./.match(line) do | match |
    tabs = match.to_s
  end
  
  "#{tabs}/** @TODO #{message} */"
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
  
  # iterate through individual support file rows
  csv = CSV.read(file)
  csv.shift
  csv.each do | row |

    classes = [ ]
        
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
      
      puts "review_file.path"; exit;
      
      # get class information from reflection and instantiate ReviewClass
      class_info = reflection.class_info

      # create new review class instance from correct file path
      review_class = ReviewClass.new(class_info.merge({ 
          :path  => file,
          :owner => file =~ /RequestProcessing/ && row[3] || row[4] 
      }))
      
      # check if review class can be found in 
      if review_class.is_request_procesor?
        check_against = review_class.is_admin? && @content_request_admin || @content_request_client
        
        unless check_against =~ /processorID=.#{review_class.name}./
          review_class.add_note :message => 'RequestProcessor Not Used'
        end
        
      end
 
      
      # now check for dependencies in each method of class
      reflection.class_methods.each do | method |
        
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
        
        # now check against items that do not require line number
        method_body = method_lines.join
        
        # check against multiple returns - join our lines into a single body,
        # strip comments
        if method_lines.join.gsub(/\/\/.+$/, '').gsub(/\/\*\*.+?\*\//im, '').scan('return').length >= 2
          review_method.add_note :message => '2+ returns'
        end  
        
        
        
      
      end
      
      # add phpunit stub
      if review_class.is_request_processor?
        
      else
        unit_test_directory = "#{DirectoryTierz}/Common/PHP/Testing"  
      end
      
      path = "#{unit_test_directory}/#{File.dirname(review_class.path.sub(/^.+?PHP\//, ''))}/#{review_class.name}Test.php"
      IO.write path, ERB.new(IO.read('./unit_test.rb')).render    
        
      # now start modification on file
      
      # rewrite file with new_file_content
      # FileUtils.copy(file, "#{file}.original")
      # IO.write(file, new_file_content)
      

      
      # check for multiple returns in method body
      
      # check 
      
     
      
      exit
      
    end
    
    
    
    classes << review_class
  end
end

puts SupportDirectory
