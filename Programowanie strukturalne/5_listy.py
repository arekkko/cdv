progr = ['Python', 'C#', 'JS', 'PHP'];
print(progr)
print(type(progr))

first = progr[0]
print(first)

threeElements = progr[0:3]
print(threeElements)

last = progr[-1]
print(last)

#dodanie nowego elementu do list
progr.append("R")
progr.append('Python')
print(progr)

#zliczanie elementow w liscie (python)
countElement = progr.count("Python")
print('ILosc elementow ' + str(countElement))
print(f'Ilosc elementow: {countElement}')

#ilosc elementow w liscie
countElementsOfList = len(progr)
print(countElementsOfList)

#polaczenie countElementsOfList
anotherList = ['C', 'C++']
progr.extend(anotherList)
print('progr:' + str(progr))
print('anotherList: ' + str(anotherList))

#usuwanie elementow z listy
new = progr
print(f'Nowa lista: {new}')
new.clear()
print(f'Nowa lista: {new}')
print(f'progr lista: {progr}')

'''
Dodaj liste o nazwie: country
Przypisz do niej 5 elementow
Popros uzytkownika, aby dodal dwa nowe elementy do listy
Uzytkownikowi wysiwetl liste do wybory

1) Wyswietl pierwsze 3 elementy listy
2) Wyswietl elementy listy ktore dodalem (dane pobierz z listy)
3) Wyswietl zawartosc z listy
4) Wyczysc zawartosc listy
5) Znajdz element w liscie, ktory poda uzytkownik (wyswietl czy jest dodany do listy)

Uzytkownik raz dokonuje wyboru z listy
Wyswietl zawartosc listy po wykonani operacji przez uzytkownika
'''

country = ['Germany', 'France', 'Italy', 'Greece', 'Finland']
for i in range(2):
    print('Dodaj kolejny element do listy')
    country.append(input())

print(country)

wybor = [1, 2, 3, 4, 5]

print('Co zrealizowac: \n1) Wyswietl pierwsze 3 elementy listy \n2) Wyswietl elementy listy ktore dodalem (dane pobierz z listy) \n3) Wyswietl zawartosc z listy \n4) Wyczysc zawartosc listy \n5) Znajdz element w liscie, ktory poda uzytkownik (wyswietl czy jest dodany do listy)')
userWybor = input()

if userWybor == '1':
    print('1) ' + str(country[:3]))
elif userWybor == '2':
    print('2) ' + str(country[-2:]))
elif userWybor == '3':
    for con in country:
        print(con)
elif userWybor == '4':
    country.clear()
elif userWybor == '5':
    print("Podaj element ktory znalezc")
    findInList = input()
    #country.find(findInList)


print(country)
