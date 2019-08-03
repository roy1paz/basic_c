/**
 * Author: Roy Paz
 *
 * Greedy algorithm basic implementation.
 *
 * Input: Integer, amount of money in NIS (bills and coins allowed), only Shekels without Agorot.
 * Output: Integer, minimum amount of coins required for change.
 *
 */

#include <stdio.h>

int greedy(int bill);

int main() {

	int bill;

	printf("Enter a bill: ");
	scanf("%d", &bill);
	printf("%d\n", greedy(bill));

	return 0;
}
	
int greedy (int bill) {	
	
	int coins[]= {10, 5, 2, 1};
	int total = 0;
	int i, sum = 0;

	for(i = 0; i < sizeof(coins)/sizeof(int); i++) {

		total = bill/coins[i];
		sum += total;
		bill %= coins[i];  /* bill -= (total * coins[i]); */

	}

	return sum;
}	