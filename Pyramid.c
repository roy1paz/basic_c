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

 	

	
