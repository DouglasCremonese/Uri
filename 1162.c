#include <stdlib.h>
#include <stdio.h>

typedef struct LISTA{
	struct LISTA *prox;
	struct LISTA *ante;
	int L;
}LISTA;

void insereFim(LISTA* *list, int tamanho);
void trocaVagao(LISTA* *list, int tamanho);
void iniciaLista(LISTA* *list);

int main(void){
	LISTA* list;
	
	int N, i;
	
	scanf("%d", &N);
	for(i = 0;i < N; i ++){
		iniciaLista(&list);
		int tamanho, j;
		scanf("%d",&tamanho);
		if(tamanho >= 0 && tamanho <=50){
			for(j = 0; j < tamanho; j++){
				insereFim(&list, tamanho);
			}
			trocaVagao(&list, tamanho);
		}
	}
}

void iniciaLista(LISTA* *list){
	*list = NULL;
}

void insereFim(LISTA* *list, int tamanho){
	LISTA* no = (LISTA*)malloc(sizeof(LISTA));
	int aux;
	scanf("%d",&aux);
	
	if(aux >= 1 && aux <= tamanho){
	no->L = aux;
	if(*list==NULL){
		*list = no;
		no->prox=no;
		no->ante=no;		
	}
	else{
		no->prox = *list;
		no->ante = (*list)->ante;
		(*list)->ante->prox=no;
		(*list)->ante = no;
	}
	}
}
void trocaVagao(LISTA* *list, int tamanho){
	LISTA* p = *list;
	LISTA* q; 
	int cont=0;
	while(p->prox != *list){
		q = p->prox;
		do{
			if(p->L > q->L){
				int aux;
				aux = p->L;
				p->L = q->L;
				q->L = aux;	
				cont++;
			}
			q = q->prox;
			
		}while(q!= *list);
		p = p->prox;
	}
	
printf("Optimal train swapping takes %d swaps.\n",cont);
}
