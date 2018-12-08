#include <stdlib.h>
#include <stdio.h>
main(){
	int X,i;	
	scanf("%d",&X);
	if(X > 0 && X <= 1000){
		for(i = 0; i <= X; i++){
		if(i%2 != 0)
			printf("%d\n",i);
		}
	}
}