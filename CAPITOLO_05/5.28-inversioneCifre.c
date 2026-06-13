// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.28

// INVERSIONE DI CIFRE

// Scrivere una funzione che dato un valore intero restituisce il numero con le sue cifre invertite

#include <stdio.h>

int invertDigits(int number);

int main(void) {
   
   int n = 3450671;
   
   printf("The number %d inverted is %d\n", n, invertDigits(n));

} // fine della funzione main

int invertDigits(int number) {

   int invertedNumber = 0;
   
   while (number > 0) {
      int lastDigit = number % 10;
      invertedNumber = invertedNumber * 10 + lastDigit;
      number /= 10;
   }
   
   return invertedNumber;

} // fine della funzione invertDigits
