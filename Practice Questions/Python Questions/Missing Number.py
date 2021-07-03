n = int(input())
s = input().split()
for i in range(0, len(s)):
    s[i] = int(s[i])
s.sort()
num = 1
if s[0] != 1:
    print(num)
elif s[n - 2] != n:
    print(n)
else:
    for i in range(0, len(s)):
        if s[i] != num:
            print(num)
            break
        num += 1
