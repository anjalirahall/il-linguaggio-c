// CAPITOLO 03
// ESERCIZI

// PAGINA 112
// ESERCIZIO 3.43

// LATI DI UN TRIANGOLO

// Programma che determina se tre numeri interi possono costituire le lunghezze dei lati di un triangolo

// PSEUDOCODICE

// Inizializza la variabile intera a a zero
// Inizializza la variabile intera b a zero
// Inizializza la variabile intera c a zero

// Stampa "Enter three positive integers: "
// Leggi i valori e memorizzali in a, b e c

// Se è vera la disuguaglianza triangolare per ogni lunghezza
//    Stampa "The integers can be the three sides of a triangle"
// altrimenti
//    Stampa "The integers cannot be the three sides of a triangle"

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int a = 0;
   int b = 0;
   int c = 0;
   
   printf("%s", "Enter three positive integers: ");
   scanf("%d %d %d", &a, &b, &c);
   
   if ((a < b + c) * (b < a + c) * (c < a + b)) {
      puts("\nThe integers can be the three sides of a triangle");
   } // fine di if
   
   else {
      puts("\nThe integers cannot be the three sides of a triangle");
   } // fine di else

} // fine della funzione main
