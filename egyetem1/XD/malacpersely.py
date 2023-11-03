osszeg = 0
darab = 0
while True:
    try:
        sor = input().split(':')
        penz = sor[1].split(' ')
        husz = True
        for i in range(len(penz)):
            osszeg += int(penz[i])
            if int(penz[i]) < 20:
                husz = False
        if husz:
            darab += 1

    except EOFError:
        break
print(osszeg)
print(darab)
