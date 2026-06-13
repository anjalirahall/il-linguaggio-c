// CAPITOLO 05
// ESERCIZI

// PAGINA 205
// ESERCIZIO 5.35

// FIBONACCI

// Scrivere una funzione non ricorsiva che calcoli l'ennesimo numero di fibonacci

#include <stdio.h>

unsigned long long int fibonacci(int n);

int main(void) {

   int position = 0;
   
   printf("%s", "Ask me any positioned Fibonacci number: ");
   scanf("%d", &position);
   
   printf("The %d-position Fibonacci number is: %lld\n", position, fibonacci(position));

} // fine della funzione main

unsigned long long int fibonacci(int n) {
   
   if (n == 1) {
      return 0;
   }
   if (n == 2) {
      return 1;
   }
   
   int a = 0;
   int b = 1;
   int s = a + b;
   
   for (int i = 4; i <= n; ++i) {
      a = b;
      b = s;
      s = a + b;
   } 
   
   return s;

} // fine della funzione fibonacci
