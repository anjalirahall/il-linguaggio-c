// CAPITOLO 05
// ESERCIZI

// PAGINA 205
// ESERCIZIO 5.33

// MODIFICHE A "INDOVINA IL NUMERO"

// Modificare esercizio 5.32 per contare il numero delle risposte date dal giocatore

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
	   
	   int numberOfGuesses = 1;
	   
	   while (guess != number) {
		  if (guess > number) {
		     printf("Too high. Try again.\n");
		     ++numberOfGuesses;
		  }
		  else {
		     printf("Too low. Try again.\n");
		     ++numberOfGuesses;
		  }
		  scanf("%d", &guess);
	   }
	   
	   int n = getchar();
	   while (n != '\n' && n != EOF) {
	      n = getchar();
	   } 
	   
	   puts("Excellent! You guessed the number!");
	   if (numberOfGuesses <= 10) {
	      puts("Either you know the secret or you got lucky!");
	   }
	   else {
	      puts("You should be able to do better!");
	   }
	   puts("Would you like to play again (y or n)?");
	   
	   scanf("%c", &answer);
	   
	}
   
} // fine della funzione main

