// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.33

// NUMERALI ROMANI EQUIVALENTI DI VALORI DECIMALI

// PSEUDOCODICE

// Stampa l'intestazione

// Per n <- 1 fino a 100 passo 1
//    Stampa n
//    Per i <- 2 fino a 0 passo -1
//       Assegna a p il valore n * pow(10, i) % 10
//       Se p != 0
//          Se i == 2
//             Stampa "C"
//          Se i == 1
//             Se p è compreso tra 1 a 3
//                Per j <- 1 a p
//                   Stampa "X"
//             Se p è compreso tra 5 e 8
//                Stampa "L"
//                Per j <- 1 a p - 5
//                   Stampa "X"
//             Se p == 4
//                Stampa "XL"
//             Se p == 9
//                Stampa "XC"
//          Se i == 0
//             Se p è compreso tra 1 a 3
//                Per j <- 1 a p
//                   Stampa "I"
//             Se p è compreso tra 5 e 8
//                Stampa "V"
//                Per j <- 1 a p - 5
//                   Stampa "I"
//             Se p == 4
//                Stampa "IV"
//             Se p == 9
//                Stampa "IX"
//    Stampa un newline       

#include <stdio.h>
#include <math.h>

int main(void) {

   puts("dec   rom\n");

   for (int n = 1; n <= 100; ++n) {
      printf("%-6d", n);
      for (int i = 2; i >= 0; --i) {
         int p = n / ((int) pow(10, i)) % 10;
         if (p != 0) { 
            if (2 == i) {
               printf("%s", "C");
            } // fine del if
            if (1 == i) {
               if (p >= 1 && p <= 3) {
                  for (int j = 1; j <= p; ++j) {
		     printf("%s", "X");
                  } // fine del for
               } // fine del if
               if (p >= 5 && p <= 8) {
                  printf("%s", "L");
                  for (int j = 1; j <= p - 5; ++j) {
		     printf("%s", "X");
                  } // fine del for
               } // fine del if 
               if (4 == p) {
                  printf("%s", "XL");
               } // fine del if
               if (9 == p) {
                  printf("%s", "XC");
               } // fine del if
            } // fine del if
            if (0 == i) {
               if (p >= 1 && p <= 3) {
                  for (int j = 1; j <= p; ++j) {
		     printf("%s", "I");
                  } // fine del for
               } // fine del if
               if (p >= 5 && p <= 8) {
                  printf("%s", "V");
                  for (int j = 1; j <= p - 5; ++j) {
		     printf("%s", "I");
                  } // fine del for
               } // fine del if 
               if (4 == p) {
                  printf("%s", "IV");
               } // fine del if
               if (9 == p) {
                  printf("%s", "IX");
               } // fine del if
            } // fine del if
         } // fine del if esterno
      } // fine del for interno
      puts("");         
   } // fine del for esterno
} // fine della funzione main
         
