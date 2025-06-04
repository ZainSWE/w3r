/*
Write a C program that converts kilometers per hour to miles per hour.

Expected Output :

Input kilometers per hour: 15
9.320568 miles per hour
*/

#include <stdio.h>


int main () {

    char line[100];
    double kph;
    double mph;

    printf("Input kilometers per hour: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &kph);

    mph = kph * 0.621371;

    printf("%lf miles per hour\n", mph);

    return 0;
}
