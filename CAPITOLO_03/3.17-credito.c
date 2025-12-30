// CAPITOLO 03
// ESERCIZI

// PAGINA 106
// ESERCIZIO 3.17

// VERIFICA DEI LIMITI DI CREDITO

// Programma che determina il limite di credito di un cliente

// PSEUDOCODICE

// Inizializza la variabile intera account a zero
// Inizializza la variabile double beginningBalance a zero
// Inizializza la variabile double charges a zero
// Inizializza la variabile double credits a zero
// Inizializza la variabile double creditLimit a zero

// Stampa "Enter account number (-1 to end): "
// Leggi il valore e memorizzalo in account

// Se account è doppio uguale a -1
//		Stampa "No account was entered!"

// Finché account è diverso da -1
// 		Stampa "Enter beginning balance: "
//		Leggi il valore e memorizzalo in beginningBalance

//		Stampa "Enter total charges: "
//		Leggi il valore e memorizzalo in charges

//		Stampa "Enter total credits: "
//		Leggi il valore e memorizzalo in credits

//		Stampa "Enter credit limit: "
//		Leggi il valore e memorizzalo in creditLimit

//		Inizializza la variabile newBalance a beginningBalance + charges - credits

//		Se newBalance è maggiore di creditLimit
//			Stampa "Account: ..." (account)
//			Stampa "Credit limit: ..." (creditLimit)
//			Stampa "Balance: ..." (newBalance)
//			Stampa "Credit Limit Exceeded."

//		Stampa "Enter account number (-1 to end): "
//		Leggi il valore e memorizzalo in account

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

	int account = 0; 
	double beginningBalance = 0; 
	double charges = 0;
	double credits = 0;
	double creditLimit = 0;

	printf("%s", "Enter account number (-1 to end): ");
	scanf("%d", &account);
	
	if (account == -1) {
		puts("\nNo account was entered!");
	} // fine di if

	while (account != -1) {
		printf("%s", "Enter beginning balance: ");
		scanf("%lf", &beginningBalance);

		printf("%s", "Enter total charges: ");
		scanf("%lf", &charges);

		printf("%s", "Enter total credits: ");
		scanf("%lf", &credits);

		printf("%s", "Enter credit limit: ");
		scanf("%lf", &creditLimit);

		double newBalance = beginningBalance + charges - credits;
		
		if (newBalance > creditLimit) {
			printf("Account:\t%d\n", account);
			printf("Credit limit:\t%.2f\n", creditLimit);
			printf("Balance:\t%.2f\n", newBalance);
			puts("Credit Limit Exceeded.");
		} // fine di if
		
		printf("%s", "\nEnter account number (-1 to end): ");
		scanf("%d", &account);
	} // fine di while

} // fine della funzione main
