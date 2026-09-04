#include <stdio.h>
#include <stdbool.h>
#include <time.h>
#include <stdlib.h>

int main() {
	int min = 1;
	int max = 10;
	int averageGuesses = 7;
	
	bool keepGoing = true;
	srand(time(NULL));
	int randomNum = (rand() % (max - min + 1)) + min;
	int userGuesses = 0;
	
	while(keepGoing) {
		printf("Guess a number between %d and %d (inclusive): \n", min, max);
		
		int userNum;
		int intCheck = scanf("%d", &userNum);
		printf("You entered: %d \n", userNum);
		
		if (intCheck == 1) {
			userGuesses++;
			if (userNum == randomNum) {
				if (userGuesses > averageGuesses) {
					printf("You guessed the number in %d tries! That is above the average... \n", userGuesses);
				} else if (userGuesses < averageGuesses) {
					printf("You guessed the number in %d tries! That is below the average! Amazing job! \n", userGuesses);
				} else {
					printf("You guessed the number in %d tries! That is exactly the average! Great job! \n", userGuesses);
				} // end of averageGuesses if
				keepGoing = false;
			} else {
				if (userNum > randomNum) {
					printf("Too high! Try again");
				} else {
					printf("Too low! Try again");
				} // end of too high/low if
			} // end of userNum comparison
		} else {
			printf("That is not a number! Try again! \n");
			printf("\n");
		} // end of if intCheck
	} // end of while loop

	return 0;
} // end of main
