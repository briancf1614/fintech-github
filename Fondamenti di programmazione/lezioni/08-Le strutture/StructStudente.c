/*
tipo di dato: studente(matricola, nome, cognome, eta)

creare un software per stampare i dati di tre studenti
utilizzare per la stampa la stampaDettaglio
*/
#include <stdio.h>
#include <string.h>

typedef struct {
	int matricola;
	char nome[50];
	char cognome[50];
	int eta;	
}studente;

void stampaDettaglio(studente s){
	printf("\nMatricola: %d",s.matricola);
	printf("\nNome: %s",s.nome);
	printf("\nCognome: %s",s.cognome);
	printf("\nEta': %d",s.eta);
}

void stampaLineare(studente s){
	printf("Matricola: %d",s.matricola);
	printf(", Nome: %s",s.nome);
	printf(", Cognome: %s",s.cognome);
	printf(", Eta': %d",s.eta);
}


int main(){
	
	studente s1,s2,s3;
	
	s1.matricola=123456;
	strcpy(s1.nome,"Pino");
	strcpy(s1.cognome,"Delillo");
	s1.eta=12;
	
	s2.matricola=123421;
	strcpy(s2.nome,"Pino");
	strcpy(s2.cognome,"Delfino");
	s2.eta=12;
	
	s3.matricola=123412;
	strcpy(s3.nome,"Mino");
	strcpy(s3.cognome,"De Lillo");
	s3.eta=18;
	
	
	//stampa
	stampaDettaglio(s1);
	printf("\n\n");
	stampaDettaglio(s2);
	printf("\n\n");
	stampaDettaglio(s3);
}

