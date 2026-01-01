// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.36

// QUANTO È VELOCE IL VOSTRO COMPUTER?

// Programma che conta e stampa i numeri da 1 a 1.000.000.000

// PSEUDOCODICE

// Inizializza la variabile intera n a 1

// Finché n è minore o uguale a 1.000.000.000
//    Se n è multiplo di 100.000.000
//       Stampa il valore di n
//    Incrementa n di uno

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 1;
   
   while (n <= 1000000000) {
      if ((n % 100000000) == 0) {
         printf("%d\n", n);
      } // fine di if
      ++n;
   } // fine di while

} // fine della funzione main
