def balanced(string):
  rCount = 0
  lCount = 0
  for word in string:
    if word == "(":
      rCount += 1
    elif word == ")":
      lCount += 1
  if rCount == lCount:
    return True
  else:
    return False

s = input()

if balanced(s):
  print("Yes")
else:
  print("No")
