// CAPITOLO 04
// ESERCIZI

// PAGINA 149
// ESERCIZIO 4.17

// CALCOLARE I LIMITI DI CREDITO

// Programma che calcola i limiti di credito di tre clienti di un'azienda

#include <stdio.h>

int main(void) {

   for (int n = 1; n <= 3; ++n) {
   
      int account = 0;
      double creditLimit = 0;
      double creditBalance = 0;
      
      printf("%s", "Client account number: ");
      scanf("%d", &account);
      
      printf("%s", "Client credit limit: ");
      scanf("%lf", &creditLimit);
      
      printf("%s", "Client credit balance: ");
      scanf("%lf", &creditBalance);
      
      printf("\nClient account number: %d\n", account);
      double newCreditLimit = creditLimit / 2;
      printf("New credit limit: %.2f\n", newCreditLimit);
      if (creditBalance > newCreditLimit) {
         printf("The client's balance is higher than the new credit limit.\n\n");
      } // fine di if
      else {
         puts("");
      } // fine di else
      
   } // fine del for

} // fine della funzione main
