/**
 * Author: Roy Paz
 *
 * Game of input and random output.
 *
 * Input: integer between 1 to 3.
 * Output: win if the random output is equal to the input. 
 */

#include <time.h>
#include <stdlib.h>

 int main() {

 	time_t t;
 	int num;
 	srand((unsigned) time(&t));

 	printf("Enter a number between 0 to 3: ");
 	scanf("%d", &num);
	if (num == rand() % 4) {
		printf("You win!\n");
	}

	else {

		printf("You lose!\n");
	}

	return 0;
}
