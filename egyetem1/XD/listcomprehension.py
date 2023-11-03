# 1.feladat

# li = ["aladar", "bela", "cecil"]
# ujlista = [name.capitalize() for name in li]
# print(ujlista)

# 2.feladat

# zeros = [0 for i in range(10)]
# print(zeros)

# 3.feladat

# li = [i for i in range(1, 10 + 1)]
# ujlista = [i * 2 for i in li]
# ujlista2 = [i * 2 for i in range(1, 11)]
# ujlista3 = [i * 2 for i in range(2, 21, 2)]
# print(ujlista)
# print(ujlista2)
# print(ujlista3)

# 4.feladat

# li = ["1", "2", "3", "4", "5", "6", "7", "8", "9", "10"]
# ujlista = [int(s) for s in li]
# print(ujlista)

# 5.feladat

# st = "1234567"
# li = [s for s in st]
# print(li)

# 6.feladat

st = "The quick brown fox jumps over the lazy dog"
li = st.split()
ujlista = [len(s) for s in li]
print(ujlista)
