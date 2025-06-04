/*
Write a C program to find the largest of three numbers.
Test Data : 12 25 52

Expected Output :

1st Number = 12,        2nd Number = 25,        3rd Number = 52
The 3rd Number is the greatest among three
*/

#include <stdio.h>


int main () {

    char line[100];
    double num1, num2, num3;

    printf("Enter 3 numbers seperated by space: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf %lf %lf", &num1, &num2, &num3);

    if (num1 > num2 && num1 > num3) {
	printf("The 1st number is the greatest among three\n");
    }

    else if (num2 > num1 && num2 > num3) {
	printf("The 2nd number is the greatest among three\n");
    }

    else if (num3 > num1 && num3 > num2) {
	printf("The 3rd number is the greatest among three\n");
    }

    return 0;
}
