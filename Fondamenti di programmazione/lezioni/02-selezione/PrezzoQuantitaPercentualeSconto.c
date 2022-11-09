#include <stdio.h>

/*
Testo del problema
Dati in input il prezzo e la quantità di un certo prodotto, determinare la fascia di sconto da applicare e stampare i dati inseriti, la percentuale di sconto applicata, lo sconto effettuato e il totale da pagare.

Fasce di sconto

Quantita < 3  --- percentuale di sconto 0%
3<= Quantita < 8 --- percentuale di sconto 4%
8<= Quantita < 12 --- percentuale di sconto 9%
12<= Quantita < 20 --- percentuale di sconto 13%
Quantita >= 20 --- percentuale di sconto 21%
*/

int main(){
	
	//dichiarazione delle variabili
	//input 
	float prezzo; //prezzo del prodotto
	int quantita; //quantità del prodotto
	
	printf("Inserisci il prezzo: ");
	scanf("%f",&prezzo);
	
	printf("Inserisci la quantita': ");
	scanf("%d",&quantita);
	
	//determino la percentuale di sconto
	int percentualeSconto=0; //percentuale di sconto del prodotto es. 30% => 30
	if(quantita>=3 && quantita<8)
		percentualeSconto = 4;
	else if (quantita>=8 && quantita<12)
		percentualeSconto = 9;
	else if (quantita>=12 && quantita<20)
		percentualeSconto = 13;
	else if (quantita>=20)
		percentualeSconto = 21;
		
	//operazioni richieste
	float totale = prezzo*quantita;
	float sconto = totale*percentualeSconto/100;
	float totaleScontato = totale-sconto;
		
	//visualizzare i risultati ottenuti
	printf("\nTotale: %.2f euro",totale);
	printf("\nPercentuale sconto applicata: %d ",percentualeSconto);
	printf("\nSconto effettuato: %.2f euro",sconto);	
	printf("\nTotale scontato: %.2f euro",totaleScontato);			
	
}
