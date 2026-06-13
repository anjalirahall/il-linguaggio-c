// CAPITOLO 05
// ESERCIZI

// PAGINA 204
// ESERCIZIO 5.32

// INDOVINA IL NUMERO

// Scrivere un programma che simula il gioco "indovina il numero"

#include <stdio.h>
#include <stdlib.h>

int main(void) {
    
    char answer = 'y';
    
    while (answer == 'y') {
	   int number = rand() % 1000 + 1;
	   
	   puts("I have a number between 1 and 1000.");
	   puts("Can you guess my number?");
	   puts("Please type your first guess.");
	   
	   int guess = 0;
	   
	   scanf("%d", &guess);
	   
	   while (guess != number) {
		  if (guess > number) {
		     printf("Too high. Try again.\n");
		  }
		  else {
		     printf("Too low. Try again.\n");
		  }
		  scanf("%d", &guess);
	   }
	   
	   int n = getchar();
	   while (n != '\n' && n != EOF) {
	      n = getchar();
	   } 
	   
	   puts("Excellent! You guessed the number!");
	   puts("Would you like to play again (y or n)?");
	   
	   scanf("%c", &answer);
	   
	}
   
} // fine della funzione main
