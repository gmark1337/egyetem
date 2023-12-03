import sys
from typing import NamedTuple

# def count_max():
#     szamok = sys.argv[1:]
#     hossz = len(szamok)
#     maxok = 0
#     for i in range(1, hossz - 1):
#         if szamok[i] > szamok[i - 1] and szamok[i] > szamok[i + 1]:
#             maxok += 1
#
#     return maxok

Minion = NamedTuple("Minion",
                    [("name", str),
                     ("hunger", int),
                     ("motivation", int),
                     ("size", str)])


def line_to_minion(line):
    minion_list = line.strip("\n").split(';')
    return Minion(minion_list[0], minion_list[1],
                  minion_list[2], minion_list[3], )


def minion_to_line(minion):
    return f"{minion.name} {minion.hunger} {minion.size}"


def sort_minions(minions):
    minions.sort(key=lambda minion:
    (-minion.motivation, minion.name))
    return minions


def main():
    minions = []

    for line in sys.stdin:
        minions.append(line_to_minion(line))

    for minion in sort_minions(minions):
        print(minion_to_line(minion))


if __name__ == "__main__":
    main()
