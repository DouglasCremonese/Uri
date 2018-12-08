#include <stdio.h>
int main() {
	int cod, a=0,g=0, d=0;
	do{
		scanf("%d",&cod);
		switch(cod){
			case 1:
				a = a + 1;
				break;
			case 2:
				g = g + 1;
				break;
			case 3:
				d = d + 1;
				break;			
		}
	}while(cod != 4);
printf("MUITO OBRIGADO\nAlcool: %d\nGasolina: %d\nDiesel: %d\n",a,g,d);
    return 0;
}