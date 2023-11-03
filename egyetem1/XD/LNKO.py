sor = input()
s = sor.split(" ")
a = int(s[0])
b = int(s[1])

while a % b:
    r = a % b
    a = b
    b = r

print(b)
