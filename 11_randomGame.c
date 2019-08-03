/**
 * Author: Roy Paz
 *
 * Game of input and random output.
 *
 * Input: Integer between 1 to 3.
 * Output: Win if the random output is equal to the input. 
 */

#include <time.h>
#include <stdlib.h>

 int main() {

 	time_t t;
 	int num;
 	srand((unsigned) time(&t));

 	printf("Enter a number between 1 to 3: ");
 	scanf("%d", &num);
	if (num == 1 + rand() % 3) {
		printf("You win!\n");
	}

	else {

		printf("You lose!\n");
	}

	return 0;
}
