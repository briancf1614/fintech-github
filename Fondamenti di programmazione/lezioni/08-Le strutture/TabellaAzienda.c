#include <stdio.h>

#define DIM 15

//definizione della struttura consulente
typedef struct{
	char nominativo[30];
	float fatturato;
	float spese;
}consulente;

//restituisce il totale del fatturato
float totaleFatturato(consulente elenco[],int dimensione){
	
	float totale=0;
	int i;
	for(i=0;i<dimensione;i++)
		totale += elenco[i].fatturato;
		
	return totale;	
}

//stampa lineare di un consulente
void stampa(consulente c){
	printf("Nominativo: %s, fatturato: %.2f, spese: %.2f", c.nominativo,c.fatturato,c.spese);
}

//stampa elenco di tutti i consulenti
void stampaElenco(consulente elenco[], int dimensione){
	
	int i;
	for(i=0;i<dimensione;i++){
		if(i!=0) 
			printf("\n");
		stampa(elenco[i]);
	}		
}

//restituisce la posizione del consulente con maggior fatturato
int cercaFatturatoMax(consulente elenco[],int dimensione){
	int pos=0;
	int i;
	for(i=1;i<dimensione;i++)
		if(elenco[pos].fatturato<elenco[i].fatturato)
			pos=i;
	return pos;
}

//restituisce la posizione del consulente con spese minime
int cercaSpeseMin(consulente elenco[],int dimensione){
	int pos=0;
	int i;
	for(i=1;i<dimensione;i++)
		if(elenco[pos].spese>elenco[i].spese)
			pos=i;
	return pos;
}

//restituisce l'elenco delle operazioni da cui scegliere
void stampaMenu(){
	printf("Scegli una delle seguenti operazioni da eseguire:");
	printf("\n1 - Totale del fatturato");
	printf("\n2 - Consulente con fatturato max");
	printf("\n3 - Consulente con spese minime");
	printf("\n4 - Elenco dei consulenti");
	printf("\n0 - Termina il programma");
}

int main(){
	
	//lista dei consulenti con forma l'azienda
	consulente lista[DIM]={
	{"Rino Gattino",12578.45,2356.55},
	{"Lina Cannino",22578.00,3569.12},
	{"Giulio Pazzera",40456.80,4589.25},
	{"Alfredo Rondo",8587.90,3569.22},
	{"Giuseppe Carletto",12578.00,1258.00},
	{"Carlo De Niro",9578.85,895.25},
	{"Giulio Lostreto",10508.00,3159.00},
	{"Sara Lima",26898.45,3569.00},
	{"Roberto Canuto",14778.75,2587.23},
	{"Ilaria Gino",32532.43,2552.25},
	{"Gino Roberti",17899.75,1478.33},
	{"Rosa Gamba",12568.45,896.35},
	{"Valeria Aulico",14578.45,4656.55},
	{"Riccardo Cortiglia",32573.35,5376.55},
	{"Luca Grosto",10570.45,2300.50}
	};
	
	
	int scelta;
	do{
		stampaMenu();
		printf("\n\nScelta: ");
		scanf("%d",&scelta);
						
		switch(scelta){
			case 0: printf("Programma terminato");break;
			case 1: printf("Totale fatturato: %.2f",totaleFatturato(lista,DIM));break;
			case 2: stampa(lista[cercaFatturatoMax(lista,DIM)]);break;
			case 3: stampa(lista[cercaSpeseMin(lista,DIM)]);break;
			case 4: printf("Elenco consulenti:\n");stampaElenco(lista,DIM);break;
			default: printf("ERRORE! Valore inserito non valido!");
		}
		printf("\n\n");
	}while(scelta!=0);
	
	
	
}
