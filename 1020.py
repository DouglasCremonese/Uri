# Exercício 1020 Uri Online Judge
# Douglas Garcia Cremonese
valor = int(input())
a = m = 0
if valor >= 365:
    a = valor//365
    valor = valor - 365 * a
if valor >= 30:
    m = valor//30
    valor = valor - 30 * m
d = valor
print('{} ano(s)'.format(a))
print('{} mes(es)'.format(m))
print('{} dia(s)'.format(d))