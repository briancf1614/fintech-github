# esercizio dei
1. Assegna valore 1 ad a se la regola è contenuta all’interno dell’attributo style, 0 altrimenti.
2. Aggiungi 1 a b per ogni ID presente nella regola, 0 altrimenti.
3. Aggiungi 1 a c per ogni classe, pseudo-classe e attributo presente nella regola, 0 altrimenti.
4. Aggiungi 1 a d per ogni elemento e pseudo-elemento contenuto nella regola.

- ul li {0-0-0-2} <!--In questo caso si possono trovare solo 2 elementi-->
- ul > li {0-0-0-2}<!--Anche qui possiamo vedere solo due elementi-->
- body > #main.mobile a:hover {0-1-1-2}<!--Qui vediamo un selettore/atributo id e uno di classe inoltre vediamo 2 elementi 'body' e 'a'-->
- div p > span {0-0-0-3}<!--in questo caso solo vediamo 3 elementi-->
- .users .name {0-0-2-0}<!--In questo caso vediamo solo 2 selettori/atributo di classe-->
- [href$='.pdf'] {0-0-1-0}<!--In questo caso abbiamo solo 1 selettore/atributo di classe-->
- :hover {0-0-1-0}<!--In questo caso abbiamo solo 1 selettore/atributo di classe-->
- div .name {0-0-1-1}<!--Qui abbiamo un selettore/atributo di classe insieme ad un elemento-->
- a[href$='.pdf'] {0-0-1-1}<!--Qui abbiamo un seletttore/atributo di classe con un elemento-->
- .pictures img:hover {0-0-2-1}<!--In questo caso abbiamo 2 seletori/atributo di classe insieme ad un elemento-->
- .name.name.name {0-0-3-0}<!--Qui abbiamo tre selettori/atributo di classe identici probabilemente questo fa diventere solo ad un selettore/atributo di classe -->
- .user #name {0-1-1-0}<!--In questo caso abbiamo solo 1 selettore/atributo id ed uno di classe-->
- #name span {0-1-0-1}<!--Abbiamo un selettore/atributo id e un elemento-->
- nav#nav > li:hover {0-1-1-2}<!--Abbiamo 2 selettori/atributo, uno id e l'altro di pseudo-classe-->
- li:nth-child(2n+1):hover {0-0-2-1}<!--in questo caso abbiamo 2 selettori/atributi di pseudoclasse insieme ad un elemento-->