/*
Write a program in C to calculate the sum of three numbers with input on one line separated by a comma.

Expected Output :

Input three numbers separated by comma : 5,10,15
The sum of three numbers : 30
*/

#include <stdio.h>

int main () {

    int num1, num2, num3, sum;

    printf("Input three numbers seperated by comma: ");
    scanf("%d,%d,%d", &num1, &num2, &num3);

    sum = num1 + num2 + num3;

    printf("The sum of three numbers: %d\n", sum);

    return 0;
}
