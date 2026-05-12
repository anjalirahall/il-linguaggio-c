// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.22

// SEPARAZIONE DI CIFRE

// Scrivere una funzione che separa le cifre di un intero tra 1 e 32767

#include <stdio.h>

void printDigits(unsigned short int integer);

int main(void) {
   
   printDigits(14562);
   printDigits(4562);
   printDigits(562);
   printDigits(62);
   printDigits(1);

} // fine della funzione main

void printDigits(unsigned short int integer) {

   int started = 0;
   for (int i = 10000; i >= 1; i /= 10) {
      int digit = integer / i % 10;
      if (digit != 0 || 1 == started) {
         printf("%d  ", digit);
         started = 1;
      }
   }
   
   puts("");

} // fine della funzione printDigits
