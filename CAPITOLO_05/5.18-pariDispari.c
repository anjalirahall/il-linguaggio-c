// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.18

// PARI O DISPARI

// Scrivere una funzione che determini se un intero è pari o dispari

#include <stdio.h>

int isEven(int integer);

int main(void) {

   printf("Enter an integer, EOF to end: ");
   int n = 0;
   while (scanf("%d", &n) != EOF) {
      printf("%d", isEven(n));
      puts("");
      printf("Enter an integer, EOF to end: ");
   }

} // fine della funzione main

int isEven(int integer) {

   return ((integer % 2 == 0) ? 1 : 0);

} // fine della funzione isEven
