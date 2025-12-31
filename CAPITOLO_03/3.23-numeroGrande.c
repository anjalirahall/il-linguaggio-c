// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.23

// TROVARE IL NUMERO PIÙ GRANDE

// Programma che determina il maggiore tra 10 numeri positivi

// PSEUDOCODICE

// Inizializza la variabile intera counter a uno
// Inizializza la variabile double number a zero
// Inizializza la variabile double largest a zero

// Finché counter è minore o uguale a 10
//    Stampa "Enter a non-negative number: "
//    Leggi il numero e memorizzalo in number

//    Se number è maggiore di largest
//       Assegna a largest il valore di number

//    Aumenta di uno il counter

// Stampa "The largest number is ..." (largest)

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int counter = 1;
   double number = 0;
   double largest = 0;

   while (counter <= 10) {

      printf("%s", "Enter a non-negative number: ");
      scanf("%lf", &number);

      if (number > largest) {
         largest = number;
      } // fine di if
      
      ++counter;

   } // fine di while
   
   printf("\nThe largest number is %f\n", largest);

} // fine della funzione main       
