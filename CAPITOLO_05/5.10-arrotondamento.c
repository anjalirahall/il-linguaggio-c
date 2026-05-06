// CAPITOLO 05
// ESERCIZI

// PAGINA 202
// ESERCIZIO 5.10

// ARROTONDAMENTO

// Arrotondamento con la funzione floor

#include <stdio.h>
#include <math.h>

int main(void) {

   printf("Enter a number, EOF to exit: ");
   double x = 0.0;

   while (scanf("%lf", &x) != EOF) { 
      int y = (int) floor(x + .5);
      printf("\nYour number: %f Closest integer: %d\n", x, y);
      printf("Enter a number, EOF to exit: ");
   }

} // fine della funzione main
