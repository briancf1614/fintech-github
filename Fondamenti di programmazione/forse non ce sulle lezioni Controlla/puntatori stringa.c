/*stampare una frtase preconfezionata, stampare la frase in output
nb: usare i puntatori
*/

#include<stdio.h>
int main(){
	char frase[30]="oggi e' il 22 febraio 2022";
	
	char *p="oggi e' il 22 febraaaaaaio";
	
	printf("%s",frase);
	printf("\n%s",p);
}
