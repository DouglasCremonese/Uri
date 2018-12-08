'''
Exercício 1265 Uri Online Judge: DJ da Computação
Programador: Douglas Garcia Cremonese
Objetivo: Imprimir em tela o nome das músicas escolhidas
'''

# FUNÇÕES


def chooseSong(chosenlist, n):  # Função que encontra o índice da música escolhida
    if chosenlist < n:          # se a música escolhida for menor que o número total de músicas
        return chosenlist       # retorna o índice da música
    tamPalavra = int(1)         # tamanho da palavra inicia em 1
    tamGrupo = n                # tamanho do grupo inicia em N
    while chosenlist >= tamGrupo * tamPalavra:  # enquanto a música escolhida for maior ou igual ao produto do tamanho do grupo e tamanho da palavra para encontrar
# o grupo em que a música se encontra
        chosenlist -= tamGrupo * tamPalavra     # música é decrementada em relação ao produto do tGrupo e tPalavra
        tamGrupo *= n                           # tGrupo é multiplcado por N
        tamPalavra += 1                         # tPalavra recebe +1 (para seguir a ordem lexicográfica)
    # fim while
    tamGrupo *= tamPalavra          # defindo o grupo em que a música procurada se encontra
    x = int(0)                      # declarando condição de parada ao encontrar índice
    grupo = int(0)                  # declarando variavel que armazenará índice
    while chosenlist != 0:          # enquanto a música alvo for diferente de 0 (enquanto índice não for encontrado)
        try:
            tamGrupo /= n               # testando grupo
            grupo = chosenlist / tamGrupo  # armazenando possível índice
            chosenlist = chosenlist % tamGrupo  # música recebe módulo do tGrupo
        except ZeroDivisionError:
            break
        if chosenlist % tamPalavra == x:  # encontrou o índice
            break
        x += 1    # testa próxima música
    return grupo  # retorna índice da música


# MAIN
while(True):  # Repete enquanto N e Q forem diferentes de zero
    playlist = list()  # inicia lista de músicas
    chosenlist = list()
    N, Q = map(int, input().strip().split(" "))  # Lê N (nmr de músicas) e Q (nmr de escolhas)
    if N == 0 and Q == 0:  # condição de saída do laço
        break
    else:
        playlist = input().split(" ")    # Armazena cada música em uma lista
        chosenlist = input().split(" ")  # Armazena cada escolha em uma lista
        for j in range(0, Q):
            index = int(chooseSong(int(chosenlist[j]) - 1, N))  # chamada da função que retorna o índice da música escolhida
            print(playlist[index])  # mostra a música
        print()  # linha em branco
