// CAPITOLO 03
// ESERCIZI

// PAGINA 108
// ESERCIZIO 3.27

// CONVALIDARE L'INPUT DELL'UTENTE

//  Programma che rivede l'esempio 03_06 con convalida dell'input dell'utente

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {
	// inizializza le variabili nelle definizioni
	int passes = 0;
	int failures = 0;
	int student = 1;

	// processa 10 studenti usando un ciclo controllato da contatore
	while (student <= 10) {
		// richiedi all'utente un valore in ingresso
		printf("%s", "Enter result (1=passed, 2 =failed): ");
		int result = 0; // risultato di un esame
		scanf("%d", &result);
		
		while ((result != 1) * (result != 2)) {
		        printf("%s", "Wrong input. Enter result (1=passed, 2 =failed): ");
			scanf("%d", &result);
		} // fine di while

		// se il risultato è 1, incrementa il numero di promozioni
		if (result == 1) {
			passes = passes + 1;
		} // fine di if
		else { // altrimenti, incrementa il numero di bocciature
			failures = failures + 1;
		} // fine di else

		student = student + 1; // incrementa il contatore degli studenti
	} // fine di while

	// fase di terminazione; stampa i risultati
	printf("Passed: %d\n", passes);
	printf("Failed: %d\n", failures);

	// se sono stati promossi più di 8 studenti, stampa "Bonus to instructor!"
	if (passes > 8) {
		puts("Bonus to instructor!");
	} // fine di if
} // fine della funzione main
