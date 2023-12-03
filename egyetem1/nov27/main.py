import sys


def vasarol(n, anyag, dict):
    if n < 0.5:
        print("Ennyi anyagot nem lehet venni")
        return 0
    else:
        return int(dict[anyag]) * n


def main():
    file_name = sys.argv[1]
    with open(file_name, 'r', encoding="utf-8") as file:
        li = file.readlines()
        li = [anyag.strip("\n").split(";") for anyag in li]
        anyagok_dict = {}
        for anyag in li:
            anyagok_dict[anyag[0]] = anyag[2]

    anyag = input("Kérem az anyagot!: ")
    n = float(input("A hosszát is!: "))
    print(vasarol(n, anyag, anyagok_dict))


if __name__ == "__main__":
    main()
