// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.38

// CONTARE I 7

// Programma che conta i 7 in un intero di 5 o meno cifre

// PSEUDOCODICE

// Inizializza la variabile n a 0

// Stampa "Enter an integer (max five digits): "
// Leggi il valore e memorizzalo in n

// Inizializza la variabile u a n % 10
// Inizializza la variabile t a n / 10 % 10
// Inizializza la variabile h a n / 100 % 10
// Inizializza la variabile Th a n / 1000 % 10
// Inizializza la variabile tTh a n / 10000 % 10

// Inizializza la variabile counter a zero

// Se u è doppio uguale a 7
//    Incrementa counter di uno
// Se t è doppio uguale a 7
//    Incrementa counter di uno
// Se h è doppio uguale a 7
//    Incrementa counter di uno
// Se Th è doppio uguale a 7
//    Incrementa counter di uno
// Se tTh è doppio uguale a 7
//    Incrementa counter di uno

// Stampa "The number contains ... sevens" (counter)

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 0;
   
   printf("%s", "Enter an integer (max five digits): ");
   scanf("%d", &n);
   
   int u = n % 10;
   int t = n / 10 % 10;
   int h = n / 100 % 10;
   int Th = n / 1000 % 10;
   int tTh = n / 10000 % 10;
   
   int counter = 0;
   
   if (u == 7) {
      ++counter;
   } // fine di if
   
   if (t == 7) {
      ++counter;
   } // fine di if
   
   if (h == 7) {
      ++counter;
   } // fine di if
   
   if (Th == 7) {
      ++counter;
   } // fine di if
   
   if (tTh == 7) {
      ++counter;
   } // fine di if
   
   printf("The number contains %d sevens\n", counter);
   
} // fine della funzione main
