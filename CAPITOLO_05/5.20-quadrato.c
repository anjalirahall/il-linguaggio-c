// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.20

// STAMPARE UN QUADRATO DI UN QUALUNQUE CARATTERE

// Scrivere una funzione che stampa un quadrato di un qualunque carattere

#include <stdio.h>

void printAnySquare(int side, char fillCharacter);

int main(void) {

   printAnySquare(5, '#');
   puts("");
   printAnySquare(9, '@');
   

} // fine della funzione main

void printAnySquare(int side, char fillCharacter) {

   for (int i = 1; i <= side; ++i) {
      for (int j = 1; j <= side; ++j) {
         printf("%c", fillCharacter);
      }
      puts("");
   }

} // fine della funzione printSquare
