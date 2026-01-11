// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.11

// TROVARE IL VALORE PIÙ PICCOLO

// Programma che trova il valore più piccolo tra un insieme di interi

#include <stdio.h>

int main(void) {

   int count = 0;

   printf("%s", "Enter the number of integers you would like to consider: ");
   scanf("%d", &count);
   
   int number = 0;
   int smallest = 0;
   
   if (count >= 1) {
      for (int n = 1; n <= count; n++) {
       
         printf("%s", "Enter an integer: ");
         scanf("%d", &number);
          
         if (n == 1 || number < smallest) {
            smallest = number;
         } // fine di if
       
      } // fine di for
       
      printf("\nThe smallest integer is %d\n", smallest);

   } // fine di if
   
   else {
   
      puts("\nNo integers entered!");
   
   } // fine di else

} // fine della funzione main

