#Henryk Wołek
def liczbaRzymska(liczbaDziesietna): 
    wartosci = [1, 4, 5, 9, 10, 40, 50, 90,  
           100, 400, 500, 900, 1000] 
    rzymskie = ["I", "IV", "V", "IX", "X", "XL",  
           "L", "XC", "C", "CD", "D", "CM", "M"] 
    i = 12
    while liczbaDziesietna: 
        div = liczbaDziesietna // wartosci[i] 
        liczbaDziesietna %= wartosci[i] 
  
        while div: 
            print(rzymskie[i], end = "") 
            div -= 1
        i -= 1

liczbaUzytkownika = int(input("Podaj liczbe w systemie dziesietnym: "))

print("Liczba rzymska: ")
liczbaRzymska(liczbaUzytkownika)