/*
Write a C program to check whether a triangle can be formed with the given values for the angles.
Test Data :
40 55 65

Expected Output :

The triangle is not valid.
*/

#include <stdio.h>


int main() {

    char line[100];
    int a1, a2, a3, sum;

    printf("Enter three angles: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d %d %d", &a1, &a2, &a3);

    sum = a1 + a2 + a3;

    if (sum == 180) {
	printf("The triangle is valid.\n");
    }

    else {
	printf("The triangle is not valid.\n");
    }

    return 0;
}
