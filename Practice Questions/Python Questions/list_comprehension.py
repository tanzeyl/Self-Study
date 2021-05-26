def last_digit(a_list):
    i = 0
    new_list = [item for item in a_list if item.isdigit()][-1]
    print(new_list)

m = "Buy 1 get 2 free"
last_digit(m)