/*
Write a C program to accept two integers and check whether they are equal or not.
Test Data : 15 15

Expected Output :

Number1 and Number2 are equal
*/

#include <stdio.h>


int main () {

    char line[100];
    int num1, num2;

    printf("Enter two integers seperated by a space: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d", &num1, &num2);

    if (num1 == num2) {
	printf("Number 1 and Number2 are equal\n");
    }

    else {
	printf("Number 1 and Number2 are not equal\n");
    }

    return 0;
}
