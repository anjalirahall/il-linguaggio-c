// CAPITOLO 05
// ESERCIZI

// PAGINA 202
// ESERCIZIO 5.13

// Assegnare alla variabile n valori interi casuali

#include <stdio.h>
#include <stdlib.h>

int main(void) {

   int n = 0;
   
   n = 1 + rand() % 2;
   n = 1 + rand() % 100;
   n = rand() % 10;
   n = 1000 + rand() % 113;
   n = -1 + rand() % 3;
   n = -3 + rand() % 15;

} // fine della funzione main
