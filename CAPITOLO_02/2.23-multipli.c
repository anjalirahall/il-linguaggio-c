// CAPITOLO 02
// ESERCIZI

// PAGINA 69
// ESERCIZIO 2.23

// MULTIPLI

// Programma che determina se un intero è multiplo di un altro

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter two integers: ");
	
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	
	if (a % b == 0) {
		printf("%d is a multiple of %d\n", a, b);
	}
	
	if (a % b != 0) {
		printf("%d is not a multiple of %d\n", a, b);
	}

} // fine della funzione main
