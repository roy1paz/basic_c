/**
 * Author: Roy Paz
 *
 * Algorithm which shows the maximum and minimum numbers.
 *
 * Input: Integer array.
 * Output: Maximum and minimum numbers of this array.
 */

#include <stdio.h>

int maxSize(int arr[]);
int minSize(int arr2[]);

int main()
{
	int arr[20] = {0, 1, 42, -12, 33, 74, 11, -3, 9, 4, 18, 5, 21, 19, 23, 31, 14, 10, 2}; 

	printf("The biggest number is: %d\n", maxSize(arr));
	printf("The smallest number is: %d\n", minSize(arr));

	return 0;
}

int maxSize(int arr[]){

	int i;
	int max = arr[0]; //Start checking with the first number

	for(i = 1; arr[i] != '\0'; i++) {
		if (max < arr[i]){ //If the next number is bigger then the "max" number.
			max = arr[i]; //The number will swap with the previous number
		}
	}

	return max;
}

int minSize(int arr2[]) {

	int i;
	int min = arr2[0]; //Start with check of the first number

	for(i = 1; arr2[i] != '\0'; i++) {
		if (min > arr2[i]){ //If the current number is smaller then the "min" number.
			min = arr2[i]; //The number will swap with the previous number.
		}
	}

	return min;
}