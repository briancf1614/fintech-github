/*

12 3 4 1

ordinare in senso crescente

primo giro
1 12 4 3

secondo giro
1 3 12 4

terzo giro
1 3 4 12

*/
#include<stdio.h>
#include<stdio.h>
#define LENGTH 20

void scambio(int *x,int *y){
	int tmp=*x;
	*x=*y;
	*y=tmp;
}

void stampaArray(int v[],int dimensione){
	int i;
	for(i=0;i<dimensione;i++)
		printf("%d ",v[i]);
}

int main(){
	
	int numeri[LENGTH] ={12,11,17,20,18,14,15,6,4,9,10,19,13,2,5,16,8,7,3,1};
	
	printf("Array non ordinato\n");
	stampaArray(numeri,LENGTH);	
	
	int i,j; //i 
	for(i=0;i<LENGTH;i++){
		for(j=0;j<LENGTH;j++)
		if(numeri[j]>numeri[j+1])
			scambio(&numeri[j],&numeri[j+1]);
			printf("\n\t");
		stampaArray(numeri,LENGTH);	
	}

		
	printf("\n\nArray ordinato crescente\n");	
	stampaArray(numeri,LENGTH);	
	
	strcmp(stampaArray(numeri,LENGTH));
	return 0;
}







