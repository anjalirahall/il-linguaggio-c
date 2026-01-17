// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.26

// CALCOLO DEL VALORE DI π

// Programma che calcola il valore di π in base ad una serie infinita

#include <stdio.h>

int main(void) {

   double pi = 0.0;
   
   printf("%s\t%7s\n\n", "n", "pi");
   
   for (int n = 1;; ++n) {
   
      if (n % 2 == 1) {
         pi += (double) 4 / (2 * n - 1); 
      } // fine di if
      
      else {
         pi -= (double) 4 / (2 * n - 1);
      } // fine di else
      
      printf("%d\t%7f\n", n, pi);
      
      if (pi <= 3.141599 && pi >= 3.14159) {
         break;
      } // fine di if 
   
   } // fine di while

} // fine della funzione main
