/*
Creare il tipo di dato libro. 
Di un libro si conosce il codice isbn, il titolo, l'autore, l'editore
, il prezzo, il numero di pagine e l'anno di pubblicazione.

Creare due variabili di tipo libro e visualizzare i risultati 
in modalità stampaDettaglio e StampaLineare
*/
#include <stdio.h>
#include <string.h>

typedef struct {
	char isbn[14];
	char titolo[50];
	char autore[50];
	char editore[50];
	float prezzo;
	int pagine;	
	int annoPubblicazione;
}libro;

void stampaDettaglio(libro l){
	printf("\nISBN: %s",l.isbn);
	printf("\nTitolo: %s",l.titolo);
	printf("\nAutore: %s",l.autore);
	printf("\nEditore: %s",l.editore);
	printf("\nPrezzo: %.2f",l.prezzo);
	printf("\nNumero di pagine: %d",l.pagine);
	printf("\nAnno di pubblicazione: %d",l.annoPubblicazione);
}

void stampaLineare(libro l){
	printf("ISBN: %s",l.isbn);
	printf(", Titolo: %s",l.titolo);
	printf(", Autore: %s",l.autore);
	printf(", Editore: %s",l.editore);
	printf(", Prezzo: %.2f",l.prezzo);
	printf(", Numero di pagine: %d",l.pagine);
	printf(", Anno di pubblicazione: %d",l.annoPubblicazione);
}


int main(){
	
	libro l1, l2;
	
	strcpy(l1.isbn,"9784561234561\0");
	strcpy(l1.titolo,"Linguaggio C\0");
	strcpy(l1.autore,"Pino Delillo\0");
	strcpy(l1.editore,"Hoepli\0");
	l1.prezzo=55.55;
	l1.pagine=678;
	l1.annoPubblicazione=2003;
	
	strcpy(l2.isbn,"9784561234978\0");
	strcpy(l2.titolo,"Linguaggio C#\0");
	strcpy(l2.autore,"Rino Melillo\0");
	strcpy(l2.editore,"Mondadori\0");
	l2.prezzo=58.75;
	l2.pagine=1278;
	l2.annoPubblicazione=2020;
		
	//stampa
	stampaLineare(l1);
	printf("\n\n");
	stampaLineare(l2);
	printf("\n\n");
	stampaDettaglio(l1);
	printf("\n\n");
	stampaDettaglio(l2);
	
	
}

