# pi
import math

pi=math.pi
print(pi)

# pierwiastek
x=math.sqrt(9)
print(x)
print(type(x))

print(math.floor(2.9999)) # 2
print(math.ceil(2.9999)) # 3

print(2 ** 10)
print(math.pow(2,10))

# modul random
import random as r

rand = r.random()
print(rand)

randOfList=r.choice([1, 2, 3, 4])
print(randOfList)

print(r.randrange(10, 20)) # 10 - 20
print(r.randrange(10))  # 0 - 10
print(r.randrange(7, 13, 2))  # 0 - 10

###################################################

#egzamin - roznice miedzy lista a tuple
numList = [10, 20, 30, 40, 45]
numTuple = (1, 2, 3, 4, 10) #tupe sa szybsze od listy jednak ich nie mozna modyfikowac
text="Janusz"

print("Lista: " + str(r.choice(numList)))
print("Tupe: " + str(r.choice(numTuple)))
print("Tekst: " + str(r.choice(text)))

###################################################

print(numList)
r.shuffle(numList) #mieszanie wartosci w liscie
print(numList)
