// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.12

// CALCOLARE LA SOMMA DI NUMERI INTERI PARI

// Programma che calcola la somma degli interi pari da 2 a 30

#include <stdio.h>

int main(void) {
   
   int sum = 0;
   
   for (int n = 2; n <= 30; n += 2) {
      sum += n;
   } // fine del for

   printf("The sum is %d\n", sum);
   
} // fine della funzione main
