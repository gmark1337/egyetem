def sum_of_list(szamok):
    if len(szamok) == 1:
        return szamok[0]
    else:
        return szamok[0] + sum_of_list(szamok[1:])


def main():
    print(sum_of_list([2, 4, 5, 6, 7]))


if "__name__" == main():
    main()
