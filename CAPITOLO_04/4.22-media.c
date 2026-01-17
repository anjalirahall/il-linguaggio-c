// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.22

// CALCOLO DELLA MEDIA DEI VOTI

// Programma che riscrive l'esempio fig 04 05

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
      switch (grade) { // switch nested in while
         case 'A': // grade was uppercase A
         case 'a': // or lowercase a
            ++aCount; 
            break; // necessary to exit switch
         case 'B': // grade was uppercase B
         case 'b': // or lowercase b
            ++bCount; 
            break; 
         case 'C': // grade was uppercase C
         case 'c': // or lowercase c
            ++cCount; 
            break;
         case 'D': // grade was uppercase D
         case 'd': // or lowercase d
            ++dCount; 
            break;
         case 'F': // grade was uppercase F
         case 'f': // or lowercase f
            ++fCount; 
            break; 
         case '\n': // ignore newlines,
         case '\t': // tabs,
         case ' ': // and spaces in input
            break; 
         default: // catch all other characters
            printf("%s", "Incorrect letter grade entered."); 
            puts(" Enter a new grade."); 
            break; // optional; will exit switch anyway
      } // end switch 
   } // end while

   // output summary of results
   int average = (5 * aCount + 4 * bCount + 3 * cCount + 2 * dCount + 1 * fCount) / (aCount + bCount + cCount + dCount + fCount);
   puts("\nThe average of the class is: ");
   
   switch (average) {
   
      case 5:
         puts("A");
         break;
         
      case 4:
         puts("B");
         break;
         
      case 3:
         puts("C");
         break;
         
      case 2:
         puts("D");
         break;
         
      case 1:
         puts("F");
         break;
   
   } // end switch
   
}
