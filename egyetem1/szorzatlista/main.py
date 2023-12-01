def szorzat(n):
    if len(n) == 1:
        return n[0]
    else:
        return n[0] * szorzat(n[1:])


def main():
    print(szorzat([1, 2, 3, 4]))


if "__name__" == main():
    main()
