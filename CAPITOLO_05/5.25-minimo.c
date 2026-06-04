// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.25

// TROVARE IL MINIMO

// Scrivere una funzione che trova il minimo di tre numeri in virgola mobile

#include <stdio.h>

double minimum(double x, double y, double z);

int main(void) {
   
   double a = 3.12;
   double b = 0.1;
   double c = 23;
   
   printf("minimum of %f %f %f: %f\n", a, b, c, minimum(a, b, c));

} // fine della funzione main

double minimum(double x, double y, double z) {

   double minimum = x;
   
   if (y < minimum) {
      minimum = y;
   }
   
   if (z < minimum) {
      minimum = z;
   }
   
   return minimum;

} // fine della funzione minimum
