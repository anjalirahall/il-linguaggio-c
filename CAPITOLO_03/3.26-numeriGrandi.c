// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.26

// TROVARE I DUE NUMERI PIÙ GRANDI

// Programma che trova i due numeri più grandi fra 10 numeri positivi

// PSEUDOCODICE

// Inizializza la variabile intera counter a uno
// Inizializza la variabile double number a zero
// Inizializza la variabile double largest a zero
// Inizializza la variabile secondLargest a zero

// Finché counter è minore o uguale a 10
//    Stampa "Enter a non-negative number: "
//    Leggi il numero e memorizzalo in number

//    Se number è maggiore di largest
//       Assegna a secondLargest il valore di largest
//       Assegna a largest il valore di number 

//    altrimenti
//       Se number è maggiore di secondLargest
//          Assegna a secondLargest il valore di number     

//    Aumenta di uno il counter

// Stampa "The largest number is ..." (largest)
// Stampa "The second largest number is ..." (secondLargest)

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int counter = 1;
   double number = 0;
   double largest = 0;
   double secondLargest = 0;

   while (counter <= 10) {
   
      printf("%s", "Enter a non-negative number: ");
      scanf("%lf", &number);

      if (number > largest) {
         secondLargest = largest;
         largest = number;      
      } // fine di if
      
      else if (number > secondLargest) {
         secondLargest = number;
      } // fine di else if
      
      counter += 1;

   } // fine di while

   printf("\nThe largest number is %f\n", largest);
   printf("The second largest number is %f\n", secondLargest);

} // fine della funzione main
