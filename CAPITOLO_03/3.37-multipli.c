// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.37

// TROVARE MULTIPLI DI 10

// Programma che stampa 100 asterischi

// PSEUDOCODICE

// Inizializza la variabile intera n a 1

// Finché n è minore o uguale a 100
//    Stampa "*"
//    Se n è multiplo di 10
//       Stampa un newline
//    Incrementa n di uno

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 1;
   
   while (n <= 100) {
   
      printf("%s", "*");
      
      if ((n % 10) == 0) {
         puts("");
      } // fine di if
      
      ++n;
   
   } // fine di while 

} // fine della funzione main
