// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.16

// ESPONENZIAZIONE

// Scrivere una funzione che calcola la potenza di una base

#include <stdio.h>

int integerPower(int base, unsigned int exponent);

int main(void) {

   printf("base: %d exponent: %u power: %d\n", 3, 4, integerPower(3, 4));

} // fine della funzione main

int integerPower(int base, unsigned int exponent) {

   int power = 1;
   
   for (int i = 1; i <= exponent; ++i) {
      power *= base;
   }
   
   return power;

} // fine della funzione integerPower
