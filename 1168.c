#include <stdio.h>
#include <string.h>
 
int main() {
	int n, i, led = 0;
	char v[10000];
	scanf("%d", &n);
	getchar();
	for(i = 0;i < n;i++){
		int j;
		gets(v);
		for(j = 0; v[j] != '\0'; j++){
			if(v[j] == '2' || v[j] == '3' || v[j] == '5'){
				led += 5;
			}
			else if(v[j] == '6' || v[j] == '9' || v[j] == '0'){
				led += 6;
			}
			else if(v[j] == '1'){
				led += 2;
			}
			else if(v[j] == '4'){
				led += 4;
			}
			else if(v[j] == '7'){
				led += 3;
			}
			else if(v[j] == '8'){
				led += 7;
			}
		}
		printf("%d leds\n", led);
		led = 0;
	}
 
    return 0;
}