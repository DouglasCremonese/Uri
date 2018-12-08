# Exercício 1041 Uri Online Judge
# Programador: Douglas Garcia Cremonese
x, y = map(float, input().strip().split(" "))
if x > 0 and y > 0:
    print('Q1')
elif x < 0 and (y > 0):
    print('Q2')
elif x > 0 and (y < 0):
    print('Q4')
elif x < 0 and y < 0:
    print('Q3')
elif x == 0 and (y != 0):
    print('Eixo Y')
elif y == 0 and (x != 0):
    print('Eixo X')
else:
    print('Origem')