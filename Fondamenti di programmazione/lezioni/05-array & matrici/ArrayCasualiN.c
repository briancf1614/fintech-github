/*
Generare 10 numeri casuali da 0 a 100 e memorizzarli su un array. 
Visualizzare i numeri generati. 
Contare e stampare i multipli di 11 con relativa posizione.
*/
#include <stdio.h>
#include <math.h>
#include <time.h>

int casuale(int sup){
	//rand()%sup; [0,99]
	//rand()%sup+1; [1,100]
	return rand()%(sup+1); //[0,100]
}

void stampaArray(int v[], int dimensione){
	
	int i;
	for(i=0;i<dimensione;i++)
		printf("\n[%d]: %d",i,v[i]);
}

int main(){
	srand(time(NULL));
	
	//dichiarazione dell'array
	int numeri[10];
	
	//caricamento dei dati casuali
	int i;
	for(i=0;i<10;i++)
		numeri[i]=casuale(100);
	
	stampaArray(numeri,10);
	
	int contaMultipli11=0;
	for(i=0;i<10;i++)
		if(numeri[i]%11==0)
			contaMultipli11++;
	printf("\n\nMultipli di 11: %d",contaMultipli11);
	
	for(i=0;i<10;i++)
		if(numeri[i]%11==0)		
			printf("\n[%d]: %d",i,numeri[i]);
	
	
	
}

