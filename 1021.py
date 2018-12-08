# Exercício 1021 Uri Online Judge
# Douglas Garcia Cremonese
valor = float(input())
x = 0
print('NOTAS:')
while valor >= 100:
    valor -= 100
    x += 1
print('{} nota(s) de R$ 100.00'.format(x))
x = 0
while valor >= 50:
    valor -= 50
    x += 1
print('{} nota(s) de R$ 50.00'.format(x))
x = 0
while valor >= 20:
    valor -= 20
    x += 1
print('{} nota(s) de R$ 20.00'.format(x))
x = 0
while valor >= 10:
    valor -= 10
    x += 1
print('{} nota(s) de R$ 10.00'.format(x))
x = 0
while valor >= 5:
    valor -= 5
    x += 1
print('{} nota(s) de R$ 5.00'.format(x))
x = 0
while valor >= 2:
    valor -= 2
    x += 1
print('{} nota(s) de R$ 2.00'.format(x))
x = 0
print('MOEDAS:')
while valor > 0.999:
    valor -= 1
    x += 1
print('{} moeda(s) de R$ 1.00'.format(x))
x = 0
while valor > 0.499:
    valor -= 0.5
    x += 1
print('{} moeda(s) de R$ 0.50'.format(x))
x = 0
while valor > 0.249:
    valor -= 0.25
    x += 1
print('{} moeda(s) de R$ 0.25'.format(x))
x = 0
while valor > 0.099:
    valor -= 0.10
    x += 1
print('{} moeda(s) de R$ 0.10'.format(x))
x = 0
while valor > 0.049:
    valor -= 0.05
    x += 1
print('{} moeda(s) de R$ 0.05'.format(x))
x = 0
while valor > 0.001:
    valor -= 0.01
    x += 1
print('{} moeda(s) de R$ 0.01'.format(x))