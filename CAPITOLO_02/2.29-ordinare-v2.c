// CAPITOLO 02
// ESERCIZI

// PAGINA 70
// ESERCIZIO 2.29

// ORDINARE IN ORDINE CRESCENTE

// Programma che ordina in ordine crescente tre interi diversi

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter three different integers: ");
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int smallest = a;
	int smallestVariable = 1;
	if (b < smallest) {
		smallest = b;
		smallestVariable = 2;
	} 
	if (c < smallest) {
		smallest = c;
		smallestVariable = 3;
	}
	
	int largest = a;
	int largestVariable = 1;
	if (b > largest) {
		largest = b;
		largestVariable = 2;
	}
	if (c > largest) {
		largest = c;
		largestVariable = 3;
	}
	
	int middle = a;
	if (smallestVariable + largestVariable == 3) {
		middle = c;
	}
	if (smallestVariable + largestVariable == 4) {
		middle = b;
	}
	
	printf("%d %d %d\n", smallest, middle, largest);
	
	
} // fine della funzione main
