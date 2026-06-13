// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.30

// VALUTAZIONE QUALITATIVA DEI VOTI DI UNO STUDENTE

// Scrivere una funzione che converte la media dei voti di uno studente in punteggio

#include <stdio.h>

int toQualityPoints(int average);

int main(void) {
   
   int averageGrades = 0;
   printf("%s", "Tell me student's grades' average: ");
   scanf("%d", &averageGrades);
   
   printf("The student's quality points are: %d\n", toQualityPoints(averageGrades));
   
} // fine della funzione main

int toQualityPoints(int average) {

   if (average >= 90 && average <= 100) {
      return 4;
   } 
   if (average >= 80 && average <= 89) {
      return 3;
   } 
   if (average >= 70 && average <= 79) {
      return 2;
   } 
   if (average >= 60 && average <= 69) {
      return 1;
   } 
   if (average < 60) {
      return 0;
   } 

} // fine della funzione toQualityPoints
