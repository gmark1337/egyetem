
while True:
    szo = input("Adj meg egy szót(END ha már befejezted)")
    ujszo = ""
    for i in szo:
        if i.isupper():
            ujszo += i*2
        else:
            ujszo += i
    if szo == "END":
        break
    print(ujszo)