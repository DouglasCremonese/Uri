#include <stdio.h>
#include <string.h>

main(){
	int n, test,i,j, cont=0;
	char pomekon[1000][1000];
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++){
		gets(pomekon[i]);
		test = 1;
		for(j = 0; j < i;j++){
			if(strcmp(pomekon[j],pomekon[i]) == 0){
				test = 0;
				break;
			}
		}
		if(test == 1)cont++;
	}
	printf("Falta(m) %d pomekon(s).\n", 151 - cont);
}