// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.27

// TRIPLE PITAGORICHE

// Programma che trova tutte le triple pitagoriche minori uguali di 500

// PSEUDOCODICE

// Stampa una intestazione

// Per i <- 1 fino a 500 passo 1 fare
//    Per j <- 1 fino a 500 passo 1 fare
//       Per k <- 1 fino a 500 passo 1 fare
//          Se i * i + j * j == k * k
//             Stampa i, j, k

#include <stdio.h>

int main(void) {

   printf("%3s\t%3s\t%3s\n\n", "i", "j", "k");

   for (int i = 1; i <= 500; ++i) {
   
      for (int j = 1; j <= 500; ++j) {
      
         for (int k = 1; k <= 500; ++k) {
            
            if (i * i + j * j == k * k) {
               printf("%3d\t%3d\t%3d\n", i, j, k);
            } // fine del if
            
         } // fine del for interno
      
      } // fine del for intermedio
   
   } // fine del for esterno

} // fine della funzione main
