// CAPITOLO 03
// ESERCIZI

// PAGINA 107
// ESERCIZIO 3.19

// CALCOLO DEGLI INTERESSI

// Programma che calcola l'interesse semplice per un prestito

// PSEUDOCODICE

// Inizializza la variabile double principal a zero
// Inizializza la variabile double rate a zero
// Inizializza la variabile int days a zero

// Stampa "Enter loan principal (-1 to end): "
// Leggi il valore e memorizzalo in principal

// Se principal è doppio uguale a -1
//    Stampa "No loan was entered!"

// Finché principal non è uguale a -1
//    Stampa "Enter interest rate: "
//    Leggi il valore e memorizzalo in rate

//    Stampa "Enter term of the loan in days: "
//    Leggi il valore e memorizzalo in days

//    Inizializza la variabile interest a principal * rate * days / 365

//    Stampa "The interest charge is $ ..." (interest)

//    Stampa "Enter loan principal (-1 to end): "
//    Leggi il valore e memorizzalo in principal

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   double principal = 0;
   double rate = 0;
   int days = 0;

   printf("%s", "Enter loan principal (-1 to end): ");
   scanf("%lf", &principal);

   if (principal == -1) {
      puts("\nNo loan was entered!");
   } // fine di if
   
   while (principal != -1) {
      printf("%s", "Enter interest rate: ");
      scanf("%lf", &rate);

      printf("%s", "Enter term of the loan in days: ");
      scanf("%d", &days);

      double interest = principal * rate * days / 365;

      printf("The interest charge is $%.2f\n", interest);

      printf("%s", "\nEnter loan principal (-1 to end): ");
      scanf("%lf", &principal);
   } // fine di while

} // fine della funzione main
