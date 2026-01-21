// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.31

// PROGRAMMA CHE STAMPA UN ROMBO

// PSEUDOCODICE

// Per row <- 1 fino a 4 passo 1 fare
//    Per i <- row fino a 4 passo 1 fare
//       Stampa " "
//    Per j <- 1 fino a 2 * row -1 passo 1 fare
//       Stampa "*"
//    Per k <- row fino a 4 passo 1 fare
//       Stampa " "
//    Stampa "\n"
// Per stars <- 1 fino a 9 passo 1 fare
//    Stampa "*"
// Stampa "\n"
// Per row <- 4 fino a 1 passo -1 fare
//    Per i <- 4 fino a row passo -1 fare
//       Stampa " "
//    Per j <- 2 * n - 1 fino a 1 passo -1 fare
//       Stampa "*"
//    Per k <- 4 fino a row passo -1 fare
//       Stampa " "
//    Stampa "\n"

#include <stdio.h>

int main(void) {

   for (int row = 1; row <= 4; ++row) { 
      for (int i = row; i <= 4; ++i) {
         printf("%s", " ");
      } // fine del for interno
      for (int j = 1; j <= 2 * row -1; ++j) {
         printf("%s", "*");
      } // fine del for interno
      for (int k = row; k <= 4; ++k) {
         printf("%s", " ");
      } // fine del for interno
      puts("");
   } // fine del primo for

   for (int stars = 1; stars <= 9; ++stars) {
      printf("%s", "*");
   } // fine del secondo for
   puts("");
   
   for (int row = 4; row >= 1; --row) { 
      for (int i = 4; i >= row; --i) {
         printf("%s", " ");
      } // fine del for interno
      for (int j = 2 * row -1; j >= 1; --j) {
         printf("%s", "*");
      } // fine del for interno
      for (int k = 4; k >= row; --k) {
         printf("%s", " ");
      } // fine del for interno
      puts("");
   } // fine del terzo for

} // fine della funzione main
