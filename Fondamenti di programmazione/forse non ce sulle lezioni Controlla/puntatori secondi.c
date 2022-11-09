/*data in input  una sequenza oraria, 
in secondi stampare usando il seguente format:hh:mm:ss
usare i puntatori e il paassagio di parametri by reference
*/

#include<stdio.h>
//prototype
void calcolosequenzaoraria(int tempoinseconde, int*ore, int *minuti, int*secondi);

int main(){
	int tempo;
	printf("inserisciil tempo della sequenza oraria in secondi");
	scanf("%d",&tempo);
	
	int h,m,s;
	calcolosequenzaoraria(tempo,&h,&m,&s);
	printf("%d %d %d",h,m,s);
	
	
}
void calcolosequenzaoraria(int tempoinsecondi, int*ore, int *minuti, int*secondi){
	//tempo in secondi: 3600
	*ore=tempoinsecondi/3600;//calcolo le ore
	*minuti=tempoinsecondi%3600/60;//calcolo i minuti
	*secondi=tempoinsecondi%3600%60;
}
