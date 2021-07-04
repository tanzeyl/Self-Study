names = [["Jhumpa", "Lahiri"], ["J. K", "Rowling"], ["Devdutt", "Pattanaik"]]
new_name = []
for i in 0...2
  new_name = names[i][0] + " " + names[i][1]
end
for i in 0...2
  puts new_name[i]
end
