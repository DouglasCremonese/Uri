#include <stdlib.h>
#include <stdio.h>
#include <string.h>

typedef struct{
	char name[30];
	char answer[4];	
}FRIEND;
typedef struct LIST{
	struct LIST* next;
	FRIEND data; 
}LISTLINK; 

int add_friend(LISTLINK* *l);
void order_list(LISTLINK* *l);
void print_list(LISTLINK* l);
void select_friend(LISTLINK* *l, char *newFriend);

main(){
	LISTLINK* l;
	l = NULL;
	char winner[30];
	int code=1;
	while(code == 1){	
		code = add_friend(&l);
	}
	select_friend(&l,winner);
	order_list(&l);
	print_list(l);
	printf("\nAmigo do Habay:\n");
	printf("%s\n",winner);
}

int add_friend(LISTLINK* *l){
	LISTLINK* node = (LISTLINK*)malloc(sizeof(LISTLINK));
	char friendName[30], friendAnswer[4];
	
	scanf("%s", &friendName);
	
	if(strcmp(friendName,"FIM") == 0){
		return 0;
	}else{
		scanf("%s", &friendAnswer);
		strcpy(node->data.name,friendName);
		strcpy(node->data.answer,friendAnswer);
		
		if(*l == NULL){
			*l = node;
			node->next = NULL;
		}
		else{
			int test=0;
			LISTLINK *before,*p = *l;
			while(p != NULL){
				if(strcmp(p->data.answer,"NO")==0 && p->data.name==node->data.name)test=1;
				before = p;
				p = p->next;
			}
			if(!test){
				before->next = node;
				node->next=NULL;
			}
		}
		return 1;
	}
}
void order_list(LISTLINK* *l){
	LISTLINK *q, *p = *l;
	FRIEND aux;
	while(p->next != NULL){
		q = p->next;
		while(q != NULL){
			if(strcmp(p->data.name,q->data.name) > 0){
				aux = p->data;
				p->data = q->data;
				q->data = aux; 
			}
			if(strcmp(p->data.answer,q->data.answer) < 0){
				aux = p->data;
				p->data = q->data;
				q->data = aux; 
			}
			q = q->next;
		}
		p = p->next;
	}
	
}
void print_list(LISTLINK* l){
	LISTLINK* q ,*p = l;
	while(p!=NULL){
		q = l;
		int repeated = 0;
		while(q != p){
			if(strcmp(p->data.name,q->data.name) == 0)repeated = 1;
			q=q->next;
		}
		if(repeated == 0)printf("%s\n",p->data.name);
		
		p=p->next;
	}
}
void select_friend(LISTLINK* *l,char *newFriend){
	LISTLINK* p = *l;
	int numbLetters = 0;
	char winner[30];
	while(p!=NULL){
		if(strlen(p->data.name) > numbLetters && strcmp(p->data.answer,"YES")==0){
			numbLetters = strlen(p->data.name);
			strcpy(winner, p->data.name);
		}
		p=p->next;
	}
	strcpy(newFriend,winner);
}