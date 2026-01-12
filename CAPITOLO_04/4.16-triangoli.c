// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.16

// PROGRAMMA CHE STAMPA TRIANGOLI

// Programma che stampa varie forme di triangoli di asterischi

#include <stdio.h>

int main(void) {

   puts("A)");
   
   for (int row = 1; row <= 10; ++row) {
      
      for (int column = 1; column <= row; ++column) {
      
         printf("%s", "*");
      
      } // fine del for interno
   
      puts("");
   
   } // fine del for esterno
   
   
   puts("B)");
   
   for (int row = 1; row <= 10; ++row) {
      
      for (int column = 10; column >= row; --column) {
      
         printf("%s", "*");
      
      } // fine del for interno
   
      puts("");
   
   } // fine del for esterno
   
   
   puts("C)");
   
   for (int row = 1; row <= 10; ++row) {
   
      for (int space = 1; space <= row - 1; ++space) {
      
         printf("%s", " ");
      
      } // fine del for interno
      
      for (int column = 10; column >= row; --column) {
      
         printf("%s", "*");
      
      } // fine del for interno
   
      puts("");
   
   } // fine del for esterno  
   
   
   puts("D)");
   
   for (int row = 1; row <= 10; ++row) {
   
      for (int space = 10; space >= row + 1; --space) {
      
         printf("%s", " ");
      
      } // fine del for interno
      
      for (int column = 1; column <= row; ++column) {
      
         printf("%s", "*");
      
      } // fine del for interno
   
      puts("");
   
   } // fine del for esterno 

} // fine della funzione main
