enteries = {}

text=File.open('input.txt').read
text.gsub!(/\r\n?/, "\n")

text.each_line do |entry|
  entry.slice! "erName --> CustomerId : "
  puts entry
end

