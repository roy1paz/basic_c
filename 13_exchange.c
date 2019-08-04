/**
 * Author: Roy Paz
 *
 * Swapping two integers value.
 *
 * Input: Two integers.
 * Output: Two integers after swapping their value.
 */

#include <stdio.h>

main() {

	int a, b;

	printf("Please enter two integers.\n");
	printf("a: ");
	scanf("%d", &a);
	printf("b: ");
	scanf("%d", &b);
	a = a + b; 
	b = a - b; // int b gets the value of a.
	a = a - b; // int a gets the value of b.
	printf("Swapping...\n");
	printf("a = %d, b = %d\n", a, b);

	return 0;
}
