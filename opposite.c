#include <stdio.h>
int main() {
	
	int num, remainder, opposite;

	printf("Please enter a number: ");
	scanf("%d", &num);
	while (num > 0) {
		remainder = num%10;
		printf("%d", remainder);
		num/=10;

	}
		printf("\n");
	return 0;
}
