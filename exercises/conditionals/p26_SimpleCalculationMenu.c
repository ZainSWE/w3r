/*
Write a program in C which is a Menu-Driven Program to perform a simple calculation.
Test Data :
10
2
3

Expected Output :

The Multiplication of 10 and 2 is: 20
*/

#include <stdio.h>


int main() {

    char line[100];
    int menuOption;
    double num1, num2, sum;


    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Selection an option: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &menuOption);

    switch (menuOption) {
      case 1:
	printf("Enter two numbers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &num1, &num2);

	sum = num1 + num2;

	printf("The addition of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);
	break;

      case 2:
	printf("Enter two numbers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &num1, &num2);

	sum = num1 - num2;

	printf("The subtraction of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);
	break;

      case 3:
	printf("Enter two numbers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &num1, &num2);

	sum = num1 * num2;

	printf("The multiplication of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);
	break;

      case 4:
	printf("Enter two numbers: ");
	fgets(line, sizeof(line), stdin);
	sscanf(line, "%lf %lf", &num1, &num2);

	sum = num1 / num2;

	printf("The division of %.2lf and %.2lf is: %.2lf\n", num1, num2, sum);
	break;

      default:
	printf("That is not a valid option.\n");
    }

    return 0;
}
