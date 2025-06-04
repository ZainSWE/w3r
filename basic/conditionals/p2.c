/*
Write a C program to check whether a given number is even or odd.
Test Data : 15

Expected Output :

15 is an odd integer
*/

#include <stdio.h>


int main () {

    char line[100];
    int num;

    printf("Enter number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &num);

    if (num % 2 == 0) {
	printf("%d is an even integer\n", num);
    }

    else {
	printf("%d is an odd integer\n", num);
    }

    return 0;
}
