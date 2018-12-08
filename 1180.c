#include <stdio.h>
 
int main() {
 
int n, i, menor, posicao;
	scanf("%d",&n);
	int x[n];

	for(i = 0; i < n; i++){
		scanf("%d",&x[i]);
		if(x[i] < menor || i == 0){
			menor = x[i];
			posicao = i;
		}	
	}
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", posicao);
 
    return 0;
}