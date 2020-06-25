def show():
    print('Funkcja show')

show()

def iloraz(a, b):
    return a / b

x = iloraz(8, 3)
print(x)
print(type(x))

def iloraz1(a, b):
    return a // b

y = iloraz1(8, 3)
print(y)
print(type(y))

'''
Uzytkownik podaje z klawiatury:
marka, model, pojemnosc, predkoscMax
utworz funckej, ktora pobierze dane od uzytkownika i przypisze do slownika

utworz droga funckje wysiwetlajaca dane w formacie:
Marka:
Model:
Pojemnosc:
Predkosc maksymalna:
'''

car = {
    'marka': '',
    'model': '',
    'pojemnosc': '',
    'predkoscMax': ''
}

for key, value in car.items():
    print('Podaj ' + key)
    car[key]= input()

def showCar(car):
    for key, value in car.items():
        print(key + ': ' + value)

showCar(car)
