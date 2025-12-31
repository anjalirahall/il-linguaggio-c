// CAPITOLO 03
// ESERCIZI

// PAGINA 109
// ESERCIZIO 3.30

// PROBLEMA DELL'ELSE SOSPESO

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int x = 0;
   int y = 0;

   // a) x = 9 e y = 11
   puts("a) x = 9 e y = 11");
   x = 9;
   y= 11;
   if (x < 10)
      if (y > 10)
         puts("*****");
      else
         puts("#####");
   puts("$$$$$");
   
   // Stampa:
   // *****
   // $$$$$
   
   // a) x = 11 e y = 9
   puts("\na) x = 11 e y = 9");
   x = 11;
   y= 9;
   if (x < 10)
      if (y > 10)
         puts("*****");
      else
         puts("#####");
   puts("$$$$$");
   
   // Stampa:
   // $$$$$
   
   // b) x = 9 e y = 11
   puts("\nb) x = 9 e y = 11");
   x = 9;
   y = 11;
   if (x < 10) {
      if (y > 10)
         puts("*****");
   }
   else {
      puts("#####");
      puts("$$$$$");
   }
   
   // Stampa:
   // *****
   
   // b) x = 11 e y = 9
   puts("\nb) x = 11 e y = 9");
   x = 11;
   y = 9;
   if (x < 10) {
      if (y > 10)
         puts("*****");
   }
   else {
      puts("#####");
      puts("$$$$$");
   }
   
   // Stampa:
   // #####
   // $$$$$

} // fine della funzione main
