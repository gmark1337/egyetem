def invert(lst):
    lst2 = []
    for i in lst:
        lst2.append(i * -1)
    return lst2


print(invert([1, 2, 3, 4, 5]))
