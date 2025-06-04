/*
Write a C program to perform addition, subtraction, multiplication and division of two numbers.

Expected Output:

Input any two numbers separated by comma : 10,5
The sum of the given numbers : 15
The difference of the given numbers : 5
The product of the given numbers : 50
The quotient of the given numbers : 2.000000
*/

#include <stdio.h>


int main () {

    char line[100];
    int num1, num2, sum, difference, product;
    double quotient;

    printf("Input any two numbers seperated by comma: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d,%d", &num1, &num2);

    sum = num1 + num2;
    difference = num1 - num2;
    product = num1 * num2;
    quotient = num1 / num2;

    printf("The sum of the given numbers: %d\n", sum);
    printf("The difference of the given numbers: %d\n", difference);
    printf("The product of the given numbers: %d\n", product);
    printf("The quotient of the given numbers: %.2lf\n", quotient);

    return 0;
}
