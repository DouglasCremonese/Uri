# Exercício 1036 Uri Online Judge
# Douglas Garcia Cremonese
from math import sqrt
a, b, c = map(float, input().strip().split(" "))
delta = (b**2) - 4 * a * c
if delta >= 0:
    try:
        r1 = ((-b) + sqrt(delta))/(2 * a)
        r2 = ((-b) - sqrt(delta))/(2 * a)
        print('R1 = {:.5f}'.format(r1))
        print('R2 = {:.5f}'.format(r2))
    except ZeroDivisionError:
        print('Impossivel calcular')
else:
    print('Impossivel calcular')