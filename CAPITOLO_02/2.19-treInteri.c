// CAPITOLO 02
// ESERCIZI

// PAGINA 68
// ESERCIZIO 2.19

// ARITMETICA, VALORE AGGIUNTO E VALORE MINORE

// Scrivete un programma che riceva in ingresso tre diversi interi dalla tastiera, poi stampi la somma, la media, il prodotto, il minore e il maggiore di questi numeri. Usate solamente la forma a selezione singola dell'istruzione if che avete imparato in questo capitolo. Il dialogo sullo schermo deve apparire come segue:

// Enter three different integers: 13 27 14
// Sum is 54
// Average is 18
// Product is 4914
// Smallest is 13
// Largest is 27

// Programma con tre numeri interi

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter three different integers: ");
	
	int a = 0;
	int b = 0;
	int c = 0;
	
	scanf("%d %d %d", &a, &b, &c);
	
	int sum = a + b + c;
	int average = sum / 3;
	int product = a * b * c;
	
	int smallest = a;
	if (b < smallest) {
		smallest = b;
	}
	if (c < smallest) {
		smallest = c;
	}
	
	int largest = a;
	if (b > largest) {
		largest = b;
	}
	if (c > largest) {
		largest = c;
	}
	
	printf("Sum is %d\n", sum);
	printf("Average is %d\n", average);
	printf("Product is %d\n", product);
	printf("Smallest is %d\n", smallest);
	printf("Largest is %d\n", largest);

} // fine della funzione main
