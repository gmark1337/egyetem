import random


#
# n = int(input("Szett hossza: "))
# s1 = set()
# s2 = set()
#
# while len(s1) != n:
#     s1.add(random.randint(1, 10))
# while len(s2) != n:
#     s2.add(random.randint(1, 10))
#
# print("set1:{}\nset2:{}".format(s1, s2))
# print("UNIO", s1 & s2)
# print("METSZET", s1 | s2)
# print("KÜLÖNBSÉG", s1 - s2)
# print("SZIM DIF", s1 ^ s2)
#
# n1 = int(input("Halmaz méret: "))
# set1 = set()
# set2 = set()
#
# while len(set1) != n1:
#     kuka = random.randint(1, 20)
#     if kuka % 2 == 0:
#         set1.add(kuka)
#
# while len(set2) != n1:
#     kuka = random.randint(1, 20)
#     if kuka % 2 != 0:
#         set2.add(kuka)
#
# print("set1:{}\nset2:{}".format(set1, set2))
# print("UNIO", set1.union(set2))
#
# d = {
#     "alma": 2,
#     "körte": 3,
#     "szilva": 5,
# }
#
# for key in d.keys():
#     print(key, sep=" ")
# print()
# for val in d.values():
#     print(val, sep=" ")
# print()
#
# for key, val in d.items():
#     print("key: {}, val: {}".format(key, val))
#
# def f1():
#     d = dict()
#     s = input('Add meg a szót:')
#     while s != '':
#         if s in d.keys():
#             d[s] += 1
#         else:
#             d[s] = 1
#         s = input()
#
#     for key, val in d.items():
#         print("{} {}".format(key, val))
#
#
# def main():
#     f1()
#
#
# if __name__ == "__main__":
#     main()

def meghiv(fvg, a, b):
    return fvg([a, b])


meghiv(print, 1, 2)
print(meghiv(sum, 1, 2))
