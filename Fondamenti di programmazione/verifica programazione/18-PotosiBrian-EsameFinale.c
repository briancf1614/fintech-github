/*
Testo:

Si consideri il file Studenti.csv. Si richiede la costruzione di un software che consenta le seguenti operazioni:

stampa dell'elenco degli studenti
stampa dell'elenco dei soli studenti di una certa classe (data in input)
visualizzare l'elenco degli studenti che hanno il cognome che inizia con una certa lettera data in input
raggruppare gli studenti per classe e visualizzare il risultato
creare un file di testo(studenti-quarta.txt) per stampare un elenco di studenti appartenenti alla classe quarta
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define LENGHT 18
typedef struct
{
    char Matricola[60];			
    char Nome[20];
    char Cognome[20];
    char Email[50];
    char Classe[20];
}studente;

void menu(){
	    printf("\n0. per chiudere il programa\n");
		printf("1. per stampa dell'elenco degli studenti\n");
		printf("2. stampa dell'elenco dei soli studenti di una certa classe (data in input)\n");
 	    printf("3. visualizzare l'elenco degli studenti che hanno il cognome che inizia con: \n");
	    printf("4. raggruppare gli studenti per classe e visualizzare il risultato\n");
	    printf("5. creare un file di testo(studenti-quarta.txt)\n\n\n");
	}

void stampastudente(studente p){
printf("matricola: %s\n",p.Matricola);
printf("nome: %s\n",p.Nome);
printf("cognome: %s\n",p.Cognome);
printf("email: %s\n",p.Email);
printf("classe: %s\n\n",p.Classe);
}
void stampaelenco(studente p[],int dimensione){
	int i;
	for(i=0;i<dimensione;i++){
	stampastudente(p[i]);
	}
	printf("\n");
}
    int main(){
	
	studente elenco[LENGHT]={
{11258","Piero
{"11259","Laura
{"11260","Giulia
{"11261","Francesco
{"11262","Giulio
{"11263","Mauro
{"11264","Murizio
{"11265","Andrea
{"11266","Lorena
{"11267","Maria
{"11268","Francesca
{"11269","Giuliana
{"11270","Silvia
{"11271","Simone
{"11272","Francesco
{"11273","Roberto
{"11274","Roberta
{"11275","Andrea
{"11276","Anna
{"11277","Antonio
{"11278","Lorena
{"11279","Loretta
{"11280","Roberto
{"11281","Francesco
{"11282","Alessandro
{"11283","Valerio
{"11284","Andrea
{"11285","Roberta
{"11286","Alessandra
{"11287","Alessandro
{"11288","Andrea
{"11289","Maria
{"11290","Alessandra
{"11291","Francesco
{"11292","Giuseppe
{"11293","Roberto
{"11294","Alessandra
{"11295","Francesca
{"11296","Andrea
{"11297","Alessandra
{"11298","Simone
{"11299","Gennaro
{"11300","Anna
{"11301","Antonio
{"11302","Simone
{"11303","Andrea
{"11304","Giacomo
{"11305","Silvia
{"11306","Michele
{"11307","Paola
{"11308","Mattia
{"11309","Simone
{"11310","Andrea
{"11311","Antonella
{"11312","Giacomo
{"11313","Francesca
{"11314","Sofia
{"11315","Paolo
{"11316","Antonella
{"11317","Maurizio
{"11318","Giacomo
{"11319","Simone
{"11320","Antonella
{"11321","Ilaria
{"11322","Andrea
{"11323","Ilaria
{"11324","Paolo
{"11325","Paola
{"11326","Sofia
{"11327","Vito
{"11328","Francesca
{"11329","Sofia
{"11330","Simone
{"11331","Simone
};

    
	int n;
	char classe[2];
	int m[LENGHT];
	int i;
	char cognome;
	do{
		menu();
		printf("seleziona un numero:");
		scanf("%d",&n);
	    printf("\nhai selezionato l'opzione %d\n\n",n);
	    
	switch(n){
	
	case 0:
		printf("fine programa");break;
	case 1:
	    stampaelenco(elenco,18);break;
	case 2:

	printf("scrivi a quale classe vuoi far riferimento (assicurati di inserire in maiuscula):");
	scanf("%s",&classe);
	for(i=0;i<LENGHT;i++){
	if (strcmp(classe,elenco[i].Classe) == 0) //Se fa 0 sono uguali
          {
             stampastudente(elenco[i]);           
          }
    };break;
    case 3:
	getchar();
    printf("inserisci l'iniziale del cognome: ");
    scanf("%c",&cognome);
    for(i=0;i<LENGHT;i++)
        if (cognome==elenco[i].Cognome[0])
        	stampastudente(elenco[i]);
    case 4:

		for(i=0;i<LENGHT;i++)
			if(elenco[i].Classe[0]==52.1)
				stampastudente(elenco[i]);
	break;
	
	case
}
}while(n!=0);
}




