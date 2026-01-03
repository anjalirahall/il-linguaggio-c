// CAPITOLO 03
// ESERCIZI

// PAGINA 112
// ESERCIZIO 3.45

// FATTORIALE

// a) Programma che calcola il fattoriale di un numero intero non negativo

// b) Programma che valuta il valore della costante e usando la sua serie matematica

// c) Programma che valuta il valore di e^x usando la sua serie matematica

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {

   // a)
   
   puts("a)");
   
   int n = 0;
   int number = 0;

   printf("%s", "Enter a non-negative integer: ");
   scanf("%d", &number);
   
   n = number;
   int factorial = 1;

   while (n >= 1) {
      factorial *= n;
      --n;
   } // fine di while
   
   printf("\nThe factorial of %d is %d\n", number, factorial);
   
   
   // b)
   
   puts("\nb)");
   
   double e = 1;
   int m = 1;

   while (m <= number) {
   
      n = m;
      factorial = 1;

      while (n >= 1) {
         factorial *= n;
         --n;
      } // fine del while interno
      
      e += (double) 1 / factorial;
      ++m;

   } // fine del while esterno
   
   printf("The value of e is %f\n", e);
   
   
   // c)
   
   puts("\nc)");
   
   double x = 0;

   printf("%s", "Enter the exponent for e: ");
   scanf("%lf", &x);

   double e_exp_x = 1;
   double exp_x = 1;
   m = 1;

   while (m <= number) {
   
      n = m;
      factorial = 1;

      while (n >= 1) {
         factorial *= n;
         --n;
      } // fine del while interno
      
      exp_x *= x;
      
      e_exp_x += exp_x / factorial;
      
      ++m;

   } // fine del while esterno

   printf("The value of e^x is %f\n", e_exp_x);   

} // fine della funzione main
