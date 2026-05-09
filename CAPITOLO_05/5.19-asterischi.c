// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.19

// QUADRATO DI ASTERISCHI

// Scrivere una funzione che stampi un quadrato di asterischi

#include <stdio.h>

void printSquare(int side);

int main(void) {

   printSquare(4);
   puts("");
   printSquare(9);
   

} // fine della funzione main

void printSquare(int side) {

   for (int i = 1; i <= side; ++i) {
      for (int j = 1; j <= side; ++j) {
         printf("%s", "*");
      }
      puts("");
   }

} // fine della funzione printSquare
