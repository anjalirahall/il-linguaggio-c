// CAPITOLO 03
// ESERCIZI

// PAGINA 110
// ESERCIZIO 3.33

// QUADRATO DI ASTERISCHI VUOTO

// Programma che stampa un quadrato di asterischi vuoto

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
         if ((row != 1) * (row != sideLength) * (column != 1) * (column != sideLength)) {
            printf("%s", " ");
         } // fine di if
         else {
            printf("%s", "*");
         } // fine di else
         ++column;
      } // fine del while interno
      puts("");
      ++row;   
   } // fine del while esterno 
   
} // fine della funzione main
