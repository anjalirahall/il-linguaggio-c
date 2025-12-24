// CAPITOLO 02
// ESERCIZI

// PAGINA 68
// ESERCIZIO 2.18

// CONFRONTO DI INTERI

// Scrivete un programma che legga due interi inseriti dall'utente e quindi stampi il numero maggiore seguito dalle parole "is larger". Se i due numeri sono uguali, stampate il messaggio "These numbers are equal". Usate solamente la forma a selezione singola dell'istruzione if che avete imparato in questo capitolo.

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
