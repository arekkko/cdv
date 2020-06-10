surname='Kowalski';
print(surname[0]); #K
print(surname[0:3]); #Kow
print(surname[-2]); #k
print(surname[-2:]); #ki
print(surname[:-2]); #Kowals
print(surname[:-2:2]); #Kwl


text = "Anna, paWeL, Jan";
print(type(text));

tab=text.split(',');
print(type(tab)) #lista

name1 = tab[1]
print(name1)

print('Pierwsze imie: ' + name1)

nameUpper = name1.upper()
print('Pierwsze imie: ' + nameUpper)


nameLower = name1.lower()
print('Pierwsze imie: ' + nameLower)

#Sprawdzenie zawartosci
#surname=input() #pobranie danych od usera
#content=surname.isalpha()
#print(content)

#biale znaki
print("Jan \nKowalski")

text1="Jan\n"
text2="Nowak"
text1 = text1.rstrip()
print(text1+" "+text2)
print(f'{text1} {text2}')

text = "%s%s" % ("PHP", "Python")

text = "{0}, {1}".format("PHP", "Python")


#help(text.replace)

new=text.replace("PHP", "C#")
print(new)

print('test1', end='')
print('test2')

year=2020
month='june'
day=10

print(day, month, year, sep='-')
print(day, month, year, sep='/')
