// CAPITOLO 05
// ESERCIZI

// PAGINA 206
// ESERCIZIO 5.39

// MASSIMO COMUN DIVISORE RICORSIVO

// Scrivere una funzione ricorsiva che calcola il MCD tra due interi

#include <stdio.h>

int gcd(int x, int y);

int main(void) {

   int a = 45;
   int b = 18;
   
   printf("gcd(%d, %d) = %d\n", a , b, gcd(a, b));

} // fine della funzione main

int gcd(int x, int y) {

   if (y == 0) {
      return x;
   }
   
   return gcd(y, x % y);

} // fine della funzione gcd
