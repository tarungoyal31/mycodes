require 'json'
res = []
categoryCount = gets.chomp.to_i
for i in 1..categoryCount do
  x = {}
  str = gets.chomp
  count = gets.chomp.to_i
  x["name"] = str
  x["products"] = []
  for i in 0...count do
    name = gets.chomp
    y = {}
    y["name"] = name
    x["products"].push y
  end
  for i in 0...count do
    id = gets.chomp
    x["products"][i]["id"]=id
  end
  res.push x
end
puts res.to_json

