// CAPITOLO 05
// ESERCIZI

// PAGINA 205
// ESERCIZIO 5.36

// LE TORRI DI HANOI

// Scrivere un programma che risolve il problema delle torri di Hanoi

#include <stdio.h>

void towersOfHanoi(int disks, int startingRod, int endingRod, int supportRod);

int main(void) {

   towersOfHanoi(3, 1, 3, 2);

} // fine della funzione main

void towersOfHanoi(int disks, int startingRod, int endingRod, int supportRod) {

   if (disks == 1) {
      printf("%d --> %d\n", startingRod, endingRod);
   }
   else{
      towersOfHanoi(disks - 1, startingRod, supportRod, endingRod);
      towersOfHanoi(1, startingRod, endingRod, supportRod);
      towersOfHanoi(disks - 1, supportRod, endingRod, startingRod);
   }

} // fine della funzione towersOfHanoi
