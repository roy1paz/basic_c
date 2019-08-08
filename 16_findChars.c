/**
 * Author: Roy Paz
 *
 * Print a string with only characters.
 * 
 * Input: String with characters and integers.
 * Output: String with only characters.
 */

 #include <stdio.h>

int main() {
	
	char str[100];
	int i;

	printf("Enter a string that includes letters and numbers: ");
	scanf("%s", &str);
	printf("The string without numbers: \n");
	for (i = 0; str[i] != '\0'; i++) {
		if (str[i] >= 65 && str[i] <=90 || str[i] >=97 && str[i] <= 122) { //Using ASCII table for the ragne of 'a'-'z', upper case and lower case.
			printf("%c", str[i]);
		}

		else { //In case nothing is in the ASCII range, the loop will pass to the next element.
			continue;
		}
	}
	
	printf("\n");

	return 0;
}