/**
 * Author: Roy Paz
 *
 * Algorithm which counts occurrences of each character.
 * 
 * Input: String.
 * Output: Each character from the string and the occurrences number.
 */
#include <stdio.h>
#define CHAR_RANGE 128

int main() {
	
	int i;
	char str[100];
	int counter[CHAR_RANGE] = { };

	printf("Please enter a string: ");
	scanf("%s", str);
	for(i = 0; str[i] != '\0'; i++) {
		counter[str[i]]++; // Each element of str array act as a number of ASCII table in the int counter array, and then adds one.
	}

	printf("Number of occurrence:\n");
	for (i = 0; i < CHAR_RANGE; i++) {
		if(counter[i] > 0) { // If the current number is bigger then 0, print the character and then the numer of appearances.
		printf("%c = %d\n", i, counter[i]); 
		}
	}

	return 0;
}