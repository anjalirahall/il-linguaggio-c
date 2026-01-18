// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.30

// SOSTITUZIONE DI SWITCH CON IF...ELSE

// Programma che modifica l'esempio fig 04 05 con una serie di if

#include <stdio.h>

int main(void) {
   int aCount = 0;
   int bCount = 0; 
   int cCount = 0; 
   int dCount = 0; 
   int fCount = 0; 

   puts("Enter the letter grades.");
   puts("Enter the EOF character to end input.");
   int grade = 0;

   while ((grade = getchar()) != EOF) {

      if ('A' == grade || 'a' == grade) { 
         ++aCount;
         continue; 
      } // fine di if
      if ('B' == grade || 'b' == grade) {
         ++bCount;
         continue; 
      } // fine di if
      if ('C' == grade || 'c' == grade) {
         ++cCount;
         continue; 
      } // fine di if
      if ('D' == grade || 'd' == grade) {
         ++dCount;
         continue; 
      } // fine di if
      if ('F' == grade || 'f' == grade) {
         ++fCount;
         continue; 
      } // fine di if
      if (('\n' == grade || '\t' == grade) || ' ' == grade) {
         continue; 
      } // fine di if
  
      printf("%s", "Incorrect letter grade entered."); 
      puts(" Enter a new grade."); 
      
   } // fine del while
   
   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", aCount);
   printf("B: %d\n", bCount); 
   printf("C: %d\n", cCount); 
   printf("D: %d\n", dCount); 
   printf("F: %d\n", fCount); 
}
