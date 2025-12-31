// CAPITOLO 03
// ESERCIZI

// PAGINA 110
// ESERCIZIO 3.31

// UN ALTRO PROBLEMA DI ELSE SOSPESO

#include <stdio.h>

// la funzione main inizia l'esecuzione del programma
int main(void) {
   
   int x = 0;
   int y = 0;
   
   // a)
   puts("Caso a)");
   x = 5;
   y = 8;
   if (y == 8)
      if (x == 5)
         puts("@@@@@");
      else
         puts("#####");
   puts("$$$$$");
   puts("&&&&&");
   
   // Risposta a): nessun cambiamento necessario, aggiustate le indentazioni
   
   // b)
   puts("\nCaso b)");
   x = 5;
   y = 8; 
   if (y == 8)
      if (x == 5)
         puts("@@@@@");
   else { 
      puts("#####");
      puts("$$$$$");
      puts("&&&&&");
   }
   
   // Risposta b): aggiunte parentesi graffe per l'else incorporando le ultime tre istruzioni
   
   // c)
   puts("\nCaso c)"); 
   x = 5;
   y = 8;
   if (y == 8)
      if (x == 5)
         puts("@@@@@");
      else {
         puts("#####");
         puts("$$$$$");
      }
   puts("&&&&&");
   
   // Risposta c): aggiunte parentesi graffe per l'else incorporando la penultima e la terzultima istruzione 
   
   // d)
   puts("\nCaso d)");
   x = 5;
   y = 7; 
   if (y == 8) {
      if (x == 5)
         puts("@@@@@");
   }
   else {
      puts("#####");
      puts("$$$$$");
      puts("&&&&&");
   }
   
   /* Risposta d): aggiunte due coppie di parentesi graffe, la prima per portare l'else fuori dalla if interna,
   la seconda per creare un unico blocco delle tre istruzioni finali */
   
} // fine della funzione main
