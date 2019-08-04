/**
 * Author: Roy Paz
 *
 * Concatenate two strings
 * 
 * Input: Two string.
 * Output: Both strings together from the same array.
 */
#include <stdio.h>
#include <string.h>
#define MAX 100

int main() {

	char str1[MAX], str2[MAX], space[MAX] = {" "};
	int i, word_length = 0;

	printf("Please enter a string: ");
	scanf("%s",&str1);
	printf("Please enter a new string: ");
	scanf("%s",&str2);

	strcat(str1, space); // Space between the strings.
	while (str1[word_length] != '\0'){ // str1 lengt, which helps to add str2 from the point '\0' of str1.
		++word_length;
	}

	for (i = 0; str2[i] != '\0'; i++) {
		str1[word_length + i] = str2[i]; //Adding elements of str2 to str1.
	}

	word_length += i; // str1 after adding str2.
	str1[word_length] = '\0'; // Adding '\0' to the end of str1, because str2 added without '\0'.
	printf("The strings together:\n%s\n",str1);

	return 0;
}	