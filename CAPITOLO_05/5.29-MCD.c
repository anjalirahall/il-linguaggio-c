// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.29

// MASSIMO COMUN DIVISORE

// Scrivere una funzione che trova il massimo comun divisore tra due interi

#include <stdio.h>

int GCD(int a, int b);

int main(void) {

   int number1 = 0;
   int number2 = 0;
   
   printf("%s", "Give me two integers: ");
   scanf("%d %d", &number1, &number2);
   
   printf("The GCD of %d and %d is %d\n", number1, number2, GCD(number1, number2));
   
} // fine della funzione main

int GCD(int a, int b) {

   while (b > 0) {
      int remainder = a % b;
      a = b;
      b = remainder;
   }
   return a;

} // fine della funzione GCD
