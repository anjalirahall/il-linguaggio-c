// CAPITOLO 04
// ESERCIZI

// PAGINA 149
//ESERCIZIO 4.15

// PROGRAMMA MODIFICATO PER L'INTERESSE COMPOSTO

// Programma che ripete il calcolo dell'interesse composto con diversi valori di tasso

#include <stdio.h>
#include <math.h>  

int main(void) {

   double principal = 1000.0; 
   
   for (int rate = 5; rate <= 10; ++rate) { 

      printf("%4s%21s %d%%\n", "Year", "Amount on deposit", rate);

      for (int year = 1; year <= 10; ++year) {

         double amount = principal * pow(1.0 + ((double) rate) / 100, year);

         printf("%4d%21.2f\n", year, amount);
         
      } // fine del for interno
      
      puts("");
      
   } // fine del for esterno
} // fine della funzione main
