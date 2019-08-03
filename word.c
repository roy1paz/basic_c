#include <stdio.h>

int main() {
			
			char word[100];
			int i = 0;
			int word_length = 0;
			printf("Enter a word: ");
			scanf("%s", &word); 
			while (word[i]!= '\0'){
				i++;
				word_length++;
			}

			while (word_length >= 0) {
				printf("%c", word[word_length]);
				word_length--;
			}

			printf("\n");

			return 0;
		}		


