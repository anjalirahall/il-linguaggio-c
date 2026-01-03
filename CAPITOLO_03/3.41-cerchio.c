// CAPITOLO 03
// ESERCIZI

// PAGINA 111
// ESERCIZIO 3.41

// DIAMETRO, CIRCONFERENZA E AREA DI UN CERCHIO

// Programma che dato il raggio di un cerchio, ne calcola diametro, circonferenza e area

// PSEUDOCODICE

// Inizializza la variabile double radius a zero

// Stampa "Enter the length of the radius: "
// Leggi il valore e memorizzalo in radius

// Inizializza la variabile double diametre a 2 * radius
// Inizializza la variabile double circumference a 2 * radius * 3.14159
// Inizializza la variabile double area a 3.14159 * radius * radius

// Stampa "The length of the diametre is ..." (diametre)
// Stampa "The length of the circumference is ..." (circumference)
// Stampa "The area of the circle is ..." (area)

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   double radius = 0;
   
   printf("%s", "Enter the length of the radius: ");
   scanf("%lf", &radius);
   
   double diametre = 2 * radius;
   double circumference = 2 * radius * 3.14159;
   double area = 3.14159 * radius * radius;
   
   printf("\nThe length of the diametre is %f\n", diametre);
   printf("The length of the circumference is %f\n", circumference);
   printf("The area of the circle is %f\n", area);
   
} // fine della funzione main
