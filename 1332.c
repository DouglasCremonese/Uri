#include <stdio.h>
#include <string.h>
int main() {
	int i, n;
	char num[6];
	scanf("%d",&n);
	getchar();
	for(i = 0; i < n; i++){
		gets(num);
		if (strlen(num) == 5){
			printf("3\n");
		}
		else{
			if((num[0] == 'o' && num[1] == 'n') || (num[0] == 'o' && num[2] == 'e') || (num[1] == 'n' && num[2] == 'e')){
				printf("1\n");
			}
			else{
				printf("2\n");
			}
			
		}
	}
    return 0;
}