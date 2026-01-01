// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.34

// TESTER DI PALINDROMI

// Programma che determina se un numero intero di 5 cifre è palindromo

// PSEUDOCODICE

// Inizializza la variabile n a zero

// Stampa "Enter a five-digit integer: "
// Leggi il valore e memorizzalo in n

// Inizializza la variabile u a n % 10
// Inizializza la variabile t a n / 10 % 10
// Inizializza la variabile h a n / 100 % 10
// Inizializza la variabile Th a n / 1000 % 10
// Inizializza la variabile tTh a n / 10000 % 10

// Se u è doppio uguale a tTh e t è doppio uguale a Th
//    Stampa "The number is a palindrome!"
// altrimenti
//    Stampa "The number is not a palindrome!"

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 0;
   
   printf("%s", "Enter a five-digit integer: ");
   scanf("%d", &n);
   
   int u = n % 10;
   int t = n / 10 % 10;
   int h = n / 100 % 10;
   int Th = n / 1000 % 10;
   int tTh = n / 10000 % 10;
   
   if ((u == tTh) * (t == Th)) {
      puts("\nThe number is a palindrome!");
   } // fine di if
   else {
      puts("\nThe number is not a palindrome!");
   } // fine di else
   
} // fine della funzione main
