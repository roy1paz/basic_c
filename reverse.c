#include <stdio.h>

int reverse(int num);

int main() {

	int num;

	printf("Please enter a number: ");
	scanf("%d", &num);
	printf("Reversed number: %d\n", reverse(num));

	return 0;
}

int reverse(int num) {

	int reversedNumber = 0;
	int remainder;

	while (num != 0) {
		
		remainder = num%10;
		reversedNumber = reversedNumber*10 + remainder;
		num/=10;
	}

	return (reversedNumber);		
}
