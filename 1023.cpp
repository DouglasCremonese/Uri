/* 
Exercício 1310 Uri Online Judge: Lucro
Programador: Douglas Garcia Cremonese
Objetivo: Imprimir em tela o lucro do dono do circo, se houver
*/
#include <stdio.h>
#include <stdlib.h>
//int somarVet(int i, int j, int *vm);
int somar(int* vm, int i, int a,int s, int v, int sv,int count);
int main(){
	int sv,soma,achou = 0, i, j, v, m, vm[100001]; // v = valor a ser pago; m = número de moedas; vm = valor de cada moeda
	char resposta = 'N';
	scanf("%d %d",&v,&m);
	for(i = 0; i < m; i++){
		sv = 0;
		scanf("%d",&vm[i]);
		if(vm[i] == v) achou = 1;
		if(vm[i] > v){
			m--;
			i--;
		}
		else if(achou == 0){
			for(j = 0; j <= i; j++){
				sv += vm[j];
			}
			if(sv == v) achou = 1;
			else if(i > 0) achou = somar(vm,i, i-1, vm[i], v, sv, 0);
		}
	}
	if(achou == 1) resposta = 'S';
	/*else{
		for(i = 0; i < m - 1; i ++){
			for(j = m; j > i; j--){
				soma = somarVet(i, j, vm);
				if(soma == v){
					resposta = 'S';
					break;
				}
				if(resposta == 'S') break;
			}
		}
	}*/
	printf("%c",resposta);
	return 0;
}

int somar(int* vm, int i, int a,int s, int v, int sv,int count){
	
	printf("Entrou na funcao Somar\n");
	int x, somaMoedas,retorno;
	printf("Valor de A: %d\n",a);
	printf("Valor de I: %d\n",i);
	printf("Valor de S: %d\n",s);
	printf("Valor de SV: %d\n",sv);
	for(x = a; x >= 0; x--){
		printf("Entrou no FOR da funcao Somar\n");
		somaMoedas = s + vm[x];
		printf("Soma Moedas: %d = %d + %d\n\n", somaMoedas, s, vm[x]);
		if(somaMoedas == sv) return 0;
		if(somaMoedas == v) return 1;
	}
	system("pause");
	if(a == 0 && s == sv - vm[0]){
		
		a = i-count;
		printf("entrou no IF(a == 0)\n");
		printf("count = %d\n\n",count);
		retorno = somar(vm,i, a-1, s+vm[i-count], v, sv, count);
	}
	else if(a == 0){
		count += 1;	
		s -= vm[i - count];
		a = i-count;
		retorno = somar(vm,i, a-1, s+vm[i-count+1], v, sv, count);
	}
	else{
		retorno = somar(vm,i, a-1, s, v, sv, count);
	} 

}

/*int somarVet(int i, int j, int *vm){
	int x, soma=0;
	for(x = i; x < j; x ++){
		soma += vm[x];
	}
	return soma;
}*/
