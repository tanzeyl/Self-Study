n = int(input("Enter the number of words.\n"))
words = []

def checkList(l):
    return all(e == l[0] for e in l)

for i in range(n):
  words.append(input("Enter a word.\n"))

s = 1000
for i in words:
  if len(i) < s:
    s = len(i)

flag = 1
for i in range(s+1):
  prefix = []
  for j in words:
    prefix.append(j[0:i+1])
  if i == 0 and not checkList(prefix):
    flag = 0
    print(-1)
    break
  else:
    if not checkList(prefix):
      break

if flag:
  print(f"{prefix[0]} is the common prefix.")
