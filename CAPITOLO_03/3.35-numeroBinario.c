// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.35

// STAMPARE L'EQUIVALENTE DECIMALE DI UN NUMERO BINARIO

// Programma che stampa il valore decimale di un numero binario di 5 o meno cifre

// PSEUDOCODICE

// Inizializza la variabile bin a 0

// Stampa "Enter a binary integer (max five digits): "
// Leggi il valore e memorizzalo in bin

// Inizializza la variabile u a bin % 10
// Inizializza la variabile t a bin / 10 % 10
// Inizializza la variabile h a bin / 100 % 10
// Inizializza la variabile Th a bin / 1000 % 10
// Inizializza la variabile tTh a bin / 10000 % 10

// Inizializza la variabile intera dec a tTh * (2 * 2 * 2 * 2) + Th * (2 * 2 * 2) + h * (2 * 2) + t * 2 + u

// Stampa "The decimal equivalent of the binary number is ..." (dec)

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int bin = 0;
   
   printf("%s", "Enter a binary integer (max five digits): ");
   scanf("%d", &bin);
   
   int u = bin % 10;
   int t = bin / 10 % 10;
   int h = bin / 100 % 10;
   int Th = bin / 1000 % 10;
   int tTh = bin / 10000 % 10;
   
   int dec = tTh * (2 * 2 * 2 * 2) + Th * (2 * 2 * 2) + h * (2 * 2) + t * 2 + u;
   
   printf("\nThe decimal equivalent of the binary number is %d\n", dec);

} // fine della funzione main
