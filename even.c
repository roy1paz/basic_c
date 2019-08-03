/**
 * Author: Roy Paz
 *
 * Algorithm that checks whether it's an even or odd number.
 *
 * Input: integer.
 * Output: Even number or Odd number.
 */

#include <stdio.h>

main() {
	
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	if(num%2 == 0) {
	printf("Even number.\n");
	}
	else {
	printf("Odd number.\n");
	}
	return 0;

}