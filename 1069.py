# URI ONLINE JUDGE 1069

def exclui_areia(mina): # função que exclui todas as areias '.'
    return mina.replace('.','') 
def conta_diamante(diamante_bruto): # função que conta a quantidade de diamantes
    cont = 0    # contador
    while True: # enquanto houver diamantes
        if '<>' in diamante_bruto:  # se encontrar um diamante ou mais
            qtd_total = len(diamante_bruto) # salva o tamanho da string 'diamante_bruto'
            diamante_bruto = diamante_bruto.replace('<>','') # remove todos os diamantes encontrados
            for j in range(0,qtd_total - len(diamante_bruto),2): # conta quantos diamantes foram removidos a partir da diferença de tamanho da string atual com a anterior
                cont+=1 # cont ++
        else:   # se não encontrar diamantes
            print(cont) # mostra o total de diamantes
            break   # sai do laço
# main
n = int(input()) # lê a quantidade de casos de teste
for i in range(n): # laço para todos os casos
    mina = input() # lê a string referente a mina
    diamante_bruto = exclui_areia(mina) # chamada da função para excluir as areias
    conta_diamante(diamante_bruto) # chamada da função para contar os diamantes