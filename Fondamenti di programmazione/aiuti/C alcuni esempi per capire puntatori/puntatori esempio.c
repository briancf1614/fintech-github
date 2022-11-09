#include<stdio.h>

int main(){
	int n=12;
	int *p=&n; //variabile puntatore memorizza indirizzo di memoria
	
	printf("variabile n:%d, indirizzo di memoria:%d",n,&n);
	printf("variabile puntatore *p:%d, indirizzo di memoria:%d",*p,p);
	
	return 0;
}
