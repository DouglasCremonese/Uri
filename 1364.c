#include <stdio.h>
#include <string.h>

int main()
{
    while(1){ 	// inicia o laço com valor 1 (True)
        char line[82], emoticons[100][17], *ptr;
        int N, M, index[100], count = 0;
        int i, j, k;
        
        scanf("%d %d", &N, &M); // ler quantidade de emotiocons e quantidade de frases
        getchar();				// limpar buffer
        
        if (!N && !M)break; // se N e M forem igual a zero, sair do laço

        for (i = 0; i < N; ++i) {
            gets(emoticons[i]);		// ler emoticon de no máximo 15 caracteres
        }

        for (i = 0; i < M; ++i) {
            fgets(line, 82, stdin); // lê a linha de até 80 caracteres

            memset(index, 0, sizeof(index)); // preenche index com 0
            for (ptr = line; *ptr != '\n'; ++ptr) { // teste para cada caracter da linha
                for (j = 0; j < N; ++j) {					// teste para cada emoticon digitado
                    if (*ptr == emoticons[j][index[j]]) ++index[j]; // se o ponteiro for igual a uma parte do emoticon, index é incrementado em 1
            		else index[j] = (*ptr == emoticons[j][0]);	// se não, index na posição atual recebe a posição do primeiro caracter do emoticon atual
                    
                    if (index[j] == strlen(emoticons[j])) { // se o index for do tamanho do emoticon atual
                        *ptr = ' ';		// o final do emoticon é substituido por espaço
                        ++count;		// o contador de mudanças é incrementado
                        memset(index, 0, sizeof(index));	// index é resetado
                    }
                }
            }
        }

        printf("%d\n", count);	// mostra o contador de mudanças
    }

    return 0;
}