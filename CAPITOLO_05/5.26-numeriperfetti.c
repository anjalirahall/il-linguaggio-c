// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.26

// NUMERI PERFETTI

// Scrivere una funzione che determina se un numero è perfetto

#include <stdio.h>

int isPerfect(int number);

int main(void) {

   for (int n = 1; n <= 1000; ++n) {
   
      if (isPerfect(n) == 1) {
         printf("factors of %d: ", n);
         for (int m = 1; m <= n - 1; ++m) {
            if (n % m == 0) {
               printf("%d ", m);
            }  
         }
         puts("");
      }
   }

} // fine della funzione main

int isPerfect(int number) {
   
   int sum = 0;
   
   for (int i = 1; i <= number - 1; ++i) {
      if (number % i == 0) {
         sum += i;
      }  
   }
   
   if (sum == number) {
      return 1;
   }
   else {
      return 0;
   }
   
} // fine della funzione isPerfect
