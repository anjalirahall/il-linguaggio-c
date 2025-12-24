// CAPITOLO 02
// ESERCIZI

// PAGINA 68
// ESERCIZIO 2.16

// ARITMETICA

// Programma che calcola operazioni elementari tra due interi

#include <stdio.h>

// inizio della funzione main
int main(void) {
	
	printf("%s", "Enter two integers: ");
	
	int a = 0;
	int b = 0;
	
	scanf("%d %d", &a, &b);
	
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
	
	printf("The sum is %d.\n", sum);
	printf("The difference is %d.\n", difference);
	printf("The product is %d.\n", product);
	printf("The quotient is %d.\n", quotient);
	printf("The remainder is %d.\n", remainder);
	
} // fine della funzione main
