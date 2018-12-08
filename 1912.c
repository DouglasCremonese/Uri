/* 
Exercício 1912 Uri Online Judge: Ajude seu Madruga
Programador: Douglas Garcia Cremonese
Objetivo: Imprimir em tela a altura restante após o corte
*/

#include <stdio.h>
#include <string.h> 						// memset()

#define EPS 1e-5
#define max(x, y) (((x) > (y)) ? (x) : (y)) // retorna o valor máximo entre dois valores

void cortar(int a, int n, int *tiras);  	// função para cortar as tiras de papel

int main(){ 								// main
int a, n, i, tiras[100000], sumArea;			// a = área a ser cortada; n = número de tiras; i = contador do for; sumArea = área total das tiras
	while(1){ 								// while enquanto verdadeiro
		sumArea = 0;						// soma da área das tiras = 0
		scanf("%d %d", &n, &a); 			// lendo o número de tiras e a área que será cortada
		if(n == 0 && a ==0) return 0; 		// condição de saída
		for(i = 0; i < n; i++){			
			scanf("%d", &tiras[i]);			// lê o valor de todas as tiras
			sumArea += tiras[i];			// soma a área total das tiras
		}
		if(sumArea < a) puts("-.-");		// se área total for menor que a área a ser cortada = -.-
		else if(sumArea == a) puts (":D");  // se área total for igual a área a ser cortada = :D
		else{ 								// se não, cortar as tiras 
			cortar(a, n, tiras);
		}
		memset(tiras, 0, sizeof tiras); 	// limpa o vetor de tiras
	} 										// fim while
}											// fim main


// função cortar
// entrada: área a ser cortada, número total de tiras, tamanho das tiras
// saída..: altura restante após o corte
void cortar(int a, int n, int *tiras){
	int j;
	float inicio = 0, fim = 1e10;							// fim = 1000000000
	while(1){                               				// repete até condição de parada (chuta um valor cada vez mais próximo da altura restante)
		float meio = (inicio + fim) / 2, total = 0.0;									    // meio de inicio e fim e o total da área cortada = altura chutada
		for(j = 0; j < n; j++){
			total += max(0, tiras[j] - meio);               // aproxima o total ao tamanho da área
		}
		if((total > a && total < a + EPS) || (total < a && total > a - EPS)){ // ponto de parada se tamanho se aproximou o suficiente	
			inicio = meio;
			break;
		}
		if(total > a) inicio = meio;						// se o tamanho total for maior que a área a ser cortada, inicio recebe meio
		else fim = meio;									// se o tamanho total for menor que a área a ser cortada, fim recebe meio
	}
	printf("%.4f\n", inicio);							// mostra o valor mais próximo da altura restante
}