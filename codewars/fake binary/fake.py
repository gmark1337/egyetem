def fake_bin(x):
    new_word = ""
    for i in x:
        if int(i) < 5:
            new_word = new_word + "0"
        else:
            new_word = new_word + "1"
    return new_word


word = input("word:")
print(fake_bin(word))
