# Exercício 1012 Uri Online Judge
# Douglas Garcia Cremonese
A, B, C = map(float, input().strip().split(" "))
pi = 3.14159
print('TRIANGULO: {:.3f}'.format(A * C / 2))
print('CIRCULO: {:.3f}'.format(pi * C**2))
print('TRAPEZIO: {:.3f}'.format((A + B)*C/2))
print('QUADRADO: {:.3f}'.format(B * B))
print('RETANGULO: {:.3f}'.format(A * B))