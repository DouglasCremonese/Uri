# Exercício 1015 Uri Online Judge
# Douglas Garcia Cremonese
from math import sqrt
x1, y1 = map(float, input().strip().split(" "))
x2, y2 = map(float, input().strip().split(" "))
d = sqrt((x2 - x1)**2 + (y2 - y1)**2)
print('{:.4f}'.format(d))