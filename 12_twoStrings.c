#include <stdio.h>

int main() {

		char str1[50];
		char str2[50];
		int i, j;


		printf("Please enter a sentence: ");
		scanf("%c", str1);
		printf("Please enter a new sentence: ");
		scanf("%c", str2);

		
		for(i = 0; str1[i] = '\0'; i++){

			do{

				if (str1[i] == str2[0]){ // try to find the first letter of str2 in str1

					for(j = 1; str2[j] = '\0'; j++){ 

						do {							

							if (str2[j] == str1[i + 1]) { // try to find if the other letters fit. 


							}

							printf("True\n");

						}while (str2[j] == str1[i + 1]); // if fail, go out and try to find again the first letter.
					}
				}	
			} while (str1[i] == str2[0]);	// if fail, go out and print false.
		}
			
		printf("False\n");
		

		return 0;
	}	
