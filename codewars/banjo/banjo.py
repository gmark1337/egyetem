def are_you_playing_banjo(name):
    if name[0].lower() == "r":
        return name + ' is playing Banjo'
    else:
        return name + ' is not playing Banjo'


nev = input("Name!: ")
print(are_you_playing_banjo(nev))
