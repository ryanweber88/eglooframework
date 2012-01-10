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
DirectoryTierz          = '/home/christian/Develop/tierzwei'
DirectoryAdministration = "#{DirectoryTierz}/Administration.gloo/"
DirectoryClient         = "#{DirectoryTierz}/Client.gloo/"
DirectoryPHP            = "#{DirectoryTierz}/Common/PHP"

# CLASSES

class ReviewClass
  attr_accessor :path, :owner, :methods
  
  def initialize(path)
    raise "Cannot find file @ #{path}" unless File.file? path
    
    self.path    = path
    self.methods = [ ] 
  end
  
  def name
    File.basename(self.path)
  end
  
  
  def dependencies
    
  end
  
  def process_class
    # do work
    
    yield(self) if block_given?
  end
  
  def is_request_processor?
    self.path =~ /RequestProcessing/
  end
end

class ReviewMethod
  attr_accessor :dependencies, :name, :line_number
 
end

class Dependency
  attr_accessor :name, :line, :line_number
  
  def initialize(path)
    self.path = path  
  end 
  
  
end

class Reflection
  # interfaces with reflection script to provide
  # reflection details about class
  ReflectionScript = "./reflection.php"
  
  class << self
    def command(reflection_on, command)
      `#{ReflectionScript} #{reflection_on} #{command}`.gsub(%r{</?[^>]+?>}, '')    
    end
  end
  
  def initialize(file)
    @file = file
  end
  
  def doc_class 
    results = self.class.command(@file, '\$reflection_class->getDocComment')
  end
  
end

def todo(line, message)
  
  # get the number of tabs on line
  /(\t)+./.match(line) do | match |
    tabs = match.to_s
  end
  
  "#{tabs}/** @TODO #{message} */"
end

def dependency(name, line, line_number)
  dependency = Dependency.new
  dependency.name = name
  dependency.line = line
  dependency.line_number = line_number
  
  dependency
end


# TESTING

# PRODUCTION

# Get list of all dependencies

model_dependencies = [ ]
dirs               = [
  "#{DirectoryPHP}/Models",
  "#{DirectoryPHP}/Persistence"
]

dirs.each do | directory |
  Dir.glob("#{directory}/**/*.php").each do | file |
    model_dependencies << File.basename(file)
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
      
      # create new review class instance from correct file path
      review_class = ReviewClass.new(file)
      
      # set review class properties
      review_class.owner = review_class.is_request_processor? && row[3] || row[4]
      
      
      # parse methods for each class
      #file_content = IO.read(file)
      new_file_content = [ ]
      
      File.readlines(file).each_with_index do | line, number |      
      #file_content.scan /function\s+([a-zA-Z_]+)/ do | match |
        
        /function\s+(a-zA-Z_)+/.match(line) do | match |
        
          method = ReviewMethod.new
          method.name        = match[0]
          method.line_number = number 
          
          # get line number of match
          method.line_number = asdf
          
          # get dependencies attached to matchdx
          
          review_class.methods << method
          
        end
        
        # check line against hardcoded sql
        if line =~ /MysqlConnector/ 
          new_file_content << todo line, "Hardcoded Dependency >> MysqlConnector"
          review_class.dependencies << dependency "Hardcoded", line, number  
          
        elsif
             

        else       
          model_dependencies.each do | class_name |
            if line.include? class_name
              # add content 
              new_file_content << todo line, "Model Dependency >> #{dependency.name}"
              
              review_class.dependencies << dependency "Model", line, number
            end
          end
        end
        
   
        # add existing line
        new_file_content << line
                
        
      end
      
      # rewrite file with new_file_content
      FileUtils.copy(file, "#{file}.original")
      
      # check for doc comments on class/methods
      Reflection.
      
      # check for multiple returns in method body
      
      # check 
      
     
      
      exit
      
    end
    
    
    
    classes << review_class
  end
end

puts SupportDirectory
