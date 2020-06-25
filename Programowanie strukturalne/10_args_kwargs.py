# args
def sum(*args):
    result = 0
    for x in args:
        result += x
    return result

print(sum(1, 2, -10, 20, 17))

# kwargs
def dict(**kwargs):
    for name, value in kwargs.items():
        print(f'{name} - {value}')

dict(name1 = "Jan", name2 = "Anna")

'''
Uzytkownik podaje z klawiatury minimum trzy imiona
Wyswietl na ekranie dane w nastepujacy sposob:

name1: ...
name2: ...
name3: ...
Pozostale imiona: [...]
'''

def data(first, second, third, *others):
    print(f'Pierwszy {first}')
    print(f'Drugi {second}')
    print(f'Trzeci {third}')
    print(f'Pozostale {list(others)}')

data('Jan', 'Anna', 'Karol', 'Krystyna', "Tomasz")

# =========================================================

def show(first, second, third, **options):
    if options.get('action') == 'add':
        sum = first + second + third
        print(f'Suma wynosi: {sum} ')

    if options.get('element') == 'first':
        return first

x = show(2, 3, 4, element='first')
print(x)
