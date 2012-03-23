
Dir['*.php'].each do | file |
	lines = nil;

	lines = File.open(file) do | file | 
		lines = file.read.split /\n/
	end 

	lines[1] = 'namespace Bella;'
	content = lines.join "\n"

	IO.write file, content
	
end
