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
{"11258","Piero","Giuliani","giuliani.piero@studenti.itis.net","1A"},
{"11259","Laura","De Stena","destena.laura@studenti.itis.net","2A"},
{"11260","Giulia","Caruso","caruso.giulia@studenti.itis.net","3B"},
{"11261","Francesco","Cocco","cocco.francesco@studenti.itis.net","4C"},
{"11262","Giulio","Marchese","marchese.giulio@studenti.itis.net","1B"},
{"11263","Mauro","Marchesato","marchesato.mauro@studenti.itis.net","4C"},
{"11264","Murizio","Conciello","conciello.murizio@studenti.itis.net","1A"},
{"11265","Andrea","De Blasi","deblasi.andrea@studenti.itis.net","3B"},
{"11266","Lorena","Di Stefano","di stefano.lorena@studenti.itis.net","4D"},
{"11267","Maria","Balocco","balocco.maria@studenti.itis.net","1B"},
{"11268","Francesca","Barlocco","barlocco.francesca@studenti.itis.net","5A"},
{"11269","Giuliana","Casini","casini.giuliana@studenti.itis.net","5D"},
{"11270","Silvia","Sampietro","sampietro.silvia@studenti.itis.net","5A"},
{"11271","Simone","Cerrina","cerrina.simone@studenti.itis.net","5C"},
{"11272","Francesco","Cesco","cesco.francesco@studenti.itis.net","3B"},
{"11273","Roberto","Alibrando","alibrando.roberto@studenti.itis.net","1A"},
{"11274","Roberta","Alibrandi","alibrandi.roberta@studenti.itis.net","4C"},
{"11275","Andrea","Cataldi","cataldi.andrea@studenti.itis.net","5A"}
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

    printf("inserisci l'iniziale del cognome: ");
    scanf("%c",&cognome);
    for(i=0;i<LENGHT;i++){
        if (cognome==elenco[i].Cognome[0])
        stampastudente(elenco[i]);
}
    case 4:

for(i=0;i<LENGHT;i++){
if(elenco[i].classe[0]==4)
stampastudente(elenco[i])
};break;
}while(n!=0);
}
}




