def n_sum(n):
    if n == 1:
        return n
    else:
        return n + n_sum(n-1)

def main():
    n = int(input("n= "))
    print(n_sum(n))


if "__name__" == main():
    main()
