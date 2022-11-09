/*Si consideri un Compact Disk musicale. 

Tramite menu fornire la possibilità di far eseguire una delle seguenti richieste:

Visualizzare l'elenco completo dei brani del Compact Disk, comprensivo di posizione, nome del brano e durata (data in secondi e con format in hh:mm:ss)
Visualizzare i dati del compact disk es. artista, casa discografica, prezzo
Visualizzare un brano scelto tramite la sua posizione
Visualizzare la durata totale del compact disk  (format in hh:mm:ss)
Visualizzare il numero di brani presenti*/
#include<stdio.h>
#include<string.h>
#define LENGHT 10
typedef struct{
	int posizione;
	char nomeBrano[30];
	int duratainsecondi;
	int durata[3];
	char artista[30];	
	int spazioSilenzio;
}brano;
typedef struct{
	char casaDiscografica[30];
	int durata[3];
	char prezzo[30];
}compactDisk;

void discografica(compactDisk p){
	printf("%s %d %s",p.casaDiscografica,p.durata,p.prezzo);
}
void menuPrincipale(){
	    printf("\n0. per chiudere il programa\n");
		printf("1. per rivedere l'elenco\n");
		printf("2. per visualizzare i dati del compact disk\n");
 	    printf("3. per visualizzare un brano scelto tramite la sua posizione\n");
	    printf("4. per visualizzare la durata totale del compact disk\n");
	    printf("5. per Visualizzare il numero di brani presenti\n\n\n");
}
void stampacanzone(brano p){
printf("Nro:%d\t",p.posizione);
printf("Nome:%s\t",p.nomeBrano);
printf("durata:%d secondi\t",p.duratainsecondi);
printf("%02d",p.durata[0]);
printf("-%02d",p.durata[1]);
printf("-%02d secondi\t",p.durata[2]);
printf("cantante:%s\t",p.artista);
printf("%d\n",p.spazioSilenzio);
}

void stampaelenco(brano p[],int dimensione){
	int i;
	for(i=0;i<dimensione;i++){
	stampacanzone(p[i]);
	}
	printf("\n");
}
void stampaDatiCompactDisk(brano p[],compactDisk q){
	printf("artista:%s \t casa discografica: %s \t prezzo: %s\n\n",p[1].artista,q.casaDiscografica,q.prezzo);
}
int main(){
	
	brano elenco[LENGHT]={
		{1,"canzone1",126,00,2,6,"michaelJ",2},
		{2,"canzone2",121,00,2,1,"michaelJ",2},
		{3,"canzone3",185,00,3,5,"michaelJ",2},
		{4,"canzone4",247,00,4,7,"michaelJ",2},
		{5,"canzone5",345,00,5,45,"michaelJ",2},
		{6,"canzone6",139,00,2,19,"michaelJ",2},
		{7,"canzone7",567,00,9,27,"michaelJ",2},
		{8,"canzone8",284,00,04,44,"michaelJ",2},
		{9,"canzone9",793,00,13,13,"michaelJ",2},
		{10,"canzone10",634,00,10,34,"michaelJ",2}
	};
	
	//calcolo delle ore minuti e secondi delle canzoni
	int hore,minuti,secondi;
	hore=0;
	minuti=0;
	secondi=0;
	int i,j,z;
	for(i=0;i<LENGHT;i++){
		
		for(j=0;j<elenco[i].durata[2];j++){
             secondi++;
	         if(secondi>=60){secondi=0;minuti++;}
			 }
			 
			 
	    for(z=0;z<elenco[i].durata[1];z++){
		     minuti++;
	         if(minuti>=60){minuti=0;hore++;}
	        }
	        
        hore+=elenco[i].durata[0];}
        
	//riempimento di compactDisk disco
	
	compactDisk disco={"only musician",hore,minuti,secondi,"50 euro"};
	
	stampaelenco(elenco,LENGHT);
	int m;
	int n;
	do{
		menuPrincipale();
		printf("seleziona un numero:");
		scanf("%d",&n);
	    printf("\nhai selezionato l'opzione %d\n\n",n);
	switch(n){
	
	case 0:
		printf("fine programa");break;
	case 1:
		stampaelenco(elenco,LENGHT);break;
	case 2:
				
		stampaDatiCompactDisk(elenco,disco);break;
	
	case 3:
		printf("seleziona un dei 10 fantastici brani:\n\n");
		do{
		scanf("%d",&m);
		if(m>0 &&  m<11){
	    if(m==1){printf("hai selezionato il brano %s\n\n\n\n",elenco[0].nomeBrano);}
	    if(m==2){printf("hai selezionato il brano %s\n\n\n\n",elenco[1].nomeBrano);}
	    if(m==3){printf("hai selezionato il brano %s\n\n\n\n",elenco[2].nomeBrano);}
	    if(m==4){printf("hai selezionato il brano %s\n\n\n\n",elenco[3].nomeBrano);}
	    if(m==5){printf("hai selezionato il brano %s\n\n\n\n",elenco[4].nomeBrano);}
	    if(m==6){printf("hai selezionato il brano %s\n\n\n\n",elenco[5].nomeBrano);}
	    if(m==7){printf("hai selezionato il brano %s\n\n\n\n",elenco[6].nomeBrano);}
	    if(m==8){printf("hai selezionato il brano %s\n\n\n\n",elenco[7].nomeBrano);}
	    if(m==9){printf("hai selezionato il brano %s\n\n\n\n",elenco[8].nomeBrano);}
	    if(m==10){printf("hai selezionato il brano %s\n\n\n\n",elenco[9].nomeBrano);}
	    printf("seleziona un altro brano o premi 0 per tornare indietro:\n\n");
	    }
		else {printf("\nsfortunatamente hai solo 10 brani seleziona un'altro :)\n\n");}
	}while (m!=0);break;  	    
	
	case 4:
		printf("\nla durata totale del compact disk e': %02d-%02d-%02d\n\n",hore,minuti,secondi+20);
		
		break;
	case 5:
		printf("\nin questo compact disk ci sono %d spetacolari brani\n\n",LENGHT);
		break;
	
	default:
		printf("numero non compresso");
		break;
	}
    }while(n!=0);
return 0;
}
