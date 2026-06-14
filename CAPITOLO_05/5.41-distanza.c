// CAPITOLO 05
// ESERCIZI

// PAGINA 206
// ESERCIZIO 5.41

// DISTANZA TRA DUE PUNTI

// Scrivere una funzione che calcola la distanza tra due punti

#include <stdio.h>
#include <math.h>

double distance(double x1, double y1, double x2, double y2);

int main(void) {
   
   double a1 = 0;
   double b1 = 0;
   double a2 = 0;
   double b2 = 0;   
   
   printf("Insert the coordinates of the two points (a1 b1 a2 b2): ");
   
   scanf("%lf %lf %lf %lf", &a1, &b1, &a2, &b2);
   
   printf("The distance between the two points is %.2f\n", distance(a1, b1, a2, b2));

} // fine della funzione main

double distance(double x1, double y1, double x2, double y2) {

   return sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

} // fine della funzione distance
