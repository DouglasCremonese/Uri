# Exercício 1042 Uri Online Judge
# Programador: Douglas Garcia Cremonese
lista = list()
a, b, c = map(int, input().strip().split(" "))
lista.append(a)
lista.append(b)
lista.append(c)
lista.sort()
for i in range(3):
    print(lista[i])
print()
print(a)
print(b)
print(c)