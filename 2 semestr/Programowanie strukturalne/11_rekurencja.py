# poregowanie
def pow(podstawa, wykladnik):
    if wykladnik == 0:
        return 1
    else:
        return podstawa * pow(podstawa, wykladnik-1)

'''
    pow(3, 3) --> 27
    pow(3, 2) --> 9
    pow(3, 1) --> 3
    pow(3, 0) --> 1
'''

print(pow(3, 3))

# ciag fib
