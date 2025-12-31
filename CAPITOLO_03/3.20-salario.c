// CAPITOLO 03
// ESERCIZI

// PAGINA 107
// ESERCIZIO 3.20

// CALCOLO DEL SALARIO

// Programma che calcola lo stipendio lordo di un impiegato (meno di 80 ore lavorate settimanalmente)

// PSEUDOCODICE

// Inizializza la variabile int hours a zero
// Inizializza la variabile double hourlyRate a zero

// Stampa "Enter # of hours worked (-1 to end): "
// Leggi il valore e memorizzalo in hours

// Se hours è doppio uguale a -1
//    Stampa "No hours were entered!"

// Finché hours non è uguale a -1
//    Stampa "Enter hourly rate of the worker ($00.00): "
//    Leggi il valore e memorizzalo in hourlyRate

//    Inizializza la variabile salary a hours / 40 * 40 * hourlyRate + hours % 40 * hourlyRate * ((hours > 40) ? 1.5 : 1)
//    Stampa "Salary is $ ..." (salary)

//    Stampa "Enter # of hours worked (-1 to end): "
//    Leggi il valore e memorizzalo in hours

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int hours = 0;
   double hourlyRate = 0;

   printf("%s", "Enter # of hours worked (-1 to end): ");
   scanf("%d", &hours);

   if (hours == -1) {
      puts("\nNo hours were entered!");
   } // fine di if

   while (hours != -1) {
      printf("%s", "Enter hourly rate of the worker ($00.00): ");
      scanf("%lf", &hourlyRate);
      
      double salary = hours / 40 * 40 * hourlyRate + hours % 40 * hourlyRate * ((hours > 40) ? 1.5 : 1);   
      printf("Salary is $%.2f\n", salary);
      
      printf("%s", "\nEnter # of hours worked (-1 to end): ");
      scanf("%d", &hours);
      
   } // fine di while

} // fine della funzione main

