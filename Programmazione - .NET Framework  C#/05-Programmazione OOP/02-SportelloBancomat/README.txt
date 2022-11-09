Esercizio n. 2 - SportelloBancomat

Si vuole realizzare una classe che simuli un bancomat. 

Lo stato interno in ogni istante deve consentire di sapere quante banconote da 50, 20 e 10 euro sono disponibili. Un costruttore consentirà di creare un bancomat indicando quante banconote di ciascun taglio sono disponibili in partenza. Un secondo costruttore consentirà di specificare solo il numero delle banconote da 10 (nota: sarebbe opportuno che il secondo costruttore sfruttasse il primo …).

Aggiungere un metodo per interrogare il bancomat al fine di sapere il totale dei soldi in esso custoditi. Aggiungere un metodo bool Togli50(parametro) che serve a diminuire del numero indicato i pezzi da 50; se l’operazione è possibile il metodo restituisce true, altrimenti false. 

Nel programma principale creare un bancomat ed interrogarlo visualizzando il totale dei soldi in esso contenuti. Togliere alcuni pezzi da 50 ed interrogarlo di nuovo. 

Aggiungere il metodo String[] Prelievo(parametro) che serve a gestire un prelievo pari alla cifra indicata. Il valore restituito è  un vettore di 4 stringhe: l’esito dell’operazione (riuscita / fallita) ed il numero di banconote da 50, 20 e 10 usate).

