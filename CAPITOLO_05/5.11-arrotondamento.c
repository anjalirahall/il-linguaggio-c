// CAPITOLO 05
// ESERCIZI

// PAGINA 202
// ESERCIZIO 5.11

// ARROTONDAMENTO

// Scrivere quattro funzioni che arrotondino x in diversi modi

#include <stdio.h>
#include <math.h>

double roundToInteger(double number);
double roundToTenths(double number);
double roundToHundreths(double number);
double roundToThousandths(double number);

int main(void) {

   printf("Enter a number, EOF to exit: ");
   double x = 0.0;

   while (scanf("%lf", &x) != EOF) { 
      printf("\nYour number: %f", x);
      printf("\nClosest Integer: %f", roundToInteger(x));
      printf("\nClosest Tenths: %f", roundToTenths(x));
      printf("\nClosest Hundreths: %f", roundToHundreths(x));
      printf("\nClosest Thousandths: %f\n", roundToThousandths(x));
      printf("Enter a number, EOF to exit: ");
   }

} // fine della funzione main

double roundToInteger(double number) {
   return floor(number + .5);
}

double roundToTenths(double number) {
   return floor(number * 10 + .5) / 10; 
}

double roundToHundreths(double number) {
   return floor(number * 100 + .5) / 100;
}

double roundToThousandths(double number) {
   return floor(number * 1000 + .5) / 1000;
}
