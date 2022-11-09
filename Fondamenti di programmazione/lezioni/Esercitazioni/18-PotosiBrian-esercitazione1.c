/*Dati in input n numeri interi, consentire la possibilità di effettuare le seguenti operazioni:

Visualizzare il max e il min inserito
Contare e visualizzare i numeri che sono multipli di 7 e maggiori di 30
Visualizzare la radice quadrata della somma dei soli numeri positivi inseriti
*/

#include<stdio.h>
#include<math.h>

int main (){
	int n;
	printf("quanti numeri interi vuoi inserire? : ");
	scanf("%d",&n);
	
	int i;
	int N;
	int contatore=0;
	int K;
	int MAX;
	int MIN;
	int somma=0;
	printf("inserisci il primo valore: ");
	scanf("%d",&K);
	MAX=K;
	MIN=K;
	if (K>30 && K%7==0){
	contatore+=1;
	printf("%d e' maggiore di 30 e multiplo di 7\n\n", K);
	if (K>0)
	somma+=K;								

}
	for (i=1;i<n;i++) {
	
	printf("inserisci il prossimo valore:\n");
	scanf("%d",&N);
	if (MAX<N)
	MAX=N;
	if (MIN>N)
	MIN=n;
	if (N>30 && N%7==0){
		contatore+=1;
		printf("%d e' maggiore di 30 e multiplo di 7\n\n",N);
	}
	
	if (N>0)
	somma+=N;

}

float radice= sqrt(somma);



printf("massimo: %d\n", MAX);
printf("minimo: %d\n", MIN);
printf("numeri maggiori di 30 e divisibili per 7: %d\n",contatore);


printf("radice quadrata della somma dei numeri positivi: %f", radice);

}
