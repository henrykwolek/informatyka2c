#Autor: Henryk Wołek
liczbaUzytkownika = input("Podaj liczbę która zostanie zamieniona na dziesiętny: ")
systemUzytkownika = input("Podaj system liczbowy tej liczby: ")
#Zebranie danych od uzytkownika jako zmienne typu string

if liczbaUzytkownika and systemUzytkownika: 
    #sprawdzenie, czy uzytkownik zdefiniował obie zmienne, czy też je pominął.
    cyfryUzytkownika = list(liczbaUzytkownika)
else:
    print("Wystąpił błąd.") 

success = True 
#Stworzenie zmiennej typu boolean, której domyślna wartość to True.

for i in cyfryUzytkownika: 
    #Sprawdzenie, czu użytkownik podając liczbę np. 584 nie zdefiniował systemu jako np. binarny.
    if i >= systemUzytkownika:
        print("Wystąpił błąd.") 
        success = False 
        #Zmienna boolean zmienia wartość na False (0), ponieważ nie można poprawnie wykonać zamiany.
        break 

if success == True:
    wartoscDziesietna = int(liczbaUzytkownika, int(systemUzytkownika)) 
    #Wbudowana funkcja int bierze 2 argumenty: liczbę, oraz jej system. Zwraca liczbę dziesiętną.
    print(wartoscDziesietna)
