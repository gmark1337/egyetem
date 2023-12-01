def harmonic(n):
    if n < 2:
        return 1
    else:
        return 1 / n + harmonic(n-1)


def main():
    print(harmonic(7))


if "__name__" == main():
    main()
