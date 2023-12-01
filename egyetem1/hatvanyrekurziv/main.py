def hatvany(n, i):
    if i+1 == 1:
        return 1
    else:
        return n * hatvany(n, i-1)

def main():
    print(hatvany(2, 4))


if "__name__" == main():
    main()
