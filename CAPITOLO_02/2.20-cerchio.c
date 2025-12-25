// CAPITOLO 02
// ESERCIZI

// PAGINA 69
// ESERCIZIO 2.20

// AREA, DIAMETRO E CIRCONFERENZA DI UN CERCHIO

// Programma che stampa il diametro, la circonferenza e l'area di un cerchio di raggio uguale a 2

#include <stdio.h>

// inizio della funzione main
int main(void) {

	int radius = 2;
	
	printf("The diametre's lenght is %d\n", 2 * radius);
	printf("The circumference's lenght is %f\n", 2 * 3.14159 * radius);
	printf("The circle's area is %f\n", 3.14159 * radius * radius);

} // fine della funzione main
