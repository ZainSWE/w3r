/*
Write a C program to check whether a given number is positive or negative.
Test Data : 15

Expected Output :

15 is a positive number
*/

#include <stdio.h>


int main () {

    char line[100];
    double num;

    printf("Enter a number: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &num);

    if (num == 0) {
	printf("0 is neither positive or negative\n");
    }

    else if (num > 0) {
	printf("%lf is a positive number\n", num);
    }

    else {
	printf("%lf is a negative number\n", num);
    }

    return 0;
}
