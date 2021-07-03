def search(alist, item):
    first = 0
    last = len(alist) - 1
    found = False
    while first <= last and not found:
        mid = (first + last) // 2
        if item == alist[mid]:
            found = True
        else:
            if item < alist[mid]:
                last = mid - 1
            else:
                first = mid + 1
    return found


list1 = [12, 33, 56, 98, 675]
item = 577
if search(list1, item):
    print("Yes")
else:
    print("No")
