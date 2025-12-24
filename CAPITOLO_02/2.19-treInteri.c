// CAPITOLO 02
// ESERCIZI

// PAGINA 68
// ESERCIZIO 2.19

// ARITMETICA, VALORE AGGIUNTO E VALORE MINORE

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
