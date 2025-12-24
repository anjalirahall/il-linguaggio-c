// CAPITOLO 02
// ESERCIZI

// PAGINA 68
// ESERCIZIO 2.18

// CONFRONTO DI INTERI

// Programma che confronta due interi

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter two integers: ");
	
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	
	if (a > b) {
		printf("%d is larger\n", a);
	}
	
	if (a < b) {
		printf("%d is larger\n", b);
	}
	
	if (a == b) {
		printf("%s", "These numbers are equal\n");
	}
	
} // fine della funzione main
