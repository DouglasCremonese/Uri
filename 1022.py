# Exercício 1022 Uri Online Judge
# Douglas Garcia Cremonese
import fractions


def soma(n1,d1,n2,d2):
    f = fractions.Fraction((n1 * d2 + n2 * d1), (d1 * d2))
    if f.denominator == 1:
        print('{}/{} = {}/1'.format((n1*d2+n2*d1), (d1*d2), f))
    else:
        print('{}/{} = {}'.format((n1 * d2 + n2 * d1), (d1 * d2), f))


def subtracao(n1,d1,n2,d2):
    f = fractions.Fraction((n1*d2-n2*d1), (d1*d2))
    if f.denominator == 1:
        print('{}/{} = {}/1'.format((n1 * d2 - n2 * d1), (d1 * d2), f))
    else:
        print('{}/{} = {}'.format((n1*d2-n2*d1), (d1 * d2), f))


def multiplicacao(n1, d1, n2, d2):
    f = fractions.Fraction((n1*n2), (d1 * d2))
    if f.denominator == 1:
        print('{}/{} = {}/1'.format((n1*n2), (d1 * d2), f))
    else:
        print('{}/{} = {}'.format((n1 * n2), (d1 * d2), f))


def divisao(n1, d1, n2, d2):
    f = fractions.Fraction((n1*d2), (n2*d1))
    if f.denominator == 1:
        print('{}/{} = {}/1'.format((n1*d2), (n2*d1), f))
    else:
        print('{}/{} = {}'.format((n1 * d2), (n2 * d1), f))


i = int(input())
for x in range(i):
    n1, f1, d1, operador, n2, f2, d2 = map(str, input().strip().split(" "))
    if operador == '+':
        soma(int(n1), int(d1), int(n2), int(d2))
    elif operador == '-':
        subtracao(int(n1), int(d1), int(n2), int(d2))
    elif operador == '*':
        multiplicacao(int(n1), int(d1), int(n2), int(d2))
    elif operador == '/':
        divisao(int(n1), int(d1), int(n2), int(d2))
