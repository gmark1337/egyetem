sor = input().split(' ')

while True:
    n = int(sor[0])
    if n == 0:
        break
    i = n
    while i > 1:
        print(int(sor[i]), end=' ')
        i -= 1
    print(int(sor[i]))

    sor = input().split(' ')
