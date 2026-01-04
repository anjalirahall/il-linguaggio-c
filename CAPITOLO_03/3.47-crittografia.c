// CAPITOLO 03
// ESERCIZI

// PAGINA 112
// ESERCIZIO 3.47

// FORZARE LA PRIVACY CON LA CRITTOGRAFIA

// Programma che crittografa un numero intero di quattro cifre

// PSEUDOCODICE

// Inizializza la variabile intera n a 0

// Stampa "Enter an integer: "
// Leggi il valore e memorizzalo in n

// Trova tutte le cifre del numero n e memorizzarle in u, t, h, Th, tTh

// Incrementa ogni cifra di 7

// Sostituisci ogni cifra con il resto della sua divisione per 10

// Scambia la prima cifra con la terza e la seconda con la quarta

// Stampa il numero finale

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int n = 0;
   
   printf("%s", "Enter a four-digit integer: ");
   scanf("%d", &n);
   
   int fourth = (n % 10 + 7) % 10;
   int third = (n / 10 % 10 + 7) % 10;
   int second = (n / 100 % 10 + 7) % 10;
   int first = (n / 1000 % 10 + 7) % 10;
   
   int new_first = third;
   int new_third = first;
   int new_second = fourth;
   int new_fourth = second;
   
   printf("\n%d%d%d%d\n", new_first, new_second, new_third, new_fourth);

} // fine della funzione main

   
