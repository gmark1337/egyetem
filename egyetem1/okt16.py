import random

# 1.feladat
# Állomány vége jelig, negatív számokat számolunk

# szamlalo = 0
# try:
#     while (True):
#         n = input("Add meg a számot!")
#         if n[0] == "-":
#             szamlalo += 1
# except EOFError as e:
#     pass
# except KeyboardInterrupt as e:
#     pass
# print(szamlalo)

# 2.feladat
# Hozzunk létre egy listát, benne szavakkal, majd list comprehension segítségével egy másikat
# melyben nagybetűsen jelennek meg a szavak, pl.: tojás -> TOJÁS !

# li = ["alma", "tojás", "tej", "fent"]
# li2 = [s.upper() + "!" for s in li]
#
# print(li2)
#
# # Hozzunk létre listát li elemeiből, de minden elem a li szavainak hossza
# # Hozzunk létre listát igaz-hamis elemek random sorozatával
#
# # Hozzunk létre listát random számokból, de csak páros számokkal
# li3 = [random.randint(1, 50) * 2 for i in range(10)]
#
# print(li3)
# # Hozzunk létre listát li elemeiből ahol a szavak hossz > 5
# li4 = [s for s in li if len(s) >= 5]
# print(li4)
# # Hozzunk létre listát számok [1,100] sorozatával de csak minden 3.elemet
# li5 = [n for n in range(1, 100, 3)]
# print(li5)

# Olvassunk be számokat, majd döntsük el, hogy párosak-e. Ha igen számoljuk meg őket
# Ha nem, akkor vegyünk el egyet a számításból.
# Ezt folytassuk addíg amíg a felhasználó 0-t nem ad a bemeneten!

# szamlalo = 0
# while True:
#     n = int(input("Add meg a számot! "))
#     if n == 0:
#         break
#     elif n % 2 == 0:
#         szamlalo += 1
#     else:
#         szamlalo -= 1

# Másik módszer
# n = int(input("Add meg a számot!"))
# while n != 0:
#     if n % 2 == 0:
#         szamlalo += 1
#     else:
#         szamlalo -= 1
#     n = int(input("Add meg a számot! "))

# glikémiás index: 0-39 alacsony, 40-59 közepes, 60-100 magas
# Olvassunk be 100-as értékig és döntsük el melyik kategóriába tartozik

# n = -1
#
# while n != 100:
#     if (n > 0 and n < 40):
#         print("Alacsony")
#     elif (n >= 40 and n < 60):
#         print("Közepes")
#     elif (n >= 60 and n <= 100):
#         print("Magas!")
#
#     n = int(input("Add meg a GI indexet! "))

li = ["Vízes Szilárd", "Kő Pál", "Tank Aranka", "Gipsz Jakab", "Kasza Blanka", "Feles Elek", "Am Erika"]
max_length = ""
min_length = li[0]

for name in li:
    if len(name) > len(max_length):
        max_length = name
    if len(name) < len(min_length):
        min_length = name

print(min_length)
print(max_length)
