# Exercício 1013 Uri Online Judge
# Douglas Garcia Cremonese
A, B, C = map(float, input().strip().split(" "))
maiorAB = ((A+B+abs(A-B))/2)
maiorABC = ((maiorAB+C+abs(maiorAB - C))/2)
print('{} eh o maior'.format(int(maiorABC)))