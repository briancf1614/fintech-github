/*dato un array di numeri interi di dimensionie 5,
stamparee larray 
nb: usare una funzione con uso puntatori*/
#include<stdio.h>

void stampaarray(int *array,int dimensione){
	int i;
	for(i=0;i<dimensione;i++){
	printf("%d, ",*array);
	array++;
}	
}


int main(){
	int numeri[5]={12,23,34,45,56};
	stampaarray(&numeri[0],5);
	
}

