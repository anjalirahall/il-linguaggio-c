// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.14

// FATTORIALI

// Programma che stampa una tabella di fattoriali da 1 a 5

#include <stdio.h>

int main(void) {

   printf("%6s %9s\n\n", "number", "factorial");
   
   int factorial = 1;
   
   for (int n = 1; n <= 5; n++) {
      factorial *= n;
      printf("%6d %9d\n", n, factorial);
   } // fine del for

} // fine della funzione main
