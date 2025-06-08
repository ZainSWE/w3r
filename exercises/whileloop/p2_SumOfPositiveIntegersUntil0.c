/*
Write a C program that prompts the user to input a series of integers until the user stops entering 0 using a while loop. Calculate and print the sum of all the positive integers entered.
*/

#include <stdio.h>


int main () {

    char line[100];
    int num, sum;

    printf("Input integers (enter 0 to stop):\n");

    while (num != 0) {
	printf("Enter a number: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%d", &num);

	if (num == 0) {
	    break;
	}

	if (num > 0) {
	    sum += num;
	}
    }

    printf("Sum of positive integers: %d\n", sum);

    return 0;
}
