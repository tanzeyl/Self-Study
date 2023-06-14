from english_words import get_english_words_set
web2lowerset = get_english_words_set(['web2'], lower=True)
possibles = []

for word in web2lowerset:
  if len(word) == 5:
    possibles.append(word)

possibles.sort()

for i in range(6):
  temp = []
  print(f"Input the number of correct letters after guess {i+1}.")
  n = int(input())
  if n != 0:
    ci = []
    cl = []
    print("Input the indexes of correct letters and the corresponding letters.")
    for i in range(n):
      ci.append(int(input()))
      cl.append(input())
    for word in possibles:
      for i in range(len(ci)):
        flag = True
        if word[ci[i]] != cl[i]:
          flag = False
          break
      if flag:
        temp.append(word)
    possibles = temp
  print(f"Input the number of letters in the word but at the wrong place after guess {i+1}.")
  n = int(input())
  if n != 0:
    gi = []
    gl = []
    print("Input the wrong indexes and the letters.")
    for i in range(n):
      gi.append(int(input()))
      gl.append(input())
    for word in possibles:
      for i in range(len(gi)):
        if word[gi[i]] == gl[i]:
          if word in possibles:
            possibles.remove(word)
    for word in possibles:
      for letter in gl:
        if letter not in word:
          possibles.remove(word)
  print(f"The number of words: {len(possibles)}.")
  for word in possibles:
    print(word)
