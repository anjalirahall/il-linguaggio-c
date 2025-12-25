// CAPITOLO 02
// ESERCIZI

// PAGINA 69
// ESERCIZIO 2.22

// PARI O DISPARI

// Programma che determina se un numero intero è pari o dispari

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter an integer: ");
	
	int z = 0;
	
	scanf("%d", &z);
	
	if (z % 2 == 0) {
		printf("%s", "The integer is even\n");
	}
	
	if (z % 2 != 0) {
		printf("%s", "The integer is odd\n");
	}

} // fine della funzione main
