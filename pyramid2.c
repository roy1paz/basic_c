/**
 * Author: Roy Paz
 *
 * Pyramid made of asterisks.
 *
 * Input: Integer, number of lines for the pyramid.
 * Output: Pyramid made of asterisks.
 */

#include <stdio.h>

int main() {
	
	int num, i, j, k;

	printf("Please enter a number: ");
	scanf("%d", &num);
	for (i = 0; i < num; ++i)
	{

		for (j = num-i; j > 0; j--)
		{
			printf(" ");
		}

		for(k=0; k<=i*2; k++)
		{	
			printf("*");
		}
		
		printf("\n");
	}


	return 0;
}

/* 
   *
  ***
 *****
*******   */ 