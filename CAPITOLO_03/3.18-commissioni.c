// CAPITOLO 03
// ESERCIZI

// PAGINA 106
// ESERCIZIO 3.18

// CALCOLO DELLE COMMISSIONI SULLE VENDITE

// Programma che calcola le commissioni sulle vendite di un addetto alle vendite

// PSEUDOCODICE

// Inizializza la variabile double grossSales a zero
// Inizializza la variabile double salary a zero

// Stampa "Enter sales in dollars (-1 to end): "
// Leggi il valore e memorizzalo in grossSales

// Se grossSales è doppio uguale a -1
//      Stampa "No sales were entered!"

// Finché grossSales non è uguale a -1
//      Poni la variabile salary a 200 + (grossSales * 9) / 100
//      Stampa "Salary is: $ ..." (salary)

//      Stampa "Enter sales in dollars (-1 to end): "
//      Leggi il valore e memorizzalo in grossSales

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

    double grossSales = 0;
    double salary = 0;

    printf("%s", "Enter sales in dollars (-1 to end): ");
    scanf("%lf", &grossSales);

    if (grossSales == -1) {
        puts("\nNo sales were entered!");
    } // fine di if
    
    while (grossSales != -1) {
        salary = 200 + (grossSales * 9) / 100;
        printf("Salary is: $%.2f\n", salary);

        printf("%s", "\nEnter sales in dollars (-1 to end): ");
        scanf("%lf", &grossSales);
    } // fine di while
    
} // fine della funzione main
