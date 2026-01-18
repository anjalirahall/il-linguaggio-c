// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.28

// CALCOLO DELLA PAGA SETTIMANALE

// Programma che calcola la paga settimanale degli impiegati di una azienda

// PSEUDOCODICE

// Inizializza la variabile employeeType a zero

// Stampa messaggio di prompt

// Leggi il valore e memorizzalo in employeeType

// Finché l'utente non inserire il carattere di EOF

//    Se leggi un numero di valori diverso da 1
//       Stampa messaggio di errore
//       Cancella il buffer di scanf
//       Salta al ciclo successivo

//    Seleziona employeeType
//       Caso 1
//          Inizializza la variabile salary a zero
//          Stampa il prompt per chiedere la paga settimanale
//          Leggi il valore e memorizzalo in salary
//          Stampa il valore di salary
//          Esci da seleziona
//       Caso 2
//          Inizializza la variabile hourlySalary a zero
//          Inizializza la variabile hours a zero
//          Stampa il prompt per chiedere paga oraria e ore lavorate
//          Leggi i valori e salvali rispettivamente in hourlySalary e hours
//          Calcola la paga
//          Stampa la paga
//          Esci da seleziona
//       Caso 3
//          Inizializza la variabile weeklySales a zero
//          Stampa il prompt per chiedere le vendite settimanali
//          Leggi il valore e memorizzalo in weeklySales
//          Calcola la paga
//          Stampa la paga
//          Esci da seleziona
//       Caso 4
//          Inizializza la variabile articlesProduced a zero
//          Inizializza la variabile salaryPerArticle a zero
//          Stampa il prompt per chiedere il numero di articoli prodotti e la paga per articolo
//          Leggi i valori e memorizzali rispettivamente in articlesProduced e salaryPerArticle
//          Calcola la paga
//          Stampa la paga
//          Esci da seleziona   
//       Caso default
//          Stampa un messaggio di errore
//          Salta al ciclo successivo   

#include <stdio.h>

int main(void) {

   printf("%s", "Enter the employee code: ");
   
   int employeeType = 0;
   int result = 0;

   while ((result = scanf("%d", &employeeType)) != EOF) {

      if (result != 1) {
         printf("%s", "Wrong input. Enter the employee code: ");
         int n = getchar();
         while (n != '\n' && n != EOF) {
            n = getchar();
         } // fine del while 
         continue;
      } // fine del if
      
      double salary = 0.0;

      switch (employeeType) {
      
         case 1:
            printf("%s", "Enter the weekly salary: ");
            scanf("%lf", &salary);
            printf("\nThe weekly salary is %.2f\n\n", salary);
            break;

         case 2:
            double hourlySalary = 0;
            int hours = 0;
            printf("%s", "Enter the hourly salary and the hours worked: ");
            scanf("%lf %d", &hourlySalary, &hours);
            salary = hourlySalary * ((hours <= 40) ? hours : (40 + 1.5 * (hours % 40)));
            printf("\nThe weekly salary is %.2f\n\n", salary);
            break;

         case 3:
            double weeklySales = 0.0;
            printf("%s", "Enter the weekly sales: ");
            scanf("%lf", &weeklySales);
            salary = 250 + 0.057 * weeklySales;
            printf("\nThe weekly salary is %.2f\n\n", salary);
            break;  
            
         case 4:
            int articlesProduced = 0;
            double salaryPerArticle = 0.0;
            printf("%s", "Enter the number of articles produced and the salary per article: ");
            scanf("%d %lf", &articlesProduced, &salaryPerArticle);
            salary = articlesProduced * salaryPerArticle;
            printf("\nThe weekly salary is %.2f\n\n", salary);
            break;  
              
         default:  
            printf("Wrong employee code. Enter the employee code: ");
            continue;  

      } // fine del switch   
      
      printf("%s", "Enter the employee code: ");
      
   } // fine del while

} // fine della funzione main









