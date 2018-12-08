# Exercício 1018 Uri Online Judge
# Douglas Garcia Cremonese
valor = int(input())
print(valor)
x = 0
while valor >= 100:
    valor -= 100
    x += 1
print('{} nota(s) de R$ 100,00'.format(x))
x = 0
while valor >= 50:
    valor -= 50
    x += 1
print('{} nota(s) de R$ 50,00'.format(x))
x = 0
while valor >= 20:
    valor -= 20
    x += 1
print('{} nota(s) de R$ 20,00'.format(x))
x = 0
while valor >= 10:
    valor -= 10
    x += 1
print('{} nota(s) de R$ 10,00'.format(x))
x = 0
while valor >= 5:
    valor -= 5
    x += 1
print('{} nota(s) de R$ 5,00'.format(x))
x = 0
while valor >= 2:
    valor -= 2
    x += 1
print('{} nota(s) de R$ 2,00'.format(x))
x = 0
while valor >= 1:
    valor -= 1
    x += 1
print('{} nota(s) de R$ 1,00'.format(x))