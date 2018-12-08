#include <stdio.h>
 
int main() {
	int nbrStudents;
	scanf("%d",&nbrStudents);
	int i, regNumber[nbrStudents],chosen = -1;
	float note[nbrStudents],chosenNote;
	for(i = 0; i<nbrStudents;i++){
		scanf("%d %f", &regNumber[i], &note[i]);
		
		if(note[i] > chosenNote && note[i] >= 8){
			chosenNote = note[i];
			chosen = regNumber[i];
		}
	}
if(chosen == -1)
	printf("Minimum note not reached\n");
else
	printf("%d\n",chosen);
    return 0;
}