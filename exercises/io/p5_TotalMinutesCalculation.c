/*
Write a C program that takes hours and minutes as input, and calculates the total number of minutes.

Expected Output :

Input hours: 5
Input minutes: 37
Total: 337 minutes.
*/

#include <stdio.h>


int main () {

    char line[100];
    int hours, minutes, total;

    printf("Input hours: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &hours);

    printf("Input minutes: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%d", &minutes);

    total = (hours * 60) + minutes;

    printf("Total: %d minutes.\n", total);

    return 0;
}
