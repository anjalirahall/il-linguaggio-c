// CAPITOLO 04
// ESERCIZI

// PAGINA 150
// ESERCIZIO 4.19

// CALCOLO DELLE VENDITE

// Programma che calcola le vendite di un rivenditore

#include <stdio.h>

int main(void) {

   int product = 0;
   int quantity = 0;
   double total = 0.0;
   
   printf("%s", "Enter product code and quantity sold: \n");
   
   int result = 0;
   
   while ((result = scanf("%d %d", &product, &quantity)) != EOF) {
   
      if (result != 2) {
         printf("%s", "Invalid input. Enter product code and quantity sold: \n");
         int n = getchar();
         while (n != '\n' && n != EOF) {
            n = getchar();
         } // fine di while
         continue;
      } // fine di if      
   
      switch (product) {
      
         case 1:
            total += quantity * 2.98;
            break;
         
         case 2:
            total += quantity * 4.50;
            break;
            
         case 3:
            total += quantity * 9.98;
            break;
            
         case 4:
            total += quantity * 4.49;
            break;
            
         case 5:
            total += quantity * 6.87;
            break;
            
         default:
            printf("%s", "Invalid product code. Enter product code and quantity sold: \n");
            continue;   
      
      } // fine di switch
   
   } // fine di while
   
   printf("\nThe amount of total sales is %.2f\n", total);

} // fine della funzione main
