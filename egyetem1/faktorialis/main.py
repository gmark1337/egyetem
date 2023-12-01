def faktorialis(n):
    if n == 1:
        return 1
    else:
        return n * (faktorialis(n-1))



def main():
    print(faktorialis(5))


if "__name__" == main():
    main()