#include <stdio.h>
#include <string.h>
int main() {
	int i,n;
	char texto[1000];
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++){
		int j,div,b;
		gets(texto);
		div = strlen(texto)/2;
		for(j = 0; texto[j] != '\0'; j++){
			if((texto[j] >= 'A' && texto[j] <= 'Z' )|| (texto[j] >= 'a' && texto[j] <= 'z'))
				texto[j] += 3;
		}
		for(j = 0, b = strlen(texto) - 1;  j < b; j++,b--){	
			char aux = texto[j];
			texto[j] = texto[b];
			texto[b] = aux;
		}
		for(j = div; j < strlen(texto); j++){
				texto[j] -= 1;				
		}
		printf("%s\n",texto);
	}
 
    return 0;
}