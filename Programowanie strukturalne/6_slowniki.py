dict = {
    'key1':'value1',
    'key2':'value2',
}

pracownik = {
    'imie':'Jan',
    'nazwisko':'Kowalski',
    'miasto':'Poznan',
    'wiek':29,
    'imionaDzieci': ['Janusz', 'Grazyna'],
    'imionaRodzicow': ['Januszowa', 'Grazyn']
}

print('Dziecko 1: ' + str(pracownik['imionaDzieci'][0]))
print('Dziecko 2: ' + str(pracownik['imionaDzieci'][1]))

pracownik['height'] = 180
pracownik['wight'] = 80
print(pracownik)

key = 'height'

if key in pracownik:
    del pracownik[key]

print(pracownik)
print(pracownik.values())
print(pracownik.items())
print(pracownik.keys())

for key, value in pracownik.items():
    print(f'{key} - {value}')

print(pracownik.get('height', 'Brak danych'))

pracownik['height'] = 175

print(pracownik.get('height', 'Brak danych'))
