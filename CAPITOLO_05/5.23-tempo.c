// CAPITOLO 05
// ESERCIZI

// PAGINA 203
// ESERCIZIO 5.23

// TEMPO IN SECONDI

// Scrivere una funzione che calcola i secondi dalle 12 dato un orario

#include <stdio.h>
#include <math.h>

int timeToSeconds(int h, int m, int s);

int main(void) {
   
   int hour1 = 0;
   int minute1 = 0;
   int second1 = 0;
   printf("Enter your first time (hh mm ss): ");
   scanf("%d %d %d", &hour1, &minute1, &second1);
   
   int hour2 = 0;
   int minute2 = 0;
   int second2 = 0;
   printf("Enter your second time (hh mm ss): ");
   scanf("%d %d %d", &hour2, &minute2, &second2);
   
   printf("The time difference is: %d\n", (int) fabs(timeToSeconds(hour1, minute1, second1) - timeToSeconds(hour2, minute2, second2)));
   
} // fine della funzione main

int timeToSeconds(int h, int m, int s) {

   return h * 3600 + m * 60 + s;

} // fine della funzione timeToSeconds
