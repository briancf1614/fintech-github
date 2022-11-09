Esercizio n. 3 - ConfrontoHardDisk

Si vogliono confrontare diversi modelli di hard disk. Ognuno è caratterizzato dalla marca, dalla velocità (espressa in RPM, rotazioni per minuto), dal tempo di accesso (espresso in millisecondi) e dalla capacità (espressa in gigabyte). 

Ad ogni modello viene assegnato un punteggio nel seguente modo:

per la velocità viene assegnato 1 punto ogni giro al minuto
per il tempo di accesso vengono assegnati -200 punti al millisecondo (più alto è il tempo, più basso è il punteggio)
per la capacità vengono assegnati 500 punti ogni gigabyte
Creare un elenco di modelli mediante l'uso di una lista.

Si richiede di poter disporre delle seguenti funzionalità:

visualizzare l'elenco degli hard disk
ordinare gli hard disk in base alla capacità crescente
mostrare i dati dell’hard disk con punteggio migliore 
mostrare i dati dell’hard disk con punteggio peggiore
mostrare i dati di un certo hard disk individuato tramite la marca (considerato un dato che individua univocamente l'hard disk)
Predisporre quindi una classe con il metodo main che espone un menu testuale dove poter scegliere tra le azioni elencate precedentemente. Si aggiunga altresì la possibilità di uscire dal programma.