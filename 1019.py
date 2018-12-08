# Exercício 1019 Uri Online Judge
# Douglas Garcia Cremonese
valor = int(input())
h = m = 0
if valor >= 3600:
    h = valor//60//60
    valor = valor - 3600 * h
if valor >= 60:
    m = valor//60
    valor = valor - 60 * m
s = valor
print('{}:{}:{}'.format(h, m, s))