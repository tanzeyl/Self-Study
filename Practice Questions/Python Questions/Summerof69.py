def summer_of_69(my_list):
    i = int()
    j = int()
    for i in range(0, len(my_list)):
        if my_list[i] == 6:
            for j in range(i + 1, len(my_list)):
                if my_list[j] == 9:
                    break
            for k in range(i, j + 1):
                my_list[k] = 0
    print(sum(my_list))


summer_of_69([2,1,6,9,11])
