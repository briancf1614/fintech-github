#include<stdio.h>


	
void scambio(int *x,int *y){
	int tmp=*x;
	*x=*y;
	*y=tmp;
}

	int main(){
		int f=10;
		int g=20;
		scambio(&f,&g);/*bisogna mettere sempre & perche la funzione mi sta 
		                 chiedendo per forza un indirizzo di locazione*/
		printf("il valore di f=%d, e il valore di g=%d",&f,g);
	
}
