/**
 * Author: Roy Paz
 *
 * Basic input output.
 *
 * Input: String, a name.
 * Output: The string name + "the hacker".
 *
 */

#include <stdio.h>

main() {

	char name[50];
	printf("Enter a name to be a hacker: ");
	scanf("%s", name);
	printf("%s the hacker\n", name);

	return 0;
}


