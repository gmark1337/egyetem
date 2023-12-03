import sys

# argc = len(sys.argv)
#
# print("parancssori arg. hossza: ", argc)
#
# for i in range(1, argc):
#     print("elem: ", sys.argv[i])
#
# print("Elérési útv", sys.argv[0])
#

# argc = len(sys.argv)
#
# print(sys.argv[0])
# print("Argumentomok száma:", argc)
#
# prod = 1
# for i in range(1, argc):
#     prod *= int(sys.argv[i])
#
# print("Produktum", prod)
#
# def count_of_odds():
#     odds = 0
#     for i in range(1, len(sys.argv)):
#         if int(sys.argv[i]) % 2 != 0:
#             odds += 1
#     return odds
#
#
# def main():
#     print(count_of_odds())
#
#
# if __name__ == "__main__":
#     main()

with open("text.txt", encoding="utf-8") as file:
    lines = file.readlines()
    for line in lines:
        print(line.strip("\n"))

with open("text.txt", 'w', encoding="utf-8") as file:
    file.write("\nUjsor\n")
