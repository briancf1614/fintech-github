#include <stdio.h>
#include <math.h>
#include <time.h>

int genera(){
	return rand()%10; //[0,9]
}


int main(){
	
	srand(time(NULL));
	
	printf("Generazione di un pin numerico a 4 cifre");
	
	printf("\n\n");
	printf("PIN: ");
	int i;
	for(i=0;i<4;i++)
		printf("%d",genera());
	
	
}
