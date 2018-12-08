#include <stdio.h>
 
int main() {
 
	int i,j,start = 10,end = 1;
	float m[12][12], soma = 0;
	char o;
	scanf("%c",&o);
	for(i = 0; i < 12; i++){
		for(j = 0; j < 12;j++){
			scanf("%f",&m[i][j]);	
		}
	}
	for(i = 11; i >=7; i--){
		
		for(j = start; j >= end;j--){			
			soma = soma + m[i][j];			
		}
		start--;
		end++;
	}	
	if(o=='S'){
		printf("%.1f\n", soma);
	}
	else if(o == 'M'){
		printf("%.1f\n", soma/30);
	}
 
    return 0;
}