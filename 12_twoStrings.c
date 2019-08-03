/**
 * Author: Roy Paz
 *
 * Algorithm that chack if the second string fits to the first string .
 *
 * Input: two string.
 * Output: True if the second string fits.
 */

#include <stdio.h>

int main() {

		char str1[50];
		char str2[50];
		int i, j = 0;

		printf("Please enter a sentence: ");
		gets(str1);
		printf("Please enter a new sentence: ");
		gets(str2);
		
		for(i = 0; str1[i] != '\0'; i++){ 

			if (str1[i] == str2[j]) { 
				j++;
			}

			else {
				j = 0;
			}

			if (str2[j] == '\0') {
					printf("True\n");
				}
		}

		return 0;
}	