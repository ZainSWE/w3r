/*
Write a program that converts Centigrade to Fahrenheit.

Expected Output :

Input a temperature (in Centigrade): 45
113.000000 degrees Fahrenheit.
*/

#include <stdio.h>

int main () {

    char line[100];
    double centigrade, fahrenheit;

    printf("Input a temperature (in Centigrade): ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &centigrade);

    fahrenheit = centigrade * (9.0 / 5.0) + 32;

    printf("%lf degrees Fahrenheit.\n", fahrenheit);

    return 0;
}
