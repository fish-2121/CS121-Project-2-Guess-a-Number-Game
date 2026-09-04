#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int min = 1;
	int max = 3;
	
	bool keepGoing = true;
	srand(time(NULL));
	int randomNum = (rand() % (max - min + 1)) + min;
	int userGuesses = 0;
	
	while(keepGoing) {
		int userNum;

		printf("Guess a number between %d and %d (inclusive): \n", min, max);
		
		int intCheck = scanf("%d", &userNum);
		printf("You entered: %d \n", userNum);
		
		if (intCheck == 1) {
			userGuesses++;
			if (userNum == randomNum) {
				printf("You guessed the number in %d tries! Great job! \n", userGuesses);
				keepGoing = false;
			} else {
				printf("Incorrect! \n");
			} // end of userNum comparison
		} else {
			printf("That is not a number! Try again! \n");
		} // end of if intCheck
	} // end of while loop

	return 0;
} // end of main
