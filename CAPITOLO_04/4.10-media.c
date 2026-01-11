// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.10

// CALCOLARE LA MEDIA DI UNA SEQUENZA DI INTERI

// Programma che calcola la media di una sequenza di interi

// PSEUDOCODICE

// Inizializza la variabile intera n a zero
// Inizializza la variabile intera sum a zero
// Inizializza la variabile count a zero

// Fai
//    Stampa il prompt "Enter an integer: "
//    Leggi il valore e memorizzalo in n
//    Somma n a sum
//    Incrementa count di uno
// Finché n è diverso da 9999

// Inizializza la variabile intera average e assegnale il valore sum/count

// Stampa "The average is ..." (average)

#include <stdio.h>

int main(void) {

   int n = 0;
   int sum = 0;
   int count = 0;
   
   do {
      printf("%s", "Enter an integer: ");
      scanf("%d", &n);
      if (n != 9999) {
         sum += n;
         count++;
      } // fine di if
   } while (n != 9999);
   
   if (count != 0) {
      double average = (double) sum / count;
      printf("\nThe average is %f\n", average);
   } // fine di if
   else {
      puts("\nNo integers entered!");
   } // fine di else
   
} // fine della funzione main
 
