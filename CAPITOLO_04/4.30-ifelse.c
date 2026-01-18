// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.30

// SOSTITUZIONE DI SWITCH CON IF...ELSE

// Programma che modifica l'esempio fig 04 05 con una serie di if...else annidati

#include <stdio.h>

int main(void) {
   int aCount = 0;
   int bCount = 0; 
   int cCount = 0; 
   int dCount = 0; 
   int fCount = 0; 

   puts("Enter the letter grades.");
   puts("Enter the EOF character to end input.");
   int grade = 0; // one grade 

   // loop until user types end-of-file key sequence
   while ((grade = getchar()) != EOF) {

      // determine which grade was input
      if ('A' == grade || 'a' == grade) { 
            ++aCount; 
      } // fine di if
      else if ('B' == grade || 'b' == grade) {
            ++bCount; 
      } // fine di else if
      else if ('C' == grade || 'c' == grade) {
            ++cCount; 
      } // fine di else if
      else if ('D' == grade || 'd' == grade) {
            ++dCount; 
      } // fine di else if
      else if ('F' == grade || 'f' == grade) {
            ++fCount; 
      } // fine di else if
      else if (('\n' == grade || '\t' == grade) || ' ' == grade) {
         continue; 
      } // fine di else if
      else {
         printf("%s", "Incorrect letter grade entered."); 
         puts(" Enter a new grade."); 
         continue;
      } // fine del else
   } // fine del while
   
   puts("\nTotals for each letter grade are:");
   printf("A: %d\n", aCount);
   printf("B: %d\n", bCount); 
   printf("C: %d\n", cCount); 
   printf("D: %d\n", dCount); 
   printf("F: %d\n", fCount); 
}


