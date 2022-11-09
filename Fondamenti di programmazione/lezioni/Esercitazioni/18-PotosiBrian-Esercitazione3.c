/*Alla fine di un concorso vengono pubblicati i risultati 
delle prove dei concorrenti: vengono memorizzati, per ogni partecipante, 
il nominativo, il numero della pettorina, la data di nascita, il punteggio della prima prova, 
il punteggio della seconda prova. 

Si vuole ottenere:

l'elenco dei concorrenti partecipanti con nominativo, numero pettorina, data di nascita ed età
la graduatoria parziale rispetto alla prima prova
la graduatoria parziale rispetto alla seconda prova
la graduatoria finale rispetto al punteggio del totale conseguito
Si utilizzi un menu che consenta la scelta dell'operazione da eseguire. 

Si consideri una tabella pre-caricata con almeno 15 concorrenti.

Consegna

Creare il file NN-CognomeNome-Esercitazione3.c e inviarlo sulla piattaforma. 
NN rappresenta il numero del registro associato allo studente.*/

#include<stdio.h>
#include<string.h>

 typedef struct{
 	char nomeCognome[30];
 	char pettorino[30];
 	char dataNascita[30];
 	int punteggio1prova;
 	int punteggio2prova;
 	int eta;
 		
 }participanti;

 void giocatore(participanti p){
 	printf("NomeCognome:%s Pettorino:%s datanascita:%s punteggio1:%d punteggio2:%d eta:%d\n",p.nomeCognome,p.pettorino,p.dataNascita,p.punteggio1prova,p.punteggio2prova,p.eta);
 }
 void stampaelenco(participanti e[] ,int dimensione){
	int i;
	for(i=0;i<dimensione;i++){
	giocatore(e[i]);
}}


void scambio(){
	
}
void primaProva(participanti p[]){
	int j,i;
        participanti temp;
    	for(i=0;i<15;i++)
		{
			for(j=1;j<15;j++)
			{
		       if(p[j].punteggio1prova > p[j-1].punteggio1prova)
			   {
			   temp=p[j];
			   p[j]=p[j-1];
			   p[j-1]=temp;
               }
	        }		   
        }
			   printf("\n");
		       stampaelenco(p,15);
               


}
void secondaProva(participanti p[]){
	int j,i;
        participanti temp;
    	for(i=0;i<15;i++)
		{
			for(j=1;j<15;j++)
			{
		       if(p[j].punteggio2prova > p[j-1].punteggio2prova)
			   {
			   temp=p[j];
			   p[j]=p[j-1];
			   p[j-1]=temp;
               }
	        }		   
        }
			   printf("\n");
		       stampaelenco(p,15);
}
void graduatoriaFinale(participanti p[]){
	int i,j;
	int sum,temp;
	int cella1;
	int cella2;
	cella1=p[i].punteggio2prova+p[i].punteggio1prova;
	cella2=p[i-1].punteggio2prova+p[i-1].punteggio1prova;
	for(j=0;j<15;j++)
	{	}
	for(i=0;i<15;i++)
	{
	    if(cella1 > cella2)
			   {
			   temp=cella1;
			   cella1=cella2;
			   cella2=temp;
			   }
               
		sum = p[i].punteggio2prova+p[i].punteggio1prova;
	    printf("\nNomeCognome:%s Pettorino:%s datanascita:%s punteggiofinale:%d",p[i].nomeCognome,p[i].pettorino,p[i].dataNascita,sum);
 }

}
int main(){
	participanti elenco[15]={
		{"brianPotosi","01","08/09/1998",60,80,23},
		{"leleSuarez","02","08/08/2000",65,51,23},
		{"enriquePegna","03","2001",80,86,23},
		{"giovanniLopedsz","04","08/09/1988",90,69,23},
		{"titoPepez","05","08/09/1978",61,89,23},
		{"juanGarmendia","06","08/04/1992",69,75,23},
		{"lalaMarinez","07","08/09/1994",62,35,23},
		{"picaroPicaron","08","08/11/1993",90,85,23},
		{"mamelucoMorado","09","08/09/1998",50,69,23},
		{"diomisioTolero","10","08/09/1991",63,70,23},
		{"posedeoLerez","11","08/09/1999",95,99,23},
		{"toritoLorero","12","08/04/1994",78,80,23},
		{"jopeleroJapilero","13","08/09/1991",45,70,23},
		{"mancoMerez","14","08/10/1995",89,70,23},
		{"susiDiaz","15","08/07/1992",70,90,23}	
	};
	
	stampaelenco(elenco ,15);

    int n;
	printf("scrivere 1 per: stampare l'elenco:\n");
	printf("scrivere 2 per: graduatoria parziale rispetto alla prima prova:\n");
	printf("scrivere 3 per: la graduatoria parziale rispetto alla seconda prova:\n");
	printf("scrivere 4 per: la graduatoria finale rispetto al punteggio del totale conseguito:\n");
	printf("scrivere 0 per: finire il programa:\n");
	scanf("%d", &n);
	
	switch (n){
		case 1:
			printf("\nelenco di tutti i participanti:\n");
			stampaelenco(elenco,15);break;	
		case 2:
			printf("\nelenco graduatoria parziale rispetto alla prima prova:");
			primaProva(elenco);	break;
		case 3:
			printf("\nelenco graduatoria parziale rispetto alla seconda prova:");
			secondaProva(elenco);break;
		case 4:
			printf("\ngraduatoria finale rispetto al punteggio del totale conseguito:");//non sono riuscito ad ordinare la somma dei risultati
			graduatoriaFinale(elenco);break;
		case 0:	
			
		default: 
		printf("\nnumero non compreso\n");break;
			
	
}
system("PAUSE");
return 0;
}
