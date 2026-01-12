// CAPITOLO 04
// ESERCIZI

// PAGINA 150
// ESERCIZIO 4.18

// PROGRAMMA CHE STAMPA UN GRAFICO A BARRE

// Programma che stampa un grafico a barre dati cinque numeri tra 1 e 30

#include <stdio.h>

int main(void) {

   for (int row = 1; row <= 5; ++row) {
      
      int number = 0;
      printf("Enter an integer between 1 and 30: ");
      scanf("%d", &number);
      
      while (number <= 0 || number >= 31) {
         printf("Invalid input. Enter an integer between 1 and 30: ");
         scanf("%d", &number);
      }
      
      for (int column = 1; column <= number; ++column) {
         printf("%s", "*");
      } // fine del for interno
   
      puts("");
   
   } // fine del for esterno

} // fine della funzione main
