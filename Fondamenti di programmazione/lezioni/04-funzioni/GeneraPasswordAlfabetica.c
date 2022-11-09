#include <stdio.h>
#include <math.h>
#include <time.h>

int casuale(int inf,int sup){
	return rand()%(sup-inf+1) + inf; //[0,9]
}


int main(){
	
	srand(time(NULL));
	
	printf("Generazione di una password casuale alfabetica (maiuscolo/minuscolo)");
	
	int n;
	printf("\n\nInserisci la lunghezza della password: ");
	scanf("%d",&n);
	
	char pattern[1][52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	
	printf("\n\n");
	printf("Password: ");
	int i;
	for(i=0;i<n;i++)
		printf("%c",pattern[0][casuale(0,51)]);
	
	
}
