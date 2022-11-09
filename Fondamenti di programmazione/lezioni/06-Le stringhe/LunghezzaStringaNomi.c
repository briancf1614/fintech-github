#include <stdio.h>
#include <string.h>

#define LENGTH  30
#define MAX  5
int main(){
    char nomi[MAX][LENGTH];
    
    int i;
    for(i=0;i<MAX;i++)
    {
    	printf("Inserisci un nome: ");
    	scanf("%s",nomi[i]);
	}
	
	printf("\n\nLunghezza dei nomi inseriti:");
	for(i=0;i<MAX;i++)    
    	printf("\nnome: %s, lunghezza: %d",nomi[i],strlen(nomi[i]));
    	
	   
}
    
    
    
    
    
    
    
    
    
