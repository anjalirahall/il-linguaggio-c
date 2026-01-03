// CAPITOLO 03
// ESERCIZI

// PAGINA 112
// ESERCIZIO 3.44

// LATI DI UN TRIANGOLO RETTANGOLO

// Programma che determina se tre numeri interi possono essere le lunghezze dei lati di un triangolo rettangolo

// PSEUDOCODICE

// Inizializza la variabile intera a a zero
// Inizializza la variabile intera b a zero
// Inizializza la variabile intera c a zero

// Stampa "Enter three positive integers: "
// Leggi i valori e memorizzali in a, b e c

// Se vale il teorema di Pitagora per almeno una lunghezza
//    Stampa "The integers can be the three sides of a right triangle"
// altrimenti
//    Stampa "The integers cannot be the three sides of a right triangle"

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int a = 0;
   int b = 0;
   int c = 0;
   
   printf("%s", "Enter three positive integers: ");
   scanf("%d %d %d", &a, &b, &c);
   
   if ((a * a == b * b + c * c) + (b * b == a * a + c * c) + (c * c == a * a + b * b)) {
      puts("\nThe integers can be the three sides of a right triangle");
   } // fine di if
   
   else {
      puts("\nThe integers cannot be the three sides of a right triangle");
   } // fine di else

} // fine della funzione main
