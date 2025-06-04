/*
Write a C program that prints the perimeter of a rectangle using its height and width as inputs.

Expected Output :

Input the height of the Rectangle : 5
Input the width of the Rectangle : 7
Perimeter of the Rectangle is : 24.000000
*/

#include <stdio.h>


int main () {

    double height, width, perimeter;
    char line[100];

    printf("Input the height of the Rectangle: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &height);

    printf("Input the width of the Rectangle: ");
    fgets(line, sizeof(line), stdin);
    sscanf(line, "%lf", &width);

    perimeter = 2 * (height + width);

    printf("Perimeter of the Rectangle is: %lf\n", perimeter);

    return 0;
}
