// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.39

// MODELLO DI SCACCHIERA DI ASTERISCHI

// Programma che stampa una configurazione a scacchiera

// PSEUDOCODICE

// Inizializza la variabile row a 1
// Inizializza la variabile column a 1

// Finché row è minore o uguale a 8
//    Assegna il valore 1 a column
//    Finché column è minore o uguale a 8
//       Se row è dispari
//          Stampa "* "
//       Se row è pari
//          Se column è doppio uguale a 1
//             Stampa " "
//             Stampa "* "
//          altrimenti
//             Stampa "* "
//       Incrementa column di 1
//    Stampa un newline
//    Incrementa row di uno

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int row = 1;
   int column = 1;
   
   while (row <= 8) {
   
      column = 1;
      
      while (column <= 8) {
      
         if (row % 2 == 1) {
            printf("%s", "* ");
         } // fine di if
         
         if (row % 2 == 0) {
            if (column == 1) {
               printf("%s", " ");
               printf("%s", "* ");
            } // fine dell'if interno
            else {
               printf("%s", "* ");
            } // fine di else
         
         } // fine di if
         
         ++column;
      
      } // fine del while interno
      
      puts("");
      ++row;
   } // fine del while esterno

} // fine della funzione main
