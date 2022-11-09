/*Creare una matrice di numeri interi con dimensione generata casualmente 
e appartenente all'intervallo [10,50]. Il riempimento della matrice è 
casuale e tutti i numeri generati appartengono all'intervallo [inf,sup],
 con inf e sup inseriti da input.

Si richiedono le seguenti operazioni:

Stampare le somme orizzontali e verticali
Stampare le medie verticali e orizzontali
*/
#include <stdio.h>
#include <math.h>
#include <time.h>
#include <stdlib.h>

int casuale(int inf, int sup){	
	return rand()%(sup-inf+1)+inf;
}

void stampaArray(int v[], int dimensione){
	
	int i;
	for(i=0;i<dimensione;i++)
		printf("\n[%d]: %d",i,v[i]);
}

int indexOf(int v[], int dimensione, int elemento){
	
	int i;
	for(i=0;i<dimensione;i++)
		if(v[i]==elemento)
			return i;
	return -1;
}

int main(){
	
	srand(time(NULL));
	
	int inf = 10;
	int sup = 50;
	
	//dichiarazione di un array di numeri interi
	int dimensione = casuale(inf ,sup);
	int numeri[dimensione];
	
	
	int matrice[inf][sup];
	
	printf("inf: ");
	scanf("%d",&inf);
	
	printf("sup: ");
	scanf("%d",&sup);
	
	
}

