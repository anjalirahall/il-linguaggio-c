// CAPITOLO 05
// ESERCIZI

// PAGINA 202
// ESERCIZIO 5.15

#include <stdio.h>
#include <math.h>

double hypotenuse(double side1, double side2);

int main(void) {

   printf("side1: %.1f side2: %.1f hypotenuse: %.1f\n", 3.0, 4.0, hypotenuse(3.0, 4.0));
   printf("side1: %.1f side2: %.1f hypotenuse: %.1f\n", 5.0, 12.0, hypotenuse(5.0, 12.0));
   printf("side1: %.1f side2: %.1f hypotenuse: %.1f\n", 8.0, 15.0, hypotenuse(8.0, 15.0));
   
} // fine della funzione main

double hypotenuse(double side1, double side2) {

   return sqrt(side1 * side1 + side2 * side2);

} // fine della funzione hypotenuse
