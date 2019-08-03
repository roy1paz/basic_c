/**
 * Author: Roy Paz
 *
 * Upside down pyramid made of asterisks.
 *
 * Input: Integer, number of lines for the pyramid.
 * Output: Upside down pyramid made of asterisks.
 */
#include <stdio.h>

int main() {
	
	int num, i, j, k;

	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 0; i < num; i++)
	{
		for (j = 0; j < i; j++)
		{
			printf(" ");
		}

		for(k = (num*2-1)-(i*2); k > 0; k--)
		{	
			printf("*");
		}
		
		printf("\n");
	}


	return 0;
}