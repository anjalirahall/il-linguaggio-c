// CAPITOLO 02
// ESERCIZI

// PAGINA 69
// ESERCIZIO 2.26

// SEPARAZIONE DELLE CIFRE DI UN INTERO

// Programma che separa le cifre di un intero

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter a five-digit integer: ");
	
	int z = 0;
	
	scanf("%d", &z);
	
	int U = z % 10; // units
	int T = z / 10 % 10; // tens
	int H = z / 100 % 10; // hundreds
	int Th = z / 1000 % 10; // thousands
	int TTh = z / 10000 % 10; // tens of thousands
	
	printf("%d   %d   %d   %d   %d\n", TTh, Th, H, T, U);

} // fine della funzione main
