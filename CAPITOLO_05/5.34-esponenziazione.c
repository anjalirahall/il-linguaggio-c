// CAPITOLO 05
// ESERCIZI

// PAGINA 205
// ESERCIZIO 5.34

// ESPONENZIAZIONE RICORSIVA

// Scrivere una funzione che calcola una data potenza di una base

#include <stdio.h>

int power(int base, int exponent);

int main(void) {

   int b = 34;
   int e = 5;
   
   printf("%d to the power of %d is %d\n", b, e, power(b, e));

} // fine della funzione main

int power(int base, int exponent) {

   if (exponent == 1) {
      return base;
   }
   return (base * power(base, exponent - 1));

} // fine della funzione power
