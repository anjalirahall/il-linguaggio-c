// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.27

// NUMERI PRIMI

// Scrivere una funzione che determina se un numero è primo

#include <stdio.h>

int isPrime(int number);

int main(void) {
   
   printf("%s", "Prime Numbers\n");
   
   for (int n = 1; n <= 10000; ++n) {
      if (isPrime(n) == 1) {
         printf("%d\n", n);
      }
   }

} // fine della funzione main

int isPrime(int number) {

   if (number <= 1) {
      return 0;
   }
   
   for (int i = 2; i * i <= number; ++i) {
      if (number % i == 0) {
         return 0;
      } 
   }
   
   return 1;
   
} // fine della funzione isPrime
