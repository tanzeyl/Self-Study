import inflect
x = inflect.engine()

f1 = open("numbers.txt", "r")
f2 = open("words.txt", "a")

l = f1.readlines()
l = [int(x[:-1]) for x in l]

for n in l:
  f2.write(x.number_to_words(n))
  f2.write("\n")
