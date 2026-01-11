// CAPITOLO 04
// ESERCIZI

// PAGINA 148
// ESERCIZIO 4.9

// SOMMA DI UNA SEQUENZA DI INTERI

// Programma che somma una sequenza di interi

// PSEUDOCODICE

// Inizializza la variabile intera count a zero

// Stampa il prompt "Enter the number of integers you would like to sum: "
// Leggi il valore e memorizzalo in count

// Inizializza la variabile intera number a zero 
// Inizializza la variabile intera sum a zero

// Inizializza la variabile intera n a uno
// Finché n è minore e uguale a count 
//    Stampa il prompt "Enter an integer: "
//    Leggi il valore e memorizzalo in number
//    Aggiungi number a sum
//    Incrementa n di uno

// Stampa "The sum is ..." (sum)

#include <stdio.h>

int main(void) {

   int count = 0;

   printf("%s", "Enter the number of integers you would like to sum: ");
   scanf("%d", &count);

   int number = 0;
   int sum = 0;

   for (int n = 1; n <= count; ++n) {
      printf("%s", "Enter an integer: ");
      scanf("%d", &number);
      sum += number;
   } // fine di for

   printf("\nThe sum is %d\n", sum);   

} // fine della funzione main




