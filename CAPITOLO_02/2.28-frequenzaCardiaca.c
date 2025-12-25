// CAPITOLO 02
// ESERCIZI

// PAGINA 70
// ESERCIZIO 2.28

// CALCOLARE LA FREQUENZA CARDIACA

#include <stdio.h>

// inizio della funzione main
int main(void) {

	printf("%s", "Enter your age: ");
	
	int age = 0;
	
	scanf("%d", &age);
	
	int maxHeartRate = 220 - age;
	int minIdealHeartRate = maxHeartRate * 50 / 100;
	int maxIdealHeartRate = maxHeartRate * 85 / 100;
	
	printf("Your maximum heart rate is %d\n", maxHeartRate);
	printf("Your minimum ideal heart rate during training is %d\n", minIdealHeartRate);
	printf("Your maximum ideal heart rate during training is %d\n", maxIdealHeartRate);

} // fine della funzione main
