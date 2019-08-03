/**
 * Author: Roy Paz
 *
 * Triangle made of asterisks.
 *
 * Input: Integer, number of lines for the triangle.
 * Output: Triangle made of asterisks.
 */

 #include <stdio.h>

main() {
	
	int num, i, j;

	printf("Insert a Number: ");
	scanf("%d", &num);
	for(i=1; i<=num; i++)
	{
	for(j=1; j<=i; j++)
	{		
		printf("*");
	}		
		printf("\n");
	}
	return 0;
}

 	

	
