/*
Write a program in C that takes minutes as input, and display the total number of hours and minutes.

Expected Output :

Input minutes: 546
9 Hours, 6 Minutes
*/

#include <stdio.h>


int main () {

    int hours, minutes, remainder;

    printf("Input minutes: ");
    scanf("%d", &minutes);

    hours = minutes / 60;

    remainder = minutes % 60;

    printf("%d Hours, %d Minutes\n", hours, remainder);

    return 0;
}
