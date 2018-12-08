# Exercício 1010 Uri Online Judge
# Douglas Garcia Cremonese
cdPeca, qtdPeca, valorPeca = map(float, input().strip().split(" "))
cdPeca2, qtdPeca2, valorPeca2 = map(float, input().strip().split(" "))
total = qtdPeca * valorPeca + qtdPeca2 * valorPeca2
print('VALOR A PAGAR: R$ {:.2f}'.format(total))