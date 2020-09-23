#Tworzenie pustej listy
lista = []

#liczba elementów które zostaną wprowadzone
n = int(input("Wprowadź liczbę elementów: "))

#Zapisywanie elementów w pustej liście
for i in range(0, n):
    number = float(input("Wprowadź kolejny element: "))
    #Instrukcja IF-ELSE
    if (number.is_integer()):
        #Jeśli liczba jest liczbą całkowitą, zamień ją na całkowitą i zapisz do listy
        lista.append(int(number))
    else:
        #Wpisywanie do listy zmiennej float, jeśli liczba nie jest całkowita
        lista.append(number)

#Sortowanie listy od liczby najmniejszej do największej
lista.sort()

#Wyświetlenie listy
print(lista)
    