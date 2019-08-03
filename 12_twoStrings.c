/**
 * Author: Roy Paz
 *
 * Algorithm that chack if the second string fits to the first string .
 *
 * Input: two string.
 * Output: True if the second string fits.
 */

#include <stdio.h>
#include <string.h>

int main() {

		char str1[50];
		char str2[50];
		int i, j = 0;

		printf("Please enter a sentence: ");
		gets(str1);
		printf("Please enter a new sentence: ");
		gets(str2);
		
		for(i = 0; str1[i] != '\0'; i++){ 

			if (str1[i] == str2[j]) { // First, check for the first letter of str2 in str1, and then move to the next letters.
				j++; // Increase j when found a letter.
			}

			else {
				j = 0; // Reset to 0, When there is no match.
			}

			if (str2[j] == '\0') { // Reached to \0, all letters of str2 fits in str1.
					printf("True\n");
					break;
			}

			if (strlen(str2) > strlen(str1) - i) { // In case that the letter number of str1 is smaller then str2  
				printf("False\n");
				break;
			}
			

		}

		return 0;
}	