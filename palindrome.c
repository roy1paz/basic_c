/**
 * Author: Roy Paz
 *
 * Checking if the input number is a palindrome.
 *
 * Input: Integer.
 * Output: 1 for a palindrome number, and 0 if the number isn't.
 */

#include <stdio.h>

int reverse(int num);

int main() {

	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("%d\n", reverse(num));

	return 0;
}

int reverse(int num) {

	int remainder, palindrome = 0, reversedNumber = 0;
	int *ptr = num;

	while (num != 0) {
		
		remainder = num%10;
		reversedNumber = reversedNumber*10 + remainder;
		num/=10;
	}
	
	return reversedNumber == ptr;		
}