# Exercício 1040 Uri Online Judge
# Programador: Douglas Garcia Cremonese
n1, n2, n3, n4 = map(float, input().strip().split(" "))
media = ((n1 * 2) + (n2 * 3) + (n3 * 4) + n4) / 10.0
print('Media: {:.1f}'.format(float(media)))
if media >= 7.0:
    print('Aluno aprovado.')
elif media < 5.0:
    print('Aluno reprovado.')
elif (media <= 6.9) and (media >= 5.0):
    exame = float(input())
    media = (media + exame) / 2.0
    print('Aluno em exame.')
    print('Nota do exame: {:.1f}'.format(exame))
    if media >= 5.0:
        print('Aluno aprovado.')
    elif media <= 4.9:
        print('Aluno reprovado.')
    print('Media final: {:.1f}'.format(float(media)))