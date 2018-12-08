#include <stdio.h>
#include <string.h>

main(){
	int n, i, j , f = 0;
	char frase[100];
	char oculta[100];
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++){
		gets(frase);
		for(j = 0; frase[j] != '\0';j++){
			if((frase[j] != ' ' && frase[j-1] == ' ')||(j == 0 && frase[j] != ' ')){
				oculta[f] = frase[j];
				f++;
			}
		}
		printf("%s\n",oculta);
		memset(frase, 0, sizeof(frase));
		memset(oculta, 0, sizeof(oculta));
		f = 0;
	}
}