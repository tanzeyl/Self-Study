import json

book = {}
book["Tom"] = {"Name" : "Tom", "Address" : "123 Red Street", "Phone" : "9999999999"}
book["Bob"] = {"Name" : "Bob", "Address" : "123 Blue Street", "Phone" : "8888888888"}

s = json.dumps(book)
with open("book.txt", "w") as f:
  f.write(s)

p = open("book.txt", "r")
s = p.read()
book = json.loads(s)
for person in book:
  print(book[person])
