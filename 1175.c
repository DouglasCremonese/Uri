#include <stdlib.h>
#include <stdio.h>

main(){
	int i,N[20];
	
	for(i = 0; i < 20; i++){
		scanf("%d",&N[i]);
	}
	
	for(i = 19; i >= 0; i--){
		printf("N[%d] = %d\n",19-i,N[i]);
	}
}