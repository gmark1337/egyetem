# def negyszog(a: int, b=0) -> int:
#    if b == 0:
#       return a * a
#    return a * b

# def faktorialis(alap: int) -> int:
#    if alap == 1:
#        return 1
#    return alap * faktorialis(alap - 1)

def hatvany(alap: int, kitevo: int):
    if kitevo == 0:
        return 1
    return alap * hatvany(alap, kitevo - 1)


def hatvany_for(alap, kitevo):
    eredmeny = 1
    for i in range(kitevo):
        eredmeny *= alap

    return eredmeny

def hatvany_while(alap, kitevo):
    eredmeny = 1
    while True:
        if kitevo == 0:
            break
        eredmeny *= alap
        kitevo -= 1

    return eredmeny


def main():
    print(hatvany(2, 5))
    print(hatvany_for(2, 5))
    print(hatvany_while(2, 5))


if __name__ == "__main__":
    main()
