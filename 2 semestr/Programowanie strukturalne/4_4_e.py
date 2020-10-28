'''
    user podaje 3 wartosci z klawiatury
    dane zapisz w liscie
    pomieszaj je
    wyswietl losow jedna z wartosci i spytaj usera na ktorej pozycji w liscie sie znajduje
    jesli trafi wyswietl pozycje, wartosc i infomracje o prawidlowym trafieniu
    w przypadku bledu wyswietl pozycje, wartosc i infomracje o blednym trafieniu
'''
import random

print("Podaj 3 liczby")
listOfNumbers=[]

for x in range(3):
    listOfNumbers.append(int(input()))

random.shuffle(listOfNumbers);

randomNumber = random.choice(listOfNumbers)

print("Na ktorej pozycji w liscie znajduje sie wartosc: " + str(randomNumber) + " (wpisz 1, 2 lub 3)")

userSelectedNumber = int(input())

userSelectedNumber -= 1

if listOfNumbers[userSelectedNumber] == randomNumber:
    print("Pozycja: " + str(userSelectedNumber) + " wartosc: " + str(listOfNumbers[userSelectedNumber]) + " trafiles!")
else:
    print("Pozycja: " + str(listOfNumbers.index(randomNumber)+1) + " wartosc: " + str(listOfNumbers[listOfNumbers.index(randomNumber)]) + " nie trafiles!")
