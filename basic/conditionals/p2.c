/*
Write a C program to check whether a given number is even or odd.
Test Data : 15

Expected Output :

15 is an odd integer
*/

#include <stdio.h>


int main () {

    char line[100];
    int num, remainder;

    printf("Enter number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);

    remainder = num % 2;

    if (num == 0) {
	printf("%d is neither odd or even\n", num);
    }

    else if (remainder == 0) {
	printf("%d is an even integer\n", num);
    }

    else {
	printf("%d is an odd integer\n", num);
    }

    return 0;
}
