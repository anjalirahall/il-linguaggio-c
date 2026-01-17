// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.23

// CALCOLO CON INTERI DELL'INTERESSE COMPOSTO

#include <stdio.h>

int main(void) {

   long long principal = 100000;
   int rate = 5;

   printf("%4s%21s\n", "Year", "Amount on deposit");

   for (int year = 1; year <= 10; ++year) {

      principal += principal * rate / 100;
      
      int dollars = principal / 100;
      int cents = principal % 100;

      printf("%4d%18d.%02d\n", year, dollars, cents);
      
   } // fine del for
   
} // fine della funzione main
