// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.29

// LEGGI DI DE MORGAN

// Programma che dimostra le leggi di De Morgan con esempi

#include <stdio.h>

int main(void) {
   
   printf("%s", "Example a) ");
   
   int x = 3;
   int y = 5;
   int result1 = !(x < 5) && !(y >= 7);
   int result2 = !((x < 5) || (y >= 7));
   
   if (result1 == result2) {
      puts("The De Morgan law is valid.");
   } // fine di if 
   else {
      puts("The De Morgan law is not valid.");
   } // fine di else
   
   printf("%s", "Example b) ");
   
   int a = 10;
   int b = 410;
   int g = -9;
   
   result1 = !(a == b) || !(g != 5);
   result2 = !((a == b) && (g != 5));
   
   if (result1 == result2) {
      puts("The De Morgan law is valid.");
   } // fine di if 
   else {
      puts("The De Morgan law is not valid.");
   } // fine di else
   
   printf("%s", "Example c) ");
   
   result1 = !((x <= 8) && (y > 4));
   result2 = !(x <= 8) || !(y > 4);
   
   if (result1 == result2) {
      puts("The De Morgan law is valid.");
   } // fine di if 
   else {
      puts("The De Morgan law is not valid.");
   } // fine di else
   
   printf("%s", "Example d) ");
   
   int i = 50;
   int j = 1;
   
   result1 = !((i > 4) || (j <= 6));
   result2 = !(i > 4) && !(j <= 6);
   
   if (result1 == result2) {
      puts("The De Morgan law is valid.");
   } // fine di if 
   else {
      puts("The De Morgan law is not valid.");
   } // fine di else

} // fine della funzione main
