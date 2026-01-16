// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.25

// TABELLA DI EQUIVALENZE TRA DECIMALI, BINARI, OTTALI ED ESADECIMALI

// Programma che stampa i valori da 1 a 256 nei sistemi decimale, binario, ottale ed esadecimale

#include <stdio.h>

int main(void) {

   printf("dec\t%-9s\toct\texa\n", "bin");
   
   for (int n = 1; n <= 256; ++n) {
   
      printf("%d\t", n);
      
      printf("%d", n / 256);
      
      for (int i = 256; i >= 2; i /= 2) {
         printf("%d", n % i / (i / 2));
      } // fine del for interno
      
      printf("\t%o\t%X\n", n, n);
   
   } // fine del for esterno

} // fine della funzione main
