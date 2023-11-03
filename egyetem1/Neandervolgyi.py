import sys

def neander(valami):
    csok = 1
    nov = 1
    gen = [int(x) for x in valami.split()]
    for b in range(len(gen) - 1):
        if gen[b] > gen[b+1]:
            csok += 1
        if gen[b] < gen[b+1]:
            nov += 1
        if nov == 3 or csok == 3:
            return "YES"
    return "NO"


for i in sys.stdin:
    print(neander(i))
