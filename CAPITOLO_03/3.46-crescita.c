// CAPITOLO 03
// ESERCIZI

// PAGINA 112
// ESERCIZIO 3.46

// CRESCITA DELLA POPOLAZIONE MONDIALE

// Programma che calcola il numero della popolazione fra 100 anni supponendo costante l'attuale tasso di crescita
// Attuale tasso di crescita: 0.86%
// Popolazione alla fine del 2025: 8,191,988,453

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   int year = 1;
   long int initialPopulation = 8191988453;
   double growthRate = 0.0086;
   long int previousPopulation = 8191988453;
   long int currentPopulation = 8191988453;
   int doubled = 0;
   int quadrupled = 0;
   
   puts("year\tpopulation\tgrowth\n");
   
   while (year <= 100) {
   
      printf("%d\t", year);
      currentPopulation = previousPopulation + previousPopulation * growthRate;
      printf("%ld\t%ld\n", currentPopulation, currentPopulation - previousPopulation);
      
      if ((doubled == 0) * (currentPopulation >= 2 * initialPopulation)) {
         puts("\nThe population has doubled since the year 1\n");
         doubled = 1;
      } // fine di if
      
      if ((quadrupled == 0) * (currentPopulation >= 4 * initialPopulation)) {
         puts("\nThe population has quadrupled since the year 1\n");
         quadrupled = 1;
      } // fine di if
      
      previousPopulation = currentPopulation;
      ++year;
   
   } // fine di while

} // fine della funzione main
