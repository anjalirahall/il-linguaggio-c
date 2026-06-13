// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.31

// LANCIO DI UNA MONETA

// Scrivere un programma che simula il lancio di una moneta

#include <stdio.h>
#include <stdlib.h>

int flip(void);

int main(void) {
   
   int heads = 0;
   int tails = 0;
   
   for (int i = 1; i <= 100; ++i) {
      if (flip() == 0) {
         printf("%s", "Tails\n");
         ++tails;
      }
      else {
         printf("%s", "Heads\n");
         ++heads;
      }
   }
   
   printf("Total heads: %d\nTotal tails: %d\n", heads, tails);

} // fine della funzione main

int flip(void) {

   return rand() % 2;   

} // fine della funzione flip
