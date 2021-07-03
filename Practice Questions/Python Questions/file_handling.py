def fact(n):
    res = 1

    for i in range(2, n + 1):
        res = res * i

    return res


t = int(input())
count = 0
i = 2
j = 2
l = 0
while t:
    nums = input().split(" ")
    n = int(nums[0])
    k = int(nums[1])
    s = input()
    while (i < int(n / 2)):
        if s[:1] * j == s:
            break
        i += 1
        j += 1
    while (l <= k):
        if l == 0:
            count = 1
        if l >= 1:
            count = count + (fact(n) / (fact(l) * fact(n - l))) * 2
        l += 1
    print(int(count)
    t = t - 1