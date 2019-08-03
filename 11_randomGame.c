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

 	char again;
 	time_t t;
 	int num;
 	srand((unsigned) time(&t));
 	do {

 		printf("Enter a number between 1 to 3: ");
 		scanf("%d", &num);
 		if (num > 3 || num < 1) {

 			printf("Wrong number\n");
 		}

		else if (num == 1 + rand() % 3) {

			printf("You win!\n");
		}	

		else {

			printf("You lose!\n");
		}
		do {
	  	printf("Play again? (y/n): ");
    	scanf("%c", &again);
   		}while (again != 'y' && again != 'Y' && again != 'n' && again != 'N'); // The user can enter only: n, N, Y, y.

    }while ((again == 'y') || (again == 'Y')); // Run the code again.
      
   	printf("Arrivederci!\n"); // In case that the user choose 'n' 'N'.

	return 0;
}




/*
		printf("Play again? (y/n): \n");
      	scanf("%c", &again);
      	/* if (again == 'n' || again == 'N') {

      		printf("Arrivederci\n");
      	}

      	else {

      		printf("Try again.\n");
      	*/