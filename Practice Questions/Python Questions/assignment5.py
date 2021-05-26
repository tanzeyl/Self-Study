my_list = [2, 2, 3, 3, 8, 8, 9]
dic = {}
for i in my_list:
    if i not in dic:
        dic[i] = 1
    else:
        dic[i] += 1
for key,value in dic.items():
    if value == 1:
        print(key)