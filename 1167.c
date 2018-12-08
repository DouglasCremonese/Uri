#include <stdlib.h>
#include <stdio.h>

typedef struct{
	char nome[30];
	int token;
}PARTICIPANTE;

typedef struct LISTA{
	PARTICIPANTE dados;
	struct LISTA* prox;
	struct LISTA* ante;
}LISTACIR;

void criar_lista(LISTACIR* *l);
void inserir(LISTACIR* *l);
void jogar(LISTACIR* *l);

main(){
	LISTACIR* l;
	int numParticipantes;
	int i;
	do{
		criar_lista(&l);
		scanf("%d",&numParticipantes);
		if(numParticipantes > 0 && numParticipantes <=100){
			for(i = 0;i < numParticipantes;i++){
				inserir(&l);
			}
			jogar(&l);
		}
	}while(numParticipantes);
}
void criar_lista(LISTACIR* *l){
	*l=NULL;
}
void inserir(LISTACIR* *l){
	LISTACIR* no = (LISTACIR*)malloc(sizeof(LISTACIR));
	LISTACIR* lista = *l;
	getchar();
	do{
	scanf("%s %d",&no->dados.nome, &no->dados.token);
	}while(no->dados.token<=0 && no->dados.token >500);
	if(*l == NULL){
		*l= no;
		no->ante = no;
		no->prox = no; 
	}
	else{
		no->prox = *l;
		no->ante = (*l)->ante;
		lista->ante->prox = no;
		lista->ante = no;	
	}
}

void jogar(LISTACIR* *l){
	LISTACIR* lista = *l;
	int i, cont=0,j;
	int anterior,testador = lista->dados.token;
	
	do{
		cont++;
		lista=lista->prox;
		
	}while(lista != *l);

	for(j = 0; j<cont; j++){
	if(testador % 2 == 0){ //antehorario
		for(i = 0;i <testador;i++){
			lista = lista->ante;
		}
	}
	else if(testador % 2){ //horario
		for(i = 0;i < testador;i++){
			lista = lista->prox;
		}
	}
	lista->ante->prox = lista->prox;
	lista->prox->ante = lista->ante;
	anterior = testador;
	testador = lista->dados.token;
	}
	printf("Vencedor(a): %s\n",lista->dados.nome);
}