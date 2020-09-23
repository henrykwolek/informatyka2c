cyfryUzytkownika = list(input("Podaj liczbę która zostanie zamieniona na dziesiętny: "))
systemUzytkownika = int(input("Podaj system liczbowy tej liczby: "))
cyfryUzytkownika = cyfryUzytkownika[::-1]
i = 0
value = 0
while i < len(cyfryUzytkownika):
    value = value + int(cyfryUzytkownika[i]) * int(systemUzytkownika) ** int(i)
    i = i + 1
print(value)