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
	if (b < smallest) {
		smallest = b;
	} 
	if (c < smallest) {
		smallest = c;
	}
	
	int largest = a;
	int largestVariable = 1;
	if (b > largest) {
		largest = b;
	}
	if (c > largest) {
		largest = c;
	}
	
	int middle = a;
	if (smallest == middle) {
		middle = b;
	}
	if (largest == middle) {
		middle = b;
	}
	if (smallest == middle) {
		middle = c;
	}
	if (largest == middle) {
		middle = c;
	}
	
	printf("%d %d %d\n", smallest, middle, largest);
	
	
} // fine della funzione main
