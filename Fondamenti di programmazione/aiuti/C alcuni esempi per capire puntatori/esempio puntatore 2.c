#include<stdio.h>

int main(){
	
    int numeri[5]={12,-4,7,-9,-8};
    int *p=numeri;
    
    int i;
    for(i=0;i<5;i++){
    	printf("\n%d, memoria: %d",numeri[i],&numeri[i]);
    	printf("\npuntatore *p: %d, memoria: %d",*p,p);
    	
	}

}



