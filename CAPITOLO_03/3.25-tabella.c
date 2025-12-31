// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.25

// TABELLA DI OUTPUT

// Programma che stampa una tabella di somma per 2, 4 e 6

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int counter = 1;
   int A = counter * 3;
   
   puts("A\tA+2\tA+4\tA+6\n");

   while (counter <= 5) {
   
      printf("%d\t%d\t%d\t%d\n", A, A + 2, A + 4, A + 6);
      
      A = ++counter * 3;
   
   } // fine di while

} // fine della funzione main
