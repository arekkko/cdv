# utworz instrukcje warunkowa, w ktorej user podaje z klawiatury liczbe
# jesli poda 10 to wyswietla prawidlowa wartosc, a w przeciwnym razie
# wyswietl tekst error

#number=int(input())

'''
while True:
    try:
        number = int(input("Podaj wartosc: "))
        break
    except ValueError:
        print("Nie podales liczby. Podaj liczbe")

if number == 10:
    print('Prawidlowa wartosc')
else:
    print('error')

y=False

if y:
    print("prawda")
else:
    print("Falsz")

'''
'''
    uzytkownik podaje wartosci trzech zmiennych x, y, z
    wyswietla, ktora z tych trzech wartosci bedzie najwieksza
    wykorzystaj instrukcje warunkowe
'''


print("Podaj wartosci zmiennych")
a=int(input())
b=int(input())
c=int(input())

if(a>b):
    if(a>c):
        max = a
    else:
        max = c
else:
    if(b>c):
        max = b
    else:
        max =c

#if x>= y and x >= z:

print(f'Najwieksza wartoscia jest: {max}')
