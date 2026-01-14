// CAPITOLO 04
// ESERCIZI

// PAGINA 151
// ESERCIZIO 4.21

// RISCRITTURA DELL'ESEMPIO FIG 04 02

#include <stdio.h>

int main(void) {

   int counter = 1;
   for (; counter <= 5; ++counter) {
      printf("%d  ", counter);
   }

   puts("");
   printf("counter value: %d\n", counter);
}
