import math


def pythagoren(a, b):
    c = math.pow(a, 2) + math.pow(b, 2)
    result = math.sqrt(c)
    return result


def main():
    while True:
        try:
            a = float(input("a:"))
            b = float(input("b:"))
            print(pythagoren(a, b))
        except EOFError:
            break


if __name__ == "__main__":
    main()
