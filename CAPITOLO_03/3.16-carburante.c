// CAPITOLO 03
// ESERCIZI

// PAGINA 105
// ESERCIZIO 3.16

// CONSUMO DI CARBURANTE

// Programma che calcola il consumo di un'automobile per ogni pieno

// PSEUDOCODICE

// Inizializza la variabile double gallons a zero
// Inizializza la variabile double miles a zero
// Inizializza la variabile double totalGallons a zero
// Inizializza la variabile double totalMiles a zero

// Stampa "Enter the gallons used (-1 to end): "
// Leggi il valore e memorizzalo in gallons

// Finché gallons è diverso da -1
// 		Stampa "Enter the miles driven: "
// 		Leggi il valore e memorizzalo in miles

//		Stampa "The miles/gallon for this tank was ..." (miles/gallons)

//		Aggiungi miles a totalMiles
//		Aggiungi gallons a totalGallons

//		Stampa "Enter the gallons used (-1 to end): "
//		Leggi il valore e memorizzalo in gallons

// Se miles è doppio uguale a zero
//		Stampa "No values were entered!"
// altrimenti
//		Stampa "The overall average miles/gallon was ..." (totalMiles/totalGallons) 		

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {
	
	// inizializzazione delle variabili
	double gallons = 0;
	double miles = 0;
	double totalGallons = 0;
	double totalMiles = 0;
	
	// elaborazione 
	printf("%s", "Enter the gallons used (-1 to end): ");
	scanf("%lf", &gallons);
	
	while (gallons != -1) {
		printf("%s", "Enter the miles driven: ");
		scanf("%lf", &miles);
		
		printf("The miles/gallon for this tank was %f\n", miles/gallons);
		
		totalGallons += gallons;
		totalMiles += miles;
		
		printf("%s", "\nEnter the gallons used (-1 to end): ");
		scanf("%lf", &gallons);
		
	} // fine di while
	
	// chiusura
	if (miles == 0) {
		puts("\nNo values were entered!");
	} // fine di if
			
	else {
		printf("\nThe overall average miles/gallon was %f\n", totalMiles/totalGallons);
	} // fine di else

} // fine della funzione main
