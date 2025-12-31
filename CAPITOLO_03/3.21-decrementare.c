// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.21

// PREDECREMENTARE E POSTDECREMENTARE

// Programma che mostra il funzionamento dell'operatore di decremento --

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {
   
   // Predecrementare
   int a = 5;
   
   printf("The value of a is: %d\n", a);
   printf("the value of --a is: %d\n", --a);
   printf("The value of a after --a is: %d\n\n", a);
   
   // Postdecrementare
   a = 5;
   
   printf("The value of a is: %d\n", a);
   printf("the value of a-- is: %d\n", a--);
   printf("The value of a after a-- is: %d\n", a);

} // fine della funzione main
