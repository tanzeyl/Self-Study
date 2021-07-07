require 'aes'

source_file = ARGV[0]
password = AES.key
encrypted = AES.encrypt(File.read(source_file), password)

target_file = "#{source_file}.enc"
File.open(target_file, "wb") {|f| f.write(encrypted)}
puts "File encrypted to #{target_file} with password #{password}"
