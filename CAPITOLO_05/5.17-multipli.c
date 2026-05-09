// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.17

// MULTIPLI

// Scrivere una funzione che determina se un intero è multiplo di un altro

#include <stdio.h>

int isMultiple(int a, int b);

int main(void) {

   printf("a: %d b: %d multiple: %d\n", 3, 12, isMultiple(3, 12));
   printf("a: %d b: %d multiple: %d\n", 5, 178, isMultiple(5, 178));
   printf("a: %d b: %d multiple: %d\n", 12, 144, isMultiple(12, 144));
   
} // fine della funzione main

int isMultiple(int a, int b) {

   if (b % a == 0) {
      return 1;
   }
   else {
      return 0;
   }
   
} // fine della funzione isMultiple
