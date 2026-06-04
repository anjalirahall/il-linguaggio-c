// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.24

// CONVERSIONI DI TEMPERATURA

// Convertire temperature tra Celsius e Fahrenheit

#include <stdio.h>

int toCelsius(int fahrenheit);
int toFahrenheit(int celsius);

int main(void) {

   printf("%5s%5s\n", "C", "F");
   
   for (int c = 0; c <= 100; c++) {
      printf("%5d%5d", c, toFahrenheit(c));
      puts("");
   }
   
   puts("");
   
   printf("%5s%5s\n", "F", "C");
   
   for (int f = 32; f <= 212; f++) {
      printf("%5d%5d", f, toCelsius(f));
      puts("");
   }
   
} // fine della funzione main


int toCelsius(int fahrenheit) {

   return (5 * (fahrenheit - 32)) / 9; 

} // fine della funzione toCelsius


int toFahrenheit(int celsius) {

   return (9 * celsius) / 5 + 32;

} // fine della funzione toFarenheit

