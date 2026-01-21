// CAPITOLO 04
// ESERCIZI

// PAGINA 152
// ESERCIZIO 4.32

// PROGRAMMA CHE STAMPA UN ROMBO MODIFICATO

#include <stdio.h>

int main(void) {
   
   int height = 0;
   printf("%s", "Enter an odd integer [1-19]: ");
   
   int result = 0;
   while ((result = scanf("%d", &height)) != 1) {
      printf("%s", "Wrong input. Enter an odd integer [1-19]: ");
      int n = getchar();
      while (n != '\n'&& n != EOF) {
         n = getchar();
      } // fine del while interno
   } // fine del while
   
   while (height < 1 || height > 19 || height % 2 == 0) { 
      printf("Wrong integer. Enter an odd integer [1-19]: "); 
      while (scanf("%d", &height) != 1) { 
         printf("Wrong input. Enter an odd integer [1-19]: "); 
         int n; 
         while ((n = getchar()) != '\n' && n != EOF) {
         n = getchar();
         }; // fine del while interno
      } // fine del while intermedio
   } // fine del while esterno
   
   puts("");
   
   for (int row = 1; row <= height / 2; ++row) { 
      for (int i = row; i <= height / 2; ++i) {
         printf("%s", " ");
      } // fine del for interno
      for (int j = 1; j <= 2 * row -1; ++j) {
         printf("%s", "*");
      } // fine del for interno
      for (int k = row; k <= height / 2; ++k) {
         printf("%s", " ");
      } // fine del for interno
      puts("");
   } // fine del primo for

   for (int stars = 1; stars <= height; ++stars) {
      printf("%s", "*");
   } // fine del secondo for
   puts("");
   
   for (int row = height / 2; row >= 1; --row) { 
      for (int i = height / 2; i >= row; --i) {
         printf("%s", " ");
      } // fine del for interno
      for (int j = 2 * row -1; j >= 1; --j) {
         printf("%s", "*");
      } // fine del for interno
      for (int k = height / 2; k >= row; --k) {
         printf("%s", " ");
      } // fine del for interno
      puts("");
   } // fine del terzo for

} // fine della funzione main

