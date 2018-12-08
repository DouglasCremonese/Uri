#include <stdlib.h>
#include <stdio.h>
#include <string.h>
typedef struct {
		char nome[30];
        char cor[30];
        char tamanho[2]; 
} REG_CAMISETA;

typedef struct LISTA{
		REG_CAMISETA info;
        struct LISTA *prox; 
} LISTAENC;

void imprime( LISTAENC* *camiseta );
void inclui ( LISTAENC* *camiseta );
void ordena ( LISTAENC* *camiseta );
main(){
	LISTAENC *camiseta;
	
	int i,j,cont=0;
	do{
		camiseta = NULL;
		scanf("%d", &i);
		if(cont > 0 && i>0)
		puts("");
		if(i > 0){
			for(j =0; j < i; j++){
				inclui(&camiseta);
			}
			
			ordena (&camiseta);
			imprime(&camiseta);
			
		}
		cont++;
	}while(i!=0);	
}
void imprime( LISTAENC* *camiseta ){
	LISTAENC* p = *camiseta;
    while(p != NULL){	
    	printf("%s %s %s\n",p->info.cor,p->info.tamanho,p->info.nome);
        p=p->prox;
    }
}
void inclui (LISTAENC* *camiseta){
	LISTAENC* no = (LISTAENC*)malloc(sizeof(LISTAENC));
		getchar();
		gets(no->info.nome);
		scanf("%s %s", no->info.cor, no->info.tamanho);
		if(*camiseta == NULL){	
			*camiseta = no;
			no->prox = NULL;	
		}
		else{
			LISTAENC* aux = *camiseta;
			LISTAENC* anterior;
			while(aux != NULL){
				anterior = aux;
    			aux=aux->prox;			
		}
		anterior->prox = no;
		no->prox = NULL;
		}
}
void ordena (LISTAENC* *camiseta){
	LISTAENC* q,* p = *camiseta;
	REG_CAMISETA aux;

	while(p->prox != NULL){
		q = p->prox;
		while(q != NULL){
			if(strcmp(p->info.nome,q->info.nome)>0){	
				aux = p->info;
       		 	p->info = q->info;
        		q->info = aux;
			}
			if(strcmp(p->info.tamanho,q->info.tamanho)<0){	
				aux = p->info;
       		 	p->info = q->info;
        		q->info = aux;
			}
			if(strcmp(p->info.cor,q->info.cor)>0){	
				aux = p->info;
       			p->info = q->info;
        		q->info = aux;
			}
			q = q->prox;
		}
		p = p->prox;
	}
}