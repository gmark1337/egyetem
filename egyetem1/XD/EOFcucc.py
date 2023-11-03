maganhangzok = "aáeéiíuúüűöőoó"
while True:
    szo = input("szo: ")
    ujszo = ""
    for i in szo:
        if i not in maganhangzok:
            ujszo += i

    if szo == "EOF":
        break
    print(ujszo)
