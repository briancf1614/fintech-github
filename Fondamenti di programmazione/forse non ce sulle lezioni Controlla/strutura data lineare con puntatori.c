/*creare la struttura daata,stampare il format lineare
usare le funzioni e i puntatori
*/
#include<stdio.h>

typedef struct{
	int giorno;
	int mese;
	int anno;
}data;

void formatdatalineare(data *oggi){
	printf("%.2d/%.2d/%d",oggi->giorno,oggi->mese,oggi->anno);
	
}
int main(){
	data oggi={22,2,2022};
	
	formatdatalineare(&oggi);
}

