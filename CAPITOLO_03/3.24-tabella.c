// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.24

// TABELLA DI OUTPUT

// Programma che stampa una tabella di moltiplicazione per 10, 100, 1000

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int N = 1;
   
   puts("N\t10*N\t100*N\t1000*N\n");
   
   while (N <= 10) {
      printf("%d\t%d\t%d\t%d\n", N, 10 * N, 100 * N, 1000 * N);
      ++N;
   } // fine di while

} // fine della funzione main
