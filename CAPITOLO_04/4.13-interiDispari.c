// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.13

// CALCOLARE IL PRODOTTO DI NUMERI INTERI DISPARI

// Programma che calcola il prodotto dei numeri interi dispari da 1 a 15

#include <stdio.h>

int main(void) {

   int product = 1;
   
   for (int n = 1; n <= 15; n += 2) {
      product *= n;
   } // fine del for
   
   printf("The product is %d\n", product);

} // fine della funzione main
