// CAPITOLO 05
// ESERCIZI

// PAGINA 201
// ESERCIZIO 5.9

// COSTO DEL PARCHEGGIO

// Calcolare il costo del parcheggio per tre clienti

#include <stdio.h>

float calculateCharges(float hours);

int main(void) {
   
   printf("Enter the hours of the three clients: ");
   
   float a = 0.0;
   float b = 0.0;
   float c = 0.0;
   
   scanf("%f %f %f", &a, &b, &c);
   
   printf("%8s%8s%8s\n", "Cars", "Hours", "Charge");

   for (int client = 1; client <= 3; ++client) {
      float hours = (client == 1 ? a : ((client == 2) ? b : c));
      printf("%8d%8.1f%8.2f\n", client, hours, calculateCharges(hours));
   }
   
   printf("%8s%8.1f%8.2f\n", "TOTAL", a + b + c, calculateCharges(a) + calculateCharges(b) + calculateCharges(c));

} // fine della funzione main

float calculateCharges(float hours) {

   if (hours > 0.0 && hours <= 3.0) {
      return 2.00;
   }
   else if (hours > 3.0 && hours < 24.0) {
      return 2.00 + 0.50 * (hours - 3.0);
   }
   else {
      return 10.00;
   }
} // fine della funzione calculateCharges
