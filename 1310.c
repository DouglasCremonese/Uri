/* 
Exercício 1310 Uri Online Judge: Lucro
Programador: Douglas Garcia Cremonese
Objetivo: Imprimir em tela o lucro do dono do circo, se houver
*/
#include <stdio.h>
void calcLucro(int *receita, int n);	// função calcular lucro

int main(){
	int i, n, custoDia;					// n = número de dias; custoDia = custo por apresentação
	while(scanf("%d",&n)!=EOF){			// enquanto não foi fim de arquivo
		int receita[51];				// vetor para receita de cada dia
		scanf("%d", &custoDia);			
		for(i = 0; i < n; i++){
			scanf("%d", &receita[i]);	// lê e calcula o lucro ou prejuizo de cada dia
			receita[i]-=custoDia;
		}
		getchar();						// limpar buffer
		calcLucro(receita, n);			// chamada da rotina calcLucro()
	}
	return 0;							// finaliza programa
}

// rotina para caluclar o lucro
// entrada: receita de todos os dias; número total de dias;
// saída: lucro do período determinado
void calcLucro(int *receita, int n){
	int i, lucro = 0, lucroDia = 0;
	for(i = 0; i < n ;i++){
		lucroDia += receita[i]; 			// lucroDia recebe ele mesmo junto da receita do dia atual
		if(lucroDia < 0) lucroDia = 0;		// se for negativo, permanece em zero
		if(lucro < lucroDia) lucro = lucroDia;	// se for maior que o lucro total, atualiza o lucro total
	}
	printf("%d\n", lucro); // print lucro total
}