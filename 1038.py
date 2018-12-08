# Exercício 1038 Uri Online Judge
# Douglas Garcia Cremonese
a, b = map(int, input().strip().split(" "))
total = 0
if a == 1:
    total = 4
elif a == 2:
    total = 4.5
elif a == 3:
    total = 5
elif a == 4:
    total = 2
elif a == 5:
    total = 1.5
total *= b
print('Total: R$ {:.2f}'.format(total))