// CAPITOLO 03
// ESERCIZI

// PAGINA 110
// ESERCIZIO 3.32

// QUADRATO DI ASTERISCHI

// Programma che stampa un quadrato di lato tra 1 e 20 fatto di asterischi

// PSEUDOCODICE

// Inizializza la variabile int row a 1
// Inizializza la variabile int column a 1
// Inizializza la variabile int sideLength a 0

// Stampa "Enter the side length of the square (between 1 and 20): "
// Leggi il valore e salvarlo in sideLength

// Finché row è minore o uguale a sideLength
//    Assegna a column il valore di 1
//    Finché column è minore o uguale a sideLength
//       Stampa "*"
//       Incrementa column di uno
//    Stampa una nuova riga
//    Incrementa row di uno

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int row = 1;
   int column = 1;
   int sideLength = 0;

   printf("%s", "Enter the side length of the square (between 1 and 20): ");
   scanf("%d", &sideLength);

   while (row <= sideLength) {
      column = 1;
      while (column <= sideLength) {
         printf("%s", "*");
         ++column;
      } // fine del while interno
      puts("");
      ++row;   
   } // fine del while esterno 
   
} // fine della funzione main
