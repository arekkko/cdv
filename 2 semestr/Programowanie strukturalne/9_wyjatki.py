# try except

def div(x, y):
    try:
        return x / y
    except ZeroDivisionError:
        return('Error, you try to dived by 0')

#print(div(4, 0))

'''
Uzytkownikowi podaje z klawiatury wartosc do momentu podania liczby calkowitej
'''

while True:
    try:
        print('Podaj wartosc: ')
        number = input()

        if(type(number) == 'int'):
            print('int')
    except ValueError:
        print('Error')
        break
