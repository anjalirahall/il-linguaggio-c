// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.40

// MULTIPLI DI 2 CON UN CICLO INFINITO

// Programma che stampa i multipli di 2 con un ciclo infinito

// PSEUDOCODICE

// Inizializza la variabile n a 2

// Finché n è multiplo di 2
//    Assegna ad n il valore di n*2
//    Stampa n

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 2;
   
   while (n % 2 == 0) {
      
      printf("%d ", n);
      n *= 2;
   
   } // fine di while

} // fine della funzione main
